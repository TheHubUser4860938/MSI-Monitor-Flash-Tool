// rea decompile_all
// name: CMFCMenuButton::OnShowMenu
// address: 0x536d6d
// body: available
// range: 0x536d6d-0x536edf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCMenuButton::OnShowMenu(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCMenuButton::OnShowMenu(CMFCMenuButton *this)

{
  int iVar1;
  LPARAM lParam;
  undefined4 uVar2;
  BOOL BVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  uint uVar6;
  LONG x;
  LONG y;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if ((*(int *)(this + 0x7ac) != 0) && (*(int *)(this + 0x7c0) == 0)) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_18);
    x = local_18.left;
    y = local_18.bottom;
    if (*(int *)(this + 0x7a8) != 0) {
      x = local_18.right;
      y = local_18.top;
    }
    if (*(int *)(this + 0x7b4) != 0) {
      *(undefined4 *)(this + 0xac) = 1;
      *(undefined4 *)(this + 0xb4) = 1;
    }
    *(undefined4 *)(this + 0x7c0) = 1;
    InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
    if ((*(int *)(this + 0x7b8) == 0) && (DAT_006176b0 != (int *)0x0)) {
      iVar1 = *DAT_006176b0;
      guard_check_icall(*(undefined4 *)(this + 0x7ac),x,y,this,0);
      uVar2 = (**(code **)(iVar1 + 0x14))();
      *(undefined4 *)(this + 0x7b0) = uVar2;
      CWnd::SetFocus((CWnd *)this);
    }
    else {
      BVar3 = TrackPopupMenu(*(HMENU *)(this + 0x7ac),0x180,x,y,0,*(HWND *)(this + 0x20),(RECT *)0x0
                            );
      *(BOOL *)(this + 0x7b0) = BVar3;
    }
    pHVar4 = GetParent(*(HWND *)(this + 0x20));
    pCVar5 = CWnd::FromHandle(pHVar4);
    if ((*(int *)(this + 0x7b0) != 0) && (pCVar5 != (CWnd *)0x0)) {
      lParam = *(LPARAM *)(this + 0x20);
      uVar6 = CWnd::GetDlgCtrlID((CWnd *)this);
      SendMessageW(*(HWND *)(pCVar5 + 0x20),0x111,uVar6 & 0xffff,lParam);
    }
    *(undefined4 *)(this + 0xac) = 0;
    *(undefined4 *)(this + 0xb4) = 0;
    *(undefined4 *)(this + 0x7c0) = 0;
    InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
    UpdateWindow(*(HWND *)(this + 0x20));
    if (*(int *)(this + 0xb8) != 0) {
      ReleaseCapture();
      *(undefined4 *)(this + 0xb8) = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

