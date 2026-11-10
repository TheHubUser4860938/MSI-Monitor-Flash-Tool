// rea decompile_all
// name: FUN_1000f3d0
// address: 0x1000f3d0
// body: available
// range: 0x1000f3d0-0x1000f442 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f3d0(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)((undefined4 *)*in_ECX)[1];
  cVar2 = *(char *)((int)puVar4 + 0xd);
  puVar1 = (undefined4 *)*in_ECX;
  while (cVar2 == '\0') {
    cVar2 = FUN_10047f60();
    if (cVar2 == '\0') {
      puVar3 = (undefined4 *)*puVar4;
    }
    else {
      puVar3 = (undefined4 *)puVar4[2];
      puVar4 = puVar1;
    }
    puVar1 = puVar4;
    puVar4 = puVar3;
    cVar2 = *(char *)((int)puVar3 + 0xd);
  }
  if ((puVar1 != (undefined4 *)*in_ECX) && (cVar2 = FUN_10047f60(), cVar2 == '\0')) {
    *param_1 = (int)puVar1;
    return;
  }
  *param_1 = *in_ECX;
  return;
}

