// rea decompile_all
// name: FUN_1000c880
// address: 0x1000c880
// body: available
// range: 0x1000c880-0x1000c8f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000c880(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *in_ECX;
  
  iVar2 = *in_ECX;
  uVar7 = FUN_1000ca00(*(undefined4 *)(*param_1 + 4),iVar2,param_2);
  *(undefined4 *)(iVar2 + 4) = uVar7;
  in_ECX[1] = param_1[1];
  piVar3 = (int *)*in_ECX;
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0xd) != '\0') {
    *piVar3 = (int)piVar3;
    *(int *)(*in_ECX + 8) = *in_ECX;
    return;
  }
  cVar1 = *(char *)(*piVar4 + 0xd);
  piVar6 = (int *)*piVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar6 + 0xd);
    piVar4 = piVar6;
    piVar6 = (int *)*piVar6;
  }
  *piVar3 = (int)piVar4;
  iVar2 = *(int *)(*in_ECX + 4);
  iVar5 = *(int *)(iVar2 + 8);
  cVar1 = *(char *)(iVar5 + 0xd);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0xd);
    iVar2 = iVar5;
    iVar5 = *(int *)(iVar5 + 8);
  }
  *(int *)(*in_ECX + 8) = iVar2;
  return;
}

