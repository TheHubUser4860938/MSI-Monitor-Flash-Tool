// rea decompile_all
// name: FUN_1002c5b0
// address: 0x1002c5b0
// body: available
// range: 0x1002c5b0-0x1002c64d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_1002c5b0(undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *in_ECX;
  undefined1 local_8 [4];
  
  piVar2 = param_2;
  if ((param_2 == *(int **)*in_ECX) && (param_3 == (int *)*in_ECX)) {
    FUN_1002ca90();
    *param_1 = *(undefined4 *)*in_ECX;
    return param_1;
  }
  while (piVar2 != param_3) {
    param_2 = piVar2;
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      param_2 = (int *)piVar2[2];
      if (*(char *)((int)param_2 + 0xd) == '\0') {
        cVar1 = *(char *)(*param_2 + 0xd);
        piVar3 = (int *)*param_2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0xd);
          param_2 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0xd);
        piVar4 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar3 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0xd);
          piVar4 = (int *)param_2[1];
          piVar3 = param_2;
        }
      }
    }
    FUN_1002cb10(local_8,piVar2);
    piVar2 = param_2;
  }
  *param_1 = piVar2;
  return param_1;
}

