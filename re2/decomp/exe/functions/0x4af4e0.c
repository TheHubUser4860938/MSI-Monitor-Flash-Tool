// rea decompile_all
// name: CMFCRibbonPanelMenu::OnMouseWheel
// address: 0x4af4e0
// body: available
// range: 0x4af4e0-0x4af5ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCRibbonPanelMenu::OnMouseWheel(unsigned int,short,class CPoint)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCRibbonPanelMenu::OnMouseWheel(CMFCRibbonPanelMenu *this,undefined4 param_1,ushort param_2)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  lVar3 = _labs((int)(short)param_2);
  local_8 = lVar3 / 0x78;
  iVar1 = *(int *)(this + 0x1ec4);
  if (0 < local_8) {
    do {
      pcVar2 = *(code **)(*(int *)this + 0x1e4);
      guard_check_icall();
      iVar4 = (*pcVar2)();
      if (iVar4 == 0) {
        pcVar2 = *(code **)(*(int *)this + 0x1e8);
        guard_check_icall();
        iVar4 = (*pcVar2)();
        if (iVar4 != 0) goto LAB_004af55d;
        CMFCRibbonPanelMenuBar::OnVScroll
                  ((CMFCRibbonPanelMenuBar *)(this + 0x1178),(uint)(param_2 >> 0xf),0,
                   (CScrollBar *)(this + 0x1f98));
      }
      else {
LAB_004af55d:
        iVar4 = *(int *)(this + 0x1ec4);
        if ((short)param_2 < 1) {
          pcVar2 = *(code **)(*(int *)this + 0x1e8);
          guard_check_icall();
          iVar5 = (*pcVar2)();
          if (iVar5 != 0) {
            iVar4 = iVar4 + 1;
            goto LAB_004af59e;
          }
        }
        else {
          pcVar2 = *(code **)(*(int *)this + 0x1e4);
          guard_check_icall();
          iVar5 = (*pcVar2)();
          if (iVar5 != 0) {
            iVar4 = iVar4 + -1;
LAB_004af59e:
            CMFCPopupMenuBar::SetOffset((CMFCPopupMenuBar *)(this + 0x1178),iVar4);
            CMFCPopupMenu::AdjustScroll((CMFCPopupMenu *)this,0);
          }
        }
      }
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  if (iVar1 != *(int *)(this + 0x1ec4)) {
    RedrawWindow(*(HWND *)(this + 0x1198),(RECT *)0x0,(HRGN)0x0,0x105);
  }
  return 1;
}

