///////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2017 Edouard Griffiths, F4EXB.                                  //
//                                                                               //
// Swagger server adapter interface                                              //
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

#ifndef SDRBASE_WEBAPI_WEBAPIADAPTERINTERFACE_H_
#define SDRBASE_WEBAPI_WEBAPIADAPTERINTERFACE_H_

#include <QString>
#include <regex>

#include "SWGErrorResponse.h"

#include "export.h"

namespace SWGSDRangel
{
    class SWGInstanceSummaryResponse;
    class SWGInstanceDevicesResponse;
    class SWGInstanceChannelsResponse;
    class SWGLoggingInfo;
    class SWGAudioDevices;
    class SWGAudioInputDevice;
    class SWGAudioOutputDevice;
    class SWGLocationInformation;
    class SWGDVSeralDevices;
    class SWGPresets;
    class SWGPresetTransfer;
    class SWGPresetIdentifier;
    class SWGPresetImport;
    class SWGPresetExport;
    class SWGDeviceSetList;
    class SWGDeviceSet;
    class SWGDeviceListItem;
    class SWGDeviceSettings;
    class SWGDeviceState;
    class SWGDeviceReport;
    class SWGChannelsDetail;
    class SWGChannelSettings;
    class SWGChannelReport;
    class SWGSuccessResponse;
}

class SDRBASE_API WebAPIAdapterInterface
{
public:
    virtual ~WebAPIAdapterInterface() {}

    /**
     * Handler of /sdrangel (GET) swagger/sdrangel/code/html2/index.html#api-Default-instanceSummary
     * returns the Http status code (default 501: not implemented)
     */
    virtual int instanceSummary(
            SWGSDRangel::SWGInstanceSummaryResponse& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) response;
    	error.init();
    	*error.getMessage() = QString("Function not implemented");
    	return 501;
    }

    /**
     * Handler of /sdrangel (DELETE) swagger/sdrangel/code/html2/index.html#api-Default-instanceSummary
     * returns the Http status code (default 501: not implemented)
     */
    virtual int instanceDelete(
            SWGSDRangel::SWGSuccessResponse& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) response;
    	error.init();
    	*error.getMessage() = QString("Function not implemented");
    	return 501;
    }

    /**
     * Handler of /sdrangel/devices (GET) swagger/sdrangel/code/html2/index.html#api-Default-instanceDevices
     * returns the Http status code (default 501: not implemented)
     */
    virtual int instanceDevices(
            int direction,
            SWGSDRangel::SWGInstanceDevicesResponse& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) direction;
        (void) response;
    	error.init();
    	*error.getMessage() = QString("Function not implemented");
    	return 501;
    }

    /**
     * Handler of /sdrangel/channels (GET) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int instanceChannels(
            int direction,
            SWGSDRangel::SWGInstanceChannelsResponse& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) direction;
        (void) response;
    	error.init();
    	*error.getMessage() = QString("Function not implemented");
    	return 501;
    }

    /**
     * Handler of /sdrangel/logging (GET) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int instanceLoggingGet(
            SWGSDRangel::SWGLoggingInfo& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) response;
    	error.init();
    	*error.getMessage() = QString("Function not implemented");
    	return 501;
    }

    /**
     * Handler of /sdrangel/logging (PUT) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int instanceLoggingPut(
            SWGSDRangel::SWGLoggingInfo& query,
            SWGSDRangel::SWGLoggingInfo& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) query;
        (void) response;
    	error.init();
    	*error.getMessage() = QString("Function not implemented");
    	return 501;
    }

    /**
     * Handler of /sdrangel/audio (GET) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int instanceAudioGet(
            SWGSDRangel::SWGAudioDevices& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) response;
    	error.init();
    	*error.getMessage() = QString("Function not implemented");
    	return 501;
    }

    /**
     * Handler of /sdrangel/audio/input/parameters (PATCH) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int instanceAudioInputPatch(
            SWGSDRangel::SWGAudioInputDevice& response,
            const QStringList& audioInputKeys,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) response;
        (void) audioInputKeys;
    	error.init();
    	*error.getMessage() = QString("Function not implemented");
    	return 501;
    }

    /**
     * Handler of /sdrangel/audio/output/parameters (PATCH) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int instanceAudioOutputPatch(
            SWGSDRangel::SWGAudioOutputDevice& response,
            const QStringList& audioOutputKeys,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) response;
        (void) audioOutputKeys;
        error.init();
        *error.getMessage() = QString("Function not implemented");
        return 501;
    }

    /**
     * Handler of /sdrangel/audio/input/parameters (DELETE) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int instanceAudioInputDelete(
            SWGSDRangel::SWGAudioInputDevice& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) response;
        error.init();
        *error.getMessage() = QString("Function not implemented");
        return 501;
    }

    /**
     * Handler of /sdrangel/audio/output/paramaters (DELETE) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int instanceAudioOutputDelete(
            SWGSDRangel::SWGAudioOutputDevice& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) response;
        error.init();
        *error.getMessage() = QString("Function not implemented");
        return 501;
    }

    /**
     * Handler of /sdrangel/audio/input/cleanup (PATCH) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int instanceAudioInputCleanupPatch(
            SWGSDRangel::SWGSuccessResponse& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) response;
        error.init();
        *error.getMessage() = QString("Function not implemented");
        return 501;
    }

    /**
     * Handler of /sdrangel/audio/output/cleanup (PATCH) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int instanceAudioOutputCleanupPatch(
            SWGSDRangel::SWGSuccessResponse& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) response;
        error.init();
        *error.getMessage() = QString("Function not implemented");
        return 501;
    }

    /**
     * Handler of /sdrangel/location (GET) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int instanceLocationGet(
            SWGSDRangel::SWGLocationInformation& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) response;
    	error.init();
    	*error.getMessage() = QString("Function not implemented");
    	return 501;
    }

    /**
     * Handler of /sdrangel/location (PUT) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int instanceLocationPut(
            SWGSDRangel::SWGLocationInformation& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) response;
    	error.init();
    	*error.getMessage() = QString("Function not implemented");
    	return 501;
    }

    /**
     * Handler of /sdrangel/dvserial (GET) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int instanceDVSerialGet(
            SWGSDRangel::SWGDVSeralDevices& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) response;
    	error.init();
    	*error.getMessage() = QString("Function not implemented");
    	return 501;
    }

    /**
     * Handler of /sdrangel/dvserial (PUT) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int instanceDVSerialPatch(
            bool dvserial,
            SWGSDRangel::SWGDVSeralDevices& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) dvserial;
        (void) response;
        error.init();
        *error.getMessage() = QString("Function not implemented");
        return 501;
    }

    /**
     * Handler of /sdrangel/presets (GET) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int instancePresetsGet(
            SWGSDRangel::SWGPresets& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) response;
    	error.init();
    	*error.getMessage() = QString("Function not implemented");
    	return 501;
    }

    /**
     * Handler of /sdrangel/preset (PATCH) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int instancePresetPatch(
            SWGSDRangel::SWGPresetTransfer& query,
            SWGSDRangel::SWGPresetIdentifier& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) query;
        (void) response;
    	error.init();
    	*error.getMessage() = QString("Function not implemented");
    	return 501;
    }

    /**
     * Handler of /sdrangel/preset (PUT) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int instancePresetPut(
            SWGSDRangel::SWGPresetTransfer& query,
            SWGSDRangel::SWGPresetIdentifier& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) query;
        (void) response;
    	error.init();
    	*error.getMessage() = QString("Function not implemented");
    	return 501;
    }

    /**
     * Handler of /sdrangel/preset (POST) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int instancePresetPost(
            SWGSDRangel::SWGPresetTransfer& query,
            SWGSDRangel::SWGPresetIdentifier& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) query;
        (void) response;
    	error.init();
    	*error.getMessage() = QString("Function not implemented");
    	return 501;
    }

    /**
     * Handler of /sdrangel/preset (DELETE) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int instancePresetDelete(
            SWGSDRangel::SWGPresetIdentifier& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) response;
    	error.init();
    	*error.getMessage() = QString("Function not implemented");
    	return 501;
    }

    /**
     * Handler of /sdrangel/preset/file (PUT) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int instancePresetFilePut(
            SWGSDRangel::SWGPresetImport& query,
            SWGSDRangel::SWGPresetIdentifier& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) query;
        (void) response;
    	error.init();
    	*error.getMessage() = QString("Function not implemented");
    	return 501;
    }

    /**
     * Handler of /sdrangel/preset/file (PUT) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int instancePresetFilePost(
            SWGSDRangel::SWGPresetExport& query,
            SWGSDRangel::SWGPresetIdentifier& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) query;
        (void) response;
    	error.init();
    	*error.getMessage() = QString("Function not implemented");
    	return 501;
    }

    /**
     * Handler of /sdrangel/devicesets (GET) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int instanceDeviceSetsGet(
            SWGSDRangel::SWGDeviceSetList& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) response;
    	error.init();
    	*error.getMessage() = QString("Function not implemented");
    	return 501;
    }

    /**
     * Handler of /sdrangel/deviceset (POST) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int instanceDeviceSetPost(
            int direction,
            SWGSDRangel::SWGSuccessResponse& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) direction;
        (void) response;
    	error.init();
    	*error.getMessage() = QString("Function not implemented");
    	return 501;
    }

    /**
     * Handler of /sdrangel/deviceset (DELETE) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int instanceDeviceSetDelete(
            SWGSDRangel::SWGSuccessResponse& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) response;
    	error.init();
    	*error.getMessage() = QString("Function not implemented");
    	return 501;
    }

    /**
     * Handler of /sdrangel/deviceset/{devicesetIndex} (GET) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int devicesetGet(
            int deviceSetIndex,
            SWGSDRangel::SWGDeviceSet& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) deviceSetIndex;
        (void) response;
    	error.init();
    	*error.getMessage() = QString("Function not implemented");
    	return 501;
    }

    /**
     * Handler of /sdrangel/deviceset/{devicesetIndex}/focus (PATCH) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int devicesetFocusPatch(
            int deviceSetIndex,
            SWGSDRangel::SWGSuccessResponse& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) deviceSetIndex;
        (void) response;
        error.init();
        *error.getMessage() = QString("Function not implemented");
        return 501;
    }

    /**
     * Handler of /sdrangel/deviceset/{devicesetIndex}/device (PUT) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int devicesetDevicePut(
            int deviceSetIndex,
            SWGSDRangel::SWGDeviceListItem& query,
            SWGSDRangel::SWGDeviceListItem& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) deviceSetIndex;
        (void) query;
        (void) response;
    	error.init();
    	*error.getMessage() = QString("Function not implemented");
    	return 501;
    }

    /**
     * Handler of /sdrangel/deviceset/{devicesetIndex}/device/settings (GET) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int devicesetDeviceSettingsGet(
            int deviceSetIndex,
            SWGSDRangel::SWGDeviceSettings& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) deviceSetIndex;
        (void) response;
    	error.init();
    	*error.getMessage() = QString("Function not implemented");
    	return 501;
    }

    /**
     * Handler of /sdrangel/deviceset/{devicesetIndex}/device/settings (PUT, PATCH) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int devicesetDeviceSettingsPutPatch(
            int deviceSetIndex,
            bool force, //!< true to force settings = put else patch
            const QStringList& channelSettingsKeys,
            SWGSDRangel::SWGDeviceSettings& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) deviceSetIndex;
        (void) force;
        (void) channelSettingsKeys;
        (void) response;
    	error.init();
    	*error.getMessage() = QString("Function not implemented");
    	return 501;
    }

    /**
     * Handler of /sdrangel/deviceset/{devicesetIndex}/device/run (GET) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int devicesetDeviceRunGet(
            int deviceSetIndex,
            SWGSDRangel::SWGDeviceState& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) deviceSetIndex;
        (void) response;
    	error.init();
    	*error.getMessage() = QString("Function not implemented");
    	return 501;
    }

    /**
     * Handler of /sdrangel/deviceset/{devicesetIndex}/device/run (POST) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int devicesetDeviceRunPost(
            int deviceSetIndex,
            SWGSDRangel::SWGDeviceState& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) deviceSetIndex;
        (void) response;
    	error.init();
    	*error.getMessage() = QString("Function not implemented");
    	return 501;
    }

    /**
     * Handler of /sdrangel/deviceset/{devicesetIndex}/device/run (DELETE) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int devicesetDeviceRunDelete(
            int deviceSetIndex,
            SWGSDRangel::SWGDeviceState& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) deviceSetIndex;
        (void) response;
        error.init();
    	*error.getMessage() = QString("Function not implemented");
    	return 501;
    }

    /**
     * Handler of /sdrangel/deviceset/{devicesetIndex}/device/report (GET) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int devicesetDeviceReportGet(
            int deviceSetIndex,
            SWGSDRangel::SWGDeviceReport& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) deviceSetIndex;
        (void) response;
        error.init();
        *error.getMessage() = QString("Function not implemented");
        return 501;
    }

    /**
     * Handler of /sdrangel/deviceset/{devicesetIndex}/channels/report (GET) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int devicesetChannelsReportGet(
            int deviceSetIndex,
            SWGSDRangel::SWGChannelsDetail& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) deviceSetIndex;
        (void) response;
        error.init();
        *error.getMessage() = QString("Function not implemented");
        return 501;
    }

    /**
     * Handler of /sdrangel/deviceset/{deviceSetIndex}/channel (POST) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int devicesetChannelPost(
            int deviceSetIndex,
            SWGSDRangel::SWGChannelSettings& query,
            SWGSDRangel::SWGSuccessResponse& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) deviceSetIndex;
        (void) query;
        (void) response;
        error.init();
    	*error.getMessage() = QString("Function not implemented");
    	return 501;
    }

    /**
     * Handler of /sdrangel/deviceset/{deviceSetIndex}/channel/{channelIndex} (DELETE) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int devicesetChannelDelete(
            int deviceSetIndex,
            int channelIndex,
            SWGSDRangel::SWGSuccessResponse& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) deviceSetIndex;
        (void) channelIndex;
        (void) response;
        (void) error;
        error.init();
        *error.getMessage() = QString("Function not implemented");
        return 501;
    }

    /**
     * Handler of /sdrangel/deviceset/{deviceSetIndex}/channel/{channelIndex}/settings (GET) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int devicesetChannelSettingsGet(
            int deviceSetIndex,
            int channelIndex,
            SWGSDRangel::SWGChannelSettings& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) deviceSetIndex;
        (void) channelIndex;
        (void) response;
        error.init();
    	*error.getMessage() = QString("Function not implemented");
    	return 501;
    }

    /**
     * Handler of /sdrangel/deviceset/{deviceSetIndex}/channel/{channelIndex}/settings (PUT, PATCH) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int devicesetChannelSettingsPutPatch(
            int deviceSetIndex,
            int channelIndex,
            bool force,
            const QStringList& channelSettingsKeys,
            SWGSDRangel::SWGChannelSettings& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) deviceSetIndex;
        (void) channelIndex;
        (void) force;
        (void) channelSettingsKeys;
        (void) response;
        error.init();
    	*error.getMessage() = QString("Function not implemented");
    	return 501;
    }


    /**
     * Handler of /sdrangel/deviceset/{deviceSetIndex}/channel/{channelIndex}/settings (GET) swagger/sdrangel/code/html2/index.html#api-Default-instanceChannels
     * returns the Http status code (default 501: not implemented)
     */
    virtual int devicesetChannelReportGet(
            int deviceSetIndex,
            int channelIndex,
            SWGSDRangel::SWGChannelReport& response,
            SWGSDRangel::SWGErrorResponse& error)
    {
        (void) deviceSetIndex;
        (void) channelIndex;
        (void) response;
        error.init();
        *error.getMessage() = QString("Function not implemented");
        return 501;
    }

    static QString instanceSummaryURL;
    static QString instanceDevicesURL;
    static QString instanceChannelsURL;
    static QString instanceLoggingURL;
    static QString instanceAudioURL;
    static QString instanceAudioInputParametersURL;
    static QString instanceAudioOutputParametersURL;
    static QString instanceAudioInputCleanupURL;
    static QString instanceAudioOutputCleanupURL;
    static QString instanceLocationURL;
    static QString instanceDVSerialURL;
    static QString instancePresetsURL;
    static QString instancePresetURL;
    static QString instancePresetFileURL;
    static QString instanceDeviceSetsURL;
    static QString instanceDeviceSetURL;
    static std::regex devicesetURLRe;
    static std::regex devicesetFocusURLRe;
    static std::regex devicesetDeviceURLRe;
    static std::regex devicesetDeviceSettingsURLRe;
    static std::regex devicesetDeviceRunURLRe;
    static std::regex devicesetDeviceReportURLRe;
    static std::regex devicesetChannelURLRe;
    static std::regex devicesetChannelIndexURLRe;
    static std::regex devicesetChannelSettingsURLRe;
    static std::regex devicesetChannelReportURLRe;
    static std::regex devicesetChannelsReportURLRe;
};



#endif /* SDRBASE_WEBAPI_WEBAPIADAPTERINTERFACE_H_ */
