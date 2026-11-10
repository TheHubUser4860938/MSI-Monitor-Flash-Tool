// rea decompile_all
// name: CDockablePane::OnLButtonDblClk
// address: 0x4a7464
// body: available
// range: 0x4a7464-0x4a76a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CDockablePane::OnLButtonDblClk(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDockablePane::OnLButtonDblClk(CDockablePane *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  code *pcVar1;
  CMFCCaptionButton *pCVar2;
  int iVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  CObject *pCVar6;
  BOOL BVar7;
  CPaneContainer *pCVar8;
  undefined4 uVar9;
  tagPOINT local_18;
  int local_10;
  CObject *local_c;
  CObject *local_8;
  
  local_18.x = param_3;
  local_18.y = param_4;
  ClientToScreen(*(HWND *)(this + 0x20),&local_18);
  pCVar2 = FindButton(this,local_18.x,local_18.y);
  if (pCVar2 == (CMFCCaptionButton *)0x0) {
    pcVar1 = *(code **)(*(int *)this + 0x1dc);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) {
      pcVar1 = *(code **)(*(int *)this + 0x16c);
      local_8 = (CObject *)this;
      guard_check_icall();
      iVar3 = (*pcVar1)();
      if (iVar3 != 0) {
        pHVar4 = GetParent(*(HWND *)(this + 0x20));
        pCVar5 = CWnd::FromHandle(pHVar4);
        pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCBaseTabCtrl_005b93c4,
                                    (CObject *)pCVar5);
        if (pCVar6 != (CObject *)0x0) {
          pHVar4 = GetParent(*(HWND *)(pCVar6 + 0x20));
          pCVar5 = CWnd::FromHandle(pHVar4);
          local_8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_0060c780,
                                       (CObject *)pCVar5);
        }
      }
      uVar9 = 0;
      pcVar1 = *(code **)(*(int *)this + 0x228);
      guard_check_icall(0);
      pCVar6 = (CObject *)(*pcVar1)();
      pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMultiPaneFrameWnd_0060c89c,pCVar6);
      if (pCVar6 == (CObject *)0x0) {
        BVar7 = IsWindow(*(HWND *)(this + 0x350));
        if (BVar7 == 0) {
          pcVar1 = *(code **)(*(int *)this + 700);
          guard_check_icall(uVar9);
          (*pcVar1)();
        }
        else {
          pCVar5 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0x210));
          local_c = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMultiPaneFrameWnd_0060c89c,
                                       (CObject *)pCVar5);
          if (local_c != (CObject *)0x0) {
            pCVar8 = CRecentDockSiteInfo::GetRecentPaneContainer
                               ((CRecentDockSiteInfo *)(this + 0x1e4),0);
            if ((pCVar8 != (CPaneContainer *)0x0) ||
               (pCVar8 = CRecentDockSiteInfo::GetRecentTabContainer
                                   ((CRecentDockSiteInfo *)(this + 0x1e4),0),
               pCVar8 != (CPaneContainer *)0x0)) {
              pcVar1 = *(code **)(*(int *)this + 0x2c0);
              guard_check_icall(this + 0x1e8,2);
              (*pcVar1)();
              pcVar1 = *(code **)(*(int *)this + 700);
              guard_check_icall();
              (*pcVar1)();
              pcVar1 = *(code **)(*(int *)this + 0x240);
              guard_check_icall(0);
              (*pcVar1)();
              pHVar4 = *(HWND *)(this + 0x20);
              pcVar1 = *(code **)(*(int *)this + 0x1d8);
              guard_check_icall();
              local_10 = (*pcVar1)();
              pcVar1 = *(code **)(*(int *)local_c + 0x250);
              pCVar6 = local_8;
              guard_check_icall(local_8);
              (*pcVar1)();
              BVar7 = IsWindow(pHVar4);
              if (BVar7 != 0) {
                pcVar1 = *(code **)(*(int *)this + 0x2c4);
                guard_check_icall(pCVar6);
                (*pcVar1)();
              }
              if (local_10 == 0) {
                return;
              }
              CWnd::SetFocus((CWnd *)local_c);
              return;
            }
          }
          CPane::OnLButtonDblClk((CPane *)this,param_1,param_3,param_4);
        }
      }
      else {
        pcVar1 = *(code **)(*(int *)this + 700);
        guard_check_icall(uVar9);
        (*pcVar1)();
        pcVar1 = *(code **)(*(int *)pCVar6 + 0x254);
        guard_check_icall(local_8);
        (*pcVar1)();
      }
    }
    else {
      FUN_0042ec70();
    }
  }
  else {
    FUN_0042ec70();
  }
  return;
}

