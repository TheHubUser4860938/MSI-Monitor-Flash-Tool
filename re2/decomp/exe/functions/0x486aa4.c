// rea decompile_all
// name: CMFCBaseTabCtrl::OnLButtonDown
// address: 0x486aa4
// body: available
// range: 0x486aa4-0x486c94 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCBaseTabCtrl::OnLButtonDown(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCBaseTabCtrl::OnLButtonDown(CMFCBaseTabCtrl *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  code *pcVar1;
  POINT pt;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CWnd *this_00;
  bool bVar6;
  undefined4 *puVar7;
  
  *(undefined4 *)(this + 500) = 0;
  FUN_0042ec70();
  pt.y = param_4;
  pt.x = param_3;
  BVar2 = PtInRect((RECT *)(this + 0x200),pt);
  if (BVar2 == 0) {
    puVar7 = &param_3;
    pcVar1 = *(code **)(*(int *)this + 0x218);
    guard_check_icall(puVar7);
    iVar3 = (*pcVar1)();
    *(int *)(this + 0x114) = iVar3;
    if (-1 < iVar3) {
      bVar6 = false;
      pcVar1 = *(code **)(*(int *)this + 0x2cc);
      guard_check_icall(puVar7);
      iVar4 = (*pcVar1)();
      if (iVar4 == 0) {
        pcVar1 = *(code **)(*(int *)this + 0x218);
        guard_check_icall(&param_3);
        iVar4 = (*pcVar1)();
        if ((iVar4 < 0) || (iVar4 == *(int *)(this + 0xc0))) {
          if (iVar4 == *(int *)(this + 0xc0)) {
            pcVar1 = *(code **)(*(int *)this + 0x1b0);
            guard_check_icall(iVar4);
            this_00 = (CWnd *)(*pcVar1)();
            if ((this_00 != (CWnd *)0x0) && (*(int *)(this_00 + 0x20) != 0)) {
              CWnd::SetFocus(this_00);
            }
          }
        }
        else {
          *(undefined4 *)(this + 0x1ec) = 0;
          *(int *)(this + 0x1e4) = *(int *)(this + 0xc0);
          *(undefined4 *)(this + 0x1f0) = 1;
          *(undefined4 *)(this + 0x24c) = 1;
          pcVar1 = *(code **)(*(int *)this + 0x214);
          guard_check_icall(iVar4);
          iVar5 = (*pcVar1)();
          if (iVar5 == 0) {
            *(undefined4 *)(this + 0x1ec) = 1;
            *(undefined4 *)(this + 0x1f0) = 0;
            *(undefined4 *)(this + 0x24c) = 0;
            *(undefined4 *)(this + 500) = 0;
            return;
          }
          *(undefined4 *)(this + 0x1f0) = 0;
          *(undefined4 *)(this + 0x24c) = 0;
          if (*(int *)(this + 0x1ec) == 0) {
            pcVar1 = *(code **)(*(int *)this + 0x270);
            guard_check_icall(*(undefined4 *)(this + 0xc0));
            (*pcVar1)();
          }
          *(undefined4 *)(this + 0x1ec) = 0;
        }
        pcVar1 = *(code **)(*(int *)this + 0x218);
        guard_check_icall(&param_3);
        iVar5 = (*pcVar1)();
        bVar6 = iVar4 != iVar5;
        *(undefined4 *)(this + 0x114) = 0xffffffff;
        ReleaseCapture();
      }
      else {
        *(undefined4 *)(this + 0x118) = *(undefined4 *)(this + 0x114);
      }
      if (iVar3 != *(int *)(this + 0xc0)) {
        InvalidateTab(this,iVar3);
      }
      if ((!bVar6) && (*(int *)(this + 500) == 0)) {
        EnterDragMode(this);
      }
    }
    *(undefined4 *)(this + 500) = 0;
  }
  else {
    *(undefined4 *)(this + 0x1fc) = 1;
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)(this + 0x200),(HRGN)0x0,0x105);
  }
  return;
}

