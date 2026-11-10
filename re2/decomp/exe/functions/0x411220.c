// rea decompile_all
// name: FUN_00411220
// address: 0x411220
// body: available
// range: 0x411220-0x4113b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x411289 to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4113b7 to 0x4113ca FUN_004113ca (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00411220(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uStack_5c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  __time64_t local_24;
  int *local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0059cf10;
  local_10 = ExceptionList;
  uStack_5c = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  ExceptionList = &local_10;
  local_8 = 2;
  uStack_7 = 0;
  local_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  local_2c = 0;
  local_18 = uStack_5c;
  CStdioFile(param_1,0x7001);
  local_8 = 3;
  piVar2 = (int *)FUN_004295fe();
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)(**(code **)(*piVar2 + 0xc))();
    local_1c = piVar3 + 4;
    uVar4 = 0;
    local_8 = 4;
    local_24 = FID_conflict___time64((__time64_t *)0x0);
    uVar4 = FUN_00415710(&local_48,uVar4);
    local_8 = 5;
    piVar2 = (int *)FUN_00414710(&local_44,uVar4,&stack0x00000008);
    local_8 = 6;
    iVar1 = *piVar2;
    piVar2 = (int *)(iVar1 + -0x10);
    if (piVar2 != piVar3) {
      if ((piVar3[3] < 0) || (*piVar2 != *piVar3)) {
        FUN_00415e30(iVar1,*(undefined4 *)(iVar1 + -0xc));
      }
      else {
        local_40 = FUN_00415ee0(piVar2);
        piVar2 = piVar3 + 3;
        LOCK();
        iVar1 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar1 == 1 || iVar1 + -1 < 0) {
          (**(code **)(*(int *)*piVar3 + 4))(piVar3);
        }
        local_1c = (int *)(local_40 + 0x10);
      }
    }
    local_8 = 5;
    LOCK();
    piVar2 = (int *)(local_44 + -4);
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1 || iVar1 + -1 < 0) {
      (**(code **)(**(int **)(local_44 + -0x10) + 4))((undefined4 *)(local_44 + -0x10));
    }
    local_8 = 4;
    LOCK();
    piVar2 = (int *)(local_48 + -4);
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1 || iVar1 + -1 < 0) {
      (**(code **)(**(int **)(local_48 + -0x10) + 4))((undefined4 *)(local_48 + -0x10));
    }
    FUN_004149c0(&DAT_005e94bc);
    uVar5 = 2;
    uVar4 = 0;
    (**(code **)(local_3c + 0x2c))(0,0,2);
    piVar2 = local_1c;
    FUN_004382ac(local_1c);
    FUN_00437d24();
    _local_8 = CONCAT31(uStack_7,3);
    piVar3 = piVar2 + -4;
    LOCK();
    piVar2 = piVar2 + -1;
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1 || iVar1 + -1 < 0) {
      (**(code **)(*(int *)*piVar3 + 4))(piVar3);
    }
    FUN_00437b32();
    FUN_004113ca(uVar4,uVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0040ed80(0x80004005);
}

