#pragma once

#include <D2Dll.h>
#include <D2CommonDefinitions.h>

#pragma pack(1)

struct D2ClientInterface
{
	int(__fastcall* pEntrypoint)(int);
};

#pragma pack()

D2FUNC_DLL(D2CLIENT, IsInitialized, BOOL, __stdcall, (DWORD), 0x8E00)									//D2CLIENT.#10001
D2FUNC_DLL(D2CLIENT, QUESTS_CheckQuestStatus, BYTE, __stdcall, (void* pHistory, int nQuest), 0x8EF0)	//D2CLIENT.#10002
D2FUNC_DLL(D2CLIENT, ShowWindow, DWORD, __cdecl, (), 0x1F50)											//D2CLIENT.#10003
//D2Client.0x0x11C0 (#10004)
D2CLIENT_DLL_DECL D2ClientInterface* __cdecl QueryInterface();

//D2Client.0x6FAA11D0
int __fastcall Entrypoint(int dwParam);
//D2Client.0x6FAA2050
int __stdcall EntrypointMain(HMODULE hModule, int);
//D2Client.6FAAB370
int __fastcall D2Client_Main_sub();
extern void* D2Client_Main_sub_OriginalPtr;
