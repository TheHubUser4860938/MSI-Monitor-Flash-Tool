// rea decompile_all
// name: CMFCToolBarButtonsListButton::RedrawSelection
// address: 0x54382f
// body: available
// range: 0x54382f-0x5438a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarButtonsListButton::RedrawSelection(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBarButtonsListButton::RedrawSelection(CMFCToolBarButtonsListButton *this)

{
  int iVar1;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)(this + 0x128);
  if (iVar1 != 0) {
    local_18.left = *(LONG *)(iVar1 + 0x54);
    local_18.top = *(LONG *)(iVar1 + 0x58);
    local_18.right = *(LONG *)(iVar1 + 0x5c);
    local_18.bottom = *(LONG *)(iVar1 + 0x60);
    OffsetRect(&local_18,0,-*(int *)(this + 300));
    InflateRect(&local_18,2,2);
    InvalidateRect(*(HWND *)(this + 0x20),&local_18,1);
    UpdateWindow(*(HWND *)(this + 0x20));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

