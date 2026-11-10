// rea decompile_all
// name: FUN_10016a70
// address: 0x10016a70
// body: available
// range: 0x10016a70-0x10016b53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10016a70(ushort *param_1,uint param_2,uint param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 *in_ECX;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  if ((param_3 == 0) && (param_2 <= (uint)in_ECX[4])) {
    return param_2;
  }
  if (((uint)in_ECX[4] <= param_2) || (uVar7 = in_ECX[4] - param_2, uVar7 < param_3)) {
    return 0xffffffff;
  }
  iVar8 = uVar7 + (1 - param_3);
  puVar3 = in_ECX;
  if (7 < (uint)in_ECX[5]) {
    puVar3 = (undefined4 *)*in_ECX;
  }
  puVar4 = (ushort *)((int)puVar3 + param_2 * 2);
  do {
    if (iVar8 != 0) {
      puVar5 = puVar4;
      iVar6 = iVar8;
      do {
        if (*puVar5 == *param_1) goto LAB_10016ae9;
        puVar5 = puVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    puVar5 = (ushort *)0x0;
LAB_10016ae9:
    puVar1 = puVar5;
    uVar7 = param_3;
    puVar2 = param_1;
    if (puVar5 == (ushort *)0x0) {
      return 0xffffffff;
    }
    while( true ) {
      if (uVar7 == 0) goto LAB_10016b0b;
      if (*puVar1 != *puVar2) break;
      puVar1 = puVar1 + 1;
      uVar7 = uVar7 - 1;
      puVar2 = puVar2 + 1;
    }
    if ((-(uint)(*puVar1 < *puVar2) & 0xfffffffe) == 0xffffffff) {
LAB_10016b0b:
      if (7 < (uint)in_ECX[5]) {
        in_ECX = (undefined4 *)*in_ECX;
      }
      return (int)puVar5 - (int)in_ECX >> 1;
    }
    iVar8 = iVar8 + (-1 - ((int)puVar5 - (int)puVar4 >> 1));
    puVar4 = puVar5 + 1;
  } while( true );
}

