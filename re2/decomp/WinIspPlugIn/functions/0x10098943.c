// rea decompile_all
// name: CMFCToolBar::OnDragLeave
// address: 0x10098943
// body: available
// range: 0x10098943-0x100989c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCToolBar::OnDragLeave(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBar::OnDragLeave(CMFCToolBar *this)

{
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 3000) == 0) {
    *(undefined4 *)(this + 0xc00) = 0xffffffff;
    local_18.left = ((LPRECT)(this + 0xccc))->left;
    local_18.top = *(LONG *)(this + 0xcd0);
    local_18.right = *(LONG *)(this + 0xcd4);
    local_18.bottom = *(LONG *)(this + 0xcd8);
    InflateRect(&local_18,2,2);
    InvalidateRect(*(HWND *)(this + 0x20),&local_18,1);
    UpdateWindow(*(HWND *)(this + 0x20));
    SetRectEmpty((LPRECT)(this + 0xccc));
    *(undefined4 *)(this + 0xc00) = 0xffffffff;
    _DAT_10245d88 = 1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

