// rea decompile_all
// name: FUN_10165b96
// address: 0x10165b96
// body: available
// range: 0x10165b96-0x10165bf5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10165bf1 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10165b96(byte *param_1,ushort param_2)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_2 < 0x16) {
    bVar1 = *param_1;
    iVar2 = *(int *)(&DAT_101fa490 + (uint)param_2 * 4) + 4;
    do {
      if (bVar1 == 0) {
        return iVar2;
      }
      if (bVar1 != 0xff) {
        puVar3 = &DAT_101fa438;
        if ((bVar1 & 0x40) == 0) {
          puVar3 = &DAT_101fa3e0;
        }
        if (0x15 < (bVar1 & 0xbf)) break;
        iVar2 = iVar2 + *(int *)(puVar3 + (bVar1 & 0xbf) * 4);
      }
      param_1 = param_1 + 1;
      bVar1 = *param_1;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_1004a383();
}

