// rea decompile_all
// name: FUN_1003f820
// address: 0x1003f820
// body: available
// range: 0x1003f820-0x1003f90f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003f820(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_ECX;
  int *piVar5;
  
  *in_ECX = *param_1;
  iVar2 = param_1[1];
  iVar3 = in_ECX[1];
  piVar5 = (int *)(iVar3 + -0x10);
  if ((int *)(iVar2 + -0x10) != piVar5) {
    if ((*(int *)(iVar3 + -4) < 0) || (*(int *)(iVar2 + -0x10) != *piVar5)) {
      FUN_100351f0(iVar2,*(undefined4 *)(iVar2 + -0xc));
    }
    else {
      iVar4 = FUN_100349e0((int *)(iVar2 + -0x10));
      piVar1 = (int *)(iVar3 + -4);
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1 || iVar2 + -1 < 0) {
        (**(code **)(*(int *)*piVar5 + 4))(piVar5);
      }
      in_ECX[1] = iVar4 + 0x10;
    }
  }
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  iVar2 = param_1[5];
  iVar3 = in_ECX[5];
  piVar5 = (int *)(iVar3 + -0x10);
  if ((int *)(iVar2 + -0x10) != piVar5) {
    if ((-1 < *(int *)(iVar3 + -4)) && (*(int *)(iVar2 + -0x10) == *piVar5)) {
      iVar4 = FUN_100349e0((int *)(iVar2 + -0x10));
      piVar1 = (int *)(iVar3 + -4);
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1 || iVar2 + -1 < 0) {
        (**(code **)(*(int *)*piVar5 + 4))(piVar5);
      }
      in_ECX[5] = iVar4 + 0x10;
      return;
    }
    FUN_100351f0(iVar2,*(undefined4 *)(iVar2 + -0xc));
  }
  return;
}

