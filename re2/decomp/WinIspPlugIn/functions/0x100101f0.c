// rea decompile_all
// name: FUN_100101f0
// address: 0x100101f0
// body: available
// range: 0x100101f0-0x10010267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100101f0(void)

{
  undefined4 uVar1;
  undefined4 in_stack_00000018;
  undefined1 auStack_5c [12];
  undefined1 local_50 [68];
  uint local_c;
  
  local_c = DAT_1023dfec ^ (uint)auStack_5c;
  uVar1 = FUN_10010e70();
  FUN_10013480(local_50,0x40,uVar1,in_stack_00000018);
  FUN_10010b10();
  __security_check_cookie(local_c ^ (uint)auStack_5c);
  return;
}

