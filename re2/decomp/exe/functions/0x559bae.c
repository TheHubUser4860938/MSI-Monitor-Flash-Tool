// rea decompile_all
// name: CMFCHeaderCtrl::SetSortColumn
// address: 0x559bae
// body: available
// range: 0x559bae-0x559c1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCHeaderCtrl::SetSortColumn(int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCHeaderCtrl::SetSortColumn(CMFCHeaderCtrl *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  if (-1 < param_1) {
    if ((param_3 == 0) || ((param_3 & -(uint)(*(int *)(this + 0xa0) != 0)) == 0)) {
      CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(this + 0x80));
    }
    piVar1 = (int *)FUN_00489126(param_1);
    *piVar1 = (uint)(param_2 != 0) * 2 + -1;
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
    return;
  }
  CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(this + 0x80));
  return;
}

