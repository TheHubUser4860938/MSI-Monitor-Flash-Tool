// rea decompile_all
// name: FUN_100151e0
// address: 0x100151e0
// body: available
// range: 0x100151e0-0x100153c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_100151e0(int *param_1,int param_2,char *param_3,int param_4)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 local_30 [5];
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10195a39;
  local_10 = ExceptionList;
  uVar3 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar9 = 0;
  local_8 = 0;
  local_18 = 1;
  while( true ) {
    if (*param_3 == '\0') {
      iVar4 = 0;
    }
    else {
      pcVar5 = param_3;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      iVar4 = (int)pcVar5 - (int)(param_3 + 1);
    }
    local_14 = FUN_10016be0(param_3,uVar9,iVar4);
    if (local_14 == 0xffffffff) break;
    if ((param_4 != 0) || (local_14 != uVar9)) {
      puVar6 = (undefined4 *)FUN_10011650(local_30,uVar9,local_14 - uVar9);
      local_8 = 1;
      if ((puVar6 < (undefined4 *)param_1[1]) && (puVar2 = (undefined4 *)*param_1, puVar2 <= puVar6)
         ) {
        if (param_1[1] == param_1[2]) {
          FUN_1000f570(1);
        }
        puVar6 = (undefined4 *)(*param_1 + (((int)puVar6 - (int)puVar2) / 0x18) * 0x18);
      }
      else if (param_1[1] == param_1[2]) {
        FUN_1000f570(1);
      }
      puVar2 = (undefined4 *)param_1[1];
      if (puVar2 != (undefined4 *)0x0) {
        puVar2[5] = 0xf;
        puVar2[4] = 0;
        puVar7 = puVar2;
        if (0xf < (uint)puVar2[5]) {
          puVar7 = (undefined4 *)*puVar2;
        }
        *(undefined1 *)puVar7 = 0;
        if ((uint)puVar6[5] < 0x10) {
          if (puVar6[4] + 1 != 0) {
            FUN_1016b1e0(puVar2,puVar6,puVar6[4] + 1);
          }
        }
        else {
          *puVar2 = *puVar6;
          *puVar6 = 0;
        }
        puVar2[4] = puVar6[4];
        puVar2[5] = puVar6[5];
        puVar6[5] = 0xf;
        puVar6[4] = 0;
        if (0xf < (uint)puVar6[5]) {
          puVar6 = (undefined4 *)*puVar6;
        }
        *(undefined1 *)puVar6 = 0;
      }
      param_1[1] = param_1[1] + 0x18;
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_1c) {
        FUN_10003d70(local_30[0],local_1c + 1);
      }
    }
    uVar9 = local_14 + 1;
  }
  if (uVar9 < *(uint *)(param_2 + 0x10)) {
    uVar8 = FUN_10011650(local_30,uVar9,0xffffffff);
    local_8 = 2;
    FUN_10017880(uVar8);
    FUN_10001e40(uVar3);
  }
  ExceptionList = local_10;
  return param_1;
}

