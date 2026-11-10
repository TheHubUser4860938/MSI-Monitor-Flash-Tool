// rea decompile_all
// name: FUN_10001750
// address: 0x10001750
// body: available
// range: 0x10001750-0x100017b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10001750(void)

{
  undefined4 *unaff_ESI;
  
  if ((void *)unaff_ESI[8] != (void *)0x0) {
    _free((void *)unaff_ESI[8]);
    unaff_ESI[8] = 0;
  }
  if ((void *)unaff_ESI[9] != (void *)0x0) {
    _free((void *)unaff_ESI[9]);
    unaff_ESI[9] = 0;
  }
  if (unaff_ESI[0x10] == 1) {
    if ((code *)unaff_ESI[1] != (code *)0x0) {
      (*(code *)unaff_ESI[1])();
    }
    *unaff_ESI = 0;
    unaff_ESI[1] = 0;
    unaff_ESI[2] = 0;
    unaff_ESI[3] = 0;
    unaff_ESI[4] = 0;
    unaff_ESI[5] = 0;
    unaff_ESI[6] = 0;
    unaff_ESI[0x10] = 0;
  }
  if ((HMODULE)unaff_ESI[7] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)unaff_ESI[7]);
    unaff_ESI[7] = 0;
  }
  return;
}

