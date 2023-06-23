#include <stdio.h>
#include <windows.h>

//extern "C" {
    BOOL APIENTRY DllMain( HANDLE hModule,
                           DWORD ul_reason_for_call,
                           LPVOID lpReserved );
//}

BOOL APIENTRY DllMain( HANDLE hModule,
                       DWORD ul_reason_for_call,
                       LPVOID lpReserved ) {

    switch ( ul_reason_for_call ) {
        case DLL_PROCESS_ATTACH:
        	printf("DLL_PROCESS_ATTACH\n");
            break;

        case DLL_THREAD_ATTACH:
        	printf("DLL_THREAD_ATTACH\n");
            break;

        case DLL_THREAD_DETACH:
        	printf("DLL_THREAD_DETACH\n");
            break;

        case DLL_PROCESS_DETACH:
        	printf("DLL_PROCESS_DETACH\n");
            break;
    }
    return TRUE;
}

