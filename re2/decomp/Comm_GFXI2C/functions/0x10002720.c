// rea decompile_all
// name: FUN_10002720
// address: 0x10002720
// body: available
// range: 0x10002720-0x1000279e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10002720(void)

{
  FUN_1003b642(&DAT_10069910,(wchar_t *)0x0);
  DAT_100699ec = 0;
  _DAT_100699f0 = 0;
  _DAT_100699b4 = 0;
  _DAT_100699b8 = 0;
  _DAT_100699bc = 0;
  _DAT_100699c0 = 0;
  _DAT_100699c4 = 0;
  _DAT_100699c8 = 0;
  _DAT_100699cc = 0;
  _DAT_100699d0 = 0;
  _DAT_100699d4 = 0;
  _DAT_100699d8 = 0;
  DAT_10069a04 = 0;
  _DAT_10069a08 = 0;
  _DAT_10069a0c = 0;
  _DAT_10069a10 = 0;
  _DAT_10069910 = CComm_GFXI2CApp::vftable;
  return &DAT_10069910;
}

