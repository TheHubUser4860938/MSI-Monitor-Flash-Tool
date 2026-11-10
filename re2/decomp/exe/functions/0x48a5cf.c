// rea decompile_all
// name: CMFCPopupMenuBar::InvokeMenuCommand
// address: 0x48a5cf
// body: available
// range: 0x48a5cf-0x48a8d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPopupMenuBar::InvokeMenuCommand(unsigned int,class
   CMFCToolBarButton const *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCPopupMenuBar::InvokeMenuCommand(CMFCPopupMenuBar *this,uint param_1,CMFCToolBarButton *param_2)

{
  code *pcVar1;
  CMFCRibbonBaseElement *this_00;
  int *piVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  CObject *pCVar5;
  CObject *pCVar6;
  int iVar7;
  CCommandManager *this_01;
  CFrameWnd *pCVar8;
  CObject *pCVar9;
  int iVar10;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  pHVar3 = GetParent(*(HWND *)(this + 0x20));
  pCVar4 = CWnd::FromHandle(pHVar3);
  pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_0060c808,(CObject *)pCVar4);
  if ((pCVar5 == (CObject *)0x0) || (pCVar4 = *(CWnd **)(pCVar5 + 0x134), pCVar4 == (CWnd *)0x0)) {
    pCVar4 = CWnd::GetOwner((CWnd *)this);
  }
  SendMessageW(*(HWND *)(pCVar4 + 0x20),0x362,0xe001,0);
  if (pCVar5 != (CObject *)0x0) {
    pCVar9 = (CObject *)0x0;
    pCVar6 = pCVar5;
    do {
      if (*(int *)(pCVar6 + 0x158) == 0) break;
      pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_0060c580,
                                  *(CObject **)(*(int *)(pCVar6 + 0x158) + 0x6c));
      pCVar6 = (CObject *)CMFCPopupMenu::GetParentPopupMenu((CMFCPopupMenu *)pCVar6);
    } while (pCVar6 != (CObject *)0x0);
    if (pCVar9 != (CObject *)0x0) {
      pcVar1 = *(code **)(*(int *)pCVar9 + 0x360);
      guard_check_icall();
      (*pcVar1)();
    }
  }
  if (param_1 != 0) {
    SetInCommand(this,1);
    FUN_004ed1d4(1);
    if (*(int *)(this + 0xd80) == 0) {
      if (*(int *)(this + 0xd70) == 0) {
        pHVar3 = GetParent(*(HWND *)(this + 0x20));
        pCVar4 = CWnd::FromHandle(pHVar3);
        pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_0060c808,(CObject *)pCVar4
                                   );
        if ((pCVar5 != (CObject *)0x0) &&
           (pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCCustomizeButton_0060c918,
                                        *(CObject **)(pCVar5 + 0x158)), pCVar6 != (CObject *)0x0)) {
          pcVar1 = *(code **)(*(int *)pCVar6 + 0xfc);
          guard_check_icall(this,param_2);
          iVar7 = (*pcVar1)();
          if (iVar7 != 0) goto LAB_0048a6c8;
        }
        CMFCToolBar::AddCommandUsage(param_1);
        if (((pCVar5 != (CObject *)0x0) &&
            (iVar7 = CMFCPopupMenu::PostCommand((CMFCPopupMenu *)pCVar5,param_1), iVar7 == 0)) &&
           ((DAT_00616ad0 == (CUserToolsManager *)0x0 ||
            (iVar7 = CUserToolsManager::InvokeTool(DAT_00616ad0,param_1), iVar7 == 0)))) {
          pCVar4 = CWnd::GetOwner((CWnd *)this);
          PostMessageW(*(HWND *)(pCVar4 + 0x20),0x112 - (0x1ef < param_1 - 0xf000),param_1,0);
          this_00 = *(CMFCRibbonBaseElement **)(pCVar5 + 0x116c);
          if (this_00 != (CMFCRibbonBaseElement *)0x0) {
            CMFCRibbonBaseElement::SetDroppedDown(this_00,(CMFCPopupMenu *)0x0);
            *(undefined4 *)(pCVar5 + 0x116c) = 0;
            CMFCRibbonBaseElement::PostMenuCommand(this_00,param_1);
          }
        }
      }
      else if (DAT_006176b0 != 0) {
        *(uint *)(DAT_006176b0 + 0x58) = param_1;
      }
    }
    else if (pCVar5 != (CObject *)0x0) {
      pcVar1 = *(code **)(*(int *)pCVar5 + 0x200);
      guard_check_icall(param_1);
      (*pcVar1)();
    }
  }
LAB_0048a6c8:
  if (param_2 == (CMFCToolBarButton *)0x0) {
    DAT_0060c6b0 = 0xffffffff;
  }
  else {
    DAT_0060c6b0 = FUN_00450f91(param_2);
  }
  if (*(int *)(this + 0xd78) != 0) {
    pHVar3 = GetParent(*(HWND *)(this + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar3);
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_0060c808,(CObject *)pCVar4);
    if (((pCVar5 != (CObject *)0x0) && (piVar2 = *(int **)(pCVar5 + 0x158), piVar2 != (int *)0x0))
       && (piVar2[0x1b] != 0)) {
      iVar10 = 0;
      piVar2[8] = param_1;
      iVar7 = *piVar2;
      this_01 = (CCommandManager *)FUN_004b1aad();
      iVar10 = CCommandManager::GetCmdImage(this_01,param_1,iVar10);
      guard_check_icall(iVar10);
      (**(code **)(iVar7 + 0xc0))();
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      FUN_0048df70(&local_18);
      InvalidateRect(*(HWND *)(piVar2[0x1b] + 0x20),&local_18,1);
      UpdateWindow(*(HWND *)(piVar2[0x1b] + 0x20));
    }
  }
  pCVar8 = AFXGetParentFrame((CWnd *)this);
  SetInCommand(this,0);
  pcVar1 = *(code **)(*(int *)pCVar8 + 0x60);
  guard_check_icall();
  (*pcVar1)();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

