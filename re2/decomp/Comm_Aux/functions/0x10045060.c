// rea decompile_all
// name: FUN_10045060
// address: 0x10045060
// body: available
// range: 0x10045060-0x100452ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10045060(byte param_1,undefined1 param_2,ushort param_3,undefined4 *param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_ECX;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 auStack_b4 [3];
  byte local_b1;
  uint local_b0;
  undefined4 *local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 *local_94;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 local_84;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  uint local_c;
  
  puVar4 = param_4;
  local_c = DAT_10206460 ^ (uint)auStack_b4;
  local_ac = param_4;
  if (DAT_1021ae90 == 0) {
    local_a4 = in_ECX[1];
    local_b1 = param_1;
    local_94 = (undefined4 *)&param_2;
    local_84 = 0;
    local_a8 = 0x3002c;
    uStack_a0 = CONCAT31((uint3)param_1,1);
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_90 = 1;
    uStack_8c = 0xffff;
    uStack_88 = 0;
    iVar2 = FUN_1000a920(*in_ECX,&local_a8);
    if (iVar2 == 0) {
      local_a4 = in_ECX[1];
      local_a8 = 0x3002c;
      uStack_90 = (uint)param_3;
      uStack_a0 = CONCAT31(CONCAT21(uStack_a0._2_2_,local_b1),1) | 0x100;
      uStack_9c = 0;
      uStack_98 = 0;
      local_94 = puVar4;
      uStack_8c = 0xffff;
      uStack_88 = 0;
      iVar2 = FUN_1000a7c0(*in_ECX,&local_a8);
      if (iVar2 == 0) goto LAB_1004529f;
    }
  }
  else {
    _memset(&local_74,0,100);
    uVar5 = (uint)param_1;
    local_b0 = param_3 & 0xf;
    uVar1 = param_3 >> 4;
    local_74 = in_ECX[1];
    local_68 = CONCAT31(local_68._1_3_,param_2);
    local_78 = 0x20068;
    local_70 = 2;
    local_58 = 0;
    local_7c = (uint)uVar1;
    local_6c = uVar5;
    iVar2 = FUN_10014c00(in_ECX[2],&local_78,0);
    if (iVar2 == 0) {
      local_74 = in_ECX[1];
      iVar2 = 0;
      local_78 = 0x20068;
      local_70 = 3;
      local_58 = 0x10;
      puVar4 = local_ac;
      local_6c = uVar5;
      if (uVar1 != 0) {
        do {
          iVar3 = FUN_10014c00(in_ECX[2],&local_78,0);
          *puVar4 = local_68;
          puVar4[1] = uStack_64;
          puVar4[2] = uStack_60;
          puVar4[3] = uStack_5c;
          if (iVar3 != 0) goto LAB_10045168;
          iVar2 = iVar2 + 1;
          puVar4 = puVar4 + 4;
        } while (iVar2 < (int)local_7c);
      }
      if (local_b0 != 0) {
        local_58 = local_b0;
        iVar3 = FUN_10014c00(in_ECX[2],&local_78,0);
        FUN_10181570(local_ac + iVar2 * 4,&local_68,local_b0);
        if (iVar3 != 0) {
          __security_check_cookie(local_c ^ (uint)auStack_b4);
          return;
        }
      }
LAB_1004529f:
      __security_check_cookie(local_c ^ (uint)auStack_b4);
      return;
    }
  }
LAB_10045168:
  __security_check_cookie(local_c ^ (uint)auStack_b4);
  return;
}

