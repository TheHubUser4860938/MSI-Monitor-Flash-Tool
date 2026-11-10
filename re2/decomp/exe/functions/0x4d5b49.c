// rea decompile_all
// name: FUN_004d5b49
// address: 0x4d5b49
// body: available
// range: 0x4d5b49-0x4d5d3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4d5d37 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d5b49(void)

{
  CWinApp *this;
  int *piVar1;
  int iVar2;
  AFX_MODULE_STATE *pAVar3;
  CWnd *this_00;
  CFrameWnd *pCVar4;
  CFrameWnd *in_ECX;
  code *pcVar5;
  CWinApp *local_c;
  CFrameWnd *local_8;
  
  pcVar5 = *(code **)(in_ECX + 0xe0);
  if (pcVar5 != (code *)0x0) {
    guard_check_icall();
    (*pcVar5)();
    return;
  }
  pcVar5 = *(code **)(*(int *)in_ECX + 0x16c);
  local_8 = in_ECX;
  guard_check_icall();
  piVar1 = (int *)(*pcVar5)();
  if (piVar1 != (int *)0x0) {
    pcVar5 = *(code **)(*piVar1 + 0xd4);
    guard_check_icall();
    iVar2 = (*pcVar5)();
    if (iVar2 == 0) {
      return;
    }
  }
  pAVar3 = AfxGetModuleState();
  local_c = *(CWinApp **)(pAVar3 + 4);
  if ((local_c != (CWinApp *)0x0) && (*(CFrameWnd **)(local_c + 0x20) == in_ECX)) {
    pcVar5 = *(code **)(*(int *)local_c + 0xfc);
    guard_check_icall();
    local_8 = (CFrameWnd *)(*pcVar5)();
    if (local_8 != (CFrameWnd *)0x0) {
      pcVar5 = *(code **)(*(int *)local_8 + 0x30);
      guard_check_icall();
      iVar2 = (*pcVar5)();
      if (iVar2 != 0) {
        pcVar5 = *(code **)(*(int *)local_8 + 0x44);
        guard_check_icall();
        (*pcVar5)();
        pcVar5 = *(code **)(*(int *)local_8 + 0x38);
        guard_check_icall();
        (*pcVar5)();
      }
    }
    if (piVar1 == (int *)0x0) {
      pcVar5 = *(code **)(*(int *)local_c + 0xb0);
      guard_check_icall();
      iVar2 = (*pcVar5)();
      if (iVar2 == 0) {
        return;
      }
    }
    if (local_8 != (CFrameWnd *)0x0) {
      pcVar5 = *(code **)(*(int *)local_8 + 0x30);
      guard_check_icall();
      iVar2 = (*pcVar5)();
      if (iVar2 == 0) {
        pcVar5 = *(code **)(*(int *)local_8 + 0x58);
        guard_check_icall();
        (*pcVar5)();
      }
    }
    this = local_c;
    CWinApp::HideApplication(local_c);
    CWinApp::CloseAllDocuments(this,0);
    iVar2 = AfxOleCanExitApp();
    if (iVar2 == 0) {
      AfxOleSetUserCtrl(0);
      return;
    }
    pAVar3 = AfxGetModuleState();
    if ((pAVar3[0x14] == (AFX_MODULE_STATE)0x0) && (*(int *)(this + 0x20) == 0)) {
      AfxPostQuitMessage(0);
      return;
    }
  }
  if ((piVar1 != (int *)0x0) && (piVar1[0x27] != 0)) {
    pcVar5 = *(code **)(*piVar1 + 0x68);
    guard_check_icall();
    local_c = (CWinApp *)(*pcVar5)();
    do {
      if (local_c == (CWinApp *)0x0) {
        pcVar5 = *(code **)(*piVar1 + 0x84);
        guard_check_icall();
        goto LAB_004d5d2e;
      }
      pcVar5 = *(code **)(*piVar1 + 0x6c);
      guard_check_icall(&local_c);
      this_00 = (CWnd *)(*pcVar5)();
      if (this_00 == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00429127();
      }
      pCVar4 = CWnd::GetParentFrame(this_00);
    } while (pCVar4 == in_ECX);
    pcVar5 = *(code **)(*piVar1 + 0xdc);
    guard_check_icall();
    (*pcVar5)();
  }
  pcVar5 = *(code **)(*(int *)in_ECX + 0x60);
  guard_check_icall();
LAB_004d5d2e:
  (*pcVar5)();
  return;
}

