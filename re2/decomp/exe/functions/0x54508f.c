// rea decompile_all
// name: CMFCImageEditorDialog::OnInitDialog
// address: 0x54508f
// body: available
// range: 0x54508f-0x545476 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCImageEditorDialog::OnInitDialog(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCImageEditorDialog::OnInitDialog(CMFCImageEditorDialog *this)

{
  CMFCToolBar *this_00;
  CPane *this_01;
  code *pcVar1;
  CMFCImageEditorDialog *pCVar2;
  CWnd *pCVar3;
  ulong uVar4;
  AFX_GLOBAL_DATA *this_02;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined ***pppuVar8;
  int iVar9;
  LPRECT lpRect;
  undefined1 local_58 [4];
  int local_54;
  undefined **local_50;
  undefined4 local_4c;
  CMFCImageEditorDialog *local_48;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x54;
  local_8 = 0x54509b;
  local_48 = this;
  CDialog::OnInitDialog((CDialog *)this);
  pCVar3 = AfxGetMainWnd();
  if (pCVar3 != (CWnd *)0x0) {
    pCVar3 = AfxGetMainWnd();
    uVar4 = CWnd::GetExStyle(pCVar3);
    if ((uVar4 & 0x400000) != 0) {
      CWnd::ModifyStyleEx((CWnd *)this,0,0x400000,0);
    }
  }
  CMFCImagePaintArea::SetBitmap((CMFCImagePaintArea *)(this + 0x250),*(CBitmap **)(this + 0x348));
  local_34.left = 0;
  local_34.top = 0;
  local_34.right = 0;
  local_34.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x170),&local_34);
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x170),&local_24);
  MapWindowPoints(*(HWND *)(this + 0x170),*(HWND *)(this + 0x20),(LPPOINT)&local_24,2);
  InflateRect(&local_24,-2,-2);
  this_00 = (CMFCToolBar *)(this + 0x11e0);
  CMFCToolBar::EnableLargeIcons(this_00,0);
  pcVar1 = *(code **)(*(int *)this_00 + 800);
  guard_check_icall(this,0x50402808,0xe800);
  (*pcVar1)();
  this_02 = GetGlobalData();
  iVar5 = AFX_GLOBAL_DATA::Is32BitIcons(this_02);
  pcVar1 = *(code **)(*(int *)this_00 + 0x330);
  guard_check_icall(0x3f0a,0,0,1,0,0,-(uint)(iVar5 != 0) & 0x3f0b);
  (*pcVar1)();
  iVar5 = *(int *)this_00;
  pcVar1 = *(code **)(iVar5 + 0x1c0);
  guard_check_icall();
  uVar6 = (*pcVar1)();
  pcVar1 = *(code **)(iVar5 + 0x1e4);
  guard_check_icall(uVar6 | 0x30);
  (*pcVar1)();
  iVar5 = *(int *)(this + 0x11e0);
  pcVar1 = *(code **)(iVar5 + 0x1c0);
  guard_check_icall();
  uVar6 = (*pcVar1)();
  pcVar1 = *(code **)(iVar5 + 0x1e4);
  guard_check_icall(uVar6 & 0xffbff0ff);
  this_01 = (CPane *)(this + 0x11e0);
  (*pcVar1)();
  CPane::SetBorders(this_01,10,5,10,5);
  piVar7 = (int *)CMFCToolBar::GetButtonSize((CMFCToolBar *)this_01);
  CMFCToolBar::WrapToolBar((CMFCToolBar *)this_01,*piVar7 * 3,0x7fff,(CDC *)0x0,-1,-1);
  pcVar1 = *(code **)(*(int *)this_01 + 0x2a4);
  guard_check_icall(local_58,0);
  (*pcVar1)();
  local_24.bottom = local_24.top + local_54 + 10;
  pcVar1 = *(code **)(*(int *)this_01 + 0x234);
  guard_check_icall(&local_24,1,0);
  (*pcVar1)();
  if (local_34.bottom - local_34.top < local_24.bottom - local_24.top) {
    CWnd::SetWindowPos((CWnd *)(this + 0x150),(CWnd *)0x0,-1,-1,local_34.right - local_34.left,
                       (local_24.bottom - local_24.top) + 7,0x16);
  }
  pcVar1 = *(code **)(*(int *)this_01 + 0x238);
  guard_check_icall(&DAT_00614a70,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0x13,0);
  (*pcVar1)();
  *(undefined4 *)(this + 0x123c) = *(undefined4 *)(this + 0x20);
  *(undefined4 *)(this + 0x1d94) = 0;
  local_44.left = 0;
  local_44.top = 0;
  local_44.right = 0;
  local_44.bottom = 0;
  GetClientRect(*(HWND *)(this + 0xf0),&local_44);
  MapWindowPoints(*(HWND *)(this + 0xf0),*(HWND *)(this + 0x20),(LPPOINT)&local_44,2);
  InflateRect(&local_44,-2,-2);
  local_54 = 4;
  local_4c = 0;
  *(undefined4 *)(this + 0x1178) = 1;
  local_50 = CPalette::vftable;
  local_8 = 0;
  if (*(int *)(this + 0x354) < 9) {
    Create16ColorsStdPalette((CPalette *)&local_50);
  }
  else {
    EnableOtherButton(L"Other",1,1);
    local_54 = 5;
    FID_conflict_SetVertMargin(1);
    FID_conflict_SetVertMargin(1);
  }
  pppuVar8 = &local_50;
  if (8 < *(int *)(this + 0x354)) {
    pppuVar8 = (undefined ***)0x0;
  }
  pcVar1 = *(code **)(*(int *)(this + 0x378) + 0x454);
  guard_check_icall(this,&local_44,0x4084,local_54,pppuVar8);
  (*pcVar1)();
  FUN_004acf40(0);
  local_8 = 0xffffffff;
  local_50 = CPalette::vftable;
  FUN_0040ee80();
  pCVar2 = local_48;
  lpRect = (LPRECT)(this + 0x368);
  GetClientRect(*(HWND *)(local_48 + 0x1f0),lpRect);
  CWnd::MapWindowPoints((CWnd *)(pCVar2 + 0x1d0),(CWnd *)pCVar2,lpRect);
  iVar5 = *(int *)(pCVar2 + 0x34c);
  iVar9 = ((*(int *)(pCVar2 + 0x370) - iVar5) + lpRect->left) / 2;
  lpRect->left = iVar9;
  *(int *)(pCVar2 + 0x370) = iVar9 + iVar5;
  iVar5 = ((*(int *)(pCVar2 + 0x374) - *(int *)(pCVar2 + 0x350)) + *(int *)(pCVar2 + 0x36c)) / 2;
  *(int *)(pCVar2 + 0x36c) = iVar5;
  *(int *)(pCVar2 + 0x374) = iVar5 + *(int *)(pCVar2 + 0x350);
  ((LPRECT)(pCVar2 + 0x358))->left = lpRect->left;
  *(undefined4 *)(pCVar2 + 0x35c) = *(undefined4 *)(this + 0x36c);
  *(undefined4 *)(pCVar2 + 0x360) = *(undefined4 *)(this + 0x370);
  *(undefined4 *)(pCVar2 + 0x364) = *(undefined4 *)(this + 0x374);
  InflateRect((LPRECT)(pCVar2 + 0x358),4,4);
  *(LONG *)(local_48 + 0x2d0) = lpRect->left;
  *(undefined4 *)(local_48 + 0x2d4) = *(undefined4 *)(this + 0x36c);
  *(undefined4 *)(local_48 + 0x2d8) = *(undefined4 *)(this + 0x370);
  *(undefined4 *)(local_48 + 0x2dc) = *(undefined4 *)(this + 0x374);
  CWnd::ModifyStyle((CWnd *)(this + 0x250),0x10000,0,0);
  iVar5 = FUN_0055bae6();
  return iVar5;
}

