// rea decompile_all
// name: FUN_10016860
// address: 0x10016860
// body: available
// range: 0x10016860-0x10016af2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10016860(void)

{
  undefined3 uVar1;
  undefined ***pppuVar2;
  undefined1 auStack_158 [36];
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined **ppuStack_12c;
  undefined ***pppuStack_128;
  uint uStack_124;
  undefined1 local_114 [52];
  undefined4 local_e0;
  uint local_cc;
  undefined **local_c8;
  undefined2 local_c4;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined4 local_9c;
  undefined4 local_98;
  uint local_94 [4];
  undefined4 local_84;
  uint local_80;
  undefined **local_7c;
  undefined **local_78 [4];
  undefined4 local_68;
  uint local_64;
  undefined1 local_60;
  undefined4 local_50;
  undefined4 local_4c;
  undefined **local_48;
  undefined **local_44 [4];
  int local_34;
  uint local_30;
  undefined1 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_101c1a6d;
  local_10 = ExceptionList;
  uStack_124 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (undefined **)((uint)local_44[0] & 0xffff0000);
  local_48 = CCpRsString::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = 0;
  local_b0 = 7;
  local_b4 = 0;
  local_c4 = 0;
  local_c8 = CCpRsString::vftable;
  local_98 = 0xf;
  local_9c = 0;
  local_ac = 0;
  local_64 = 7;
  local_68 = 0;
  local_78[0] = (undefined **)((uint)local_78[0] & 0xffff0000);
  local_7c = CCpRsString::vftable;
  local_4c = 0xf;
  local_50 = 0;
  local_60 = 0;
  uStack_7 = 0;
  uVar1 = uStack_7;
  local_8 = 2;
  uStack_7 = 0;
  local_14 = uStack_124;
  if (DAT_1024a36c != 0) {
    pppuStack_128 = (undefined ***)0x1001692d;
    pppuStack_128 = (undefined ***)FUN_100167d0();
    ppuStack_12c = (undefined **)local_94;
    local_8 = 3;
    uStack_130 = 0x1001693e;
    uStack_130 = FUN_10048c90();
    pppuStack_128 = (undefined ***)0xffffffff;
    ppuStack_12c = (undefined **)0x0;
    _local_8 = CONCAT31(uStack_7,4);
    uStack_134 = 0x10016952;
    FUN_10046260();
    if (7 < local_80) {
      pppuStack_128 = (undefined ***)(local_80 + 1);
      ppuStack_12c = (undefined **)local_94[0];
      uStack_130 = 0x1001696d;
      FUN_1000b5d0();
    }
    local_8 = 2;
    local_94[0] = local_94[0] & 0xffff0000;
    local_80 = 7;
    local_84 = 0;
    if (0xf < local_cc) {
      pppuStack_128 = (undefined ***)(local_cc + 1);
      ppuStack_12c = (undefined **)local_e0;
      uStack_130 = 0x100169a6;
      FUN_1000b630();
    }
    ppuStack_12c = (undefined **)0x100169b8;
    pppuVar2 = (undefined ***)FUN_10047bd0();
    if (&local_7c != pppuVar2) {
      if (pppuVar2 == (undefined ***)0x0) {
        pppuVar2 = (undefined ***)0x0;
      }
      else {
        pppuVar2 = pppuVar2 + 1;
      }
      if (local_78 != pppuVar2) {
        if (7 < local_64) {
          pppuStack_128 = (undefined ***)(local_64 + 1);
          ppuStack_12c = local_78[0];
          uStack_130 = 0x100169e9;
          FUN_1000b5d0();
        }
        local_64 = 7;
        local_68 = 0;
        local_78[0] = (undefined **)((uint)local_78[0] & 0xffff0000);
        ppuStack_12c = (undefined **)0x10016a06;
        pppuStack_128 = pppuVar2;
        FUN_10045640();
      }
      local_8 = 2;
    }
    pppuStack_128 = (undefined ***)0x10016a15;
    FUN_10048130();
    pppuStack_128 = (undefined ***)local_114;
    ppuStack_12c = (undefined **)0x10016a21;
    pppuVar2 = (undefined ***)FUN_100166f0();
    if (&local_48 != pppuVar2) {
      if (pppuVar2 == (undefined ***)0x0) {
        pppuVar2 = (undefined ***)0x0;
      }
      else {
        pppuVar2 = pppuVar2 + 1;
      }
      if (local_44 != pppuVar2) {
        if (7 < local_30) {
          pppuStack_128 = (undefined ***)(local_30 + 1);
          ppuStack_12c = local_44[0];
          uStack_130 = 0x10016a4f;
          FUN_1000b5d0();
        }
        local_30 = 7;
        local_34 = 0;
        local_44[0] = (undefined **)((uint)local_44[0] & 0xffff0000);
        ppuStack_12c = (undefined **)0x10016a6c;
        pppuStack_128 = pppuVar2;
        FUN_10045640();
      }
      local_8 = 2;
    }
    pppuStack_128 = (undefined ***)0x10016a7b;
    FUN_10048130();
    if (local_34 == 0) {
      FUN_100075b0(auStack_158);
      pppuStack_128 = (undefined ***)FUN_1001fcf0();
      ppuStack_12c = (undefined **)0x10016aa1;
      FUN_100481b0();
      pppuStack_128 = (undefined ***)0x10016aac;
      FUN_10048130();
    }
    pppuStack_128 = (undefined ***)0x1;
    ppuStack_12c = (undefined **)0x1;
    uStack_130 = 0x10016abb;
    FUN_1001fd90();
    uVar1 = uStack_7;
  }
  uStack_7 = uVar1;
  pppuStack_128 = (undefined ***)0x10016ac6;
  FUN_10048130();
  pppuStack_128 = (undefined ***)0x10016ad1;
  FUN_10048130();
  pppuStack_128 = (undefined ***)0x10016ad9;
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

