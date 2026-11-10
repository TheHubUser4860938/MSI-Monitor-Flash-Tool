// rea decompile_all
// name: FUN_00455585
// address: 0x455585
// body: available
// range: 0x455585-0x45560d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x455609 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00455585(int param_1)

{
  code *pcVar1;
  int *piVar2;
  int in_ECX;
  int local_8;
  
  local_8 = *(int *)(in_ECX + 0xc40);
  *(undefined4 *)(in_ECX + 0xbec) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0xbf0) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0xbf4) = 0xffffffff;
  while( true ) {
    if (local_8 == 0) {
      return;
    }
    piVar2 = (int *)FUN_004ead48(&local_8);
    piVar2 = (int *)*piVar2;
    if (piVar2 == (int *)0x0) break;
    pcVar1 = *(code **)(*piVar2 + 0x58);
    guard_check_icall();
    (*pcVar1)();
    if ((piVar2[9] & 0x40000U) == 0) {
      pcVar1 = *(code **)(*piVar2 + 0x98);
      guard_check_icall(param_1 == 0);
      (*pcVar1)();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

