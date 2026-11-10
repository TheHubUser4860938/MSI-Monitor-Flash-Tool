// rea decompile_all
// name: CMFCRibbonPanelMenuBar::OnMouseMove
// address: 0x4af309
// body: available
// range: 0x4af309-0x4af4df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonPanelMenuBar::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonPanelMenuBar::OnMouseMove
          (CMFCRibbonPanelMenuBar *this,uint param_1,int param_3,int param_4)

{
  CSize *this_00;
  code *pcVar1;
  CMFCRibbonPanel *this_01;
  AFX_GLOBAL_DATA *pAVar2;
  int iVar3;
  CMFCRibbonBaseElement *pCVar4;
  long lVar5;
  undefined1 local_14 [12];
  int *local_8;
  
  CMFCPopupMenuBar::OnMouseMove((CMFCPopupMenuBar *)this,param_1,param_3,param_4);
  if ((*(int *)(this + 0xea4) != 0) && (pAVar2 = GetGlobalData(), *(int *)(pAVar2 + 0x19c) != 0)) {
    pcVar1 = *(code **)(**(int **)(this + 0xea4) + 0xbc);
    guard_check_icall(param_3,param_4);
    iVar3 = (*pcVar1)();
    if ((iVar3 != -1) && (iVar3 != *(int *)(this + 0xc0c))) {
      *(int *)(this + 0xc0c) = iVar3;
      SetTimer(*(HWND *)(this + 0x20),0xec07,500,(TIMERPROC)0x0);
    }
  }
  this_01 = *(CMFCRibbonPanel **)(this + 0xea4);
  if ((((this_01 == (CMFCRibbonPanel *)0x0) || (*(int *)(this_01 + 0x78) != 0)) ||
      (pCVar4 = CMFCRibbonPanel::GetDroppedDown(this_01), pCVar4 == (CMFCRibbonBaseElement *)0x0))
     && ((*(CMFCRibbonCategory **)(this + 0xeb4) == (CMFCRibbonCategory *)0x0 ||
         (pCVar4 = CMFCRibbonCategory::GetDroppedDown(*(CMFCRibbonCategory **)(this + 0xeb4)),
         pCVar4 == (CMFCRibbonBaseElement *)0x0)))) {
    this_00 = (CSize *)(this + 0xe18);
    iVar3 = CSize::operator!=(this_00,(tagSIZE)0xffffffffffffffff);
    if (iVar3 != 0) {
      local_14._8_4_ = (HWND)0x0;
      local_8 = (int *)0x0;
      GetCursorPos((LPPOINT)(local_14 + 8));
      lVar5 = _labs(local_14._8_4_ - *(int *)this_00);
      if ((lVar5 < 10) && (lVar5 = _labs((int)local_8 - *(int *)(this + 0xe1c)), lVar5 < 10)) {
        return;
      }
      *(undefined4 *)this_00 = 0xffffffff;
      *(undefined4 *)(this + 0xe1c) = 0xffffffff;
    }
    if ((param_3 == -1) && (param_4 == -1)) {
      *(undefined4 *)(this + 0xdd0) = 0;
    }
    else if (*(int *)(this + 0xdd0) == 0) {
      local_14._8_4_ = *(undefined4 *)(this + 0x20);
      *(undefined4 *)(this + 0xdd0) = 1;
      local_14._0_4_ = 0x10;
      local_14._4_4_ = 2;
      TrackMouseEvent((LPTRACKMOUSEEVENT)local_14);
      if (((*(int *)(this + 0xeb4) == 0) &&
          (pCVar4 = CMFCRibbonPanel::GetPressed(*(CMFCRibbonPanel **)(this + 0xea4)),
          pCVar4 != (CMFCRibbonBaseElement *)0x0)) && ((param_1 & 1) == 0)) {
        *(undefined4 *)(pCVar4 + 0xd0) = 0;
      }
    }
    if (*(int **)(this + 0xeb4) == (int *)0x0) {
      local_8 = *(int **)(this + 0xea4);
      if (local_8 != (int *)0x0) {
        iVar3 = local_8[0x1a];
        pcVar1 = *(code **)(*local_8 + 0x114);
        guard_check_icall(1,param_3,param_4);
        (*pcVar1)();
        if (iVar3 == 0) {
          RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x185);
        }
      }
    }
    else {
      pcVar1 = *(code **)(**(int **)(this + 0xeb4) + 0xc4);
      guard_check_icall(param_3,param_4);
      (*pcVar1)();
    }
  }
  return;
}

