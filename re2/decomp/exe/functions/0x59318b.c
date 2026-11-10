// rea decompile_all
// name: expand_argument_wildcards<>
// address: 0x59318b
// body: available
// range: 0x59318b-0x593340 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    int __cdecl expand_argument_wildcards<wchar_t>(wchar_t * const,wchar_t * const,class `anonymous
   namespace'::argument_list<wchar_t> &)
    int __cdecl expand_argument_wildcards<wchar_t>(wchar_t * const,wchar_t * const,class `anonymous
   namespace'::argument_list<wchar_t> &)
   
   Library: Visual Studio 2015 Release */

void expand_argument_wildcards<>(LPCWSTR param_1,LPCWSTR param_2,int *param_3)

{
  WCHAR WVar1;
  byte bVar2;
  HANDLE hFindFile;
  int iVar3;
  int iVar4;
  BOOL BVar5;
  _WIN32_FIND_DATAW local_258;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  for (; (((param_2 != param_1 && (WVar1 = *param_2, WVar1 != L'/')) && (WVar1 != L'\\')) &&
         (WVar1 != L':')); param_2 = param_2 + -1) {
  }
  WVar1 = *param_2;
  if ((WVar1 == L':') && (param_2 != param_1 + 1)) {
    FUN_005930ed(param_1,0,0,param_3);
  }
  else {
    if ((WVar1 == L'/') || ((WVar1 == L'\\' || (WVar1 == L':')))) {
      bVar2 = 1;
    }
    else {
      bVar2 = 0;
    }
    _memset(&local_258,0,0x250);
    hFindFile = FindFirstFileExW(param_1,FindExInfoStandard,&local_258,FindExSearchNameMatch,
                                 (LPVOID)0x0,0);
    if (hFindFile == (HANDLE)0xffffffff) {
      FUN_005930ed(param_1,0,0,param_3);
    }
    else {
      iVar3 = param_3[1] - *param_3 >> 2;
      do {
        if (((local_258.cFileName[0] != L'.') ||
            ((local_258.cFileName[1] != L'\0' &&
             ((local_258.cFileName[1] != L'.' || (local_258.cFileName[2] != L'\0')))))) &&
           (iVar4 = FUN_005930ed(local_258.cFileName,param_1,
                                 -(uint)bVar2 & ((int)param_2 - (int)param_1 >> 1) + 1U,param_3),
           iVar4 != 0)) goto LAB_0059327c;
        BVar5 = FindNextFileW(hFindFile,&local_258);
      } while (BVar5 != 0);
      iVar4 = param_3[1] - *param_3 >> 2;
      if (iVar3 != iVar4) {
        _qsort((void *)(*param_3 + iVar3 * 4),iVar4 - iVar3,4,FUN_00592f08);
      }
    }
LAB_0059327c:
    if (hFindFile != (HANDLE)0xffffffff) {
      FindClose(hFindFile);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

