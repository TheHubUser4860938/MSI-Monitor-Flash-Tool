// rea decompile_all
// name: GetItemText
// address: 0x10043ab0
// body: available
// range: 0x10043ab0-0x10043af0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual class ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >
   __thiscall CVSListBox::GetItemText(int)const 
    public: virtual class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > __thiscall CVSListBox::GetItemText(int)const 
   
   Library: Visual Studio 2015 Release */

int GetItemText(int param_1,int param_2)

{
  int in_ECX;
  
  if (((in_ECX == 0) || (*(int *)(in_ECX + 0x20) == 0)) ||
     (*(CListCtrl **)(in_ECX + 0x110) == (CListCtrl *)0x0)) {
    FUN_100037c0(&DAT_101b5ebc);
  }
  else {
    CListCtrl::GetItemText(*(CListCtrl **)(in_ECX + 0x110),param_1,param_2);
  }
  return param_1;
}

