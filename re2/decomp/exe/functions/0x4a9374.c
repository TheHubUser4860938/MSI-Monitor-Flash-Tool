// rea decompile_all
// name: FUN_004a9374
// address: 0x4a9374
// body: available
// range: 0x4a9374-0x4a9639 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4a9635 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a9374(int param_1,ulong param_2,CMFCAutoHideBar *param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  CWnd *pCVar3;
  CDockingManager *this;
  CPaneDivider *pCVar4;
  ulong uVar5;
  UINT_PTR UVar6;
  CObject *pCVar7;
  CDockablePane *in_ECX;
  CRuntimeClass *pCVar8;
  tagRECT *ptVar9;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  pcVar1 = *(code **)(*(int *)in_ECX + 0x1dc);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (param_1 != iVar2) {
    pcVar1 = *(code **)(*(int *)in_ECX + 0x19c);
    guard_check_icall();
    pCVar3 = (CWnd *)(*pcVar1)();
    this = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_0060c45c,pCVar3);
    if (param_1 == 0) {
      if (*(int **)(in_ECX + 0x330) != (int *)0x0) {
        pcVar1 = *(code **)(**(int **)(in_ECX + 0x330) + 0x1a0);
        guard_check_icall();
        pCVar7 = (CObject *)(*pcVar1)();
        pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CAutoHideDockSite_005c83f8,pCVar7);
        if (pCVar7 != (CObject *)0x0) {
          CAutoHideDockSite::UnSetAutoHideMode
                    ((CAutoHideDockSite *)pCVar7,*(CMFCAutoHideBar **)(in_ECX + 0x330));
        }
      }
    }
    else {
      *(undefined4 *)(in_ECX + 0x2f8) = 1;
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetWindowRect(*(HWND *)(in_ECX + 0x20),&local_18);
      ptVar9 = &local_18;
      pcVar1 = *(code **)(*(int *)in_ECX + 0x19c);
      guard_check_icall();
      pCVar3 = (CWnd *)(*pcVar1)();
      CWnd::ScreenToClient(pCVar3,ptVar9);
      pcVar1 = *(code **)(*(int *)in_ECX + 0x31c);
      guard_check_icall();
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)in_ECX + 0x240);
      guard_check_icall(0);
      (*pcVar1)();
      pCVar4 = CDockablePane::GetDefaultPaneDivider(in_ECX);
      if (pCVar4 != (CPaneDivider *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00429127();
      }
      pCVar8 = (CRuntimeClass *)0x0;
      pcVar1 = *(code **)(*(int *)in_ECX + 0x19c);
      guard_check_icall();
      pCVar3 = (CWnd *)(*pcVar1)();
      pCVar4 = CDockablePane::CreateDefaultPaneDivider(param_2,pCVar3,pCVar8);
      if (pCVar4 == (CPaneDivider *)0x0) {
        pcVar1 = *(code **)(*(int *)in_ECX + 0x1f8);
        guard_check_icall();
        (*pcVar1)();
      }
      else {
        *(undefined4 *)(in_ECX + 0x350) = *(undefined4 *)(pCVar4 + 0x20);
        *(undefined4 *)(pCVar4 + 0x130) = 1;
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x270);
        guard_check_icall();
        (*pcVar1)();
        pcVar1 = *(code **)(*(int *)in_ECX + 0x1e0);
        guard_check_icall(param_2);
        (*pcVar1)();
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x1e0);
        guard_check_icall(param_2);
        (*pcVar1)();
        CDockingManager::AutoHidePane(this,in_ECX,param_3);
        uVar5 = CWnd::GetExStyle((CWnd *)in_ECX);
        if ((uVar5 & 0x10000000) == 0) {
          CWnd::ShowWindow((CWnd *)in_ECX,5);
        }
        else {
          RedrawWindow(*(HWND *)(pCVar4 + 0x20),(RECT *)0x0,(HRGN)0x0,0x585);
          RedrawWindow(*(HWND *)(in_ECX + 0x20),(RECT *)0x0,(HRGN)0x0,0x585);
          pcVar1 = *(code **)(*(int *)in_ECX + 0x19c);
          guard_check_icall();
          iVar2 = (*pcVar1)();
          RedrawWindow(*(HWND *)(iVar2 + 0x20),&local_18,(HRGN)0x0,0x181);
        }
        if (param_4 == 0) {
          pcVar1 = *(code **)(*(int *)in_ECX + 0x344);
          guard_check_icall(0);
          (*pcVar1)();
        }
        else {
          UVar6 = SetTimer(*(HWND *)(in_ECX + 0x20),0xec03,DAT_0060c774,(TIMERPROC)0x0);
          *(UINT_PTR *)(in_ECX + 0x2fc) = UVar6;
          pcVar1 = *(code **)(*(int *)in_ECX + 0x344);
          guard_check_icall(0,1);
          (*pcVar1)();
          pcVar1 = *(code **)(*(int *)in_ECX + 0x19c);
          guard_check_icall();
          pCVar3 = (CWnd *)(*pcVar1)();
          CWnd::SetFocus(pCVar3);
        }
        pcVar1 = *(code **)(*(int *)in_ECX + 0x238);
        guard_check_icall(0,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0x2f,0);
        (*pcVar1)();
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

