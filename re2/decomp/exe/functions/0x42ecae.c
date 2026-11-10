// rea decompile_all
// name: FUN_0042ecae
// address: 0x42ecae
// body: available
// range: 0x42ecae-0x42ed10 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42ed0c to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


BOOL FUN_0042ecae(void)

{
  code *pcVar1;
  CHandleMap *pCVar2;
  int in_ECX;
  BOOL BVar3;
  
  BVar3 = 0;
  if (*(int *)(in_ECX + 0x20) == 0) {
    if (*(int *)(in_ECX + 0x74) == 0) {
      return 0;
    }
  }
  else {
    pCVar2 = afxMapHWND(0);
    if (pCVar2 == (CHandleMap *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00429127();
    }
    FUN_004c859b(*(undefined4 *)(in_ECX + 0x20));
  }
  if ((*(HWND *)(in_ECX + 0x20) != (HWND)0x0) || (*(int *)(in_ECX + 0x74) != 0)) {
    if (*(int **)(in_ECX + 0x74) == (int *)0x0) {
      BVar3 = DestroyWindow(*(HWND *)(in_ECX + 0x20));
    }
    else {
      pcVar1 = *(code **)(**(int **)(in_ECX + 0x74) + 0x58);
      guard_check_icall();
      BVar3 = (*pcVar1)();
    }
  }
  return BVar3;
}

