// rea decompile_all
// name: FUN_10040040
// address: 0x10040040
// body: available
// range: 0x10040040-0x1004013e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10040040(undefined4 *param_1)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 extraout_ECX;
  byte *pbVar6;
  bool bVar7;
  uint uStack_5c;
  _Locinfo local_4c [44];
  byte *local_20;
  byte local_1c [4];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c3a18;
  local_10 = ExceptionList;
  uStack_5c = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  ExceptionList = &local_10;
  bVar2 = false;
  local_18 = in_ECX;
  std::locale::_Init(false);
  local_8 = 0;
  puVar5 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar5 = (undefined4 *)*param_1;
  }
  FUN_1003ff60(extraout_ECX,puVar5);
  local_8 = CONCAT31(local_8._1_3_,1);
  pbVar6 = local_1c;
  if (local_20 != (byte *)0x0) {
    pbVar6 = local_20;
  }
  pbVar3 = &DAT_1021a69c;
  do {
    bVar1 = *pbVar6;
    bVar7 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) {
LAB_100400d0:
      uVar4 = -(uint)bVar7 | 1;
      goto LAB_100400d5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    bVar7 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) goto LAB_100400d0;
    pbVar6 = pbVar6 + 2;
    pbVar3 = pbVar3 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_100400d5:
  if (uVar4 == 0) {
    bVar2 = true;
  }
  else {
    std::locale::_Locimp::_Makeloc(local_4c,0x3f,*(_Locimp **)(in_ECX + 4),(locale *)0x0);
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x10) = 0x3f;
    if (0xf < (uint)param_1[5]) {
      param_1 = (undefined4 *)*param_1;
    }
    FUN_10043960(param_1);
  }
  FUN_10006870();
  local_8 = 0xffffffff;
  if (bVar2) {
    puVar5 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 4) + 8))();
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(1);
    }
    FUN_10180c79("bad locale name");
    puVar5 = (undefined4 *)(**(code **)(**(int **)(local_18 + 4) + 8))();
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(1);
    }
    __CxxThrowException_8(0,0);
  }
  ExceptionList = local_10;
  return;
}

