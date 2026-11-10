// rea decompile_all
// name: CMFCPopupMenu::ActivatePopupMenu
// address: 0x100b57b6
// body: available
// range: 0x100b57b6-0x100b592e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  local_8 = 0x100b57c5;
  if (param_2 != (CMFCPopupMenu *)0x0) {
    NotifyParentDlg(param_2,1);
  }
  if (param_1 != (CFrameWnd *)0x0) {
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_101e9630,(CObject *)param_1);
    if (pCVar2 == (CObject *)0x0) {
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_101e90a0,(CObject *)param_1);
      if (pCVar2 == (CObject *)0x0) {
        pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleIPFrameWndEx_101e9c40,
                                    (CObject *)param_1);
        if (pCVar2 == (CObject *)0x0) {
          pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleDocIPFrameWndEx_101e9ff8,
                                      (CObject *)param_1);
          if (pCVar2 == (CObject *)0x0) goto LAB_100b586b;
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
      goto LAB_100b5927;
    }
  }
LAB_100b586b:
  if (param_2 != (CMFCPopupMenu *)0x0) {
    pcVar1 = *(code **)(*(int *)param_2 + 0x1c8);
    guard_check_icall();
    piVar4 = (int *)(*pcVar1)();
    pHVar5 = GetParent((HWND)piVar4[8]);
    pCVar6 = CWnd::FromHandle(pHVar5);
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_1023d77c,(CObject *)pCVar6);
    if ((((pCVar2 != (CObject *)0x0) && (*(int *)(pCVar2 + 0x158) != 0)) && (piVar4[0x35a] == 0)) &&
       ((piVar4[0x312] == 0 ||
        (pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCShowAllButton_101ee738,
                                     *(CObject **)(piVar4[0x311] + 8)), pCVar2 == (CObject *)0x0))))
    {
      uVar7 = CMFCShowAllButton::CMFCShowAllButton(local_fc);
      local_8 = 0;
      pcVar1 = *(code **)(*piVar4 + 0x344);
      guard_check_icall(uVar7,0xffffffff);
      (*pcVar1)();
      FUN_10113e88();
    }
    if (*(int *)(param_2 + 0xf3c) != 0) {
      DAT_1024709c = param_2;
    }
  }
LAB_100b5927:
  iVar3 = FUN_1018015d();
  return iVar3;
}

