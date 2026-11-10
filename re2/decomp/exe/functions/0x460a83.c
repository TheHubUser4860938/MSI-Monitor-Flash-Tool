// rea decompile_all
// name: CPaneFrameWnd::OnWindowPosChanging
// address: 0x460a83
// body: available
// range: 0x460a83-0x460b5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPaneFrameWnd::OnWindowPosChanging(struct tagWINDOWPOS *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPaneFrameWnd::OnWindowPosChanging(CPaneFrameWnd *this,tagWINDOWPOS *param_1)

{
  code *pcVar1;
  int yBottom;
  int xRight;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10;
  if (((byte)param_1[0x18] & 2) == 0) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_18);
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    if (((byte)param_1[0x18] & 1) == 0) {
      yBottom = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0xc);
      xRight = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 8);
    }
    else {
      yBottom = (*(int *)(param_1 + 0xc) - local_18.top) + local_18.bottom;
      xRight = (*(int *)(param_1 + 8) - local_18.left) + local_18.right;
    }
    SetRect(&local_28,*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),xRight,yBottom);
    pcVar1 = *(code **)(*(int *)this + 0x170);
    guard_check_icall();
    local_38 = (*pcVar1)();
    local_34 = local_38;
    local_30 = local_38;
    local_2c = local_38;
    CGlobalUtils::AdjustRectToWorkArea
              ((CGlobalUtils *)&PTR_vftable_0060c45c,(CRect *)&local_28,(CRect *)&local_38);
    *(LONG *)(param_1 + 8) = local_28.left;
    *(LONG *)(param_1 + 0xc) = local_28.top;
  }
  FUN_0042ec70();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

