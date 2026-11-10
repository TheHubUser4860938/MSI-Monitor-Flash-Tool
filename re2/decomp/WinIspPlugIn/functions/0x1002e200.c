// rea decompile_all
// name: FUN_1002e200
// address: 0x1002e200
// body: available
// range: 0x1002e200-0x1002e34a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002e200(void)

{
  if (0xf < DAT_1024e68c) {
    FUN_1000b630(DAT_1024e678,DAT_1024e68c + 1);
  }
  DAT_1024e68c = 0xf;
  _DAT_1024e688 = 0;
  DAT_1024e678 = DAT_1024e678 & 0xffffff00;
  if (0xf < DAT_1024e648) {
    FUN_1000b630(DAT_1024e634,DAT_1024e648 + 1);
  }
  DAT_1024e648 = 0xf;
  _DAT_1024e644 = 0;
  DAT_1024e634 = DAT_1024e634 & 0xffffff00;
  if (0xf < DAT_1024e600) {
    FUN_1000b630(DAT_1024e5ec,DAT_1024e600 + 1);
  }
  DAT_1024e600 = 0xf;
  _DAT_1024e5fc = 0;
  DAT_1024e5ec = DAT_1024e5ec & 0xffffff00;
  if (0xf < DAT_1024e5bc) {
    FUN_1000b630(DAT_1024e5a8,DAT_1024e5bc + 1);
  }
  DAT_1024e5bc = 0xf;
  _DAT_1024e5b8 = 0;
  DAT_1024e5a8 = DAT_1024e5a8 & 0xffffff00;
  if (0xf < DAT_1024e578) {
    FUN_1000b630(DAT_1024e564,DAT_1024e578 + 1);
  }
  DAT_1024e578 = 0xf;
  _DAT_1024e574 = 0;
  DAT_1024e564 = DAT_1024e564 & 0xffffff00;
  if (0xf < DAT_1024e528) {
    FUN_1000b630(DAT_1024e514,DAT_1024e528 + 1);
  }
  DAT_1024e528 = 0xf;
  _DAT_1024e524 = 0;
  DAT_1024e514 = DAT_1024e514 & 0xffffff00;
  return;
}

