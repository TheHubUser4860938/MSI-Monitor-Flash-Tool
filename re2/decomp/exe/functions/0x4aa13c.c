// rea decompile_all
// name: CDockablePane::UpdateTooltips
// address: 0x4aa13c
// body: available
// range: 0x4aa13c-0x4aa21b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CDockablePane::UpdateTooltips(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockablePane::UpdateTooltips(CDockablePane *this)

{
  code *pcVar1;
  LRESULT LVar2;
  undefined4 *puVar3;
  uint local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if ((*(int *)(this + 0x34c) != 0) && (*(int *)(*(int *)(this + 0x34c) + 0x20) != 0)) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_18);
    CWnd::ScreenToClient((CWnd *)this,&local_18);
    local_2c = 0;
    if (0 < *(int *)(this + 0x33c)) {
      do {
        LVar2 = SendMessageW(*(HWND *)(*(int *)(this + 0x34c) + 0x20),0x40d,0,0);
        if (LVar2 <= (int)local_2c) break;
        puVar3 = (undefined4 *)FUN_004ab4cd(local_2c);
        pcVar1 = *(code **)(*(int *)*puVar3 + 0xc);
        guard_check_icall(&local_28);
        (*pcVar1)();
        OffsetRect(&local_28,local_18.left,local_18.top);
        local_2c = local_2c + 1;
        CToolTipCtrl::SetToolRect(*(CToolTipCtrl **)(this + 0x34c),(CWnd *)this,local_2c,&local_28);
      } while ((int)local_2c < *(int *)(this + 0x33c));
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

