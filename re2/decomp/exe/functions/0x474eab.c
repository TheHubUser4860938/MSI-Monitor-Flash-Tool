// rea decompile_all
// name: CMFCRibbonPanel::GetCaptionSize
// address: 0x474eab
// body: available
// range: 0x474eab-0x474f04 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: class CSize __thiscall CMFCRibbonPanel::GetCaptionSize(class CDC *)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonPanel::GetCaptionSize(CMFCRibbonPanel *this,CDC *param_1)

{
  int iVar1;
  CDC *in_stack_00000008;
  CMFCRibbonPanel *local_c;
  CMFCRibbonPanel *local_8;
  
  if (*(int *)(this + 0x80) == 0) {
    local_c = this;
    local_8 = this;
    CDC::GetTextExtent(in_stack_00000008,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_c);
    iVar1 = *(int *)(this + 0xb4);
    if (*(int *)(this + 0x1b8) != 0) {
      local_c = local_c + 1 + (int)(local_8 + iVar1 + 1);
    }
    *(CMFCRibbonPanel **)param_1 = local_c;
    *(CMFCRibbonPanel **)(param_1 + 4) = local_8 + iVar1 + 1;
  }
  else {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

