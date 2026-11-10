// rea decompile_all
// name: CMFCRibbonCategory::UpdateScrollButtons
// address: 0x100e4425
// body: available
// range: 0x100e4425-0x100e4533 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonCategory::UpdateScrollButtons(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonCategory::UpdateScrollButtons(CMFCRibbonCategory *this)

{
  int iVar1;
  BOOL BVar2;
  int local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  RECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_28.left = *(LONG *)(this + 0x3e4);
  *(undefined4 *)(this + 0x23c) = *(undefined4 *)(this + 0x540);
  *(undefined4 *)(this + 0x404) = *(undefined4 *)(this + 0x540);
  local_28.top = *(LONG *)(this + 1000);
  local_28.right = *(LONG *)(this + 0x3ec);
  local_28.bottom = *(LONG *)(this + 0x3f0);
  GetGlobalData();
  iVar1 = FUN_101548f0();
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  if (0 < *(int *)(this + 0x538)) {
    local_38 = *(int *)(this + 0x7c);
    local_34 = *(undefined4 *)(this + 0x80);
    local_2c = *(undefined4 *)(this + 0x88);
    local_30 = local_38 + iVar1;
  }
  if ((*(int *)(this + 0x84) - *(int *)(this + 0x7c)) + *(int *)(this + 0x538) <
      *(int *)(this + 0x544)) {
    local_18.top = *(LONG *)(this + 0x80);
    local_18.right = *(LONG *)(this + 0x84);
    local_18.bottom = *(LONG *)(this + 0x88);
    local_18.left = local_18.right - iVar1;
  }
  *(int *)(this + 0x21c) = local_38;
  *(undefined4 *)(this + 0x220) = local_34;
  *(int *)(this + 0x224) = local_30;
  *(undefined4 *)(this + 0x228) = local_2c;
  *(LONG *)(this + 0x3e4) = local_18.left;
  *(LONG *)(this + 1000) = local_18.top;
  *(LONG *)(this + 0x3ec) = local_18.right;
  *(LONG *)(this + 0x3f0) = local_18.bottom;
  BVar2 = IsRectEmpty(&local_18);
  if ((BVar2 != 0) && (BVar2 = IsRectEmpty(&local_28), BVar2 == 0)) {
    RedrawWindow(*(HWND *)(*(int *)(this + 0x53c) + 0x20),&local_28,(HRGN)0x0,0x105);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

