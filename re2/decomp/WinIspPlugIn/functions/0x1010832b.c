// rea decompile_all
// name: GetToolTipText
// address: 0x1010832b
// body: available
// range: 0x1010832b-0x101083cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual class ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >
   __thiscall CMFCRibbonDefaultPanelButton::GetToolTipText(void)const 
    public: virtual class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > __thiscall CMFCRibbonDefaultPanelButton::GetToolTipText(void)const 
   
   Library: Visual Studio 2015 Release */

int * GetToolTipText(int *param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  undefined4 local_18;
  
  BVar1 = IsRectEmpty((RECT *)(in_ECX + 0x74));
  if (BVar1 == 0) {
    iVar3 = FUN_10047580(*(int *)(in_ECX + 0x60) + -0x10);
    local_18 = iVar3 + 0x10;
  }
  else {
    uVar2 = FUN_10049868();
    FUN_100476a0(uVar2);
  }
  iVar3 = FUN_10047580(local_18 + -0x10);
  *param_1 = iVar3 + 0x10;
  if (BVar1 == 0) {
    FUN_100476d0();
  }
  else {
    FUN_100476d0();
  }
  return param_1;
}

