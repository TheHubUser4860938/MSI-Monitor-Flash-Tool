// rea decompile_all
// name: ___acrt_GetDateFormatEx@28
// address: 0x58f3ea
// body: available
// range: 0x58f3ea-0x58f46b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___acrt_GetDateFormatEx@28
   
   Library: Visual Studio 2015 Release */

void ___acrt_GetDateFormatEx_28
               (undefined4 param_1,DWORD param_2,SYSTEMTIME *param_3,LPCWSTR param_4,LPWSTR param_5,
               int param_6,undefined4 param_7)

{
  uint uVar1;
  code *pcVar2;
  LCID Locale;
  
  uVar1 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  pcVar2 = try_get_function(9,"GetDateFormatEx",(module_id *)&DAT_005e17a0,
                            (module_id *)"GetDateFormatEx");
  if (pcVar2 == (code *)0x0) {
    Locale = ___acrt_LocaleNameToLCID_8(param_1,0);
    GetDateFormatW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    guard_check_icall(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    (*pcVar2)();
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}

