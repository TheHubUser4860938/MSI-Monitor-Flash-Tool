// rea decompile_all
// name: FUN_00408520
// address: 0x408520
// body: available
// range: 0x408520-0x408743 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00408520(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined4 *puVar4;
  undefined4 local_c8;
  uint local_b4;
  uint local_94 [4];
  undefined4 local_84;
  uint local_80;
  undefined **local_7c;
  uint local_78;
  undefined4 local_68;
  uint local_64;
  undefined1 local_60;
  undefined4 local_50;
  undefined4 local_4c;
  undefined **local_48;
  uint local_44;
  undefined4 local_34;
  uint local_30;
  undefined1 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059c4b7;
  local_10 = ExceptionList;
  local_14 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_0060d9b0 != 0) {
    local_64 = 7;
    local_68 = 0;
    local_78 = local_78 & 0xffff0000;
    local_7c = CCpRsString::vftable;
    local_4c = 0xf;
    local_50 = 0;
    local_60 = 0;
    local_30 = 7;
    local_34 = 0;
    local_44 = local_44 & 0xffff0000;
    local_48 = CCpRsString::vftable;
    local_18 = 0xf;
    local_1c = 0;
    local_2c = 0;
    local_8._0_1_ = 2;
    local_8._1_3_ = 0;
    uVar1 = FUN_00408490(local_14);
    local_8._0_1_ = 3;
    uVar1 = FUN_00406df0(local_94,uVar1);
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_004040c0(uVar1,0,0xffffffff);
    if (7 < local_80) {
      FUN_004053c0(local_94[0],local_80 + 1);
    }
    local_80 = 7;
    local_84 = 0;
    local_94[0] = local_94[0] & 0xffff0000;
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_004033e0();
    iVar2 = FUN_00402c10();
    if (in_ECX != iVar2) {
      if (iVar2 == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = (undefined4 *)(iVar2 + 4);
      }
      puVar3 = (undefined4 *)(in_ECX + 4);
      if (puVar3 != puVar4) {
        if (7 < *(uint *)(in_ECX + 0x18)) {
          FUN_004053c0(*puVar3,*(uint *)(in_ECX + 0x18) + 1);
        }
        *(undefined4 *)(in_ECX + 0x18) = 7;
        *(undefined4 *)(in_ECX + 0x14) = 0;
        if (7 < *(uint *)(in_ECX + 0x18)) {
          puVar3 = (undefined4 *)*puVar3;
        }
        *(undefined2 *)puVar3 = 0;
        FUN_004041e0(puVar4);
      }
      local_8 = CONCAT31(local_8._1_3_,2);
    }
    FUN_004033e0();
    if (7 < local_b4) {
      FUN_004053c0(local_c8,local_b4 + 1);
    }
    FUN_00408150();
    local_48 = CCpRsString::vftable;
    FUN_004033e0();
    if (7 < local_30) {
      FUN_004053c0(local_44,local_30 + 1);
    }
    local_30 = 7;
    local_34 = 0;
    local_44 = local_44 & 0xffff0000;
    local_7c = CCpRsString::vftable;
    FUN_004033e0();
    if (7 < local_64) {
      FUN_004053c0(local_78,local_64 + 1);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

