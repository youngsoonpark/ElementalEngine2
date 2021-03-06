//Autogenerated Static Lib File:
//Generated on: 03/23/09 14:27:15

#ifndef INCLUDE_SYMBOLS_TIMEOFDAY
#define INCLUDE_SYMBOLS_TIMEOFDAY
#endif	//#ifndef INCLUDE_SYMBOLS_TIMEOFDAY
#ifdef _LIB

namespace ElementalEngine {
struct INITDLLINFO;
class CRegisterComponent;
class CRegisterMessage;
}

using namespace ElementalEngine;


extern void *TIMEOFDAY_LIBEXTERNS[];
//Singleton externs
//Component externs
extern "C" CRegisterComponent CTimeOfDayObjectRO;
//Message externs
extern "C" CRegisterMessage GetTimeOfDayDesc_CTimeOfDayObjectRM;
extern "C" CRegisterMessage GetTimeOfDayStart_CTimeOfDayObjectRM;
extern "C" CRegisterMessage SetTimeOfDayStart_CTimeOfDayObjectRM;
extern "C" CRegisterMessage GetTimeOfDay_CTimeOfDayObjectRM;
extern "C" CRegisterMessage SetTimeOfDay_CTimeOfDayObjectRM;
extern "C" CRegisterMessage GetTimeOfDayRate_CTimeOfDayObjectRM;
extern "C" CRegisterMessage SetTimeOfDayRate_CTimeOfDayObjectRM;
extern "C" CRegisterMessage SetTimeOfDayMotion_CTimeOfDayObjectRM;
extern "C" CRegisterMessage SetTimeOfDayDoFog_CTimeOfDayObjectRM;
extern "C" CRegisterMessage SetTimeOfDayDoLighting_CTimeOfDayObjectRM;

#endif	//#ifdef _LIB
