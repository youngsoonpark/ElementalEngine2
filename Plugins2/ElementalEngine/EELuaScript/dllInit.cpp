///============================================================================
/// \note   Elemental Engine
///         Copyright (c)  2005-2008 Signature Devices, Inc.
///
///         This code is redistributable under the terms of the EE License.
///
///         This code is distributed without warranty or implied warranty of
///			merchantability or fitness for a particular purpose. See the 
///			EE License for more details.
///
///         You should have received a copy of the EE License along with this
///			code; If not, write to Signature Devices, Inc.,
///			3200 Bridge Parkway Suite 102, Redwood City, CA 94086 USA.
///============================================================================

#include "StdAfx.h"
#include <string>
using namespace std;

//This section defining INTERFACEDLLVERSION is a PURE HACK until Ken checks-in his IDLL interface changes.
#ifdef _DEBUG
// major version in upper 16 bits
// low word =  minor version, low bit debug =0, release=1
#define INTERFACEDLLVERSION 0x00006100
#else
#define INTERFACEDLLVERSION 0x00006101
#endif

#define EELUASCRIPT_PRIORITY 2000

#ifdef _LIB
#define DLL_API static
#else
#define DLL_API extern "C" __declspec(dllexport)

BOOL APIENTRY DllMain( HANDLE hModule, 
                       DWORD  ul_reason_for_call, 
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
		case DLL_PROCESS_ATTACH:
			break;
		case DLL_PROCESS_DETACH:
			break;
	}

    return TRUE;
}
#endif

DLL_API void InitDLL()
{
	CLuaMath::InitImplementation();
	CLuaVec3::InitImplementation();
	CLuaVec4::InitImplementation();
	CLuaMatrix3x3::InitImplementation();
	CLuaMatrix4x4::InitImplementation();
	CLuaQuaternion::InitImplementation();
	CLuaEulerAngle::InitImplementation();
}

/// GDS specific: run-time version testing of DLLs.  AFX_EXT_API declared elsewhere, before this definition.
/// \return Contains debug or non-debug version info. 
DLL_API DWORD GetDLLVersion()
{
	return INTERFACEDLLVERSION;
}

DLL_API DWORD GetPriority()
{
	return EELUASCRIPT_PRIORITY;
}

DLL_API void DeInitDLL()
{
	IToolBox *toolBox;
	toolBox = EngineGetToolBox();

	SINGLETONINSTANCE(CLuaManager)->DeInit();
}

#ifdef _LIB
#include ".\StaticLibSymbols.h"
INITDLLINFO EELUASCRIPT_INITDLLINFO = {
	InitDLL, 
	GetDLLVersion, 
	GetPriority, 
	DeInitDLL,
	EELUASCRIPT_LIBEXTERNS
};
#endif