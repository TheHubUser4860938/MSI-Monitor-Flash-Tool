// rea decompile_all
// name: FUN_0040e2a0
// address: 0x40e2a0
// body: available
// range: 0x40e2a0-0x40e32b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0040e2a0(int param_1,uint param_2)

{
  int *piVar1;
  void *in_ECX;
  uint in_EDX;
  
  if (in_ECX == (void *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_0057662d();
    return 0x16;
  }
  if ((param_1 != 0) && (param_2 <= in_EDX)) {
    FUN_005734b0();
    return 0;
  }
  _memset(in_ECX,0,in_EDX);
  if (param_1 == 0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_0057662d();
  }
  else if (in_EDX < param_2) {
    piVar1 = __errno();
    *piVar1 = 0x22;
    FUN_0057662d();
    return 0x22;
  }
  return 0x16;
}

