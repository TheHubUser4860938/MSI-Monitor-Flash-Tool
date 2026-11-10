// rea decompile_all
// name: FUN_1004d822
// address: 0x1004d822
// body: available
// range: 0x1004d822-0x1004d962 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_1004d822(double param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_101daf08) &&
     (FUN_10148cb4(&DAT_101daf08), DAT_101daf08 == -1)) {
    _DAT_101daf00 = _DAT_101d35a0;
    FUN_10148c75(&DAT_101daf08);
  }
  fVar1 = (float10)param_1;
  if (fVar1 < (float10)0) {
    fVar1 = -fVar1;
  }
  fVar2 = fVar1 * fVar1;
  if ((float10)1 <= fVar1) {
    if ((float10)2.0 <= fVar1) {
      return (float10)0;
    }
    fVar3 = (float10)_DAT_101d35a0;
    fVar4 = (float10)6.0;
    fVar5 = (float10)_DAT_101daf00;
    return (fVar5 * (float10)24.0 + fVar3 * (float10)8.0 +
           ((((float10)30.0 * fVar5 + fVar3 * fVar4) * fVar2 -
            fVar2 * fVar1 * (fVar5 * fVar4 + fVar3)) -
           (fVar5 * (float10)48.0 + fVar3 * (float10)12.0) * fVar1)) / fVar4;
  }
  fVar3 = (float10)6.0;
  fVar4 = (float10)_DAT_101d35a0;
  return ((fVar3 - (fVar4 + fVar4)) +
         (((float10)12.0 - (float10)9.0 * fVar4) - (float10)_DAT_101daf00 * fVar3) * fVar2 * fVar1 +
         ((fVar4 * (float10)12.0 - (float10)18.0) + (float10)_DAT_101daf00 * fVar3) * fVar2) / fVar3
  ;
}

