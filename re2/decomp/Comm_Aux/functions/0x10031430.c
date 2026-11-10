// rea decompile_all
// name: FUN_10031430
// address: 0x10031430
// body: available
// range: 0x10031430-0x100314e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


HLOCAL FUN_10031430(char *param_1)

{
  char cVar1;
  char *local_20;
  char *local_10;
  HLOCAL local_c;
  uint local_8;
  
  local_c = (HLOCAL)0x0;
  if (param_1 != (char *)0x0) {
    local_10 = param_1;
    do {
      cVar1 = *local_10;
      local_10 = local_10 + 1;
    } while (cVar1 != '\0');
    local_c = LocalAlloc(0x40,((int)local_10 - (int)(param_1 + 1)) * 2 + 2);
    if (local_c != (HLOCAL)0x0) {
      local_8 = 0;
      while( true ) {
        local_20 = param_1;
        do {
          cVar1 = *local_20;
          local_20 = local_20 + 1;
        } while (cVar1 != '\0');
        if ((uint)((int)local_20 - (int)(param_1 + 1)) <= local_8) break;
        *(short *)((int)local_c + local_8 * 2) = (short)param_1[local_8];
        local_8 = local_8 + 1;
      }
    }
  }
  return local_c;
}

