/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Audiokinetic Wwise generated include file. Do not edit.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __WWISE_IDS_H__
#define __WWISE_IDS_H__

#include <AK/SoundEngine/Common/AkTypes.h>

namespace AK
{
    namespace EVENTS
    {
        static const AkUniqueID FREESPIN_END = 4289952909U;
        static const AkUniqueID FREESPIN_INTRO_START = 303060881U;
        static const AkUniqueID FREESPIN_MUSIC_START = 1472464510U;
        static const AkUniqueID FREESPIN_RINGUP_START = 2703870418U;
        static const AkUniqueID FREESPIN_RINGUP_STOP = 4211426698U;
    } // namespace EVENTS

    namespace STATES
    {
        namespace FREESPINMUSICSTATES
        {
            static const AkUniqueID GROUP = 1205912814U;

            namespace STATE
            {
                static const AkUniqueID FREESPINEND = 4013253266U;
                static const AkUniqueID FREESPININTRO = 1741593071U;
                static const AkUniqueID FREESPINSTART = 2712224113U;
                static const AkUniqueID NONE = 748895195U;
            } // namespace STATE
        } // namespace FREESPINMUSICSTATES

    } // namespace STATES

    namespace GAME_PARAMETERS
    {
        static const AkUniqueID FSRINGUPVOLUME = 2840406835U;
    } // namespace GAME_PARAMETERS

    namespace TRIGGERS
    {
        static const AkUniqueID FS_OUTRO_TRIGGER = 4154858369U;
    } // namespace TRIGGERS

    namespace BANKS
    {
        static const AkUniqueID INIT = 1355168291U;
        static const AkUniqueID MUSIC = 3991942870U;
    } // namespace BANKS

    namespace BUSSES
    {
        static const AkUniqueID MASTER_AUDIO_BUS = 3803692087U;
    } // namespace BUSSES

    namespace AUDIO_DEVICES
    {
        static const AkUniqueID NO_OUTPUT = 2317455096U;
        static const AkUniqueID SYSTEM = 3859886410U;
    } // namespace AUDIO_DEVICES

}// namespace AK

#endif // __WWISE_IDS_H__
