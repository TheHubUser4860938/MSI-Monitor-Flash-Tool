// rea decompile_all
// name: FUN_1017f7a4
// address: 0x1017f7a4
// body: available
// range: 0x1017f7a4-0x1017f7c6 inclusive
// range: 0x101abc51-0x101abc5f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1017f7a4(void)

{
  int iVar1;
  
  iVar1 = ___scrt_is_ucrt_dll_in_use();
  if (iVar1 != 0) {
    __execute_onexit_table(&DAT_10248c4c);
    return;
  }
  iVar1 = FUN_101abc76();
  if (iVar1 != 0) {
    return;
  }
  common_exit(0,0,1);
  return;
}

