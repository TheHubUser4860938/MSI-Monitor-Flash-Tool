// rea decompile_all
// name: CMFCRibbonColorButton::CommonInit
// address: 0x51f830
// body: available
// range: 0x51f830-0x51f8b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonColorButton::CommonInit(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonColorButton::CommonInit(CMFCRibbonColorButton *this)

{
  *(undefined4 *)(this + 0x37c) = 0xffffffff;
  *(undefined4 *)(this + 0x380) = 0;
  *(undefined4 *)(this + 0x3c0) = 0;
  *(undefined4 *)(this + 0x3c4) = 1;
  *(undefined4 *)(this + 0x3c8) = 0;
  *(undefined4 *)(this + 0x3cc) = 0;
  *(undefined4 *)(this + 0x168) = 1;
  *(undefined4 *)(this + 0x3d4) = 0;
  *(undefined4 *)(this + 0x364) = 1;
  *(undefined4 *)(this + 0x368) = 0;
  *(undefined4 *)(this + 0x350) = 1;
  *(undefined4 *)(this + 0x3d0) = 0;
  SetPalette(this,(CPalette *)0x0);
  *(undefined4 *)(this + 0x348) = 5;
  *(undefined4 *)(this + 0x3ec) = 0;
  *(undefined4 *)(this + 0x3f0) = 0;
  *(undefined4 *)(this + 0x358) = 1;
  FUN_005205d8(0x16,0x16);
  return;
}

