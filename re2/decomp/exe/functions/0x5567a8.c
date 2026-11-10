// rea decompile_all
// name: CMFCListCtrl::OnEraseBkgnd
// address: 0x5567a8
// body: available
// range: 0x5567a8-0x5568b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCListCtrl::OnEraseBkgnd(class CDC *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCListCtrl::OnEraseBkgnd(CMFCListCtrl *this,CDC *param_1)

{
  WPARAM wParam;
  code *pcVar1;
  int iVar2;
  undefined **local_48;
  HBRUSH local_44;
  undefined4 local_40;
  CDC *local_3c;
  RECT local_38;
  tagRECT local_28;
  tagPOINT local_18;
  LONG local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_3c = param_1;
  local_40 = FUN_0042ec70();
  if ((-1 < *(int *)(this + 0x13c)) && (*(int *)(this + 0x144) != 0)) {
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_28);
    wParam = *(WPARAM *)(this + 0x13c);
    local_18.x = 0;
    local_18.y = 0;
    local_10 = 0;
    local_c = 0;
    pcVar1 = *(code **)(*(int *)this + 0x168);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    SendMessageW(*(HWND *)(iVar2 + 0x20),0x1207,wParam,(LPARAM)&local_18);
    pcVar1 = *(code **)(*(int *)this + 0x168);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    MapWindowPoints(*(HWND *)(iVar2 + 0x20),*(HWND *)(this + 0x20),&local_18,2);
    local_38.top = local_28.top;
    local_38.bottom = local_28.bottom;
    local_38.left = local_18.x;
    local_38.right = local_10;
    CBrush::CBrush((CBrush *)&local_48,*(ulong *)(this + 0x138));
    FillRect(*(HDC *)(local_3c + 4),&local_38,local_44);
    local_48 = CBrush::vftable;
    FUN_0040ee80();
  }
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

