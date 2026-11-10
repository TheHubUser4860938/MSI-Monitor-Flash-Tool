// rea decompile_all
// name: thunk_FUN_1000fc10
// address: 0x1000f3c0
// body: available
// range: 0x1000f3c0-0x1000f3c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_1000fc10(void)

{
  void *pvVar1;
  uint uVar2;
  uint *in_ECX;
  void *_Memory;
  
  if (*in_ECX != 0) {
    FUN_10012760(*in_ECX);
    pvVar1 = (void *)*in_ECX;
    uVar2 = (int)(in_ECX[2] - (int)pvVar1) / 0xfc;
    if (0x1041041 < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1019ab71();
    }
    _Memory = pvVar1;
    if (0xfff < uVar2 * 0xfc) {
      if (((uint)pvVar1 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1019ab71();
      }
      _Memory = *(void **)((int)pvVar1 - 4);
      if (pvVar1 <= _Memory) {
                    /* WARNING: Subroutine does not return */
        FUN_1019ab71();
      }
      if ((uint)((int)pvVar1 - (int)_Memory) < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_1019ab71();
      }
      if (0x23 < (uint)((int)pvVar1 - (int)_Memory)) {
                    /* WARNING: Subroutine does not return */
        FUN_1019ab71();
      }
    }
    FID_conflict__free(_Memory);
    *in_ECX = 0;
    in_ECX[1] = 0;
    in_ECX[2] = 0;
  }
  return;
}

