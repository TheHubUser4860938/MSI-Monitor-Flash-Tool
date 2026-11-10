// rea decompile_all
// name: FUN_1002d460
// address: 0x1002d460
// body: available
// range: 0x1002d460-0x1002d624 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_1002d460(undefined4 *param_1,int *param_2,uint *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  uint *puVar5;
  bool bVar6;
  uint uStack_30;
  undefined1 local_20 [4];
  uint *local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c2a40;
  local_10 = ExceptionList;
  uStack_30 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[1] == 0) {
    local_14 = (undefined1 *)&uStack_30;
    FUN_1000cd30(param_1,1,*in_ECX,in_ECX,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = (int *)*in_ECX;
  puVar5 = param_3;
  if (param_2 == (int *)*piVar1) {
    local_14 = (undefined1 *)&uStack_30;
    if (*param_3 < (uint)param_2[4]) {
      local_14 = (undefined1 *)&uStack_30;
      FUN_1000cd30(param_1,1,param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    local_14 = (undefined1 *)&uStack_30;
    if (*(uint *)(piVar1[2] + 0x10) < *param_3) {
      local_14 = (undefined1 *)&uStack_30;
      FUN_1000cd30(param_1,0,piVar1[2],param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    local_1c = (uint *)*param_3;
    puVar5 = (uint *)param_2[4];
    bVar6 = puVar5 < local_1c;
    puVar3 = &uStack_30;
    if (local_1c < puVar5) {
      local_18 = param_2;
      FUN_1000ccd0();
      if ((uint *)local_18[4] < local_1c) {
        iVar2 = local_18[2];
        if (*(char *)(iVar2 + 0xd) != '\0') {
          FUN_1000cd30(param_1,0,local_18,iVar2,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_1000cd30(param_1,1,param_2,iVar2,param_4);
        ExceptionList = local_10;
        return param_1;
      }
      puVar5 = (uint *)param_2[4];
      bVar6 = puVar5 < local_1c;
      puVar3 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar3;
    if (bVar6) {
      local_18 = param_2;
      FUN_1000a700();
      if ((local_18 == piVar1) || (puVar5 = local_1c, local_1c < (uint *)local_18[4])) {
        iVar2 = param_2[2];
        if (*(char *)(iVar2 + 0xd) != '\0') {
          FUN_1000cd30(param_1,0,param_2,iVar2,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_1000cd30(param_1,1,local_18,iVar2,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar4 = (undefined4 *)FUN_1000cb60(local_20,puVar5,param_3,param_4);
  *param_1 = *puVar4;
  ExceptionList = local_10;
  return param_1;
}

