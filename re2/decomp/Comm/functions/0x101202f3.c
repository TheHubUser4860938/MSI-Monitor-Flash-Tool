// rea decompile_all
// name: CMFCRibbonPanelMenuBar::OnLButtonDown
// address: 0x101202f3
// body: available
// range: 0x101202f3-0x101203fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonPanelMenuBar::OnLButtonDown(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonPanelMenuBar::OnLButtonDown
          (CMFCRibbonPanelMenuBar *this,undefined4 param_1,undefined4 param_3,undefined4 param_4)

{
  CMFCRibbonButton *pCVar1;
  int *piVar2;
  BOOL BVar3;
  int iVar4;
  code *pcVar5;
  CMFCRibbonPanelMenuBar *local_8;
  
  local_8 = this;
  CMFCPopupMenuBar::OnLButtonDown((CMFCPopupMenuBar *)this,param_1,param_3,param_4);
  pCVar1 = GetDroppedDown(this);
  if (pCVar1 != (CMFCRibbonButton *)0x0) {
    pcVar5 = *(code **)(*(int *)pCVar1 + 0x198);
    guard_check_icall();
    (*pcVar5)();
  }
  OnMouseMove(this,param_1,param_3,param_4);
  *(undefined4 *)(this + 0xeb8) = 0;
  SetRectEmpty((LPRECT)(this + 0xe08));
  local_8 = *(CMFCRibbonPanelMenuBar **)(this + 0x20);
  if (*(int **)(this + 0xeb4) == (int *)0x0) {
    pcVar5 = *(code **)(**(int **)(this + 0xea4) + 0x118);
  }
  else {
    pcVar5 = *(code **)(**(int **)(this + 0xeb4) + 0xbc);
  }
  guard_check_icall(param_3,param_4);
  piVar2 = (int *)(*pcVar5)();
  BVar3 = IsWindow((HWND)local_8);
  if ((BVar3 != 0) && (*(int **)(this + 0xeb8) = piVar2, piVar2 != (int *)0x0)) {
    local_8 = (CMFCRibbonPanelMenuBar *)0x64;
    pcVar5 = *(code **)(*piVar2 + 0x14c);
    guard_check_icall(&local_8);
    iVar4 = (*pcVar5)();
    if (iVar4 != 0) {
      SetTimer(*(HWND *)(this + 0x20),0xec1d,(UINT)local_8,(TIMERPROC)0x0);
      iVar4 = *(int *)(this + 0xeb8);
      *(undefined4 *)(this + 0xdf4) = 1;
      *(undefined4 *)(this + 0xe08) = *(undefined4 *)(iVar4 + 0x74);
      *(undefined4 *)(this + 0xe0c) = *(undefined4 *)(iVar4 + 0x78);
      *(undefined4 *)(this + 0xe10) = *(undefined4 *)(iVar4 + 0x7c);
      *(undefined4 *)(this + 0xe14) = *(undefined4 *)(iVar4 + 0x80);
    }
  }
  return;
}

