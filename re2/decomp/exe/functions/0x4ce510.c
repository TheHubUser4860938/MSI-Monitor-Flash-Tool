// rea decompile_all
// name: CMFCShadowWnd::Repos
// address: 0x4ce510
// body: available
// range: 0x4ce510-0x4ce60b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: void __thiscall CMFCShadowWnd::Repos(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCShadowWnd::Repos(CMFCShadowWnd *this)

{
  int dy;
  BOOL BVar1;
  int dx;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(*(int *)(this + 0x130) + 0x20),&local_18);
  dy = *(int *)(this + 0x134);
  dx = dy;
  if (*(int *)(this + 0x2b0) != 0) {
    dx = -dy;
  }
  OffsetRect(&local_18,dx,dy);
  SendMessageW(*(HWND *)(this + 0x20),0xb,0,0);
  BVar1 = IsWindowVisible(*(HWND *)(this + 0x20));
  if (BVar1 == 0) {
    CWnd::ShowWindow((CWnd *)this,4);
    CWnd::SetWindowPos((CWnd *)this,(CWnd *)&DAT_00614a70,local_18.left,local_18.top,
                       local_18.right - local_18.left,local_18.bottom - local_18.top,0x10);
    CWnd::SetWindowPos(*(CWnd **)(this + 0x130),(CWnd *)&DAT_00614a70,-1,-1,-1,-1,0x53);
  }
  else {
    CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,local_18.left,local_18.top,
                       local_18.right - local_18.left,local_18.bottom - local_18.top,0x14);
  }
  SendMessageW(*(HWND *)(this + 0x20),0xb,1,0);
  RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

