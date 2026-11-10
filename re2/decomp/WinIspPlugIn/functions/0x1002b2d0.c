// rea decompile_all
// name: FUN_1002b2d0
// address: 0x1002b2d0
// body: available
// range: 0x1002b2d0-0x1002b7da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1002b2d0(void)

{
  uint uVar1;
  int in_ECX;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  byte bVar6;
  uint uVar5;
  int iVar7;
  code *pcVar8;
  byte *pbVar9;
  uint uVar10;
  undefined4 uVar11;
  int local_14f4;
  int local_14f0;
  int local_14ec;
  undefined4 local_14e0;
  uint local_14dc;
  int local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  char local_76;
  byte local_75;
  undefined **local_74;
  undefined2 local_70 [8];
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined4 local_48;
  undefined4 local_44;
  byte local_40;
  undefined1 auStack_3f [2];
  byte abStack_3d [5];
  undefined1 uStack_38;
  byte bStack_37;
  ushort uStack_36;
  undefined1 uStack_34;
  undefined2 local_33;
  byte local_30 [24];
  undefined2 local_18;
  byte local_16;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c2908;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30[0x10] = 0x6e;
  local_30[0x11] = 0x51;
  local_30[0x12] = 0x88;
  local_30[0x13] = 3;
  local_30[0x14] = 0xfe;
  local_30[0x15] = 0xe1;
  local_30[0x16] = 0xa1;
  local_30[0x17] = 2;
  local_18 = 0;
  local_16 = 0;
  FUN_10197c50(&local_14f4,&DAT_1024cb7c,0x146c,local_14);
  local_5c = 7;
  local_60 = 0;
  local_70[0] = 0;
  local_74 = CCpRsString::vftable;
  local_44 = 0xf;
  local_48 = 0;
  local_58 = 0;
  local_8 = 0;
  uVar5 = local_14dc & 0xff;
  local_76 = (char)local_14dc;
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  local_30[4] = 0;
  local_30[5] = 0;
  local_30[6] = 0;
  local_30[7] = 0;
  local_30[8] = 0;
  local_30[9] = 0;
  local_30[10] = 0;
  local_30[0xb] = 0;
  local_30[0xc] = 0;
  local_30[0xd] = 0;
  local_30[0xe] = 0;
  local_40 = 0;
  _auStack_3f = 0;
  uStack_38 = 0;
  bStack_37 = 0;
  uStack_36 = 0;
  uStack_34 = 0;
  local_33 = 0;
  FUN_10048350(&DAT_1024a13c,L"LNV Background Send DDCCI Cmd UD Mode:%d",*(undefined4 *)(in_ECX + 4)
              );
  FUN_10016860();
  iVar7 = *(int *)(in_ECX + 4);
  bVar6 = local_18._1_1_;
  if (iVar7 == 0) {
    local_18 = (ushort)local_18._1_1_ << 8;
LAB_1002b405:
    local_7c = CONCAT22(local_7c._2_2_,(short)iVar7);
    local_75 = 10;
    bStack_37 = (byte)((uint)iVar7 >> 8);
    local_84 = 0x102876e;
    uStack_38 = (char)iVar7;
  }
  else {
    if (iVar7 != 1) {
      if (iVar7 == 2) {
        local_18 = CONCAT11(local_18._1_1_,2);
      }
      else {
        if (iVar7 != 3) {
          FUN_10048130();
          goto LAB_1002b7bf;
        }
        local_18 = CONCAT11(local_18._1_1_,3);
      }
      goto LAB_1002b405;
    }
    bVar6 = *(byte *)(in_ECX + 8);
    local_75 = 0xc;
    local_16 = *(byte *)(in_ECX + 9);
    local_7c = (uint)CONCAT12(local_16,CONCAT11(bVar6,1));
    local_84 = 0x102896e;
    uStack_38 = 1;
    bStack_37 = bVar6;
    uStack_36 = (ushort)local_16;
  }
  local_18 = CONCAT11(bVar6,(char)iVar7);
  uStack_80 = 0x2a1e1fe;
  local_40 = (byte)local_84;
  _auStack_3f = (undefined7)(CONCAT44(0x2a1e1fe,local_84) >> 8);
  if (local_14f4 == 0) {
    (**(code **)(*DAT_10249d10 + 0x13c))
              (CONCAT13(local_30[0x13],
                        CONCAT12(local_30[0x12],CONCAT11(local_30[0x11],local_30[0x10]))),
               CONCAT13(local_30[0x14],
                        CONCAT12(local_30[0x13],CONCAT11(local_30[0x12],local_30[0x11]))),
               local_30[0x12] & 0x7f,local_30 + 0x13);
  }
  else {
    pcVar8 = Sleep_exref;
    uVar11 = local_14e0;
    if ((char)local_14dc != '\0') {
      do {
        FUN_10048350(&DAT_1024a13c,L"Read retry Count: %d",(local_14dc - (uVar5 & 0xff)) + 1);
        FUN_10016860();
        local_88 = (**(code **)(*DAT_10249d10 + 0x13c))
                             (CONCAT13(local_30[0x13],
                                       CONCAT12(local_30[0x12],
                                                CONCAT11(local_30[0x11],local_30[0x10]))),
                              CONCAT13(local_30[0x14],
                                       CONCAT12(local_30[0x13],
                                                CONCAT11(local_30[0x12],local_30[0x11]))),
                              local_30[0x12] & 0x7f,local_30 + 0x13);
        FUN_10048350(&DAT_1024a13c,L"DDCCI write error code 0x%x",local_88);
        FUN_10016860();
        (*pcVar8)(uVar11);
        if (local_88 == 0) {
          uVar10 = (uint)local_75;
          _memset(local_30,0,uVar10);
          local_88 = (**(code **)(*DAT_10249d10 + 0x58))
                               (CONCAT13(local_30[0x13],
                                         CONCAT12(local_30[0x12],
                                                  CONCAT11(local_30[0x11],local_30[0x10]))),
                                CONCAT13(local_30[0x14],
                                         CONCAT12(local_30[0x13],
                                                  CONCAT11(local_30[0x12],local_30[0x11]))),local_75
                                ,local_30);
          FUN_10048350(&DAT_1024a13c,L"I2C read error code 0x%x",local_88);
          FUN_10016860();
          if (local_88 == 0) {
            FUN_10048350(&DAT_1024a13c,L"Read OK, Read buffer:");
            iVar7 = 0;
            do {
              FUN_10048350(&local_74,L"0x%x,",local_30[iVar7]);
              FUN_1002c980(local_70,0,0xffffffff);
              iVar7 = iVar7 + 1;
            } while (iVar7 < (int)uVar10);
            FUN_10016860();
            pcVar8 = Sleep_exref;
            if (local_14ec == 0) {
              if ((local_30[0] == local_30[0x10]) && ((char)local_30[1] < '\0')) {
                uVar4 = CONCAT11(local_30[1],(char)uVar5) & 0x7fff;
                bVar6 = (char)(uVar4 >> 8) + 2;
                uVar5 = (uint)CONCAT11(bVar6,(char)uVar4);
                if (local_14f0 == 0) {
                  FUN_10048350(&DAT_1024a13c,
                               L"Send User Defined Info Check Return Value Not check chk");
                  FUN_10016860();
                  break;
                }
                if (bVar6 < local_75) {
                  iVar7 = 0;
                  bVar3 = 0x50;
                  if ((local_30[1] & 0x7f) != 0xfffffffe) {
                    do {
                      bVar3 = bVar3 ^ local_30[iVar7];
                      iVar7 = iVar7 + 1;
                    } while (iVar7 < (int)((local_30[1] & 0x7f) + 2));
                  }
                  FUN_10048350(&DAT_1024a13c,L"Checksum: 0x%x",bVar3);
                  FUN_10016860();
                  if (bVar3 == local_30[(local_30[1] & 0x7f) + 2]) {
                    FUN_10048350(&DAT_1024a13c,L"Checksum compare success!");
                    FUN_10016860();
                    uVar5 = (uint)CONCAT11(bVar6,local_76);
                    break;
                  }
                  FUN_10048350(&DAT_1024a13c,L"Checksum compare fail!");
                  FUN_10016860();
                  uVar5 = (uint)CONCAT11(bVar6,local_76);
                  pcVar8 = Sleep_exref;
                }
                else {
                  FUN_10048350(&DAT_1024a13c,
                               L"Read buffer endIndex: 0x%x, read length 0x%x, check fail!",bVar6,
                               uVar10);
                  FUN_10016860();
                  pcVar8 = Sleep_exref;
                }
              }
            }
            else if ((char)local_30[1] < '\0') {
              uVar4 = CONCAT11(local_30[1],(char)uVar5) & 0x7fff;
              uVar5 = (uint)CONCAT11((char)(uVar4 >> 8) + '\x02',(char)uVar4);
              break;
            }
          }
          uVar11 = local_14e0;
          (*pcVar8)(local_14e0);
        }
        local_76 = (char)uVar5 + -1;
        uVar5 = CONCAT31((int3)(uVar5 >> 8),local_76);
      } while (local_76 != '\0');
      if (local_75 < (byte)(uVar5 >> 8)) {
        FUN_10048130();
        goto LAB_1002b7bf;
      }
    }
    if ((char)uVar5 == '\0') {
      FUN_10048130();
      goto LAB_1002b7bf;
    }
    pbVar9 = &local_40;
    pbVar2 = local_30;
    uVar5 = local_75 - 5;
    uVar10 = local_75 - 1;
    while (uVar1 = uVar5, 3 < uVar10) {
      if (*(int *)pbVar2 != *(int *)pbVar9) goto LAB_1002b74a;
      pbVar2 = pbVar2 + 4;
      pbVar9 = pbVar9 + 4;
      uVar5 = uVar1 - 4;
      uVar10 = uVar1;
    }
    if (uVar1 != 0xfffffffc) {
LAB_1002b74a:
      if ((*pbVar2 != *pbVar9) ||
         ((uVar1 != 0xfffffffd &&
          ((pbVar2[1] != pbVar9[1] ||
           ((uVar1 != 0xfffffffe &&
            ((pbVar2[2] != pbVar9[2] || ((uVar1 != 0xffffffff && (pbVar2[3] != pbVar9[3]))))))))))))
      {
        FUN_10048350(&DAT_1024a13c,L"Return value not equal to expect, check fail!");
        FUN_10016860();
        FUN_10048130();
        goto LAB_1002b7bf;
      }
    }
  }
  FUN_10048130();
LAB_1002b7bf:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

