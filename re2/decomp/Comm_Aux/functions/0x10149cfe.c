// rea decompile_all
// name: FUN_10149cfe
// address: 0x10149cfe
// body: available
// range: 0x10149cfe-0x10149f87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10149f83 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10149cfe(CDC *param_1,CObject *param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  AFX_GLOBAL_DATA *pAVar2;
  HDC hdc;
  CObject *this;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int in_ECX;
  undefined1 local_14 [8];
  CObject *local_c;
  int local_8;
  
  local_c = param_2;
  if (((*(int *)(param_2 + 0x8c) == 0) &&
      (local_8 = in_ECX, iVar1 = FUN_1004e58b(&PTR_s_CMFCPopupMenuBar_10205d98), iVar1 == 0)) &&
     (pAVar2 = GetGlobalData(), 8 < *(int *)(pAVar2 + 0x1ac))) {
    pAVar2 = GetGlobalData();
    iVar1 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar2);
    if (iVar1 == 0) {
      iVar1 = FUN_1004e58b(&PTR_s_CMFCRibbonStatusBar_101d2504);
      if (iVar1 == 0) {
        this = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_10205ab0,param_2);
        if (this != (CObject *)0x0) {
          local_c = (CObject *)CDC::SelectObject(param_1,(CPen *)(local_8 + 0x13c));
          if (local_c != (CObject *)0x0) {
            if (param_7 == 0) {
              piVar4 = (int *)CMFCToolBar::GetButtonSize((CMFCToolBar *)this);
              piVar5 = (int *)CMFCToolBar::GetImageSize((CMFCToolBar *)this);
              if ((*piVar4 - *piVar5) / 2 < 0) {
                iVar1 = 0;
              }
              else {
                piVar4 = (int *)CMFCToolBar::GetButtonSize((CMFCToolBar *)this);
                piVar5 = (int *)CMFCToolBar::GetImageSize((CMFCToolBar *)this);
                iVar1 = (*piVar4 - *piVar5) / 2;
              }
              InflateRect((LPRECT)&param_3,-iVar1,0);
              iVar3 = param_4 + -1 + (param_6 - param_4) / 2;
              param_4 = iVar3;
              CDC::MoveTo(param_1,(int)local_14,param_3);
              CDC::LineTo(param_1,param_5 + -1,iVar3);
              CDC::SelectObject(param_1,(CPen *)(local_8 + 0x1e8));
              iVar3 = iVar3 + 1;
              CDC::MoveTo(param_1,(int)local_14,param_3 + 1);
              iVar1 = param_5;
            }
            else {
              iVar1 = CMFCToolBar::GetButtonSize((CMFCToolBar *)this);
              iVar3 = CMFCToolBar::GetImageSize((CMFCToolBar *)this);
              if ((*(int *)(iVar1 + 4) - *(int *)(iVar3 + 4)) / 2 < 0) {
                iVar1 = 0;
              }
              else {
                iVar1 = CMFCToolBar::GetButtonSize((CMFCToolBar *)this);
                iVar3 = CMFCToolBar::GetImageSize((CMFCToolBar *)this);
                iVar1 = (*(int *)(iVar1 + 4) - *(int *)(iVar3 + 4)) / 2;
              }
              InflateRect((LPRECT)&param_3,0,-iVar1);
              iVar1 = param_3 + -1 + (param_5 - param_3) / 2;
              param_3 = iVar1;
              CDC::MoveTo(param_1,(int)local_14,iVar1);
              CDC::LineTo(param_1,iVar1,param_6 + -1);
              CDC::SelectObject(param_1,(CPen *)(local_8 + 0x1e8));
              CDC::MoveTo(param_1,(int)local_14,iVar1 + 1);
              iVar1 = iVar1 + 1;
              iVar3 = param_6;
            }
            CDC::LineTo(param_1,iVar1,iVar3);
            CDC::SelectObject(param_1,(CPen *)local_c);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_1004886a();
        }
      }
      else if (*(int *)(in_ECX + 0x14) != 0) {
        InflateRect((LPRECT)&param_3,1,5);
        hdc = (HDC)0x0;
        if (param_1 != (CDC *)0x0) {
          hdc = *(HDC *)(param_1 + 4);
        }
        DrawThemeBackground(*(HTHEME *)(in_ECX + 0x14),hdc,1,0,(LPCRECT)&param_3,(LPCRECT)0x0);
        return;
      }
    }
  }
  FUN_10144f66(param_1,local_c,param_3,param_4,param_5,param_6,param_7);
  return;
}

