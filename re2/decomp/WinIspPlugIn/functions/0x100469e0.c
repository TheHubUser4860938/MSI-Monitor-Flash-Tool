// rea decompile_all
// name: FUN_100469e0
// address: 0x100469e0
// body: available
// range: 0x100469e0-0x10046a59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_100469e0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  
  iVar2 = 0;
  if (-1 < param_2) {
    iVar2 = param_2;
  }
  iVar3 = *in_ECX;
  iVar1 = *(int *)(iVar3 + -0xc);
  if (iVar1 <= iVar2) {
    iVar2 = FUN_10047580(iVar3 + -0x10);
    *param_1 = iVar2 + 0x10;
    return param_1;
  }
  if (*(int **)(iVar3 + -0x10) != (int *)0x0) {
    iVar3 = (**(code **)(**(int **)(iVar3 + -0x10) + 0x10))();
    if (iVar3 != 0) goto LAB_10046a3c;
  }
  piVar4 = (int *)FUN_10049868();
  iVar3 = (**(code **)(*piVar4 + 0x10))();
LAB_10046a3c:
  FUN_10046e30(*in_ECX + (iVar1 - iVar2) * 2,iVar2,iVar3);
  return param_1;
}

