// rea decompile_all
// name: FUN_100721ec
// address: 0x100721ec
// body: available
// range: 0x100721ec-0x10072346 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10072342 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


LRESULT FUN_100721ec(int param_1,WPARAM param_2,POINT *param_3)

{
  code *pcVar1;
  LRESULT LVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  CMFCToolBar *pCVar5;
  CObject *this;
  CMFCToolBar *pCVar6;
  tagPOINT local_c;
  
  if (param_1 != 0) {
    LVar2 = CallNextHookEx(DAT_10209ce8,param_1,param_2,(LPARAM)param_3);
    return LVar2;
  }
  if (param_3 != (POINT *)0x0) {
    pCVar5 = DAT_10209cec;
    if (param_2 == 0x200) {
      pHVar3 = WindowFromPoint(*param_3);
      pCVar4 = CWnd::FromHandle(pHVar3);
      pCVar5 = (CMFCToolBar *)
               AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_10201648,(CObject *)pCVar4);
      if (pCVar5 != (CMFCToolBar *)0x0) {
        local_c.x = param_3->x;
        local_c.y = param_3->y;
        ScreenToClient(*(HWND *)(pCVar5 + 0x20),&local_c);
        CMFCToolBar::OnMouseMove(pCVar5,0,local_c.x,local_c.y);
      }
      if ((DAT_10209cec != (CMFCToolBar *)0x0) && (DAT_10209cec != pCVar5)) {
        *(int *)(DAT_10209cec + 0xba8) = 0;
        pCVar6 = DAT_10209cec;
        *(int *)(DAT_10209cec + 0xcfc) = -1;
        *(int *)(pCVar6 + 0xd00) = -1;
        local_c.y = *(LONG *)(DAT_10209cec + 0xbf0);
        if (-1 < local_c.y) {
          *(int *)(DAT_10209cec + 0xbf0) = -1;
          if (pCVar5 != (CMFCToolBar *)0x0) {
            pHVar3 = GetParent(*(HWND *)(pCVar5 + 0x20));
            pCVar4 = CWnd::FromHandle(pHVar3);
            this = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10201784,
                                      (CObject *)pCVar4);
            if ((this != (CObject *)0x0) &&
               (pCVar6 = CMFCPopupMenu::GetParentToolBar((CMFCPopupMenu *)this),
               pCVar6 == DAT_10209cec)) {
              DAT_10209cec = pCVar5;
              return 0;
            }
          }
          pcVar1 = *(code **)(*(int *)DAT_10209cec + 0x3b0);
          guard_check_icall(*(int *)(DAT_10209cec + 0xbf0));
          (*pcVar1)();
          CMFCToolBar::InvalidateButton(DAT_10209cec,local_c.y);
          UpdateWindow(*(HWND *)(DAT_10209cec + 0x20));
        }
      }
    }
    DAT_10209cec = pCVar5;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1001d023();
}

