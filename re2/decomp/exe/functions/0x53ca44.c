// rea decompile_all
// name: CMFCShellTreeCtrl::GetRelatedList
// address: 0x53ca44
// body: available
// range: 0x53ca44-0x53ca79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CMFCShellListCtrl * __thiscall CMFCShellTreeCtrl::GetRelatedList(void)const 
   
   Library: Visual Studio 2015 Release */

CMFCShellListCtrl * __thiscall CMFCShellTreeCtrl::GetRelatedList(CMFCShellTreeCtrl *this)

{
  BOOL BVar1;
  CWnd *pCVar2;
  CObject *pCVar3;
  
  if (*(HWND *)(this + 0x88) != (HWND)0x0) {
    BVar1 = IsWindow(*(HWND *)(this + 0x88));
    if (BVar1 != 0) {
      pCVar2 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0x88));
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCShellListCtrl_005cf218,
                                  (CObject *)pCVar2);
      return (CMFCShellListCtrl *)pCVar3;
    }
  }
  return (CMFCShellListCtrl *)0x0;
}

