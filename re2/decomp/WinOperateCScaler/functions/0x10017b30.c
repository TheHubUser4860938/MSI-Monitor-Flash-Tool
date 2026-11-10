// rea decompile_all
// name: FUN_10017b30
// address: 0x10017b30
// body: available
// range: 0x10017b30-0x10017be9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10017b30(ushort *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  undefined4 *in_ECX;
  uint uVar5;
  ushort *puVar6;
  
  if (param_3 == 0) {
    uVar5 = in_ECX[4];
    if (param_2 < (uint)in_ECX[4]) {
      uVar5 = param_2;
    }
    return uVar5;
  }
  if ((uint)in_ECX[4] < param_3) {
    return 0xffffffff;
  }
  uVar5 = in_ECX[4] - param_3;
  if (param_2 < uVar5) {
    uVar5 = param_2;
  }
  puVar3 = in_ECX;
  if (7 < (uint)in_ECX[5]) {
    puVar3 = (undefined4 *)*in_ECX;
  }
  puVar6 = (ushort *)((int)puVar3 + uVar5 * 2);
  uVar1 = *param_1;
  do {
    puVar4 = puVar6;
    uVar5 = param_3;
    puVar2 = param_1;
    if (*puVar6 == uVar1) {
      while( true ) {
        if (uVar5 == 0) goto LAB_10017ba4;
        if (*puVar4 != *puVar2) break;
        puVar4 = puVar4 + 1;
        uVar5 = uVar5 - 1;
        puVar2 = puVar2 + 1;
      }
      if ((-(uint)(*puVar4 < *puVar2) & 0xfffffffe) == 0xffffffff) {
LAB_10017ba4:
        if (7 < (uint)in_ECX[5]) {
          in_ECX = (undefined4 *)*in_ECX;
        }
        return (int)puVar6 - (int)in_ECX >> 1;
      }
    }
    puVar4 = (ushort *)FUN_10015e90();
    if (puVar6 == puVar4) {
      return 0xffffffff;
    }
    puVar6 = puVar6 + -1;
  } while( true );
}

