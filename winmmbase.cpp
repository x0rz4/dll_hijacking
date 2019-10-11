//Generate by DLLHijacker.py

#include <Windows.h>

#pragma comment(linker, "/EXPORT:CloseDriver=_DLLHijacker_CloseDriver,@1")
#pragma comment(linker, "/EXPORT:DefDriverProc=_DLLHijacker_DefDriverProc,@2")
#pragma comment(linker, "/EXPORT:DriverCallback=_DLLHijacker_DriverCallback,@3")
#pragma comment(linker, "/EXPORT:DrvGetModuleHandle=_DLLHijacker_DrvGetModuleHandle,@4")
#pragma comment(linker, "/EXPORT:GetDriverModuleHandle=_DLLHijacker_GetDriverModuleHandle,@5")
#pragma comment(linker, "/EXPORT:OpenDriver=_DLLHijacker_OpenDriver,@6")
#pragma comment(linker, "/EXPORT:SendDriverMessage=_DLLHijacker_SendDriverMessage,@7")
#pragma comment(linker, "/EXPORT:auxGetDevCapsA=_DLLHijacker_auxGetDevCapsA,@8")
#pragma comment(linker, "/EXPORT:auxGetDevCapsW=_DLLHijacker_auxGetDevCapsW,@9")
#pragma comment(linker, "/EXPORT:auxGetNumDevs=_DLLHijacker_auxGetNumDevs,@10")
#pragma comment(linker, "/EXPORT:auxGetVolume=_DLLHijacker_auxGetVolume,@11")
#pragma comment(linker, "/EXPORT:auxOutMessage=_DLLHijacker_auxOutMessage,@12")
#pragma comment(linker, "/EXPORT:auxSetVolume=_DLLHijacker_auxSetVolume,@13")
#pragma comment(linker, "/EXPORT:joyConfigChanged=_DLLHijacker_joyConfigChanged,@14")
#pragma comment(linker, "/EXPORT:joyGetDevCapsA=_DLLHijacker_joyGetDevCapsA,@15")
#pragma comment(linker, "/EXPORT:joyGetDevCapsW=_DLLHijacker_joyGetDevCapsW,@16")
#pragma comment(linker, "/EXPORT:joyGetNumDevs=_DLLHijacker_joyGetNumDevs,@17")
#pragma comment(linker, "/EXPORT:joyGetPos=_DLLHijacker_joyGetPos,@18")
#pragma comment(linker, "/EXPORT:joyGetPosEx=_DLLHijacker_joyGetPosEx,@19")
#pragma comment(linker, "/EXPORT:joyGetThreshold=_DLLHijacker_joyGetThreshold,@20")
#pragma comment(linker, "/EXPORT:joyReleaseCapture=_DLLHijacker_joyReleaseCapture,@21")
#pragma comment(linker, "/EXPORT:joySetCapture=_DLLHijacker_joySetCapture,@22")
#pragma comment(linker, "/EXPORT:joySetThreshold=_DLLHijacker_joySetThreshold,@23")
#pragma comment(linker, "/EXPORT:midiConnect=_DLLHijacker_midiConnect,@24")
#pragma comment(linker, "/EXPORT:midiDisconnect=_DLLHijacker_midiDisconnect,@25")
#pragma comment(linker, "/EXPORT:midiInAddBuffer=_DLLHijacker_midiInAddBuffer,@26")
#pragma comment(linker, "/EXPORT:midiInClose=_DLLHijacker_midiInClose,@27")
#pragma comment(linker, "/EXPORT:midiInGetDevCapsA=_DLLHijacker_midiInGetDevCapsA,@28")
#pragma comment(linker, "/EXPORT:midiInGetDevCapsW=_DLLHijacker_midiInGetDevCapsW,@29")
#pragma comment(linker, "/EXPORT:midiInGetErrorTextA=_DLLHijacker_midiInGetErrorTextA,@30")
#pragma comment(linker, "/EXPORT:midiInGetErrorTextW=_DLLHijacker_midiInGetErrorTextW,@31")
#pragma comment(linker, "/EXPORT:midiInGetID=_DLLHijacker_midiInGetID,@32")
#pragma comment(linker, "/EXPORT:midiInGetNumDevs=_DLLHijacker_midiInGetNumDevs,@33")
#pragma comment(linker, "/EXPORT:midiInMessage=_DLLHijacker_midiInMessage,@34")
#pragma comment(linker, "/EXPORT:midiInOpen=_DLLHijacker_midiInOpen,@35")
#pragma comment(linker, "/EXPORT:midiInPrepareHeader=_DLLHijacker_midiInPrepareHeader,@36")
#pragma comment(linker, "/EXPORT:midiInReset=_DLLHijacker_midiInReset,@37")
#pragma comment(linker, "/EXPORT:midiInStart=_DLLHijacker_midiInStart,@38")
#pragma comment(linker, "/EXPORT:midiInStop=_DLLHijacker_midiInStop,@39")
#pragma comment(linker, "/EXPORT:midiInUnprepareHeader=_DLLHijacker_midiInUnprepareHeader,@40")
#pragma comment(linker, "/EXPORT:midiOutCacheDrumPatches=_DLLHijacker_midiOutCacheDrumPatches,@41")
#pragma comment(linker, "/EXPORT:midiOutCachePatches=_DLLHijacker_midiOutCachePatches,@42")
#pragma comment(linker, "/EXPORT:midiOutClose=_DLLHijacker_midiOutClose,@43")
#pragma comment(linker, "/EXPORT:midiOutGetDevCapsA=_DLLHijacker_midiOutGetDevCapsA,@44")
#pragma comment(linker, "/EXPORT:midiOutGetDevCapsW=_DLLHijacker_midiOutGetDevCapsW,@45")
#pragma comment(linker, "/EXPORT:midiOutGetErrorTextA=_DLLHijacker_midiOutGetErrorTextA,@46")
#pragma comment(linker, "/EXPORT:midiOutGetErrorTextW=_DLLHijacker_midiOutGetErrorTextW,@47")
#pragma comment(linker, "/EXPORT:midiOutGetID=_DLLHijacker_midiOutGetID,@48")
#pragma comment(linker, "/EXPORT:midiOutGetNumDevs=_DLLHijacker_midiOutGetNumDevs,@49")
#pragma comment(linker, "/EXPORT:midiOutGetVolume=_DLLHijacker_midiOutGetVolume,@50")
#pragma comment(linker, "/EXPORT:midiOutLongMsg=_DLLHijacker_midiOutLongMsg,@51")
#pragma comment(linker, "/EXPORT:midiOutMessage=_DLLHijacker_midiOutMessage,@52")
#pragma comment(linker, "/EXPORT:midiOutOpen=_DLLHijacker_midiOutOpen,@53")
#pragma comment(linker, "/EXPORT:midiOutPrepareHeader=_DLLHijacker_midiOutPrepareHeader,@54")
#pragma comment(linker, "/EXPORT:midiOutReset=_DLLHijacker_midiOutReset,@55")
#pragma comment(linker, "/EXPORT:midiOutSetVolume=_DLLHijacker_midiOutSetVolume,@56")
#pragma comment(linker, "/EXPORT:midiOutShortMsg=_DLLHijacker_midiOutShortMsg,@57")
#pragma comment(linker, "/EXPORT:midiOutUnprepareHeader=_DLLHijacker_midiOutUnprepareHeader,@58")
#pragma comment(linker, "/EXPORT:midiStreamClose=_DLLHijacker_midiStreamClose,@59")
#pragma comment(linker, "/EXPORT:midiStreamOpen=_DLLHijacker_midiStreamOpen,@60")
#pragma comment(linker, "/EXPORT:midiStreamOut=_DLLHijacker_midiStreamOut,@61")
#pragma comment(linker, "/EXPORT:midiStreamPause=_DLLHijacker_midiStreamPause,@62")
#pragma comment(linker, "/EXPORT:midiStreamPosition=_DLLHijacker_midiStreamPosition,@63")
#pragma comment(linker, "/EXPORT:midiStreamProperty=_DLLHijacker_midiStreamProperty,@64")
#pragma comment(linker, "/EXPORT:midiStreamRestart=_DLLHijacker_midiStreamRestart,@65")
#pragma comment(linker, "/EXPORT:midiStreamStop=_DLLHijacker_midiStreamStop,@66")
#pragma comment(linker, "/EXPORT:mixerClose=_DLLHijacker_mixerClose,@67")
#pragma comment(linker, "/EXPORT:mixerGetControlDetailsA=_DLLHijacker_mixerGetControlDetailsA,@68")
#pragma comment(linker, "/EXPORT:mixerGetControlDetailsW=_DLLHijacker_mixerGetControlDetailsW,@69")
#pragma comment(linker, "/EXPORT:mixerGetDevCapsA=_DLLHijacker_mixerGetDevCapsA,@70")
#pragma comment(linker, "/EXPORT:mixerGetDevCapsW=_DLLHijacker_mixerGetDevCapsW,@71")
#pragma comment(linker, "/EXPORT:mixerGetID=_DLLHijacker_mixerGetID,@72")
#pragma comment(linker, "/EXPORT:mixerGetLineControlsA=_DLLHijacker_mixerGetLineControlsA,@73")
#pragma comment(linker, "/EXPORT:mixerGetLineControlsW=_DLLHijacker_mixerGetLineControlsW,@74")
#pragma comment(linker, "/EXPORT:mixerGetLineInfoA=_DLLHijacker_mixerGetLineInfoA,@75")
#pragma comment(linker, "/EXPORT:mixerGetLineInfoW=_DLLHijacker_mixerGetLineInfoW,@76")
#pragma comment(linker, "/EXPORT:mixerGetNumDevs=_DLLHijacker_mixerGetNumDevs,@77")
#pragma comment(linker, "/EXPORT:mixerMessage=_DLLHijacker_mixerMessage,@78")
#pragma comment(linker, "/EXPORT:mixerOpen=_DLLHijacker_mixerOpen,@79")
#pragma comment(linker, "/EXPORT:mixerSetControlDetails=_DLLHijacker_mixerSetControlDetails,@80")
#pragma comment(linker, "/EXPORT:mmDrvInstall=_DLLHijacker_mmDrvInstall,@81")
#pragma comment(linker, "/EXPORT:mmGetCurrentTask=_DLLHijacker_mmGetCurrentTask,@82")
#pragma comment(linker, "/EXPORT:mmTaskBlock=_DLLHijacker_mmTaskBlock,@83")
#pragma comment(linker, "/EXPORT:mmTaskCreate=_DLLHijacker_mmTaskCreate,@84")
#pragma comment(linker, "/EXPORT:mmTaskSignal=_DLLHijacker_mmTaskSignal,@85")
#pragma comment(linker, "/EXPORT:mmTaskYield=_DLLHijacker_mmTaskYield,@86")
#pragma comment(linker, "/EXPORT:mmioAdvance=_DLLHijacker_mmioAdvance,@87")
#pragma comment(linker, "/EXPORT:mmioAscend=_DLLHijacker_mmioAscend,@88")
#pragma comment(linker, "/EXPORT:mmioClose=_DLLHijacker_mmioClose,@89")
#pragma comment(linker, "/EXPORT:mmioCreateChunk=_DLLHijacker_mmioCreateChunk,@90")
#pragma comment(linker, "/EXPORT:mmioDescend=_DLLHijacker_mmioDescend,@91")
#pragma comment(linker, "/EXPORT:mmioFlush=_DLLHijacker_mmioFlush,@92")
#pragma comment(linker, "/EXPORT:mmioGetInfo=_DLLHijacker_mmioGetInfo,@93")
#pragma comment(linker, "/EXPORT:mmioInstallIOProcA=_DLLHijacker_mmioInstallIOProcA,@94")
#pragma comment(linker, "/EXPORT:mmioInstallIOProcW=_DLLHijacker_mmioInstallIOProcW,@95")
#pragma comment(linker, "/EXPORT:mmioOpenA=_DLLHijacker_mmioOpenA,@96")
#pragma comment(linker, "/EXPORT:mmioOpenW=_DLLHijacker_mmioOpenW,@97")
#pragma comment(linker, "/EXPORT:mmioRead=_DLLHijacker_mmioRead,@98")
#pragma comment(linker, "/EXPORT:mmioRenameA=_DLLHijacker_mmioRenameA,@99")
#pragma comment(linker, "/EXPORT:mmioRenameW=_DLLHijacker_mmioRenameW,@100")
#pragma comment(linker, "/EXPORT:mmioSeek=_DLLHijacker_mmioSeek,@101")
#pragma comment(linker, "/EXPORT:mmioSendMessage=_DLLHijacker_mmioSendMessage,@102")
#pragma comment(linker, "/EXPORT:mmioSetBuffer=_DLLHijacker_mmioSetBuffer,@103")
#pragma comment(linker, "/EXPORT:mmioSetInfo=_DLLHijacker_mmioSetInfo,@104")
#pragma comment(linker, "/EXPORT:mmioStringToFOURCCA=_DLLHijacker_mmioStringToFOURCCA,@105")
#pragma comment(linker, "/EXPORT:mmioStringToFOURCCW=_DLLHijacker_mmioStringToFOURCCW,@106")
#pragma comment(linker, "/EXPORT:mmioWrite=_DLLHijacker_mmioWrite,@107")
#pragma comment(linker, "/EXPORT:sndOpenSound=_DLLHijacker_sndOpenSound,@108")
#pragma comment(linker, "/EXPORT:waveInAddBuffer=_DLLHijacker_waveInAddBuffer,@109")
#pragma comment(linker, "/EXPORT:waveInClose=_DLLHijacker_waveInClose,@110")
#pragma comment(linker, "/EXPORT:waveInGetDevCapsA=_DLLHijacker_waveInGetDevCapsA,@111")
#pragma comment(linker, "/EXPORT:waveInGetDevCapsW=_DLLHijacker_waveInGetDevCapsW,@112")
#pragma comment(linker, "/EXPORT:waveInGetErrorTextA=_DLLHijacker_waveInGetErrorTextA,@113")
#pragma comment(linker, "/EXPORT:waveInGetErrorTextW=_DLLHijacker_waveInGetErrorTextW,@114")
#pragma comment(linker, "/EXPORT:waveInGetID=_DLLHijacker_waveInGetID,@115")
#pragma comment(linker, "/EXPORT:waveInGetNumDevs=_DLLHijacker_waveInGetNumDevs,@116")
#pragma comment(linker, "/EXPORT:waveInGetPosition=_DLLHijacker_waveInGetPosition,@117")
#pragma comment(linker, "/EXPORT:waveInMessage=_DLLHijacker_waveInMessage,@118")
#pragma comment(linker, "/EXPORT:waveInOpen=_DLLHijacker_waveInOpen,@119")
#pragma comment(linker, "/EXPORT:waveInPrepareHeader=_DLLHijacker_waveInPrepareHeader,@120")
#pragma comment(linker, "/EXPORT:waveInReset=_DLLHijacker_waveInReset,@121")
#pragma comment(linker, "/EXPORT:waveInStart=_DLLHijacker_waveInStart,@122")
#pragma comment(linker, "/EXPORT:waveInStop=_DLLHijacker_waveInStop,@123")
#pragma comment(linker, "/EXPORT:waveInUnprepareHeader=_DLLHijacker_waveInUnprepareHeader,@124")
#pragma comment(linker, "/EXPORT:waveOutBreakLoop=_DLLHijacker_waveOutBreakLoop,@125")
#pragma comment(linker, "/EXPORT:waveOutClose=_DLLHijacker_waveOutClose,@126")
#pragma comment(linker, "/EXPORT:waveOutGetDevCapsA=_DLLHijacker_waveOutGetDevCapsA,@127")
#pragma comment(linker, "/EXPORT:waveOutGetDevCapsW=_DLLHijacker_waveOutGetDevCapsW,@128")
#pragma comment(linker, "/EXPORT:waveOutGetErrorTextA=_DLLHijacker_waveOutGetErrorTextA,@129")
#pragma comment(linker, "/EXPORT:waveOutGetErrorTextW=_DLLHijacker_waveOutGetErrorTextW,@130")
#pragma comment(linker, "/EXPORT:waveOutGetID=_DLLHijacker_waveOutGetID,@131")
#pragma comment(linker, "/EXPORT:waveOutGetNumDevs=_DLLHijacker_waveOutGetNumDevs,@132")
#pragma comment(linker, "/EXPORT:waveOutGetPitch=_DLLHijacker_waveOutGetPitch,@133")
#pragma comment(linker, "/EXPORT:waveOutGetPlaybackRate=_DLLHijacker_waveOutGetPlaybackRate,@134")
#pragma comment(linker, "/EXPORT:waveOutGetPosition=_DLLHijacker_waveOutGetPosition,@135")
#pragma comment(linker, "/EXPORT:waveOutGetVolume=_DLLHijacker_waveOutGetVolume,@136")
#pragma comment(linker, "/EXPORT:waveOutMessage=_DLLHijacker_waveOutMessage,@137")
#pragma comment(linker, "/EXPORT:waveOutOpen=_DLLHijacker_waveOutOpen,@138")
#pragma comment(linker, "/EXPORT:waveOutPause=_DLLHijacker_waveOutPause,@139")
#pragma comment(linker, "/EXPORT:waveOutPrepareHeader=_DLLHijacker_waveOutPrepareHeader,@140")
#pragma comment(linker, "/EXPORT:waveOutReset=_DLLHijacker_waveOutReset,@141")
#pragma comment(linker, "/EXPORT:waveOutRestart=_DLLHijacker_waveOutRestart,@142")
#pragma comment(linker, "/EXPORT:waveOutSetPitch=_DLLHijacker_waveOutSetPitch,@143")
#pragma comment(linker, "/EXPORT:waveOutSetPlaybackRate=_DLLHijacker_waveOutSetPlaybackRate,@144")
#pragma comment(linker, "/EXPORT:waveOutSetVolume=_DLLHijacker_waveOutSetVolume,@145")
#pragma comment(linker, "/EXPORT:waveOutUnprepareHeader=_DLLHijacker_waveOutUnprepareHeader,@146")
#pragma comment(linker, "/EXPORT:waveOutWrite=_DLLHijacker_waveOutWrite,@147")
#pragma comment(linker, "/EXPORT:winmmbaseFreeMMEHandles=_DLLHijacker_winmmbaseFreeMMEHandles,@148")
#pragma comment(linker, "/EXPORT:winmmbaseGetWOWHandle=_DLLHijacker_winmmbaseGetWOWHandle,@149")
#pragma comment(linker, "/EXPORT:winmmbaseHandle32FromHandle16=_DLLHijacker_winmmbaseHandle32FromHandle16,@150")
#pragma comment(linker, "/EXPORT:winmmbaseSetWOWHandle=_DLLHijacker_winmmbaseSetWOWHandle,@151")

#define EXTERNC extern "C"
#define NAKED __declspec(naked)
#define EXPORT __declspec(dllexport)
#define ALCPP EXPORT NAKED
#define ALSTD EXTERNC EXPORT NAKED void __stdcall
#define ALCFAST EXTERNC EXPORT NAKED void __fastcall
#define ALCDECL EXTERNC NAKED void __cdecl

namespace DLLHijacker
{
    HMODULE m_hModule = NULL;
    DWORD m_dwReturn[17] = {0};
    inline BOOL WINAPI Load()
    {
        TCHAR tzPath[MAX_PATH];
        lstrcpy(tzPath, TEXT("winmmbase.dll"));
        m_hModule = LoadLibrary(tzPath);
        if (m_hModule == NULL)
            return FALSE;
        return (m_hModule != NULL);
    }
    inline VOID WINAPI Free()
    {
        if (m_hModule)
            FreeLibrary(m_hModule);
    }
    FARPROC WINAPI GetAddress(PCSTR pszProcName)
    {
        FARPROC fpAddress;
        CHAR szProcName[16];
        fpAddress = GetProcAddress(m_hModule, pszProcName);
        if (fpAddress == NULL)
        {
            if (HIWORD(pszProcName) == 0)
            {
                wsprintf(szProcName, "%d", pszProcName);
                pszProcName = szProcName;
            }
            ExitProcess(-2);
        }
        return fpAddress;
    }
}
using namespace DLLHijacker;
VOID Hijack()
{
    MessageBoxW(NULL, L"DLL Hijack! by DLLHijacker", L":)", 0);
}
BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, PVOID pvReserved)
{
    if (dwReason == DLL_PROCESS_ATTACH)
    {
        DisableThreadLibraryCalls(hModule);
        if(Load())
            Hijack();
    }
    else if (dwReason == DLL_PROCESS_DETACH)
    {
        Free();
    }
    return TRUE;
}
ALCDECL DLLHijacker_CloseDriver(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("CloseDriver")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_DefDriverProc(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("DefDriverProc")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_DriverCallback(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("DriverCallback")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_DrvGetModuleHandle(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("DrvGetModuleHandle")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_GetDriverModuleHandle(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("GetDriverModuleHandle")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_OpenDriver(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("OpenDriver")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_SendDriverMessage(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("SendDriverMessage")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_auxGetDevCapsA(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("auxGetDevCapsA")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_auxGetDevCapsW(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("auxGetDevCapsW")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_auxGetNumDevs(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("auxGetNumDevs")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_auxGetVolume(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("auxGetVolume")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_auxOutMessage(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("auxOutMessage")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_auxSetVolume(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("auxSetVolume")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_joyConfigChanged(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("joyConfigChanged")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_joyGetDevCapsA(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("joyGetDevCapsA")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_joyGetDevCapsW(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("joyGetDevCapsW")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_joyGetNumDevs(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("joyGetNumDevs")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_joyGetPos(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("joyGetPos")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_joyGetPosEx(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("joyGetPosEx")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_joyGetThreshold(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("joyGetThreshold")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_joyReleaseCapture(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("joyReleaseCapture")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_joySetCapture(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("joySetCapture")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_joySetThreshold(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("joySetThreshold")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiConnect(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiConnect")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiDisconnect(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiDisconnect")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiInAddBuffer(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiInAddBuffer")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiInClose(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiInClose")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiInGetDevCapsA(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiInGetDevCapsA")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiInGetDevCapsW(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiInGetDevCapsW")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiInGetErrorTextA(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiInGetErrorTextA")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiInGetErrorTextW(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiInGetErrorTextW")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiInGetID(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiInGetID")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiInGetNumDevs(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiInGetNumDevs")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiInMessage(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiInMessage")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiInOpen(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiInOpen")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiInPrepareHeader(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiInPrepareHeader")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiInReset(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiInReset")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiInStart(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiInStart")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiInStop(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiInStop")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiInUnprepareHeader(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiInUnprepareHeader")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiOutCacheDrumPatches(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiOutCacheDrumPatches")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiOutCachePatches(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiOutCachePatches")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiOutClose(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiOutClose")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiOutGetDevCapsA(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiOutGetDevCapsA")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiOutGetDevCapsW(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiOutGetDevCapsW")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiOutGetErrorTextA(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiOutGetErrorTextA")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiOutGetErrorTextW(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiOutGetErrorTextW")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiOutGetID(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiOutGetID")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiOutGetNumDevs(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiOutGetNumDevs")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiOutGetVolume(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiOutGetVolume")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiOutLongMsg(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiOutLongMsg")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiOutMessage(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiOutMessage")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiOutOpen(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiOutOpen")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiOutPrepareHeader(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiOutPrepareHeader")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiOutReset(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiOutReset")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiOutSetVolume(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiOutSetVolume")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiOutShortMsg(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiOutShortMsg")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiOutUnprepareHeader(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiOutUnprepareHeader")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiStreamClose(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiStreamClose")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiStreamOpen(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiStreamOpen")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiStreamOut(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiStreamOut")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiStreamPause(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiStreamPause")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiStreamPosition(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiStreamPosition")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiStreamProperty(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiStreamProperty")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiStreamRestart(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiStreamRestart")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_midiStreamStop(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("midiStreamStop")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mixerClose(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mixerClose")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mixerGetControlDetailsA(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mixerGetControlDetailsA")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mixerGetControlDetailsW(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mixerGetControlDetailsW")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mixerGetDevCapsA(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mixerGetDevCapsA")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mixerGetDevCapsW(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mixerGetDevCapsW")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mixerGetID(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mixerGetID")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mixerGetLineControlsA(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mixerGetLineControlsA")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mixerGetLineControlsW(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mixerGetLineControlsW")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mixerGetLineInfoA(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mixerGetLineInfoA")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mixerGetLineInfoW(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mixerGetLineInfoW")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mixerGetNumDevs(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mixerGetNumDevs")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mixerMessage(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mixerMessage")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mixerOpen(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mixerOpen")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mixerSetControlDetails(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mixerSetControlDetails")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mmDrvInstall(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mmDrvInstall")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mmGetCurrentTask(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mmGetCurrentTask")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mmTaskBlock(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mmTaskBlock")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mmTaskCreate(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mmTaskCreate")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mmTaskSignal(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mmTaskSignal")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mmTaskYield(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mmTaskYield")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mmioAdvance(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mmioAdvance")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mmioAscend(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mmioAscend")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mmioClose(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mmioClose")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mmioCreateChunk(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mmioCreateChunk")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mmioDescend(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mmioDescend")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mmioFlush(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mmioFlush")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mmioGetInfo(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mmioGetInfo")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mmioInstallIOProcA(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mmioInstallIOProcA")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mmioInstallIOProcW(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mmioInstallIOProcW")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mmioOpenA(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mmioOpenA")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mmioOpenW(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mmioOpenW")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mmioRead(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mmioRead")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mmioRenameA(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mmioRenameA")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mmioRenameW(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mmioRenameW")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mmioSeek(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mmioSeek")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mmioSendMessage(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mmioSendMessage")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mmioSetBuffer(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mmioSetBuffer")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mmioSetInfo(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mmioSetInfo")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mmioStringToFOURCCA(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mmioStringToFOURCCA")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mmioStringToFOURCCW(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mmioStringToFOURCCW")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_mmioWrite(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("mmioWrite")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_sndOpenSound(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("sndOpenSound")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveInAddBuffer(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveInAddBuffer")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveInClose(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveInClose")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveInGetDevCapsA(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveInGetDevCapsA")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveInGetDevCapsW(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveInGetDevCapsW")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveInGetErrorTextA(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveInGetErrorTextA")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveInGetErrorTextW(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveInGetErrorTextW")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveInGetID(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveInGetID")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveInGetNumDevs(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveInGetNumDevs")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveInGetPosition(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveInGetPosition")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveInMessage(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveInMessage")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveInOpen(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveInOpen")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveInPrepareHeader(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveInPrepareHeader")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveInReset(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveInReset")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveInStart(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveInStart")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveInStop(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveInStop")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveInUnprepareHeader(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveInUnprepareHeader")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveOutBreakLoop(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveOutBreakLoop")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveOutClose(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveOutClose")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveOutGetDevCapsA(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveOutGetDevCapsA")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveOutGetDevCapsW(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveOutGetDevCapsW")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveOutGetErrorTextA(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveOutGetErrorTextA")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveOutGetErrorTextW(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveOutGetErrorTextW")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveOutGetID(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveOutGetID")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveOutGetNumDevs(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveOutGetNumDevs")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveOutGetPitch(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveOutGetPitch")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveOutGetPlaybackRate(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveOutGetPlaybackRate")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveOutGetPosition(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveOutGetPosition")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveOutGetVolume(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveOutGetVolume")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveOutMessage(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveOutMessage")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveOutOpen(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveOutOpen")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveOutPause(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveOutPause")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveOutPrepareHeader(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveOutPrepareHeader")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveOutReset(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveOutReset")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveOutRestart(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveOutRestart")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveOutSetPitch(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveOutSetPitch")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveOutSetPlaybackRate(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveOutSetPlaybackRate")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveOutSetVolume(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveOutSetVolume")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveOutUnprepareHeader(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveOutUnprepareHeader")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_waveOutWrite(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("waveOutWrite")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_winmmbaseFreeMMEHandles(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("winmmbaseFreeMMEHandles")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_winmmbaseGetWOWHandle(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("winmmbaseGetWOWHandle")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_winmmbaseHandle32FromHandle16(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("winmmbaseHandle32FromHandle16")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
ALCDECL DLLHijacker_winmmbaseSetWOWHandle(void)
{
        __asm POP m_dwReturn[0 * TYPE long];
    GetAddress("winmmbaseSetWOWHandle")();
    __asm JMP m_dwReturn[0 * TYPE long];
}
