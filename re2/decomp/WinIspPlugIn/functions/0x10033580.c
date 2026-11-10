// rea decompile_all
// name: FUN_10033580
// address: 0x10033580
// body: available
// range: 0x10033580-0x1003360c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_10033580(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint *in_ECX;
  int iVar7;
  
  puVar1 = (undefined4 *)in_ECX[1];
  if ((param_1 < puVar1) && ((undefined4 *)*in_ECX <= param_1)) {
    iVar7 = (int)param_1 - (int)*in_ECX;
    puVar6 = (undefined4 *)(iVar7 * 0x2aaaaaab);
    iVar7 = iVar7 / 0x18;
    if (puVar1 == (undefined4 *)in_ECX[2]) {
      puVar6 = (undefined4 *)FUN_100337f0(puVar1);
    }
    puVar1 = (undefined4 *)in_ECX[1];
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)*in_ECX;
      puVar6 = puVar2 + iVar7 * 6;
      uVar3 = puVar6[1];
      uVar4 = puVar6[2];
      uVar5 = puVar6[3];
      *puVar1 = *puVar6;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(puVar2 + iVar7 * 6 + 4);
      in_ECX[1] = in_ECX[1] + 0x18;
      return puVar2;
    }
  }
  else {
    if (puVar1 == (undefined4 *)in_ECX[2]) {
      FUN_100337f0(puVar1);
    }
    puVar6 = (undefined4 *)in_ECX[1];
    if (puVar6 != (undefined4 *)0x0) {
      uVar3 = param_1[1];
      uVar4 = param_1[2];
      uVar5 = param_1[3];
      *puVar6 = *param_1;
      puVar6[1] = uVar3;
      puVar6[2] = uVar4;
      puVar6[3] = uVar5;
      *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(param_1 + 4);
    }
  }
  in_ECX[1] = in_ECX[1] + 0x18;
  return puVar6;
}

