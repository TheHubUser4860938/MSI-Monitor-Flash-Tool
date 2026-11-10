// rea decompile_all
// name: FUN_10087972
// address: 0x10087972
// body: available
// range: 0x10087972-0x10087ab3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10087aaf to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10087972(CControlBar *param_1,int param_2,int param_3)

{
  code *pcVar1;
  CFrameWnd *this;
  int iVar2;
  uint uVar3;
  
  if (param_1 == (CControlBar *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10012a3f();
  }
  this = CControlBar::GetDockingFrame(param_1);
  if (param_3 == 0) {
    CWnd::SetWindowPos((CWnd *)param_1,(CWnd *)0x0,0,0,0,0,
                       (-(uint)(param_2 != 0) & 0xffffffc0) + 0x97);
    pcVar1 = *(code **)(*(int *)param_1 + 0x18c);
    guard_check_icall(param_2);
    (*pcVar1)();
    if ((param_2 != 0) || (iVar2 = CControlBar::IsFloating(param_1), iVar2 == 0)) {
      pcVar1 = *(code **)(*(int *)this + 0x178);
      guard_check_icall(0);
      (*pcVar1)();
    }
  }
  else {
    pcVar1 = *(code **)(*(int *)param_1 + 0x18c);
    guard_check_icall(param_2);
    (*pcVar1)();
    *(uint *)(this + 0x118) = *(uint *)(this + 0x118) | 0xc;
  }
  iVar2 = CControlBar::IsFloating(param_1);
  if (iVar2 == 0) {
    return;
  }
  if (*(int **)(param_1 + 0xbc) == (int *)0x0) {
    uVar3 = (uint)(param_2 != 0);
  }
  else {
    pcVar1 = *(code **)(**(int **)(param_1 + 0xbc) + 0x1a8);
    guard_check_icall();
    uVar3 = (*pcVar1)();
  }
  if (uVar3 == 1) {
    if (param_2 != 0) {
      *(undefined4 *)(this + 0xcc) = 0xffffffff;
      if (param_3 == 0) {
        iVar2 = 8;
        goto LAB_10087a84;
      }
      *(undefined4 *)(this + 0xcc) = 8;
      goto LAB_10087a93;
    }
  }
  else if (uVar3 == 0) {
    *(undefined4 *)(this + 0xcc) = 0xffffffff;
    if (param_3 != 0) {
      *(undefined4 *)(this + 0xcc) = 0;
      return;
    }
    iVar2 = 0;
LAB_10087a84:
    CWnd::ShowWindow((CWnd *)this,iVar2);
    return;
  }
  if (param_3 != 0) {
    return;
  }
LAB_10087a93:
  pcVar1 = *(code **)(*(int *)this + 0x178);
  guard_check_icall(0);
  (*pcVar1)();
  return;
}

