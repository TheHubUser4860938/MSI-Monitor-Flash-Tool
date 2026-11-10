// rea decompile_all
// name: CMFCBaseVisualManager::CleanUpThemes
// address: 0x4190c7
// body: available
// range: 0x4190c7-0x4191e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCBaseVisualManager::CleanUpThemes(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCBaseVisualManager::CleanUpThemes(CMFCBaseVisualManager *this)

{
  if (*(int *)(this + 4) != 0) {
    CloseThemeData(*(HTHEME *)(this + 4));
  }
  if (*(int *)(this + 8) != 0) {
    CloseThemeData(*(HTHEME *)(this + 8));
  }
  if (*(int *)(this + 0xc) != 0) {
    CloseThemeData(*(HTHEME *)(this + 0xc));
  }
  if (*(int *)(this + 0x14) != 0) {
    CloseThemeData(*(HTHEME *)(this + 0x14));
  }
  if (*(int *)(this + 0x10) != 0) {
    CloseThemeData(*(HTHEME *)(this + 0x10));
  }
  if (*(int *)(this + 0x18) != 0) {
    CloseThemeData(*(HTHEME *)(this + 0x18));
  }
  if (*(int *)(this + 0x1c) != 0) {
    CloseThemeData(*(HTHEME *)(this + 0x1c));
  }
  if (*(int *)(this + 0x20) != 0) {
    CloseThemeData(*(HTHEME *)(this + 0x20));
  }
  if (*(int *)(this + 0x24) != 0) {
    CloseThemeData(*(HTHEME *)(this + 0x24));
  }
  if (*(int *)(this + 0x28) != 0) {
    CloseThemeData(*(HTHEME *)(this + 0x28));
  }
  if (*(int *)(this + 0x2c) != 0) {
    CloseThemeData(*(HTHEME *)(this + 0x2c));
  }
  if (*(int *)(this + 0x30) != 0) {
    CloseThemeData(*(HTHEME *)(this + 0x30));
  }
  if (*(int *)(this + 0x34) != 0) {
    CloseThemeData(*(HTHEME *)(this + 0x34));
  }
  if (*(int *)(this + 0x38) != 0) {
    CloseThemeData(*(HTHEME *)(this + 0x38));
  }
  if (*(int *)(this + 0x3c) != 0) {
    CloseThemeData(*(HTHEME *)(this + 0x3c));
  }
  if (*(int *)(this + 0x44) != 0) {
    CloseThemeData(*(HTHEME *)(this + 0x44));
  }
  if (*(int *)(this + 0x40) != 0) {
    CloseThemeData(*(HTHEME *)(this + 0x40));
  }
  if (*(int *)(this + 0x48) != 0) {
    CloseThemeData(*(HTHEME *)(this + 0x48));
  }
  if (*(int *)(this + 0x4c) != 0) {
    CloseThemeData(*(HTHEME *)(this + 0x4c));
  }
  return;
}

