// rea decompile_all
// name: CMFCToolBarImages::CopyTemp
// address: 0x1004eeaf
// body: available
// range: 0x1004eeaf-0x1004ef04 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarImages::CopyTemp(class CMFCToolBarImages &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBarImages::CopyTemp(CMFCToolBarImages *this,CMFCToolBarImages *param_1)

{
  FUN_1004ebad();
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(this + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(this + 0x58);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(this + 100);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(this + 0x68);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(this + 0x8c);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 8);
  return;
}

