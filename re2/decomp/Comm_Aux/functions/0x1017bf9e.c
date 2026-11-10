// rea decompile_all
// name: FUN_1017bf9e
// address: 0x1017bf9e
// body: available
// range: 0x1017bf9e-0x1017c051 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1017c04d to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1017bf9e(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  __POSITION *p_Var4;
  int iVar5;
  CWnd *this;
  CMFCTasksPane *in_ECX;
  undefined4 uVar6;
  
  iVar3 = CMFCTasksPane::GetActivePage(in_ECX);
  p_Var4 = CObList::FindIndex((CObList *)(in_ECX + 0x464),iVar3);
  if (p_Var4 == (__POSITION *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
  }
  iVar3 = *(int *)(p_Var4 + 8);
  iVar1 = *(int *)(in_ECX + 0x470);
  if (*(int *)(in_ECX + 0x36c) == 0) {
    iVar5 = CMFCTasksPane::ForceShowNavToolbar(in_ECX);
    if ((iVar5 == 0) && (iVar1 < 2)) {
      uVar6 = *(undefined4 *)(iVar3 + 4);
      goto LAB_1017bfe9;
    }
  }
  uVar6 = *(undefined4 *)(in_ECX + 0x49c);
LAB_1017bfe9:
  FUN_10056072(uVar6);
  UpdateMenuButtonText(iVar3 + 4);
  pcVar2 = *(code **)(*(int *)in_ECX + 0x228);
  guard_check_icall(1);
  this = (CWnd *)(*pcVar2)();
  if (this == (CWnd *)0x0) {
    pcVar2 = *(code **)(*(int *)in_ECX + 0x238);
    guard_check_icall(0,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0x37,0);
    (*pcVar2)();
  }
  else {
    CWnd::SetWindowPos(this,(CWnd *)0x0,-1,-1,-1,-1,0x37);
  }
  return;
}

