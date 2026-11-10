// rea decompile_all
// name: FUN_00404ee0
// address: 0x404ee0
// body: available
// range: 0x404ee0-0x404f6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_00404ee0(undefined4 param_1,undefined1 *param_2,char *param_3,uint param_4)

{
  char *pcVar1;
  
  *param_2 = 0x25;
  pcVar1 = param_2 + 1;
  if ((param_4 & 0x20) != 0) {
    *pcVar1 = '+';
    pcVar1 = param_2 + 2;
  }
  if ((param_4 & 8) != 0) {
    *pcVar1 = '#';
    pcVar1 = pcVar1 + 1;
  }
  if (*param_3 == 'L') {
    pcVar1[0] = 'I';
    pcVar1[1] = '6';
    pcVar1 = pcVar1 + 2;
    *pcVar1 = '4';
  }
  else {
    *pcVar1 = *param_3;
  }
  if ((param_4 & 0xe00) == 0x400) {
    pcVar1[1] = 'o';
    pcVar1[2] = '\0';
    return param_2;
  }
  if ((param_4 & 0xe00) != 0x800) {
    pcVar1[1] = param_3[1];
    pcVar1[2] = '\0';
    return param_2;
  }
  pcVar1[1] = ~((char)param_4 << 3) & 0x20U | 0x58;
  pcVar1[2] = '\0';
  return param_2;
}

