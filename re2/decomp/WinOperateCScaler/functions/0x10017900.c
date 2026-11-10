// rea decompile_all
// name: FUN_10017900
// address: 0x10017900
// body: available
// range: 0x10017900-0x100179e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100179e0 to 0x10017a17 FUN_10017a17 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10017900(undefined4 param_1)

{
  int *piVar1;
  undefined2 *puVar2;
  int iVar3;
  uint *puVar4;
  char cVar5;
  undefined4 uVar6;
  int *in_ECX;
  uint uVar7;
  uint uStack_70;
  undefined **appuStack_60 [5];
  undefined **appuStack_4c [5];
  undefined **appuStack_38 [6];
  undefined1 local_20;
  undefined4 local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10195cdc;
  local_10 = ExceptionList;
  uStack_70 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_70;
  ExceptionList = &local_10;
  local_1c = 0;
  piVar1 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
  puVar4 = &uStack_70;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
    puVar4 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar4;
  local_8 = 0;
  if (((*(int *)(*(int *)(*in_ECX + 4) + 0xc + (int)in_ECX) == 0) &&
      (piVar1 = *(int **)(*(int *)(*in_ECX + 4) + 0x3c + (int)in_ECX), piVar1 != (int *)0x0)) &&
     (piVar1 != in_ECX)) {
    FUN_10016ce0();
  }
  local_20 = *(int *)(*(int *)(*in_ECX + 4) + 0xc + (int)in_ECX) == 0;
  local_8 = 1;
  if (!(bool)local_20) {
    iVar3 = *(int *)(*in_ECX + 4);
    uVar7 = *(uint *)((int)in_ECX + iVar3 + 0xc) & 0x17 | 4;
    *(uint *)((int)in_ECX + iVar3 + 0xc) = uVar7;
    uVar7 = *(uint *)((int)in_ECX + iVar3 + 0x10) & uVar7;
    if (uVar7 != 0) {
      if ((uVar7 & 4) != 0) {
        uVar6 = FUN_100057f0();
        FUN_10006bd0(1,uVar6,"ios_base::badbit set");
        appuStack_38[0] = std::ios_base::failure::vftable;
        uVar7 = __CxxThrowException_8(appuStack_38,&DAT_101ed1a0);
      }
      if ((uVar7 & 2) != 0) {
        uVar6 = FUN_100057f0();
        FUN_10006bd0(1,uVar6,"ios_base::failbit set");
        appuStack_4c[0] = std::ios_base::failure::vftable;
        __CxxThrowException_8(appuStack_4c,&DAT_101ed1a0);
      }
      uVar6 = FUN_100057f0();
      FUN_10006bd0(1,uVar6,"ios_base::eofbit set");
      appuStack_60[0] = std::ios_base::failure::vftable;
      __CxxThrowException_8(appuStack_60,&DAT_101ed1a0);
    }
    local_8 = 4;
    cVar5 = thunk_FUN_1016b1c8();
    if (cVar5 == '\0') {
      FUN_1000f1e0();
    }
    local_8 = CONCAT31(local_8._1_3_,5);
    piVar1 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    ExceptionList = local_10;
    return;
  }
  piVar1 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
  local_8 = 2;
  if (*(int *)piVar1[8] != 0) {
    iVar3 = *(int *)piVar1[0xc];
    if (0 < iVar3) {
      *(int *)piVar1[0xc] = iVar3 + -1;
      puVar2 = *(undefined2 **)piVar1[8];
      *(undefined2 **)piVar1[8] = puVar2 + 1;
      *puVar2 = (short)param_1;
      goto LAB_100179cb;
    }
  }
  (**(code **)(*piVar1 + 0xc))(param_1);
LAB_100179cb:
  FUN_10017a17();
  return;
}

