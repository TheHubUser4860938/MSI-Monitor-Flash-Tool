// rea decompile_all
// name: CMFCRibbonUndoButton::CopyFrom
// address: 0x10131a00
// body: available
// range: 0x10131a00-0x10131a66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonUndoButton::CopyFrom(class CMFCRibbonBaseElement
   const &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonUndoButton::CopyFrom(CMFCRibbonUndoButton *this,CMFCRibbonBaseElement *param_1)

{
  CMFCRibbonGallery::CopyFrom((CMFCRibbonGallery *)this,param_1);
  *(undefined4 *)(this + 0x378) = *(undefined4 *)(param_1 + 0x378);
  FUN_1010080a(0,0xffffffff);
  CStringArray::Copy((CStringArray *)(this + 0x390),(CStringArray *)(param_1 + 0x390));
  *(undefined4 *)(this + 0x34c) = *(undefined4 *)(param_1 + 0x34c);
  *(undefined4 *)(this + 0x37c) = *(undefined4 *)(param_1 + 0x37c);
  *(undefined4 *)(this + 0x380) = *(undefined4 *)(param_1 + 0x380);
  return;
}

