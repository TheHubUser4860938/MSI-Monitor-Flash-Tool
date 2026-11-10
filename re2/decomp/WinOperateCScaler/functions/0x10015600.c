// rea decompile_all
// name: FUN_10015600
// address: 0x10015600
// body: available
// range: 0x10015600-0x1001571d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10015719 to 0x1015507c FUN_1015507c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10015600(undefined4 *param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 *puVar5;
  int in_ECX;
  byte *pbVar6;
  bool bVar7;
  uint uStack_64;
  _Locinfo local_4c [44];
  byte *local_20;
  byte local_1c [4];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10195aa8;
  local_10 = ExceptionList;
  uStack_64 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_64;
  ExceptionList = &local_10;
  bVar2 = false;
  local_18 = uStack_64;
  std::locale::_Init(false);
  if (param_2 != 0) {
    local_8 = 0;
    _memset(local_4c,0,0x34);
    puVar5 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar5 = (undefined4 *)*param_1;
    }
    FUN_100133e0(param_2,puVar5);
    local_8 = CONCAT31(local_8._1_3_,1);
    pbVar6 = local_1c;
    if (local_20 != (byte *)0x0) {
      pbVar6 = local_20;
    }
    pbVar3 = &DAT_101a76dc;
    do {
      bVar1 = *pbVar6;
      bVar7 = bVar1 < *pbVar3;
      if (bVar1 != *pbVar3) {
LAB_100156b0:
        uVar4 = -(uint)bVar7 | 1;
        goto LAB_100156b5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar7 = bVar1 < pbVar3[1];
      if (bVar1 != pbVar3[1]) goto LAB_100156b0;
      pbVar6 = pbVar6 + 2;
      pbVar3 = pbVar3 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_100156b5:
    if (uVar4 == 0) {
      bVar2 = true;
    }
    else {
      std::locale::_Locimp::_Makeloc(local_4c,param_2,*(_Locimp **)(in_ECX + 4),(locale *)0x0);
      *(int *)(*(int *)(in_ECX + 4) + 0x10) = param_2;
      if (0xf < (uint)param_1[5]) {
        param_1 = (undefined4 *)*param_1;
      }
      FUN_10013740(param_1);
    }
    FUN_10007520();
    local_8 = 0xffffffff;
    if (bVar2) {
      puVar5 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 4) + 8))();
      if (puVar5 != (undefined4 *)0x0) {
        (**(code **)*puVar5)(1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_1015507c("bad locale name");
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

