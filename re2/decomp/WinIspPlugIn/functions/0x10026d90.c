// rea decompile_all
// name: FUN_10026d90
// address: 0x10026d90
// body: available
// range: 0x10026d90-0x100275d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10026d90(undefined4 param_1,byte param_2,int param_3,byte param_4,char *param_5,int param_6
                 )

{
  char cVar1;
  bool bVar2;
  void **ppvVar3;
  uint uVar4;
  char *pcVar5;
  int *piVar6;
  uint *puVar7;
  undefined4 ******ppppppuVar8;
  undefined4 ******in_ECX;
  int iVar9;
  char *pcVar10;
  undefined4 extraout_ECX;
  undefined4 ******extraout_ECX_00;
  undefined4 ******extraout_ECX_01;
  int in_EDX;
  byte bVar11;
  ushort uVar12;
  byte bVar15;
  uint uVar13;
  int iVar14;
  int iVar16;
  code *pcVar17;
  undefined4 in_stack_00000cb0;
  byte in_stack_00000cb4;
  uint in_stack_ffffff04;
  int local_d4;
  int local_d0;
  int local_cc;
  undefined4 *****local_c8;
  uint local_c4;
  int local_c0;
  int local_bc;
  uint local_b8;
  int local_b4;
  byte local_ae;
  byte local_ad;
  undefined4 local_ac;
  int local_a0;
  uint local_98;
  undefined **local_94;
  uint local_90 [4];
  undefined4 local_80;
  uint local_7c;
  uint local_78;
  undefined4 local_68;
  uint local_64;
  undefined4 ****local_60;
  undefined4 *****local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  undefined4 local_34;
  uint local_30;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c261c;
  uVar4 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_c4 = CONCAT31(local_c4._1_3_,param_2);
  local_b4 = 0;
  local_7c = 7;
  local_80 = 0;
  local_90[0] = local_90[0] & 0xffff0000;
  local_94 = CCpRsString::vftable;
  local_64 = 0xf;
  local_68 = 0;
  local_78 = local_78 & 0xffffff00;
  local_8 = 0;
  uVar12 = (ushort)in_stack_00000cb4;
  uVar13 = (uint)uVar12;
  local_14 = uVar4;
  ppvVar3 = &local_10;
  local_c0 = in_EDX;
  local_c8 = in_ECX;
  local_10 = ExceptionList;
  local_ae = param_2;
  local_bc = param_3;
  local_ad = in_stack_00000cb4;
  pcVar17 = Sleep_exref;
  while (ExceptionList = ppvVar3, local_ad != 0) {
    FUN_10048350(&DAT_1024a13c,L"Get capability info read count: %d",
                 ((uint)in_stack_00000cb4 - (uVar13 & 0xff)) + 1,uVar4);
    FUN_10016860();
    local_b4 = (**(code **)(*DAT_10249d10 + 0x13c))(local_c0,param_1,local_c4,local_bc);
    FUN_10048350(&DAT_1024a13c,L"DDCCI write error code 0x%x",local_b4);
    FUN_10016860();
    in_stack_ffffff04 = 0x10026eb4;
    (*pcVar17)(in_stack_00000cb0);
    if (local_b4 == 0) {
      local_b8 = (uint)param_4;
      _memset(param_5,0,local_b8);
      local_b4 = (**(code **)(*DAT_10249d10 + 0x58))(local_c0,param_1,param_4,param_5);
      FUN_10048350(&DAT_1024a13c,L"I2C read error code 0x%x",local_b4);
      FUN_10016860();
      if (local_b4 == 0) {
        FUN_10048350(&DAT_1024a13c,L"Read OK, Read buffer:");
        iVar16 = 0;
        if (local_b8 != 0) {
          do {
            FUN_10048350(&local_94,L"0x%x,",param_5[iVar16]);
            FUN_1002c980(local_90,0,0xffffffff);
            iVar16 = iVar16 + 1;
          } while (iVar16 < (int)local_b8);
        }
        FUN_10016860();
        pcVar17 = Sleep_exref;
        if (param_6 == 0) {
          if ((*param_5 == (char)local_c0) && (param_5[1] < '\0')) {
            uVar12 = CONCAT11(param_5[1],(char)uVar13) & 0x7fff;
            bVar15 = (char)(uVar12 >> 8) + 2;
            uVar13 = (uint)CONCAT11(bVar15,(char)uVar12);
            if (bVar15 < param_4) {
              iVar16 = 0;
              bVar11 = 0x50;
              if (bVar15 != 0) {
                do {
                  bVar11 = bVar11 ^ param_5[iVar16];
                  iVar16 = iVar16 + 1;
                } while (iVar16 < (int)(uint)bVar15);
              }
              local_b8 = (uint)bVar11;
              FUN_10048350(&DAT_1024a13c,L"CheckSum calculate from read buffer: 0x%x",local_b8);
              FUN_10016860();
              if (bVar11 == param_5[bVar15]) {
                FUN_10048350(&DAT_1024a13c,L"CheckSum compare success!",bVar11);
                FUN_10016860();
                uVar12 = CONCAT11(bVar15,local_ad);
                break;
              }
              FUN_10048350(&DAT_1024a13c,L"CheckSum compare fail!",local_b8);
              FUN_10016860();
              uVar13 = (uint)CONCAT11(bVar15,local_ad);
              pcVar17 = Sleep_exref;
            }
          }
        }
        else if (param_5[1] < '\0') {
          uVar12 = CONCAT11(param_5[1],(char)uVar13) & 0x7fff;
          uVar12 = CONCAT11((char)(uVar12 >> 8) + '\x02',(char)uVar12);
          break;
        }
      }
      (*pcVar17)(in_stack_00000cb0);
    }
    local_ad = (char)uVar13 - 1;
    uVar13 = CONCAT31((int3)(uVar13 >> 8),local_ad);
    uVar12 = (ushort)uVar13;
    ppvVar3 = ExceptionList;
  }
  uVar4 = (uint)local_ae;
  bVar15 = (byte)(uVar12 >> 8);
  if (bVar15 < param_4) {
    if ((char)uVar12 == '\0') {
      local_b4 = 0xd79;
    }
    else {
      local_ad = 0;
      local_b8 = 0;
      bVar2 = false;
      local_ae = 0;
      local_48 = 7;
      local_4c = 0;
      local_bc = CONCAT22(local_bc._2_2_,*(undefined2 *)(local_bc + uVar4 + -2));
      local_5c[0] = (undefined4 *****)((uint)local_5c[0] & 0xffff0000);
      FUN_10045540(&PTR_1020e6b0,0);
      local_60 = (undefined4 ****)CCpRsString::vftable;
      local_30 = 0xf;
      local_34 = 0;
      local_44 = local_44 & 0xffffff00;
      local_c4 = (uint)bVar15;
      uVar4 = 0;
      local_8 = CONCAT31(local_8._1_3_,1);
      if (local_c4 == 1) {
LAB_1002713a:
        local_b4 = 0xd9d;
      }
      else {
LAB_10027122:
        if ((short)local_bc != *(short *)(param_5 + uVar4)) goto code_r0x10027135;
        if (local_c4 - 1 <= uVar4) goto LAB_1002713a;
        for (uVar4 = uVar4 + 2; uVar4 < local_c4; uVar4 = uVar4 + 1) {
          if (param_5[uVar4] == '(') {
            if (!bVar2) {
              bVar2 = true;
              local_ad = (byte)uVar4;
            }
          }
          else if ((param_5[uVar4] == ')') && (local_b8 == 0)) {
            local_b8 = 1;
            local_ae = (byte)uVar4;
          }
        }
        uVar13 = (uint)local_ae;
        uVar4 = (uint)local_ad;
        FUN_10048350(&DAT_1024a13c,L"Start Index: 0x%x, End Index: 0x%x",uVar4,uVar13);
        FUN_10016860();
        if (local_ae <= local_ad) {
          local_b4 = 0xd9e;
          goto LAB_10027144;
        }
        while (uVar4 = uVar4 + 1, uVar4 < uVar13) {
          FUN_10048350(&local_94,&DAT_1021392c,param_5[uVar4]);
          FUN_1002c980(local_90,0,0xffffffff);
        }
        ppppppuVar8 = local_5c;
        if (7 < local_48) {
          ppppppuVar8 = (undefined4 ******)local_5c[0];
        }
        FUN_10048350(&DAT_1024a13c,L"Capability temp info: %ls",ppppppuVar8);
        FUN_10016860();
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        iVar16 = 0;
        iVar14 = 0;
        local_d4 = 0;
        local_d0 = 0;
        local_c0 = 0;
        local_cc = 0;
        local_8 = CONCAT31(local_8._1_3_,3);
        local_b8 = 0;
        pcVar5 = (char *)FUN_100486d0();
        if (*pcVar5 == '\0') {
          iVar9 = 0;
        }
        else {
          pcVar10 = pcVar5;
          do {
            cVar1 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar1 != '\0');
          iVar9 = (int)pcVar10 - (int)(pcVar5 + 1);
        }
        FUN_1000aa60(pcVar5,iVar9);
        piVar6 = (int *)FUN_100409e0(&DAT_1020eb9c,extraout_ECX);
        if (&local_d4 != piVar6) {
          local_cc = piVar6[2];
          iVar16 = *piVar6;
          iVar14 = piVar6[1];
          *piVar6 = 0;
          piVar6[1] = 0;
          piVar6[2] = 0;
          local_d4 = iVar16;
          local_d0 = iVar14;
          local_c0 = local_cc;
        }
        if (local_a0 != 0) {
          FUN_1002d300(local_a0,local_c8);
          FUN_1002c430(local_a0,(int)(local_98 - local_a0) / 0x18);
        }
        local_4c = 0;
        ppppppuVar8 = local_5c;
        if (7 < local_48) {
          ppppppuVar8 = (undefined4 ******)local_5c[0];
        }
        *(undefined2 *)ppppppuVar8 = 0;
        for (; iVar16 != iVar14; iVar16 = iVar16 + 0x18) {
          puVar7 = (uint *)FUN_1002d0e0(iVar16);
          if (local_2c != puVar7) {
            if (0xf < local_18) {
              FUN_1000b630(local_2c[0],local_18 + 1);
            }
            local_18 = 0xf;
            local_1c = 0;
            local_2c[0] = local_2c[0] & 0xffffff00;
            FUN_1000af70(puVar7);
          }
          local_8 = CONCAT31(local_8._1_3_,3);
          if (0xf < local_98) {
            FUN_1000b630(local_ac,local_98 + 1);
          }
          in_stack_ffffff04 = in_stack_ffffff04 & 0xffffff00;
          FUN_1000ab60(local_2c,0,0xffffffff);
          iVar9 = FUN_100406e0(in_stack_ffffff04);
          if (iVar9 == 0) {
            local_b4 = 0xd9e;
            ppppppuVar8 = extraout_ECX_00;
            goto LAB_10027559;
          }
          FUN_10048350(&local_94,&DAT_1021392c,local_b8);
          FUN_1002c980(local_90,0,0xffffffff);
        }
        ppppppuVar8 = local_5c;
        if (7 < local_48) {
          ppppppuVar8 = (undefined4 ******)local_5c[0];
        }
        FUN_10048350(&DAT_1024a13c,L"Capability info in function: %ls",ppppppuVar8);
        FUN_10016860();
        ppppppuVar8 = (undefined4 ******)&local_60;
        if ((undefined4 ******)local_c8 != ppppppuVar8) {
          ppppppuVar8 = (undefined4 ******)(local_c8 + 1);
          if (ppppppuVar8 != local_5c) {
            FUN_10046260(local_5c,0,0xffffffff);
            ppppppuVar8 = extraout_ECX_01;
          }
        }
LAB_10027559:
        iVar16 = local_d4;
        if (local_d4 != 0) {
          FUN_1002d300(ppppppuVar8,local_c8);
          FUN_1002c430(iVar16,(local_c0 - iVar16) / 0x18);
        }
        if (0xf < local_18) {
          FUN_1000b630(local_2c[0],local_18 + 1);
        }
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
      }
LAB_10027144:
      local_60 = (undefined4 ****)CCpRsString::vftable;
      if (0xf < local_30) {
        FUN_1000b630(local_44,local_30 + 1);
      }
      local_30 = 0xf;
      local_34 = 0;
      local_44 = local_44 & 0xffffff00;
      if (7 < local_48) {
        FUN_1000b5d0(local_5c[0],local_48 + 1);
      }
      local_48 = 7;
      local_4c = 0;
      local_5c[0] = (undefined4 *****)((uint)local_5c[0] & 0xffff0000);
    }
  }
  else {
    local_b4 = 0xd7a;
  }
  local_94 = CCpRsString::vftable;
  if (0xf < local_64) {
    FUN_1000b630(local_78,local_64 + 1);
  }
  local_64 = 0xf;
  local_68 = 0;
  local_78 = local_78 & 0xffffff00;
  if (7 < local_7c) {
    FUN_1000b5d0(local_90[0],local_7c + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
code_r0x10027135:
  uVar4 = uVar4 + 1;
  if (local_c4 - 1 <= uVar4) goto LAB_1002713a;
  goto LAB_10027122;
}

