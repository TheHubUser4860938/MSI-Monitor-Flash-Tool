// rea decompile_all
// name: FUN_004ce60c
// address: 0x4ce60c
// body: available
// range: 0x4ce60c-0x4ce6b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4ce6b4 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ce60c(void)

{
  code *pcVar1;
  int *piVar2;
  HMENU hMenu;
  CMFCPopupMenu *pCVar3;
  CMFCPopupMenu *in_ECX;
  HMENU pHVar4;
  
  if (((DAT_00614ed8 != 0) && (*(int *)(in_ECX + 0x158) != 0)) &&
     (*(int *)(*(int *)(in_ECX + 0x158) + 0xb0) == 0)) {
    pcVar1 = *(code **)(*(int *)in_ECX + 0x1c8);
    guard_check_icall();
    piVar2 = (int *)(*pcVar1)();
    pcVar1 = *(code **)(*piVar2 + 0x43c);
    guard_check_icall();
    hMenu = (HMENU)(*pcVar1)();
    if (hMenu == (HMENU)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00429127();
    }
    pcVar1 = *(code **)(**(int **)(in_ECX + 0x158) + 0xd0);
    pHVar4 = hMenu;
    guard_check_icall(hMenu);
    (*pcVar1)();
    DestroyMenu(hMenu);
    pCVar3 = CMFCPopupMenu::GetParentPopupMenu(in_ECX);
    if (pCVar3 != (CMFCPopupMenu *)0x0) {
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x1e0);
      guard_check_icall(pHVar4);
      (*pcVar1)();
    }
  }
  return;
}

