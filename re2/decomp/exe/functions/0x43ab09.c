// rea decompile_all
// name: _AfxGetThreadPreferredUILanguages
// address: 0x43ab09
// body: available
// range: 0x43ab09-0x43acd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if (DAT_00614d68 == (PVOID)0x0) {
    hModule = GetModuleHandleW(L"kernel32.dll");
    if (hModule != (HMODULE)0x0) {
      Ptr = GetProcAddress(hModule,"GetThreadPreferredUILanguages");
      DAT_00614d68 = EncodePointer(Ptr);
      goto LAB_0043ab6b;
    }
  }
  else {
    Ptr = DecodePointer(DAT_00614d68);
LAB_0043ab6b:
    if (Ptr != (FARPROC)0x0) {
      guard_check_icall(param_1,param_2,param_3,param_4);
      (*Ptr)();
      goto LAB_0043acc3;
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
LAB_0043acc3:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

