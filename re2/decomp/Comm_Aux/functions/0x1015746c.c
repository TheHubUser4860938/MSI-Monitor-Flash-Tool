// rea decompile_all
// name: CMFCRibbonPanelMenuBar::PreTranslateMessage
// address: 0x1015746c
// body: available
// range: 0x1015746c-0x10157523 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCRibbonPanelMenuBar::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCRibbonPanelMenuBar::PreTranslateMessage(CMFCRibbonPanelMenuBar *this,tagMSG *param_1)

{
  code *pcVar1;
  int iVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  CObject *pCVar5;
  tagPOINT local_10;
  CMFCRibbonPanelMenuBar *local_8;
  
  local_8 = this;
  if ((param_1->message == 0x100) && (param_1->wParam == 9)) {
    pcVar1 = *(code **)(*(int *)this + 0x400);
    guard_check_icall(9);
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      return 1;
    }
  }
  if (param_1->message == 0x201) {
    pHVar3 = GetFocus();
    pCVar4 = CWnd::FromHandle(pHVar3);
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonRichEditCtrl_101cb19c,
                                (CObject *)pCVar4);
    if (pCVar5 != (CObject *)0x0) {
      local_10.x = 0;
      local_10.y = 0;
      GetCursorPos(&local_10);
      ScreenToClient(*(HWND *)(this + 0x20),&local_10);
      pcVar1 = *(code **)(**(int **)(pCVar5 + 0x80) + 0x280);
      guard_check_icall(local_10.x,local_10.y);
      (*pcVar1)();
      this = local_8;
    }
  }
  iVar2 = CMFCToolBar::PreTranslateMessage((CMFCToolBar *)this,param_1);
  return iVar2;
}

