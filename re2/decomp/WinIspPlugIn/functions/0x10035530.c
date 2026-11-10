// rea decompile_all
// name: FUN_10035530
// address: 0x10035530
// body: available
// range: 0x10035530-0x10035acf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10035530(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  undefined **local_d8;
  uint local_d4;
  undefined4 local_c4;
  uint local_c0;
  uint local_bc;
  undefined4 local_ac;
  uint local_a8;
  undefined **local_a4;
  uint local_a0 [4];
  undefined4 local_90;
  uint local_8c;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  undefined **local_70;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_54;
  undefined4 local_44;
  uint local_40;
  int local_3c;
  int iStack_38;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  int local_30;
  int local_2c;
  short local_28;
  undefined1 local_26;
  byte local_24 [8];
  byte local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c30f9;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24[0] = 0x6e;
  local_24[1] = 0x51;
  local_24[2] = 0x84;
  local_24[3] = 0x53;
  local_24[4] = 3;
  local_24[5] = 0;
  local_24[6] = 5;
  local_1c[0] = 0x6e;
  local_1c[1] = 0x51;
  local_1c[2] = 0x82;
  local_1c[3] = 0x51;
  local_1c[4] = 3;
  local_30 = 0x52886e;
  local_2c = 3;
  local_28 = 0x500;
  local_26 = 0;
  local_3c = 0;
  iStack_38 = 0;
  uStack_34 = 0;
  uStack_33 = 0;
  uStack_32 = 0;
  local_c0 = 7;
  local_c4 = 0;
  local_d4 = local_d4 & 0xffff0000;
  local_d8 = CCpRsString::vftable;
  local_a8 = 0xf;
  local_ac = 0;
  local_bc = local_bc & 0xffffff00;
  local_58 = 7;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffff0000;
  local_70 = CCpRsString::vftable;
  local_40 = 0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  local_8c = 7;
  local_90 = 0;
  local_a0[0] = local_a0[0] & 0xffff0000;
  local_a4 = CCpRsString::vftable;
  local_74 = 0xf;
  local_78 = 0;
  local_88 = local_88 & 0xffffff00;
  local_8 = 3;
  FUN_10048350(&local_70,L"Set cmd after update before read hp 4bytes version",local_14);
  FUN_10016860();
  FUN_10048350(&local_70,L"Set Cmd:");
  iVar2 = 0;
  do {
    FUN_10048350(&local_a4,L"0x%x,",local_24[iVar2]);
    FUN_1002c980(local_a0,0,0xffffffff);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 7);
  FUN_10016860();
  FUN_10048350(&local_70,L"Get info cmd:");
  iVar2 = 0;
  do {
    FUN_10048350(&local_a4,L"0x%x,",local_1c[iVar2]);
    FUN_1002c980(local_a0,0,0xffffffff);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  FUN_10016860();
  iVar2 = 0;
  pcVar4 = Sleep_exref;
  do {
    iVar2 = iVar2 + 1;
    FUN_10048350(&local_70,L"Set cmd after update before read hp 4bytes version count: %d",iVar2);
    FUN_10016860();
    iVar1 = (**(code **)(*DAT_10249d10 + 0x13c))
                      (CONCAT13(local_24[3],CONCAT12(local_24[2],CONCAT11(local_24[1],local_24[0])))
                       ,CONCAT13(local_24[4],CONCAT12(local_24[3],CONCAT11(local_24[2],local_24[1]))
                                ),local_24[2] & 0x7f,local_24 + 3);
    if (iVar1 == 0) {
      (*pcVar4)(DAT_1024be70);
      iVar1 = (**(code **)(*DAT_10249d10 + 0x13c))
                        (CONCAT13(local_1c[3],
                                  CONCAT12(local_1c[2],CONCAT11(local_1c[1],local_1c[0]))),
                         CONCAT13(local_1c[4],
                                  CONCAT12(local_1c[3],CONCAT11(local_1c[2],local_1c[1]))),
                         local_1c[2] & 0x7f,local_1c + 3);
      if (iVar1 != 0) goto LAB_1003577b;
      (*pcVar4)(DAT_1024be70);
      uStack_34 = 0;
      uStack_33 = 0;
      local_3c = 0;
      iStack_38 = 0;
      uStack_32 = 0;
      iVar1 = (**(code **)(*DAT_10249d10 + 0x140))(0x6e,0x51,0xb,&local_3c);
      if (iVar1 == 0) {
        FUN_10048350(&local_a4,L"DDCCI cmd read data: ");
        piVar3 = &local_3c;
        iVar1 = 0xb;
        do {
          FUN_10048350(&local_70,L"0x%x,",(char)*piVar3);
          FUN_1002c980(local_6c,0,0xffffffff);
          piVar3 = (int *)((int)piVar3 + 1);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        FUN_10016860();
        if (((local_3c == local_30) && (iStack_38 == local_2c)) &&
           (CONCAT11(uStack_33,uStack_34) == local_28)) {
          FUN_10048350(&local_d8,L"Compare with target buffer ok!");
          FUN_10016860();
          FUN_10048350(&local_d8,L"set cmd success before get verison cmd!");
          goto LAB_10035945;
        }
        FUN_10048350(&local_d8,L"Compare with target buffer fail!");
        FUN_10016860();
        pcVar4 = Sleep_exref;
      }
      else {
        FUN_10048350(&local_a4,L"DDCCI read after update info fail, DDCCI cmd read data: ");
        piVar3 = &local_3c;
        iVar5 = 0xb;
        do {
          FUN_10048350(&local_70,L"0x%x,",(char)*piVar3);
          FUN_1002c980(local_6c,0,0xffffffff);
          piVar3 = (int *)((int)piVar3 + 1);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        FUN_10016860();
        FUN_10048350(&local_70,L"DDCCI read fail, error code:0x%x",iVar1);
        FUN_10016860();
        pcVar4 = Sleep_exref;
        Sleep(DAT_1024be70);
      }
    }
    else {
LAB_1003577b:
      FUN_10048350(&local_70,L"DDCCI write cmd 1 after update fail, error code:0x%x",iVar1);
      FUN_10016860();
      (*pcVar4)(DAT_1024be70);
    }
    if (10 < iVar2) {
      FUN_10048350(&local_d8,L"set cmd fail before get verison cmd!");
LAB_10035945:
      FUN_10016860();
      local_a4 = CCpRsString::vftable;
      if (0xf < local_74) {
        FUN_1000b630(local_88,local_74 + 1);
      }
      local_74 = 0xf;
      local_78 = 0;
      local_88 = local_88 & 0xffffff00;
      if (7 < local_8c) {
        FUN_1000b5d0(local_a0[0],local_8c + 1);
      }
      local_8c = 7;
      local_a0[0] = local_a0[0] & 0xffff0000;
      local_90 = 0;
      local_70 = CCpRsString::vftable;
      if (0xf < local_40) {
        FUN_1000b630(local_54,local_40 + 1);
      }
      local_40 = 0xf;
      local_44 = 0;
      local_54 = local_54 & 0xffffff00;
      if (7 < local_58) {
        FUN_1000b5d0(local_6c[0],local_58 + 1);
      }
      local_58 = 7;
      local_6c[0] = local_6c[0] & 0xffff0000;
      local_5c = 0;
      local_d8 = CCpRsString::vftable;
      if (0xf < local_a8) {
        FUN_1000b630(local_bc,local_a8 + 1);
      }
      local_a8 = 0xf;
      local_ac = 0;
      local_bc = local_bc & 0xffffff00;
      if (7 < local_c0) {
        FUN_1000b5d0(local_d4,local_c0 + 1);
      }
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
  } while( true );
}

