// rea decompile_all
// name: FUN_10025520
// address: 0x10025520
// body: available
// range: 0x10025520-0x10025a8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10025a10) */
/* WARNING: Removing unreachable block (ram,0x10025a12) */

void FUN_10025520(void)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  code *pcVar5;
  undefined4 *puVar6;
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
  
  iVar3 = DAT_1024be74;
  puStack_c = &LAB_101c2529;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = 0x6e;
  uStack_23 = 0x51;
  bStack_22 = 0x84;
  uStack_21 = 3;
  local_20 = 0xf5;
  uStack_1f = 0x8d;
  local_1e = 0;
  local_1c = 0x6e;
  uStack_1b = 0x51;
  bStack_1a = 0x82;
  uStack_19 = 1;
  local_18 = 0xf5;
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
  FUN_10048350(&local_98,L"Enter Function GetHPModelName",local_14);
  FUN_10016860();
  FUN_10048350(&local_64,L"delay time between send cmd %d",DAT_1024be70);
  FUN_10016860();
  pcVar5 = Sleep_exref;
  do {
    if (iVar3 < 1) {
LAB_10025827:
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
    local_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_27 = 0;
    uStack_26 = 0;
    FUN_10048350(&local_98,L"Get HP model name retry count:%d",(DAT_1024be74 - iVar3) + 1);
    FUN_10016860();
    uVar2 = 0;
    while( true ) {
      local_1e = (undefined1)uVar2;
      iVar1 = (**(code **)(*DAT_10249d10 + 0x13c))
                        (CONCAT13(uStack_21,CONCAT12(bStack_22,CONCAT11(uStack_23,local_24))),
                         CONCAT13(local_20,CONCAT12(uStack_21,CONCAT11(bStack_22,uStack_23))),
                         bStack_22 & 0x7f,&uStack_21);
      if (iVar1 != 0) {
        FUN_10048350(&local_64,L"DDCCI write cmd 1 fail, index: 0x%x, error code:0x%x",uVar2,iVar1);
        FUN_10016860();
        goto LAB_10025801;
      }
      (*pcVar5)(DAT_1024be70);
      iVar1 = (**(code **)(*DAT_10249d10 + 0x13c))
                        (CONCAT13(uStack_19,CONCAT12(bStack_1a,CONCAT11(uStack_1b,local_1c))),
                         CONCAT13(local_18,CONCAT12(uStack_19,CONCAT11(bStack_1a,uStack_1b))),
                         bStack_1a & 0x7f,&uStack_19);
      if (iVar1 != 0) break;
      (*pcVar5)(DAT_1024be70);
      iVar1 = (**(code **)(*DAT_10249d10 + 0x140))(0x6e,0x51,0xb,&local_30);
      if (iVar1 != 0) {
        FUN_10048350(&local_64,L"DDCCI read fail, index: 0x%x, error code:0x%x",uVar2,iVar1);
        FUN_10016860();
        goto LAB_10025801;
      }
      FUN_10048350(&local_cc,L"Read Index %d: DDCCI Cmd Read Data: ",uVar2);
      puVar6 = &local_30;
      iVar1 = 0xb;
      do {
        FUN_10048350(&local_64,L"0x%x,",*(undefined1 *)puVar6);
        FUN_1002c980(local_60,0,0xffffffff);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      FUN_10016860();
      pcVar5 = Sleep_exref;
      if (((char)local_30 != 'n') || ((char)uStack_2c != -0xb)) goto LAB_10025801;
      uVar4 = 6;
      do {
        if (*(char *)((int)&local_30 + (uint)uVar4) == '\0') {
          if (0 < iVar3) {
            FUN_10048350(&local_98,L"Get HP Model Name End:");
            FUN_10016860();
            FUN_10016860();
            FUN_10048350(&local_64,L"HP Model Name Buff Size: 0x%x",0);
            FUN_10016860();
          }
          goto LAB_10025827;
        }
        FUN_1002bc00((int)&local_30 + (uint)uVar4);
        uVar4 = uVar4 + 1;
      } while (uVar4 < 10);
      uVar2 = uVar2 + 1;
      pcVar5 = Sleep_exref;
      if (0xff < uVar2) goto LAB_10025801;
    }
    FUN_10048350(&local_64,L"DDCCI write cmd 2 fail, index: 0x%x, error code:0x%x",uVar2,iVar1);
    FUN_10016860();
LAB_10025801:
    iVar3 = iVar3 + -1;
  } while( true );
}

