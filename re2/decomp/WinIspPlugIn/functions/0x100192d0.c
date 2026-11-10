// rea decompile_all
// name: FUN_100192d0
// address: 0x100192d0
// body: available
// range: 0x100192d0-0x100192e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100192e1 to 0x100193a0 FUN_100193a0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100192d0(void)

{
  int iVar1;
  char in_CL;
  undefined4 auStack_c [2];
  
  if (in_CL == 'n') {
    iVar1 = FUN_100193a0();
    return iVar1;
  }
  if (in_CL != '|') {
    return 0;
  }
  auStack_c[0] = 0;
  iVar1 = FUN_100193a0();
  if (iVar1 == 0) {
    auStack_c[0] = 0xff03;
    (**(code **)(*DAT_10249d10 + 0x13c))(0x6e,0x51,4,auStack_c);
    Sleep(500);
    auStack_c[0] = CONCAT13(auStack_c[0]._3_1_,0xcf0001);
    iVar1 = (**(code **)(*DAT_10249d10 + 0x74))(0x7c,0xce,3,auStack_c,0);
    Sleep(500);
  }
  return iVar1;
}

