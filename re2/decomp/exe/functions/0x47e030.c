// rea decompile_all
// name: CMFCRibbonTab::get_accParent
// address: 0x47e030
// body: available
// range: 0x47e030-0x47e07a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual long __thiscall CMFCRibbonTab::get_accParent(struct IDispatch * *)
   
   Library: Visual Studio 2015 Release */

long __thiscall CMFCRibbonTab::get_accParent(CMFCRibbonTab *this,IDispatch **param_1)

{
  int iVar1;
  IDispatch *pIVar2;
  uint uVar3;
  
  uVar3 = 0x80070057;
  if ((((*(int *)(this + 0x88) != 0) &&
       (iVar1 = *(int *)(*(int *)(this + 0x88) + 0x53c), iVar1 != 0)) &&
      (*(int *)(iVar1 + 0x20) != 0)) &&
     ((param_1 != (IDispatch **)0x0 && ((CCmdTarget *)(iVar1 + 0x1250) != (CCmdTarget *)0x0)))) {
    pIVar2 = CCmdTarget::GetIDispatch((CCmdTarget *)(iVar1 + 0x1250),1);
    *param_1 = pIVar2;
    uVar3 = (uint)(pIVar2 == (IDispatch *)0x0);
  }
  return uVar3;
}

