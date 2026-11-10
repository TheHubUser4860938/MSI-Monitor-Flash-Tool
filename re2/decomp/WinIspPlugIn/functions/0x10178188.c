// rea decompile_all
// name: CMFCTasksPane::AdjustScroll
// address: 0x10178188
// body: available
// range: 0x10178188-0x101784d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCTasksPane::AdjustScroll(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCTasksPane::AdjustScroll(CMFCTasksPane *this)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  BOOL BVar5;
  CWnd *this_00;
  undefined1 local_58 [8];
  CMFCTasksPane *local_50;
  CMFCTasksPane *local_4c;
  RECT local_48;
  RECT local_38;
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_50 = this;
  if ((this == (CMFCTasksPane *)0x0) || (*(int *)(this + 0x20) == 0)) goto LAB_101784c6;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  pcVar1 = *(code **)(*(int *)this + 0x3c4);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    InflateRect(&local_18,-1,-1);
  }
  local_4c = this + 0x414;
  local_28.left = *(LONG *)local_4c;
  local_28.top = *(LONG *)(this + 0x418);
  local_28.right = *(LONG *)(this + 0x41c);
  local_28.bottom = *(LONG *)(this + 0x420);
  iVar2 = *(int *)(this + 0x470);
  if (*(int *)(this + 0x36c) == 0) {
    iVar3 = ForceShowNavToolbar(this);
    if (iVar3 != 0) goto LAB_10178224;
LAB_101782a8:
    SetRectEmpty((LPRECT)(this + 0x414));
    CWnd::ShowWindow((CWnd *)(this + 0x548),0);
  }
  else {
LAB_10178224:
    if (iVar2 < 2) goto LAB_101782a8;
    this_00 = (CWnd *)(this + 0x548);
    pcVar1 = *(code **)(*(int *)this_00 + 0x260);
    guard_check_icall(local_58,0,1);
    iVar2 = (*pcVar1)();
    iVar2 = *(int *)(iVar2 + 4);
    *(LONG *)local_4c = local_18.left;
    *(LONG *)(local_4c + 4) = local_18.top;
    *(LONG *)(local_4c + 8) = local_18.right;
    *(LONG *)(local_4c + 0xc) = local_18.bottom;
    *(int *)(local_50 + 0x420) = *(int *)(local_50 + 0x418) + iVar2;
    local_18.top = local_18.top + (*(int *)(local_4c + 0xc) - *(int *)(local_4c + 4));
    pcVar1 = *(code **)(*(int *)this_00 + 0x238);
    guard_check_icall(0,*(int *)local_4c,*(int *)(local_50 + 0x418),
                      *(int *)(local_4c + 8) - *(int *)local_4c,iVar2,0x14,0);
    (*pcVar1)();
    CWnd::ShowWindow(this_00,1);
    this = local_50;
  }
  *(LONG *)(this + 0x444) = local_18.left;
  *(LONG *)(this + 0x448) = local_18.top;
  *(LONG *)(this + 0x44c) = local_18.right;
  *(LONG *)(this + 0x450) = local_18.bottom;
  SetScrollSizes(this);
  CWnd::EnableWindow((CWnd *)(this + 0x4a0),(uint)(*(int *)(this + 0x374) == 0));
  if ((*(int *)(this + 0x374) == 0) && (0 < *(int *)(this + 0x39c))) {
    iVar2 = GetSystemMetrics(0x15);
    *(int *)(this + 0x44c) = *(int *)(this + 0x44c) - iVar2;
    CWnd::SetWindowPos((CWnd *)(this + 0x4a0),(CWnd *)0x0,local_18.right - iVar2,local_18.top,iVar2,
                       local_18.bottom - local_18.top,0x54);
    local_18.right = local_18.right - iVar2;
  }
  else {
    CWnd::SetWindowPos((CWnd *)(this + 0x4a0),(CWnd *)0x0,0,0,0,0,0x80);
  }
  local_38.left = ((LPRECT)(this + 0x424))->left;
  local_38.top = *(LONG *)(this + 0x428);
  local_38.right = *(LONG *)(this + 0x42c);
  local_38.bottom = *(LONG *)(this + 0x430);
  local_48.left = *(LONG *)(this + 0x434);
  local_48.top = *(LONG *)(this + 0x438);
  local_48.right = *(LONG *)(this + 0x43c);
  local_48.bottom = *(LONG *)(this + 0x440);
  SetRectEmpty((LPRECT)(this + 0x424));
  SetRectEmpty((LPRECT)(this + 0x434));
  if (*(int *)(this + 0x374) == 0) {
    if (*(int *)(this + 0x544) != 0) {
      KillTimer(*(HWND *)(this + 0x20),0xec0c);
      *(undefined4 *)(this + 0x390) = 0;
    }
  }
  else {
    if (0 < *(int *)(this + 0x398)) {
      *(LONG *)(this + 0x424) = local_18.left;
      *(LONG *)(this + 0x428) = local_18.top;
      *(LONG *)(this + 0x42c) = local_18.right;
      *(LONG *)(this + 0x430) = local_18.bottom;
      *(int *)(this + 0x428) = *(int *)(this + 0x428) + 1;
      *(int *)(this + 0x430) = *(int *)(this + 0x428) + *(int *)(this + 0x394);
      local_18.top = local_18.top + 1 + *(int *)(this + 0x394);
    }
    iVar2 = IsScrollDnAvailable(this);
    if (iVar2 != 0) {
      *(LONG *)(this + 0x434) = local_18.left;
      *(LONG *)(this + 0x438) = local_18.top;
      *(LONG *)(this + 0x43c) = local_18.right;
      *(LONG *)(this + 0x440) = local_18.bottom;
      *(int *)(this + 0x438) = *(int *)(this + 0x440) - *(int *)(this + 0x394);
      local_18.bottom = local_18.bottom + (-1 - *(int *)(this + 0x394));
    }
    *(LONG *)(this + 0x444) = local_18.left;
    *(LONG *)(this + 0x448) = local_18.top;
    *(LONG *)(this + 0x44c) = local_18.right;
    *(LONG *)(this + 0x450) = local_18.bottom;
  }
  BVar4 = EqualRect(&local_28,(RECT *)(this + 0x414));
  if (BVar4 == 0) {
    InvalidateRect(*(HWND *)(this + 0x20),(RECT *)(this + 0x414),1);
    InvalidateRect(*(HWND *)(this + 0x20),&local_28,1);
    UpdateWindow(*(HWND *)(this + 0x20));
  }
  BVar4 = EqualRect(&local_38,(RECT *)(this + 0x424));
  if (BVar4 == 0) {
    InvalidateRect(*(HWND *)(this + 0x20),&local_38,1);
    InvalidateRect(*(HWND *)(this + 0x20),(RECT *)(this + 0x424),1);
  }
  BVar5 = EqualRect(&local_48,(RECT *)(this + 0x434));
  if (BVar5 == 0) {
    InvalidateRect(*(HWND *)(this + 0x20),&local_48,1);
    InvalidateRect(*(HWND *)(this + 0x20),(RECT *)(this + 0x434),1);
  }
  if (BVar5 == 0 || BVar4 == 0) {
    UpdateWindow(*(HWND *)(this + 0x20));
  }
LAB_101784c6:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

