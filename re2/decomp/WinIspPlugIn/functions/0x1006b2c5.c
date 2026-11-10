// rea decompile_all
// name: CMFCShellListCtrl::OnGetItemIcon
// address: 0x1006b2c5
// body: available
// range: 0x1006b2c5-0x1006b320 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCShellListCtrl::OnGetItemIcon(int,struct _AFX_SHELLITEMINFO *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCShellListCtrl::OnGetItemIcon(CMFCShellListCtrl *this,int param_1,_AFX_SHELLITEMINFO *param_2)

{
  int iVar1;
  SHFILEINFOW local_2bc;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  if (param_2 != (_AFX_SHELLITEMINFO *)0x0) {
    SHGetFileInfoW(*(LPCWSTR *)(param_2 + 4),0,&local_2bc,0x2b4,0xc009);
  }
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}

