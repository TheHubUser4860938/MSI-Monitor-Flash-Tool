// rea decompile_all
// name: CMFCPopupMenu::ActivatePopupMenu
// address: 0x4c985d
// body: available
// range: 0x4c985d-0x4c99d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: static int __stdcall CMFCPopupMenu::ActivatePopupMenu(class CFrameWnd *,class
   CMFCPopupMenu *)
   
   Library: Visual Studio 2015 Release */

int CMFCPopupMenu::ActivatePopupMenu(CFrameWnd *param_1,CMFCPopupMenu *param_2)

{
  code *pcVar1;
  CObject *pCVar2;
  int iVar3;
  int *piVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  undefined4 uVar7;
  CMFCShowAllButton local_fc [244];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xf0;
  local_8 = 0x4c986c;
  if (param_2 != (CMFCPopupMenu *)0x0) {
    NotifyParentDlg(param_2,1);
  }
  if (param_1 != (CFrameWnd *)0x0) {
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_005bad18,(CObject *)param_1);
    if (pCVar2 == (CObject *)0x0) {
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_005ba788,(CObject *)param_1);
      if (pCVar2 == (CObject *)0x0) {
        pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleIPFrameWndEx_005c15c4,
                                    (CObject *)param_1);
        if (pCVar2 == (CObject *)0x0) {
          pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleDocIPFrameWndEx_005c1980,
                                      (CObject *)param_1);
          if (pCVar2 == (CObject *)0x0) goto LAB_004c9912;
          iVar3 = ShowPopupMenu(param_2);
        }
        else {
          iVar3 = ShowPopupMenu(param_2);
        }
      }
      else {
        iVar3 = ShowPopupMenu(param_2);
      }
    }
    else {
      iVar3 = CMDIFrameWndEx::ShowPopupMenu((CMDIFrameWndEx *)pCVar2,param_2);
    }
    if (iVar3 == 0) {
      if ((param_2 != (CMFCPopupMenu *)0x0) && (*(int *)(param_2 + 0xf4c) == 0)) {
        CloseMenu(param_2,0);
      }
      goto LAB_004c99ce;
    }
  }
LAB_004c9912:
  if (param_2 != (CMFCPopupMenu *)0x0) {
    pcVar1 = *(code **)(*(int *)param_2 + 0x1c8);
    guard_check_icall();
    piVar4 = (int *)(*pcVar1)();
    pHVar5 = GetParent((HWND)piVar4[8]);
    pCVar6 = CWnd::FromHandle(pHVar5);
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_0060c808,(CObject *)pCVar6);
    if ((((pCVar2 != (CObject *)0x0) && (*(int *)(pCVar2 + 0x158) != 0)) && (piVar4[0x35a] == 0)) &&
       ((piVar4[0x312] == 0 ||
        (pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCShowAllButton_005ba068,
                                     *(CObject **)(piVar4[0x311] + 8)), pCVar2 == (CObject *)0x0))))
    {
      uVar7 = CMFCShowAllButton::CMFCShowAllButton(local_fc);
      local_8 = 0;
      pcVar1 = *(code **)(*piVar4 + 0x344);
      guard_check_icall(uVar7,0xffffffff);
      (*pcVar1)();
      FUN_0048f2f9();
    }
    if (*(int *)(param_2 + 0xf3c) != 0) {
      DAT_00616b18 = param_2;
    }
  }
LAB_004c99ce:
  iVar3 = FUN_0055bae6();
  return iVar3;
}

