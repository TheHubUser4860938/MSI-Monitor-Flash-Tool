// rea decompile_all
// name: FUN_10011fd0
// address: 0x10011fd0
// body: available
// range: 0x10011fd0-0x10012098 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10011fd0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  
  iVar1 = *(int *)(in_ECX + 0x20);
  iVar7 = *(int *)(in_ECX + 0x28);
  iVar6 = *(int *)(in_ECX + 0x1c);
  iVar3 = iVar7;
  iVar4 = iVar6;
  while ((iVar1 < iVar7 && (iVar6 < iVar1))) {
    iVar10 = iVar7 - iVar1;
    iVar8 = iVar1 - iVar6;
    if (iVar8 < iVar10) {
      if (0 < iVar8) {
        puVar5 = (undefined4 *)(param_1 + iVar6 * 4);
        puVar9 = (undefined4 *)(param_1 + (iVar6 + iVar10) * 4);
        iVar10 = iVar8;
        do {
          uVar2 = *puVar5;
          *puVar5 = *puVar9;
          *puVar9 = uVar2;
          iVar10 = iVar10 + -1;
          iVar6 = iVar4;
          iVar7 = iVar3;
          puVar5 = puVar5 + 1;
          puVar9 = puVar9 + 1;
        } while (iVar10 != 0);
      }
      iVar7 = iVar7 - iVar8;
      iVar3 = iVar7;
    }
    else {
      if (0 < iVar10) {
        puVar5 = (undefined4 *)(param_1 + iVar6 * 4);
        iVar8 = iVar10;
        puVar9 = (undefined4 *)(param_1 + iVar1 * 4);
        do {
          uVar2 = *puVar5;
          *puVar5 = *puVar9;
          *puVar9 = uVar2;
          iVar8 = iVar8 + -1;
          iVar6 = iVar4;
          puVar5 = puVar5 + 1;
          iVar7 = iVar3;
          puVar9 = puVar9 + 1;
        } while (iVar8 != 0);
      }
      iVar6 = iVar6 + iVar10;
      iVar4 = iVar6;
    }
  }
  *(int *)(in_ECX + 0x1c) =
       *(int *)(in_ECX + 0x1c) + (*(int *)(in_ECX + 0x28) - *(int *)(in_ECX + 0x20));
  *(int *)(in_ECX + 0x20) = *(int *)(in_ECX + 0x28);
  return;
}

