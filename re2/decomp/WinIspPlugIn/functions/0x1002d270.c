// rea decompile_all
// name: FUN_1002d270
// address: 0x1002d270
// body: available
// range: 0x1002d270-0x1002d2f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d270(undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = (undefined4 *)*in_ECX;
  puVar5 = puVar1;
  if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
    puVar3 = (undefined4 *)puVar1[1];
    do {
      if ((uint)puVar3[4] < *param_2) {
        puVar4 = (undefined4 *)puVar3[2];
      }
      else {
        puVar4 = (undefined4 *)*puVar3;
        puVar5 = puVar3;
      }
      puVar3 = puVar4;
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  if ((puVar5 != puVar1) && ((uint)puVar5[4] <= *param_2)) {
    *param_1 = puVar5;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  iVar2 = FUN_1002d3c0(&DAT_1020e764,&param_2,param_2);
  FUN_1002d460(&param_2,puVar5,iVar2 + 0x10,iVar2);
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

