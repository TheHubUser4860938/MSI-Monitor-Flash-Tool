// rea decompile_all
// name: FUN_1002d740
// address: 0x1002d740
// body: available
// range: 0x1002d740-0x1002d7bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1002d740(void)

{
  _DAT_1024a1ac = 0;
  _DAT_1024a1c8 = 0;
  _DAT_1024a1f0 = 0;
  DAT_1024a1e0 = 0;
  DAT_1024a1a8 = 0;
  DAT_1024a1c0 = 0;
  DAT_1024a1b0 = 1;
  _DAT_1024a1b4 = 1;
  DAT_1024a1b8 = 0;
  DAT_1024a1bc = 0;
  _DAT_1024a1dc = 7;
  _DAT_1024a1d8 = 0;
  _DAT_1024a1c4 = CCpRsString::vftable;
  _DAT_1024a1f4 = 0xf;
  return &DAT_1024a1a8;
}

