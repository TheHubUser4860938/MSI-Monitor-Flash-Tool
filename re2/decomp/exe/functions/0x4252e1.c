// rea decompile_all
// name: CDialog::PreModal
// address: 0x4252e1
// body: available
// range: 0x4252e1-0x42531f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: struct HWND__ * __thiscall CDialog::PreModal(void)
   
   Library: Visual Studio 2015 Release */

HWND__ * __thiscall CDialog::PreModal(CDialog *this)

{
  AFX_MODULE_STATE *pAVar1;
  HWND__ *pHVar2;
  
  pAVar1 = AfxGetModuleState();
  pHVar2 = (HWND__ *)0x0;
  if (*(CWinApp **)(pAVar1 + 4) != (CWinApp *)0x0) {
    CWinApp::EnableModeless(*(CWinApp **)(pAVar1 + 4),0);
  }
  if (*(int *)(this + 0x94) != 0) {
    pHVar2 = *(HWND__ **)(*(int *)(this + 0x94) + 0x20);
  }
  pHVar2 = CWnd::GetSafeOwner_(pHVar2,(HWND__ **)(this + 0x98));
  FUN_0042d91f(this);
  return pHVar2;
}

