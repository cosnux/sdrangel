///////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2012 maintech GmbH, Otto-Hahn-Str. 15, 97204 Hoechberg, Germany //
// (C) 2015 John Greb                                                            //
//                                                                               //
// This program is free software; you can redistribute it and/or modify          //
// it under the terms of the GNU General Public License as published by          //
// the Free Software Foundation as version 3 of the License, or                  //
// (at your option) any later version.                                           //
//                                                                               //
// This program is distributed in the hope that it will be useful,               //
// but WITHOUT ANY WARRANTY; without even the implied warranty of                //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                  //
// GNU General Public License V3 for more details.                               //
//                                                                               //
// You should have received a copy of the GNU General Public License             //
// along with this program. If not, see <http://www.gnu.org/licenses/>.          //
///////////////////////////////////////////////////////////////////////////////////

#ifndef INCLUDE_LoRaDEMOD_H
#define INCLUDE_LoRaDEMOD_H

#include <QMutex>
#include <vector>

#include "dsp/basebandsamplesink.h"
#include "channel/channelapi.h"
#include "dsp/nco.h"
#include "dsp/interpolator.h"
#include "util/message.h"
#include "dsp/fftfilt.h"

#include "lorademodsettings.h"

#define DATA_BITS (6)
#define SAMPLEBITS (DATA_BITS + 2)
#define SPREADFACTOR (1 << SAMPLEBITS)
#define LORA_SFFT_LEN (SPREADFACTOR / 2)
#define LORA_SQUELCH (3)

class DeviceAPI;
class ThreadedBasebandSampleSink;
class DownChannelizer;

class LoRaDemod : public BasebandSampleSink, public ChannelAPI {
public:
    class MsgConfigureLoRaDemod : public Message {
        MESSAGE_CLASS_DECLARATION

    public:
        const LoRaDemodSettings& getSettings() const { return m_settings; }
        bool getForce() const { return m_force; }

        static MsgConfigureLoRaDemod* create(const LoRaDemodSettings& settings, bool force)
        {
            return new MsgConfigureLoRaDemod(settings, force);
        }

    private:
        LoRaDemodSettings m_settings;
        bool m_force;

        MsgConfigureLoRaDemod(const LoRaDemodSettings& settings, bool force) :
            Message(),
            m_settings(settings),
            m_force(force)
        { }
    };

    class MsgConfigureChannelizer : public Message {
        MESSAGE_CLASS_DECLARATION

    public:
        int getSampleRate() const { return m_sampleRate; }
        int getCenterFrequency() const { return m_centerFrequency; }

        static MsgConfigureChannelizer* create(int sampleRate, int centerFrequency)
        {
            return new MsgConfigureChannelizer(sampleRate, centerFrequency);
        }

    private:
        int m_sampleRate;
        int  m_centerFrequency;

        MsgConfigureChannelizer(int sampleRate, int centerFrequency) :
            Message(),
            m_sampleRate(sampleRate),
            m_centerFrequency(centerFrequency)
        { }
    };

	LoRaDemod(DeviceAPI* deviceAPI);
	virtual ~LoRaDemod();
	virtual void destroy() { delete this; }
	void setSpectrumSink(BasebandSampleSink* sampleSink) { m_sampleSink = sampleSink; }

	virtual void feed(const SampleVector::const_iterator& begin, const SampleVector::const_iterator& end, bool pO);
	virtual void start();
	virtual void stop();
	virtual bool handleMessage(const Message& cmd);

    virtual void getIdentifier(QString& id) { id = objectName(); }
    virtual void getTitle(QString& title) { title = m_settings.m_title; }
    virtual qint64 getCenterFrequency() const { return 0; }

    virtual QByteArray serialize() const;
    virtual bool deserialize(const QByteArray& data);

    virtual int getNbSinkStreams() const { return 1; }
    virtual int getNbSourceStreams() const { return 0; }

    virtual qint64 getStreamCenterFrequency(int streamIndex, bool sinkElseSource) const
    {
        (void) streamIndex;
        (void) sinkElseSource;
        return 0;
    }

    static const QString m_channelIdURI;
    static const QString m_channelId;

private:
	int  detect(Complex sample, Complex angle);
	void dumpRaw(void);
	short synch (short bin);
	short toGray(short bin);
	void interleave6(char* inout, int size);
	void hamming6(char* inout, int size);
	void prng6(char* inout, int size);

	DeviceAPI *m_deviceAPI;
    ThreadedBasebandSampleSink* m_threadedChannelizer;
    DownChannelizer* m_channelizer;
    LoRaDemodSettings m_settings;

	Real m_Bandwidth;
	int m_sampleRate;
	int m_frequency;
	int m_chirp;
	int m_angle;
	int m_bin;
	int m_result;
	int m_count;
	int m_header;
	int m_time;
	short m_tune;

	sfft* loraFilter;
	sfft* negaFilter;
	float* mov;
	short* history;
	short* finetune;

	NCO m_nco;
	Interpolator m_interpolator;
	Real m_sampleDistanceRemain;

	BasebandSampleSink* m_sampleSink;
	SampleVector m_sampleBuffer;
	QMutex m_settingsMutex;
};

#endif // INCLUDE_LoRaDEMOD_H
