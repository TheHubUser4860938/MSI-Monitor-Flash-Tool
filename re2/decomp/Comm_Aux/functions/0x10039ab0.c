// rea decompile_all
// name: FUN_10039ab0
// address: 0x10039ab0
// body: available
// range: 0x10039ab0-0x10039bf5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10039aef to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10039ab0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  CWinApp *in_ECX;
  int *piVar7;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a0af0;
  local_10 = ExceptionList;
  uVar3 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  CWinApp::InitInstance(in_ECX);
  piVar4 = (int *)FUN_10048e90(uVar3);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_100351a0(0x80004005);
  }
  puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0xc))();
  local_8 = 0;
  DAT_1021ae1c = 1;
  *(undefined2 *)(in_ECX + 0x150) = 0;
  DAT_1021ae18 = 1;
  DAT_102127f8 = 0;
  if (DAT_10212800 == 0) {
    FUN_100337e0();
  }
  piVar4 = (int *)FUN_10033640();
  iVar2 = DAT_1021ae98;
  local_8._0_1_ = 1;
  iVar1 = *piVar4;
  piVar7 = (int *)(DAT_1021ae98 + -0x10);
  piVar4 = (int *)(iVar1 + -0x10);
  if (piVar4 != piVar7) {
    if ((*(int *)(DAT_1021ae98 + -4) < 0) || (*piVar4 != *piVar7)) {
      FUN_100351f0(iVar1,*(undefined4 *)(iVar1 + -0xc));
    }
    else {
      iVar6 = FUN_100349e0(piVar4);
      piVar4 = (int *)(iVar2 + -4);
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 1 || iVar1 + -1 < 0) {
        (**(code **)(*(int *)*piVar7 + 4))(piVar7);
      }
      DAT_1021ae98 = iVar6 + 0x10;
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  LOCK();
  piVar4 = (int *)(local_18 + -4);
  iVar1 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar1 == 1 || iVar1 + -1 < 0) {
    (**(code **)(**(int **)(local_18 + -0x10) + 4))((undefined4 *)(local_18 + -0x10));
  }
  local_8 = 0xffffffff;
  LOCK();
  piVar4 = puVar5 + 3;
  iVar1 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar1 == 1 || iVar1 + -1 < 0) {
    (**(code **)(*(int *)*puVar5 + 4))(puVar5);
  }
  ExceptionList = local_10;
  return 1;
}

