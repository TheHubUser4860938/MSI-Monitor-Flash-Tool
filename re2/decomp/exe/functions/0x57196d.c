// rea decompile_all
// name: __Getdateorder
// address: 0x57196d
// body: available
// range: 0x57196d-0x5719b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __Getdateorder
   
   Library: Visual Studio 2015 Release */

int __cdecl __Getdateorder(void)

{
  wchar_t **ppwVar1;
  uint uVar2;
  LCTYPE LCType;
  WCHAR *lpLCData;
  int cchData;
  WCHAR local_8 [2];
  
  uVar2 = 2;
  local_8[0] = L'\0';
  local_8[1] = L'\0';
  lpLCData = local_8;
  cchData = 2;
  LCType = 0x22;
  ppwVar1 = ____lc_locale_name_func();
  ___crtGetLocaleInfoEx(ppwVar1[5],LCType,lpLCData,cchData);
  if (local_8[0] != L'0') {
    if (local_8[0] == L'1') {
      uVar2 = 1;
    }
    else {
      uVar2 = (local_8[0] != L'2') - 1 & 3;
    }
  }
  return uVar2;
}

