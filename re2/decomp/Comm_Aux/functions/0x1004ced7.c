// rea decompile_all
// name: FUN_1004ced7
// address: 0x1004ced7
// body: available
// range: 0x1004ced7-0x1004cf61 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

bool FUN_1004ced7(void)

{
  code *pcVar1;
  int iVar2;
  HGLOBAL unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  HWND hWnd;
  int *unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (unaff_ESI != (int *)0x0) {
    pcVar1 = *(code **)(*unaff_ESI + 0x18);
    guard_check_icall(unaff_EBP + -0x4c);
    (*pcVar1)();
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      pcVar1 = *(code **)(*unaff_EDI + 0x15c);
      guard_check_icall(0);
      (*pcVar1)();
    }
  }
  iVar2 = FUN_1004f9c4();
  if (iVar2 == 0) {
    pcVar1 = *(code **)(*unaff_EDI + 0x120);
    guard_check_icall();
    (*pcVar1)();
  }
  hWnd = *(HWND *)(unaff_EBP + -0x14);
  if ((hWnd != (HWND)0x0) && ((*(byte *)(unaff_EDI + 0x18) & 0x10) == 0)) {
    DestroyWindow(hWnd);
    hWnd = (HWND)0x0;
  }
  if (unaff_EBX != (HGLOBAL)0x0) {
    GlobalUnlock(unaff_EBX);
    GlobalFree(unaff_EBX);
  }
  return hWnd != (HWND)0x0;
}

