// rea decompile_all
// name: CMFCImagePaintArea::PreSubclassWindow
// address: 0x544b8b
// body: available
// range: 0x544b8b-0x544c4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x544c4b to 0x403170 guard_check_icall (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCImagePaintArea::PreSubclassWindow(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCImagePaintArea::PreSubclassWindow(CMFCImagePaintArea *this)

{
  AFX_MODULE_STATE *pAVar1;
  HCURSOR pHVar2;
  
  AfxGetModuleState();
  pAVar1 = AfxGetModuleState();
  pHVar2 = LoadCursorW(*(HINSTANCE *)(pAVar1 + 0xc),(LPCWSTR)0x3f10);
  *(HCURSOR *)(this + 0xb0) = pHVar2;
  AfxGetModuleState();
  pAVar1 = AfxGetModuleState();
  pHVar2 = LoadCursorW(*(HINSTANCE *)(pAVar1 + 0xc),(LPCWSTR)0x3f0e);
  *(HCURSOR *)(this + 0xb4) = pHVar2;
  AfxGetModuleState();
  pAVar1 = AfxGetModuleState();
  pHVar2 = LoadCursorW(*(HINSTANCE *)(pAVar1 + 0xc),(LPCWSTR)0x3f0f);
  *(HCURSOR *)(this + 0xb8) = pHVar2;
  AfxGetModuleState();
  pAVar1 = AfxGetModuleState();
  pHVar2 = LoadCursorW(*(HINSTANCE *)(pAVar1 + 0xc),(LPCWSTR)0x3f0c);
  *(HCURSOR *)(this + 0xbc) = pHVar2;
  AfxGetModuleState();
  pAVar1 = AfxGetModuleState();
  pHVar2 = LoadCursorW(*(HINSTANCE *)(pAVar1 + 0xc),(LPCWSTR)0x3f0d);
  *(HCURSOR *)(this + 0xc0) = pHVar2;
  AfxGetModuleState();
  pAVar1 = AfxGetModuleState();
  pHVar2 = LoadCursorW(*(HINSTANCE *)(pAVar1 + 0xc),(LPCWSTR)0x3f11);
  *(HCURSOR *)(this + 0xc4) = pHVar2;
  guard_check_icall();
  return;
}

