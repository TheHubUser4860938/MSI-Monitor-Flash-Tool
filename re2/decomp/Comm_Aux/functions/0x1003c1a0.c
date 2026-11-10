// rea decompile_all
// name: GetDisplayCount
// address: 0x1003c1a0
// body: available
// range: 0x1003c1a0-0x1003c210 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 GetDisplayCount(void)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* 0x3c1a0  17  GetDisplayCount */
  if (DAT_102127f8 == 0) {
    FUN_1003b7e0();
    iVar1 = FUN_10039e50();
    if (iVar1 == 0) {
      DAT_102127f8 = 1;
    }
    FUN_1003bbb0();
    if (iVar1 != 0) {
      return 0xffffffff;
    }
  }
  if (DAT_1021ae1c == 1) {
    uVar2 = DAT_10206e78;
    if (DAT_1021aff4 == 2) {
      uVar2 = DAT_10206ed4;
    }
    return uVar2;
  }
  if (DAT_1021ae1c != 2) {
    if (DAT_1021ae1c != 3) {
      return 0;
    }
    return DAT_10206f10;
  }
  return DAT_10206ddc;
}

