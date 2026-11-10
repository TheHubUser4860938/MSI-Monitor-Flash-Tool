// rea decompile_all
// name: CMFCVisualManagerWindows::OnErasePopupWindowButton
// address: 0x4232ab
// body: available
// range: 0x4232ab-0x42336c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerWindows::OnErasePopupWindowButton(class CDC
   *,class CRect,class CMFCDesktopAlertWndButton *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerWindows::OnErasePopupWindowButton
          (CMFCVisualManagerWindows *this,undefined4 param_1,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,int param_7)

{
  code *pcVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if ((*(int *)(this + 0x10) == 0) || (*(int *)(param_7 + 0x7a8) != 0)) {
    CMFCVisualManagerOfficeXP::OnErasePopupWindowButton
              ((CMFCVisualManagerOfficeXP *)this,param_1,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    pHVar2 = GetParent(*(HWND *)(param_7 + 0x20));
    pCVar3 = CWnd::FromHandle(pHVar2);
    GetClientRect(*(HWND *)(pCVar3 + 0x20),&local_18);
    pHVar2 = GetParent(*(HWND *)(param_7 + 0x20));
    pCVar3 = CWnd::FromHandle(pHVar2);
    MapWindowPoints(*(HWND *)(pCVar3 + 0x20),*(HWND *)(param_7 + 0x20),(LPPOINT)&local_18,2);
    pcVar1 = *(code **)(*(int *)this + 0x1dc);
    guard_check_icall(param_1,local_18.left,local_18.top,local_18.right,local_18.bottom);
    (*pcVar1)();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

