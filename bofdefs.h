#pragma once
#include <windows.h>

extern "C" {

#include "beacon.h"

void go(char* buff, int len);


WINADVAPI DWORD WINAPI ADVAPI32$GetLengthSid(PSID Sid);
WINADVAPI BOOL WINAPI ADVAPI32$CopySid(DWORD nDestinationSidLength, PSID pDestinationSid, PSID pSourceSid);
DECLSPEC_IMPORT BOOL WINAPI ADVAPI32$LookupPrivilegeValueA(LPCSTR lpSystemName, LPCSTR lpName, PLUID lpLuid);
DECLSPEC_IMPORT BOOL WINAPI ADVAPI32$AdjustTokenPrivileges(HANDLE TokenHandle, BOOL DisableAllPrivileges, PTOKEN_PRIVILEGES NewState, DWORD BufferLength, PTOKEN_PRIVILEGES PreviousState, PDWORD ReturnLength);
DECLSPEC_IMPORT HRESULT  WINAPI OLE32$CoImpersonateClient();
DECLSPEC_IMPORT WINBASEAPI BOOL WINAPI ADVAPI32$OpenThreadToken(HANDLE, DWORD, BOOL, PHANDLE);
WINBASEAPI HANDLE WINAPI KERNEL32$GetCurrentThread(void);
DECLSPEC_IMPORT WINBASEAPI BOOL WINAPI ADVAPI32$RevertToSelf(void);
DECLSPEC_IMPORT void WINAPI MSVCRT$free(void*);
DECLSPEC_IMPORT long WINAPI KERNEL32$InterlockedIncrement(LONG volatile* Addend);
DECLSPEC_IMPORT WINOLEAPI OLE32$CoInitialize(LPVOID pvReserved);
DECLSPEC_IMPORT HRESULT  WINAPI   OLE32$CoInitializeEx(LPVOID, DWORD);
DECLSPEC_IMPORT BOOL WINAPI ADVAPI32$ImpersonateLoggedOnUser(HANDLE TokenHandle);
DECLSPEC_IMPORT BOOL WINAPI ADVAPI32$LogonUserA(LPCSTR lpszUsername, LPCSTR lpszDomain, LPCSTR lpszPassword, DWORD dwLogonType, DWORD dwLogonProvider, PHANDLE phToken);
DECLSPEC_IMPORT BOOL WINAPI ADVAPI32$CreateProcessWithTokenW(HANDLE hToken, DWORD dwLogonFlags, LPCWSTR lpApplicationName, LPWSTR lpCommandLine, DWORD dwCreationFlags, LPVOID lpEnvironment, LPCWSTR lpCurrentDirectory, LPSTARTUPINFOW lpStartupInfo, LPPROCESS_INFORMATION lpProcessInformation);
DECLSPEC_IMPORT BOOL WINAPI ADVAPI32$CreateProcessAsUserW(HANDLE hToken, LPCWSTR lpApplicationName, LPWSTR lpCommandLine, LPSECURITY_ATTRIBUTES lpProcessAttributes, LPSECURITY_ATTRIBUTES lpThreadAttributes, BOOL bInheritHandles, DWORD dwCreationFlags, LPVOID lpEnvironment, LPCWSTR lpCurrentDirectory, LPSTARTUPINFOW lpStartupInfo, LPPROCESS_INFORMATION lpProcessInformation);
WINADVAPI BOOL WINAPI ADVAPI32$GetTokenInformation(HANDLE TokenHandle, TOKEN_INFORMATION_CLASS TokenInformationClass, LPVOID TokenInformation, DWORD TokenInformationLength, PDWORD ReturnLength);
WINADVAPI BOOL WINAPI ADVAPI32$ConvertSidToStringSidW(PSID Sid, LPWSTR* StringSid);
WINBASEAPI BOOL WINAPI KERNEL32$CloseHandle(HANDLE hObject);
DECLSPEC_IMPORT HLOCAL WINAPI KERNEL32$LocalFree(HLOCAL);
WINADVAPI BOOL WINAPI ADVAPI32$OpenProcessToken(HANDLE ProcessHandle, DWORD DesiredAccess, PHANDLE TokenHandle);
WINADVAPI BOOL WINAPI OLE32$IsEqualGUID(REFGUID rguid1, REFGUID rguid2);
DECLSPEC_IMPORT HGLOBAL  WINAPI KERNEL32$GlobalAlloc(UINT uFlags, SIZE_T dwBytes);
DECLSPEC_IMPORT HGLOBAL  WINAPI ADVAPI32$LookupAccountSidA(LPCSTR lpSystemName, PSID Sid, LPSTR Name, LPDWORD cchName, LPSTR ReferencedDomainName, LPDWORD cchReferencedDomainName, PSID_NAME_USE peUse);
DECLSPEC_IMPORT int  WINAPI MSVCRT$wcscmp(const wchar_t* string1, const wchar_t* string2);
DECLSPEC_IMPORT HRESULT  WINAPI   OLE32$CLSIDFromString(LPCWSTR, LPCLSID);
DECLSPEC_IMPORT HRESULT  WINAPI   OLE32$CoCreateInstance(REFCLSID rclsid, LPUNKNOWN pUnkOuter, DWORD dwClsContext, REFIID riid, LPVOID* ppv);
DECLSPEC_IMPORT VOID     WINAPI   OLE32$CoUninitialize();
DECLSPEC_IMPORT HRESULT	 WINAPI	  OLE32$CoInitialize(LPVOID pvReserved);
DECLSPEC_IMPORT HRESULT	 WINAPI	  OLE32$CoInitializeSecurity(PSECURITY_DESCRIPTOR pSecDesc, LONG cAuthSvc, SOLE_AUTHENTICATION_SERVICE* asAuthSvc, void* pReserved1, DWORD dwAuthnLevel,  DWORD dwImpLevel, void* pAuthList, DWORD dwCapabilities, void* pReserved3);
DECLSPEC_IMPORT LPVOID	WINAPI KERNEL32$HeapAlloc(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes);
DECLSPEC_IMPORT BOOL	WINAPI KERNEL32$HeapFree(HANDLE, DWORD, PVOID);
DECLSPEC_IMPORT HANDLE	WINAPI KERNEL32$GetProcessHeap();
DECLSPEC_IMPORT HANDLE WINAPI  KERNEL32$GetCurrentProcess(VOID);
DECLSPEC_IMPORT DWORD	WINAPI KERNEL32$GetLastError(VOID);
WINBASEAPI SIZE_T WINAPI MSVCRT$strlen(const char* str);
WINBASEAPI void* WINAPI MSVCRT$malloc(SIZE_T);
WINBASEAPI errno_t __cdecl MSVCRT$mbstowcs_s(size_t* pReturnValue, wchar_t* wcstr, size_t sizeInWords, const char* mbstr, size_t count);
}
