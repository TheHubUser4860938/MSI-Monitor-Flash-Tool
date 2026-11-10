// rea decompile_all
// name: CMFCRibbonPanelMenuBar::CommonInit
// address: 0x10156387
// body: available
// range: 0x10156387-0x10156441 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonPanelMenuBar::CommonInit(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonPanelMenuBar::CommonInit(CMFCRibbonPanelMenuBar *this)

{
  if (*(int *)(this + 0xea4) != 0) {
    *(CMFCRibbonPanelMenuBar **)(*(int *)(this + 0xea4) + 0x10c) = this;
  }
  *(undefined4 *)(this + 0xeb4) = 0;
  *(undefined4 *)(this + 0xe00) = 0;
  *(undefined4 *)(this + 0xe04) = 0;
  *(undefined4 *)(this + 0xeac) = 0;
  *(undefined4 *)(this + 0xeb0) = 0;
  *(undefined4 *)(this + 0xeb8) = 0;
  SetRectEmpty((LPRECT)(this + 0xe08));
  *(undefined4 *)(this + 0xe18) = 0xffffffff;
  *(undefined4 *)(this + 0xe1c) = 0xffffffff;
  *(undefined4 *)(this + 0xdd4) = 0;
  *(undefined4 *)(this + 0xdd8) = 0;
  *(undefined4 *)(this + 0xddc) = 0;
  *(undefined4 *)(this + 0xea8) = 0;
  *(undefined4 *)(this + 0xea0) = 0;
  *(undefined4 *)(this + 0xdd0) = 0;
  *(undefined4 *)(this + 0xd08) = 0;
  *(undefined4 *)(this + 0xdf8) = 0;
  *(undefined4 *)(this + 0xdfc) = 0;
  *(undefined4 *)(this + 0xde0) = 0;
  *(undefined4 *)(this + 0xde8) = 0;
  *(undefined4 *)(this + 0xdf0) = 0;
  *(undefined4 *)(this + 0xdec) = 0;
  *(undefined4 *)(this + 0xdf4) = 0;
  *(undefined4 *)(this + 0xd40) = 1;
  *(undefined4 *)(this + 0xde4) = 1;
  return;
}

