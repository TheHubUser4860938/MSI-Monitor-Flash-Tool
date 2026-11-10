// rea decompile_all
// name: FUN_10033a90
// address: 0x10033a90
// body: available
// range: 0x10033a90-0x10033c0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10033aea to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10033c0b to 0x10033c1e FUN_10033c1e (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10033a90(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  uint uStack_5c;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_101a0460;
  local_10 = ExceptionList;
  uStack_5c = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  ExceptionList = &local_10;
  local_8 = 2;
  uStack_7 = 0;
  CStdioFile(param_1,0x7001);
  local_8 = 3;
  piVar3 = (int *)FUN_10048e90();
  if (piVar3 != (int *)0x0) {
    piVar4 = (int *)(**(code **)(*piVar3 + 0xc))();
    local_18 = piVar4 + 4;
    local_8 = 4;
    FUN_10034900();
    uVar5 = FUN_10034870(&local_24,extraout_ECX);
    local_8 = 5;
    piVar3 = (int *)FUN_10033d60(&local_20,uVar5,&stack0x00000008);
    local_8 = 6;
    iVar2 = *piVar3;
    piVar3 = (int *)(iVar2 + -0x10);
    if (piVar3 != piVar4) {
      piVar1 = piVar4 + 3;
      if ((piVar4[3] < 0) || (*piVar3 != *piVar4)) {
        FUN_100351f0(iVar2,*(undefined4 *)(iVar2 + -0xc));
      }
      else {
        local_1c = FUN_100349e0(piVar3);
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1 || iVar2 + -1 < 0) {
          (**(code **)(*(int *)*piVar4 + 4))(piVar4);
        }
        local_18 = (int *)(local_1c + 0x10);
      }
    }
    local_8 = 5;
    LOCK();
    piVar3 = (int *)(local_20 + -4);
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      (**(code **)(**(int **)(local_20 + -0x10) + 4))((undefined4 *)(local_20 + -0x10));
    }
    local_8 = 4;
    LOCK();
    piVar3 = (int *)(local_24 + -4);
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      (**(code **)(**(int **)(local_24 + -0x10) + 4))((undefined4 *)(local_24 + -0x10));
    }
    FUN_10034140(&DAT_101e22ac);
    FUN_10034680();
    piVar3 = local_18;
    FUN_1004c9fc(local_18);
    FUN_1004c4bd();
    _local_8 = CONCAT31(uStack_7,3);
    piVar4 = piVar3 + -4;
    LOCK();
    piVar3 = piVar3 + -1;
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      (**(code **)(*(int *)*piVar4 + 4))(piVar4);
    }
    FUN_1004c307();
    FUN_10033c1e();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_100351a0(0x80004005);
}

