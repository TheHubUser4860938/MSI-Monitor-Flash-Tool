// rea decompile_all
// name: CMFCRibbonPanel::Highlight
// address: 0x101084be
// body: available
// range: 0x101084be-0x10108766 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonPanel::Highlight(int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonPanel::Highlight(CMFCRibbonPanel *this,int param_1,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  CMFCRibbonBar *this_00;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *local_c;
  
  iVar1 = *(int *)(this + 0x68);
  if (param_1 == 0) {
    *(undefined4 *)(this + 0xa0) = 0;
  }
  iVar6 = *(int *)(this + 0xa0);
  *(int *)(this + 0x68) = param_1;
  local_c = (int *)0x0;
  if (param_1 != 0) {
    pcVar2 = *(code **)(*(int *)this + 0xb8);
    guard_check_icall(param_3,param_4,0);
    local_c = (int *)(*pcVar2)();
    if (local_c != (int *)0x0) {
      if (iVar6 != 0) {
        pcVar2 = *(code **)(*local_c + 0xd8);
        guard_check_icall();
        iVar5 = (*pcVar2)();
        if (iVar5 == 0) goto LAB_1010854a;
      }
      pcVar2 = *(code **)(*local_c + 0x218);
      guard_check_icall(param_3,param_4);
      (*pcVar2)();
    }
  }
LAB_1010854a:
  bVar3 = false;
  bVar4 = false;
  if (local_c != *(int **)(this + 0x2dc)) {
    if (((*(int *)(this + 0x108) != 0) &&
        (this_00 = *(CMFCRibbonBar **)(*(int *)(this + 0x108) + 0x53c),
        this_00 != (CMFCRibbonBar *)0x0)) && (local_c != (int *)0x0)) {
      CMFCRibbonBar::PopTooltip(this_00);
    }
    if (*(int *)(this + 0x10c) != 0) {
      PopTooltip();
    }
    if (*(int *)(this + 0x2dc) != 0) {
      *(undefined4 *)(*(int *)(this + 0x2dc) + 200) = 0;
      pcVar2 = *(code **)(**(int **)(this + 0x2dc) + 0x220);
      guard_check_icall(0);
      (*pcVar2)();
      if ((*(int *)(this + 0x78) != 0) && (*(int *)(*(int *)(this + 0x2dc) + 0xcc) != 0)) {
        *(undefined4 *)(*(int *)(this + 0x2dc) + 0xcc) = 0;
        bVar4 = true;
        pcVar2 = *(code **)(**(int **)(this + 0x2dc) + 0x224);
        guard_check_icall(0);
        (*pcVar2)();
      }
      pcVar2 = *(code **)(*(int *)this + 0x108);
      guard_check_icall(*(undefined4 *)(this + 0x2dc));
      (*pcVar2)();
      *(undefined4 *)(this + 0x2dc) = 0;
    }
    bVar3 = true;
  }
  if (local_c != (int *)0x0) {
    if ((*(int *)(this + 0x78) == 0) && (iVar6 != 0)) {
      pcVar2 = *(code **)(*local_c + 0xd8);
      guard_check_icall();
      iVar6 = (*pcVar2)();
      if (iVar6 == 0) goto LAB_101086c3;
    }
    *(int **)(this + 0x2dc) = local_c;
    if (local_c[0x32] == 0) {
      pcVar2 = *(code **)(*local_c + 0x220);
      guard_check_icall(1);
      (*pcVar2)();
      *(undefined4 *)(*(int *)(this + 0x2dc) + 200) = 1;
      if (bVar4) {
        *(undefined4 *)(*(int *)(this + 0x2dc) + 0xcc) = 1;
        pcVar2 = *(code **)(**(int **)(this + 0x2dc) + 0x224);
        guard_check_icall(1);
        (*pcVar2)();
      }
      pcVar2 = *(code **)(*(int *)this + 0x108);
      guard_check_icall(*(undefined4 *)(this + 0x2dc));
      (*pcVar2)();
    }
  }
LAB_101086c3:
  if ((iVar1 != param_1) && (*(int *)(this + 0x108) != 0)) {
    pcVar2 = *(code **)(*(int *)this + 0xa4);
    guard_check_icall();
    iVar6 = (*pcVar2)();
    if (iVar6 != 0) {
      pcVar2 = *(code **)(*(int *)this + 0xa4);
      guard_check_icall();
      iVar6 = (*pcVar2)();
      RedrawWindow(*(HWND *)(iVar6 + 0x20),(RECT *)(this + 0xcc),(HRGN)0x0,0x105);
    }
  }
  if ((*(int *)(this + 0x80) != 0) && (iVar1 != param_1)) {
    CMFCRibbonPanelMenuBar::SetActive
              (*(CMFCRibbonPanelMenuBar **)(this + 0x10c),*(int *)(this + 0x68));
  }
  if ((bVar3) && (*(int **)(this + 0x10c) != (int *)0x0)) {
    pcVar2 = *(code **)(**(int **)(this + 0x10c) + 0x454);
    guard_check_icall(*(undefined4 *)(this + 0x2dc));
    (*pcVar2)();
  }
  return;
}

