// rea decompile_all
// name: FUN_10037240
// address: 0x10037240
// body: available
// range: 0x10037240-0x1003738c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037240(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_ECX;
  int *piVar4;
  int *piVar5;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  iVar1 = param_1[2];
  iVar3 = in_ECX[2];
  piVar4 = (int *)(iVar3 + -0x10);
  if ((int *)(iVar1 + -0x10) != piVar4) {
    if ((*(int *)(iVar3 + -4) < 0) || (*(int *)(iVar1 + -0x10) != *piVar4)) {
      FUN_100351f0(iVar1,*(undefined4 *)(iVar1 + -0xc));
    }
    else {
      iVar2 = FUN_100349e0((int *)(iVar1 + -0x10));
      piVar5 = (int *)(iVar3 + -4);
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 1 || iVar1 + -1 < 0) {
        (**(code **)(*(int *)*piVar4 + 4))(piVar4);
      }
      in_ECX[2] = iVar2 + 0x10;
    }
  }
  iVar1 = in_ECX[3];
  piVar5 = (int *)(iVar1 + -0x10);
  iVar3 = param_1[3];
  piVar4 = (int *)(iVar3 + -0x10);
  if (piVar4 != piVar5) {
    if ((*(int *)(iVar1 + -4) < 0) || (*piVar4 != *piVar5)) {
      FUN_100351f0(iVar3,*(undefined4 *)(iVar3 + -0xc));
    }
    else {
      iVar3 = FUN_100349e0(piVar4);
      piVar4 = (int *)(iVar1 + -4);
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 1 || iVar1 + -1 < 0) {
        (**(code **)(*(int *)*piVar5 + 4))(piVar5);
      }
      in_ECX[3] = iVar3 + 0x10;
    }
  }
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  iVar1 = param_1[6];
  iVar3 = in_ECX[6];
  piVar4 = (int *)(iVar3 + -0x10);
  if ((int *)(iVar1 + -0x10) != piVar4) {
    if ((-1 < *(int *)(iVar3 + -4)) && (*(int *)(iVar1 + -0x10) == *piVar4)) {
      iVar2 = FUN_100349e0((int *)(iVar1 + -0x10));
      piVar5 = (int *)(iVar3 + -4);
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 1 || iVar1 + -1 < 0) {
        (**(code **)(*(int *)*piVar4 + 4))(piVar4);
      }
      in_ECX[6] = iVar2 + 0x10;
      return;
    }
    FUN_100351f0(iVar1,*(undefined4 *)(iVar1 + -0xc));
  }
  return;
}

