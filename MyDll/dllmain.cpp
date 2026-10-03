#include "pch.h"
#include <windows.h>



BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
) 

{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		MessageBox(NULL, "Geometry DLL is loaded", "DLL Status", MB_OK);
		break;
	case DLL_THREAD_ATTACH:
		break;
	case DLL_THREAD_DETACH:
		break;
	case DLL_PROCESS_DETACH:
		MessageBox(NULL, "Geometry DLL is unloaded", "DLL Status", MB_OK);
		break;
	}
	return TRUE;
}


