// rea decompile_all
// name: _AfxGetThreadPreferredUILanguages
// address: 0x1002f02f
// body: available
// range: 0x1002f02f-0x1002f1f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl _AfxGetThreadPreferredUILanguages(unsigned long,unsigned long *,wchar_t *,unsigned
   long *)
   
   Library: Visual Studio 2015 Release */

int __cdecl
_AfxGetThreadPreferredUILanguages(ulong param_1,ulong *param_2,wchar_t *param_3,ulong *param_4)

{
  LANGID LVar1;
  HMODULE hModule;
  FARPROC Ptr;
  size_t sVar2;
  int iVar3;
  wchar_t local_18 [8];
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  if (DAT_102092f8 == (PVOID)0x0) {
    hModule = GetModuleHandleW(L"kernel32.dll");
    if (hModule != (HMODULE)0x0) {
      Ptr = GetProcAddress(hModule,"GetThreadPreferredUILanguages");
      DAT_102092f8 = EncodePointer(Ptr);
      goto LAB_1002f091;
    }
  }
  else {
    Ptr = DecodePointer(DAT_102092f8);
LAB_1002f091:
    if (Ptr != (FARPROC)0x0) {
      guard_check_icall(param_1,param_2,param_3,param_4);
      (*Ptr)();
      goto LAB_1002f1e9;
    }
  }
  *param_2 = 0;
  LVar1 = GetUserDefaultUILanguage();
  ATL::_AtlDownlevelLCIDToLocaleName((uint)LVar1,local_18,7);
  sVar2 = _wcslen(local_18);
  _wcscpy_s(param_3,*param_4,local_18);
  iVar3 = sVar2 + 1;
  ATL::_AtlDownlevelLCIDToLocaleName(LVar1 & 0x3ff,local_18,7);
  sVar2 = _wcslen(local_18);
  _wcscpy_s(param_3 + iVar3,*param_4 - iVar3,local_18);
  iVar3 = iVar3 + sVar2 + 1;
  LVar1 = GetSystemDefaultUILanguage();
  ATL::_AtlDownlevelLCIDToLocaleName((uint)LVar1,local_18,7);
  sVar2 = _wcslen(local_18);
  _wcscpy_s(param_3 + iVar3,*param_4 - iVar3,local_18);
  iVar3 = iVar3 + sVar2 + 1;
  ATL::_AtlDownlevelLCIDToLocaleName(LVar1 & 0x3ff,local_18,7);
  sVar2 = _wcslen(local_18);
  _wcscpy_s(param_3 + iVar3,*param_4 - iVar3,local_18);
  iVar3 = iVar3 + sVar2 + 1;
  ATL::_AtlDownlevelLCIDToLocaleName(0x800,local_18,7);
  sVar2 = _wcslen(local_18);
  _wcscpy_s(param_3 + iVar3,*param_4 - iVar3,local_18);
  param_3[iVar3 + sVar2 + 1] = L'\0';
LAB_1002f1e9:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

