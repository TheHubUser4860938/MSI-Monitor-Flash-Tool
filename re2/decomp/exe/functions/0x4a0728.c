// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnErasePopupWindowButton
// address: 0x4a0728
// body: available
// range: 0x4a0728-0x4a083c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCVisualManagerOfficeXP::OnErasePopupWindowButton(class CDC
   *,class CRect,class CMFCDesktopAlertWndButton *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOfficeXP::OnErasePopupWindowButton(CMFCVisualManagerOfficeXP *this,int param_1)

{
  code *pcVar1;
  CMFCButton *pCVar2;
  int iVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  CMFCButton *in_stack_00000018;
  undefined **local_2c;
  HBRUSH local_28;
  undefined **local_24;
  HBRUSH local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  pCVar2 = in_stack_00000018;
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_1c = param_1;
  iVar3 = CMFCButton::IsPressed(in_stack_00000018);
  if (iVar3 == 0) {
    if ((*(int *)(pCVar2 + 0xb4) == 0) && (*(int *)(pCVar2 + 0xac) == 0)) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      pHVar4 = GetParent(*(HWND *)(pCVar2 + 0x20));
      pCVar5 = CWnd::FromHandle(pHVar4);
      GetClientRect(*(HWND *)(pCVar5 + 0x20),&local_18);
      pHVar4 = GetParent(*(HWND *)(pCVar2 + 0x20));
      pCVar5 = CWnd::FromHandle(pHVar4);
      MapWindowPoints(*(HWND *)(pCVar5 + 0x20),*(HWND *)(pCVar2 + 0x20),(LPPOINT)&local_18,2);
      pcVar1 = *(code **)(*(int *)this + 0x1dc);
      guard_check_icall(local_1c,local_18.left,local_18.top,local_18.right,local_18.bottom);
      (*pcVar1)();
      goto LAB_004a082a;
    }
    CBrush::CBrush((CBrush *)&local_2c,*(ulong *)(this + 200));
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&stack0x00000008,local_28);
    local_2c = CBrush::vftable;
  }
  else {
    CBrush::CBrush((CBrush *)&local_24,*(ulong *)(this + 0xcc));
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&stack0x00000008,local_20);
    local_24 = CBrush::vftable;
  }
  FUN_0040ee80();
LAB_004a082a:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

