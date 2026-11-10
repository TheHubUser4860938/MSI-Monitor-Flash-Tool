// rea decompile_all
// name: GetToolTipText
// address: 0x101036b1
// body: available
// range: 0x101036b1-0x101036f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual class ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >
   __thiscall CMFCRibbonButton::GetToolTipText(void)const 
    public: virtual class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > __thiscall CMFCRibbonButton::GetToolTipText(void)const 
   
   Library: Visual Studio 2015 Release */

undefined4 GetToolTipText(undefined4 param_1)

{
  CMFCRibbonBaseElement *in_ECX;
  
  if (((*(int *)(in_ECX + 0xc4) == 0) && (*(int *)(in_ECX + 0x18c) != 0)) &&
     (*(int *)(*(int *)(in_ECX + 0x70) + -0xc) != 0)) {
    FUN_100352e0(&DAT_101e24d0);
  }
  else {
    CMFCRibbonBaseElement::GetToolTipText(in_ECX);
  }
  return param_1;
}

