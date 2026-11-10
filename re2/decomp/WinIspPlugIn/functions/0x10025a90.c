// rea decompile_all
// name: FUN_10025a90
// address: 0x10025a90
// body: available
// range: 0x10025a90-0x10025fad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10025f12) */
/* WARNING: Removing unreachable block (ram,0x10025f20) */
/* WARNING: Removing unreachable block (ram,0x10025f33) */
/* WARNING: Removing unreachable block (ram,0x10025f2c) */
/* WARNING: Removing unreachable block (ram,0x10025f38) */
/* WARNING: Removing unreachable block (ram,0x10025f62) */

void FUN_10025a90(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  wchar_t *pwVar5;
  undefined **local_cc;
  uint local_c8;
  undefined4 local_b8;
  uint local_b4;
  uint local_b0;
  undefined4 local_a0;
  uint local_9c;
  undefined **local_98;
  uint local_94;
  undefined4 local_84;
  uint local_80;
  uint local_7c;
  undefined4 local_6c;
  uint local_68;
  undefined **local_64;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 local_24;
  undefined1 uStack_23;
  byte bStack_22;
  undefined1 uStack_21;
  undefined1 local_20;
  undefined1 uStack_1f;
  undefined1 local_1e;
  undefined1 local_1c;
  undefined1 uStack_1b;
  byte bStack_1a;
  undefined1 uStack_19;
  undefined1 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = DAT_1024be74;
  puStack_c = &LAB_101c2529;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = 0x6e;
  uStack_23 = 0x51;
  bStack_22 = 0x84;
  uStack_21 = 3;
  local_20 = 0xf8;
  uStack_1f = 0x8e;
  local_1e = 0;
  local_1c = 0x6e;
  uStack_1b = 0x51;
  bStack_1a = 0x82;
  uStack_19 = 1;
  local_18 = 0xf8;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_27 = 0;
  uStack_26 = 0;
  local_4c = 7;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffff0000;
  local_64 = CCpRsString::vftable;
  local_34 = 0xf;
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  local_b4 = 7;
  local_b8 = 0;
  local_c8 = local_c8 & 0xffff0000;
  local_cc = CCpRsString::vftable;
  local_9c = 0xf;
  local_a0 = 0;
  local_b0 = local_b0 & 0xffffff00;
  local_80 = 7;
  local_84 = 0;
  local_94 = local_94 & 0xffff0000;
  local_98 = CCpRsString::vftable;
  local_68 = 0xf;
  local_6c = 0;
  local_7c = local_7c & 0xffffff00;
  local_8 = 3;
  FUN_10048350(&local_98,L"Enter Function GetHPHwCidInfo",local_14);
  FUN_10016860();
  FUN_10048350(&local_64,L"delay time between send cmd %d",DAT_1024be70);
  FUN_10016860();
  do {
    if (iVar2 < 1) goto LAB_10025d41;
    local_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_27 = 0;
    uStack_26 = 0;
    FUN_10048350(&local_98,L"Get HP Hw Cid retry count:%d",(DAT_1024be74 - iVar2) + 1);
    FUN_10016860();
    local_1e = 0;
    iVar1 = (**(code **)(*DAT_10249d10 + 0x13c))
                      (CONCAT13(uStack_21,CONCAT12(bStack_22,CONCAT11(uStack_23,local_24))),
                       CONCAT13(local_20,CONCAT12(uStack_21,CONCAT11(bStack_22,uStack_23))),
                       bStack_22 & 0x7f,&uStack_21);
    if (iVar1 != 0) {
      pwVar5 = L"DDCCI write cmd 1 fail, index: 0x%x, error code:0x%x";
LAB_10025eec:
      FUN_10048350(&local_64,pwVar5,0,iVar1);
      FUN_10016860();
      goto LAB_10025f00;
    }
    Sleep(DAT_1024be70);
    iVar1 = (**(code **)(*DAT_10249d10 + 0x13c))
                      (CONCAT13(uStack_19,CONCAT12(bStack_1a,CONCAT11(uStack_1b,local_1c))),
                       CONCAT13(local_18,CONCAT12(uStack_19,CONCAT11(bStack_1a,uStack_1b))),
                       bStack_1a & 0x7f,&uStack_19);
    if (iVar1 != 0) {
      pwVar5 = L"DDCCI write cmd 2 fail, index: 0x%x, error code:0x%x";
      goto LAB_10025eec;
    }
    Sleep(DAT_1024be70);
    iVar1 = (**(code **)(*DAT_10249d10 + 0x140))(0x6e,0x51,0xb,&local_30);
    if (iVar1 != 0) {
      pwVar5 = L"DDCCI read fail, index: 0x%x, error code:0x%x";
      goto LAB_10025eec;
    }
    FUN_10048350(&local_cc,L"Read Index %d: DDCCI Cmd Read Data: ",0);
    puVar3 = &local_30;
    iVar1 = 0xb;
    do {
      FUN_10048350(&local_64,L"0x%x,",*(undefined1 *)puVar3);
      FUN_1002c980(local_60,0,0xffffffff);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    FUN_10016860();
    if (((char)local_30 == 'n') && ((char)uStack_2c == -8)) {
      iVar1 = (int)&uStack_2c + 2;
      iVar4 = 4;
      do {
        FUN_1002bc00(iVar1);
        iVar1 = iVar1 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
LAB_10025f00:
      if (0 < iVar2) {
        FUN_10048350(&local_98,L"Get HP Hw Cid Name End:");
        FUN_10016860();
        FUN_10016860();
        FUN_10048350(&local_64,L"HP HP Hw Cid Name Buff Size: 0x%x",0);
        FUN_10016860();
      }
LAB_10025d41:
      local_98 = CCpRsString::vftable;
      if (0xf < local_68) {
        FUN_1000b630(local_7c,local_68 + 1);
      }
      local_68 = 0xf;
      local_6c = 0;
      local_7c = local_7c & 0xffffff00;
      if (7 < local_80) {
        FUN_1000b5d0(local_94,local_80 + 1);
      }
      local_80 = 7;
      local_94 = local_94 & 0xffff0000;
      local_84 = 0;
      local_cc = CCpRsString::vftable;
      if (0xf < local_9c) {
        FUN_1000b630(local_b0,local_9c + 1);
      }
      local_9c = 0xf;
      local_a0 = 0;
      local_b0 = local_b0 & 0xffffff00;
      if (7 < local_b4) {
        FUN_1000b5d0(local_c8,local_b4 + 1);
      }
      local_b4 = 7;
      local_c8 = local_c8 & 0xffff0000;
      local_b8 = 0;
      local_64 = CCpRsString::vftable;
      if (0xf < local_34) {
        FUN_1000b630(local_48,local_34 + 1);
      }
      local_34 = 0xf;
      local_38 = 0;
      local_48 = local_48 & 0xffffff00;
      if (7 < local_4c) {
        FUN_1000b5d0(local_60[0],local_4c + 1);
      }
      local_4c = 7;
      local_50 = 0;
      local_60[0] = local_60[0] & 0xffff0000;
      FUN_1002c3c0();
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar2 = iVar2 + -1;
  } while( true );
}

