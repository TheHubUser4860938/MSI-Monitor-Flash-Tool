// rea decompile_all
// name: AfxGetFileTitle
// address: 0x43850e
// body: available
// range: 0x43850e-0x438584 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    unsigned int __stdcall AfxGetFileTitle(wchar_t const *,wchar_t *,unsigned int)
   
   Library: Visual Studio 2015 Release */

uint AfxGetFileTitle(wchar_t *param_1,wchar_t *param_2,uint param_3)

{
  short sVar1;
  uint uVar2;
  wchar_t *_Str;
  wchar_t local_210 [260];
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  _Str = param_2;
  if (param_2 == (wchar_t *)0x0) {
    param_3 = 0x104;
    _Str = local_210;
  }
  sVar1 = FID_conflict__IsolationAwareGetFileTitleA_12(param_1,_Str,param_3);
  if (sVar1 == 0) {
    if (param_2 == (wchar_t *)0x0) {
      _wcslen(_Str);
    }
  }
  else {
    FUN_004d4202(param_1,param_2,param_3);
  }
  uVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return uVar2;
}

