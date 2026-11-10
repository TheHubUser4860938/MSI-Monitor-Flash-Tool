// rea decompile_all
// name: CMFCRibbonPanelMenuBar::OnClickButton
// address: 0x10156ca5
// body: available
// range: 0x10156ca5-0x10156dbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonPanelMenuBar::OnClickButton(class CMFCRibbonButton
   *,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonPanelMenuBar::OnClickButton(CMFCRibbonPanelMenuBar *this,CMFCRibbonBaseElement *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  CObject *pCVar6;
  CMFCPopupMenu *pCVar7;
  CFrameWnd *pCVar8;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_18.left = *(LONG *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  local_18.top = *(LONG *)(param_1 + 0x78);
  local_18.right = *(LONG *)(param_1 + 0x7c);
  local_18.bottom = *(LONG *)(param_1 + 0x80);
  RedrawWindow(*(HWND *)(this + 0x20),&local_18,(HRGN)0x0,0x105);
  if ((*(int *)(this + 0xea4) != 0) &&
     (piVar1 = *(int **)(*(int *)(this + 0xea4) + 0x110), piVar1 != (int *)0x0)) {
    pcVar2 = *(code **)(*piVar1 + 0x298);
    guard_check_icall(param_1,this);
    iVar3 = (*pcVar2)();
    if (iVar3 != 0) goto LAB_10156dad;
  }
  iVar3 = CMFCRibbonBaseElement::NotifyCommand(param_1,1);
  if (*(int *)(this + 0xde8) != 0) {
    pHVar4 = GetParent(*(HWND *)(this + 0x20));
    pCVar5 = CWnd::FromHandle(pHVar4);
    pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonMiniToolBar_101f3918,
                                (CObject *)pCVar5);
    if (pCVar6 != (CObject *)0x0) goto LAB_10156dad;
  }
  if (iVar3 != 0) {
    pHVar4 = GetParent(*(HWND *)(this + 0x20));
    pCVar5 = CWnd::FromHandle(pHVar4);
    pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonPanelMenu_101f7a74,
                                (CObject *)pCVar5);
    if (pCVar6 != (CObject *)0x0) {
      pCVar7 = CMFCPopupMenu::GetParentPopupMenu((CMFCPopupMenu *)pCVar6);
      pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonPanelMenu_101f7a74,
                                  (CObject *)pCVar7);
      if (pCVar6 != (CObject *)0x0) {
        *(undefined4 *)(pCVar6 + 0x2038) = 1;
      }
    }
  }
  pCVar8 = AFXGetParentFrame((CWnd *)this);
  pcVar2 = *(code **)(*(int *)pCVar8 + 0x60);
  guard_check_icall();
  (*pcVar2)();
LAB_10156dad:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

