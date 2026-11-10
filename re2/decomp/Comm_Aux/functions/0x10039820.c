// rea decompile_all
// name: FUN_10039820
// address: 0x10039820
// body: available
// range: 0x10039820-0x100398ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100398fb to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_10039820(void)

{
  int *piVar1;
  int iVar2;
  
  DAT_1021ae18 = 1;
  DAT_1021ae1c = 1;
  DAT_1021ae20 = 1;
  DAT_1021ae24 = 5;
  DAT_1021ae28 = 10;
  DAT_1021ae2c = 1;
  DAT_1021ae30 = 0;
  piVar1 = (int *)FUN_10048e90();
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0xc))();
    DAT_1021ae34 = iVar2 + 0x10;
    DAT_1021ae54 = 1;
    DAT_1021ae58 = 0;
    DAT_1021ae5c = 0;
    DAT_1021ae60 = 0;
    DAT_1021ae64 = 1;
    DAT_1021ae68 = 1;
    DAT_1021ae6c = 0;
    DAT_1021ae70 = 0;
    DAT_1021ae38 = 1;
    DAT_1021ae3c = 1;
    DAT_1021ae40 = 0x20;
    DAT_1021ae44 = 1;
    DAT_1021ae48 = 0;
    DAT_1021ae4c = 0;
    DAT_1021ae50 = 0x94;
    DAT_1021ae74 = 0;
    DAT_1021ae78 = 1;
    DAT_1021ae7c = 0;
    DAT_1021ae80 = 1;
    DAT_1021ae84 = 0;
    FUN_10039790();
    DAT_1021ae90 = 0;
    return &DAT_1021ae18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_100351a0(0x80004005);
}

