// rea decompile_all
// name: CMFCRibbonQuickAccessCustomizeButton::OnLButtonDown
// address: 0x1011a472
// body: available
// range: 0x1011a472-0x1011a62b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonQuickAccessCustomizeButton::OnLButtonDown(class
   CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonQuickAccessCustomizeButton::OnLButtonDown(CMFCRibbonQuickAccessCustomizeButton *this)

{
  code *pcVar1;
  ulong uVar2;
  CWnd *this_00;
  LONG LVar3;
  int iVar4;
  BOOL BVar5;
  CMFCRibbonPanelMenu *this_01;
  CMFCPopupMenu *this_02;
  HWND local_2c;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x1011a47e;
  if (*(int *)(this + 0xe0) == 0) {
    uVar2 = CWnd::GetExStyle(*(CWnd **)(this + 0x84));
    this_00 = *(CWnd **)(this + 0x84);
    if (*(CWnd **)(this + 0x94) != (CWnd *)0x0) {
      this_00 = *(CWnd **)(this + 0x94);
    }
    if (this_00 == (CWnd *)0x0) {
      local_2c = (HWND)0x0;
    }
    else {
      local_2c = *(HWND *)(this_00 + 0x20);
    }
    local_24.left = *(LONG *)(this + 0x74);
    local_24.top = *(LONG *)(this + 0x78);
    local_24.right = *(LONG *)(this + 0x7c);
    local_24.bottom = *(LONG *)(this + 0x80);
    CWnd::ClientToScreen(this_00,&local_24);
    LVar3 = local_24.right;
    if ((uVar2 & 0x400000) == 0) {
      LVar3 = local_24.left;
    }
    if (*(int *)(this + 0x1cc) == 0) {
      *(undefined4 *)(this + 0xe0) = 1;
      *(undefined4 *)(this + 200) = 1;
      pcVar1 = *(code **)(*(int *)this + 0x1b8);
      guard_check_icall();
      (*pcVar1)();
      pcVar1 = *(code **)(**(int **)(this + 0x84) + 0x350);
      guard_check_icall(this_00,LVar3,local_24.bottom,this);
      iVar4 = (*pcVar1)();
      if (iVar4 == 0) {
        BVar5 = IsWindow(local_2c);
        if (BVar5 != 0) {
          *(undefined4 *)(this + 0xe0) = 0;
        }
      }
    }
    else {
      this_01 = (CMFCRibbonPanelMenu *)FUN_10011f7d(0x2040);
      local_8 = 0;
      if (this_01 == (CMFCRibbonPanelMenu *)0x0) {
        this_02 = (CMFCPopupMenu *)0x0;
      }
      else {
        this_02 = (CMFCPopupMenu *)
                  CMFCRibbonPanelMenu::CMFCRibbonPanelMenu
                            (this_01,*(CMFCRibbonBar **)(this + 0x84),
                             (CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *)(this + 0x1c4)
                             ,1);
      }
      local_8 = 0xffffffff;
      pcVar1 = *(code **)(*(int *)this_02 + 0x1c8);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      *(undefined4 *)(iVar4 + 0xde0) = 1;
      CMFCPopupMenu::SetParentRibbonElement(this_02,(CMFCRibbonBaseElement *)this);
      pcVar1 = *(code **)(*(int *)this_02 + 0x210);
      guard_check_icall(*(undefined4 *)(this + 0x84),LVar3,local_24.bottom,0,0,0);
      (*pcVar1)();
      CMFCRibbonBaseElement::SetDroppedDown((CMFCRibbonBaseElement *)this,this_02);
      if (-1 < *(int *)(*(int *)(this + 0x84) + 0x2d4)) {
        RedrawWindow(*(HWND *)(*(int *)(this + 0x84) + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
      }
    }
  }
  else {
    *(undefined4 *)(this + 200) = 1;
    pcVar1 = *(code **)(*(int *)this + 0x1b8);
    guard_check_icall();
    (*pcVar1)();
  }
  FUN_101490fe();
  return;
}

