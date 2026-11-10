// rea decompile_all
// name: FUN_1002d1f0
// address: 0x1002d1f0
// body: available
// range: 0x1002d1f0-0x1002d269 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d1f0(int *param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *in_ECX;
  int *piVar4;
  int *piVar5;
  
  piVar4 = (int *)*in_ECX;
  piVar2 = piVar4 + 1;
  piVar3 = (int *)*piVar2;
  piVar5 = piVar4;
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    do {
      if ((uint)piVar3[4] < *param_2) {
        piVar1 = (int *)piVar3[2];
      }
      else {
        if ((*(char *)((int)piVar4 + 0xd) != '\0') && (*param_2 < (uint)piVar3[4])) {
          piVar4 = piVar3;
        }
        piVar1 = (int *)*piVar3;
        piVar5 = piVar3;
      }
      piVar3 = piVar1;
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
  }
  piVar3 = piVar4;
  if (*(char *)((int)piVar4 + 0xd) != '\0') {
    piVar3 = piVar2;
  }
  if (*(char *)(*piVar3 + 0xd) == '\0') {
    piVar2 = (int *)*piVar3;
    do {
      if (*param_2 < (uint)piVar2[4]) {
        piVar3 = (int *)*piVar2;
        piVar4 = piVar2;
      }
      else {
        piVar3 = (int *)piVar2[2];
      }
      piVar2 = piVar3;
    } while (*(char *)((int)piVar3 + 0xd) == '\0');
  }
  *param_1 = (int)piVar5;
  param_1[1] = (int)piVar4;
  return;
}

