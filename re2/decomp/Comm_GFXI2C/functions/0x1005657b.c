// rea decompile_all
// name: FUN_1005657b
// address: 0x1005657b
// body: available
// range: 0x1005657b-0x10056ea1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10056ab9) */
/* WARNING: Removing unreachable block (ram,0x10056ac3) */
/* WARNING: Removing unreachable block (ram,0x10056ac8) */

void __cdecl
FUN_1005657b(int param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  errno_t eVar6;
  uint uVar7;
  ushort uVar8;
  ushort *puVar9;
  int iVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  char cVar14;
  uint uVar15;
  short *psVar16;
  short *psVar17;
  short *psVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  char *pcVar23;
  ushort *local_74;
  ushort *local_70;
  undefined *local_6c;
  ushort local_64;
  ushort *local_5c;
  int local_58;
  int local_54;
  short local_50;
  int local_4c;
  int local_48;
  int local_44;
  ushort local_40;
  undefined4 uStack_3e;
  ushort uStack_3a;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined4 local_24;
  ushort uStack_20;
  ushort uStack_1e;
  ushort uStack_1c;
  undefined1 local_1a;
  byte bStack_19;
  byte local_14;
  undefined1 uStack_13;
  ushort uStack_12;
  undefined4 local_10;
  ushort local_c;
  ushort uStack_a;
  uint local_8;
  
  uVar15 = CONCAT22(local_24._2_2_,(ushort)local_24);
  iVar3 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
  iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
  local_8 = DAT_10064168 ^ (uint)&stack0xfffffffc;
  local_14 = (byte)param_1;
  uStack_13 = (undefined1)((uint)param_1 >> 8);
  uStack_12 = (ushort)((uint)param_1 >> 0x10);
  local_10._0_2_ = (ushort)param_2;
  iVar19 = CONCAT22((ushort)local_10,uStack_12);
  local_10._2_2_ = (ushort)(param_2 >> 0x10);
  local_c = param_3;
  local_64 = param_3 & 0x8000;
  uVar11 = param_3 & 0x7fff;
  local_34 = 0xcccccccc;
  local_30 = 0xcccccccc;
  local_2c._0_1_ = 0xcc;
  local_2c._1_1_ = 0xcc;
  uStack_2a = 0xfb;
  uStack_29 = 0x3f;
  if (local_64 == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((((param_3 & 0x7fff) == 0) && (param_2 == 0)) && (param_1 == 0)) {
    *param_6 = 0;
    *(byte *)(param_6 + 1) = ((local_64 != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(undefined1 *)(param_6 + 2) = 0x30;
    *(undefined1 *)((int)param_6 + 5) = 0;
    iVar1 = iVar3;
    goto LAB_10056e56;
  }
  if (uVar11 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
      if ((local_64 == 0) || (param_2 != 0xc0000000)) {
        if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_100566b2;
        pcVar23 = "1#INF";
      }
      else {
        if (param_1 != 0) {
LAB_100566b2:
          pcVar23 = "1#QNAN";
          goto LAB_100566b7;
        }
        pcVar23 = "1#IND";
      }
      eVar6 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar23);
      if (eVar6 != 0) {
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined1 *)((int)param_6 + 3) = 5;
    }
    else {
      pcVar23 = "1#SNAN";
LAB_100566b7:
      eVar6 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar23);
      if (eVar6 != 0) {
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined1 *)((int)param_6 + 3) = 6;
    }
    param_2 = CONCAT22(local_10._2_2_,(ushort)local_10);
    uVar15 = CONCAT22(local_24._2_2_,(ushort)local_24);
    iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
    goto LAB_10056e56;
  }
  local_50 = (short)((((param_3 & 0x7fff) >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 +
                     (param_3 & 0x7fff) * 0x4d10 >> 0x10);
  local_24._0_2_ = 0;
  uVar15 = -(int)local_50;
  local_1a = (undefined1)uVar11;
  bStack_19 = (byte)(uVar11 >> 8);
  uStack_1e = (ushort)local_10;
  uStack_1c = local_10._2_2_;
  local_24._2_2_ = (ushort)param_1;
  local_6c = &DAT_10065170;
  uStack_20 = uStack_12;
  if (uVar15 != 0) {
    iVar4 = param_1;
    iVar1 = iVar3;
    if ((int)uVar15 < 0) {
      local_6c = &DAT_100652d0;
      uVar15 = (int)local_50;
    }
    while (uVar15 != 0) {
      uStack_20 = (ushort)((uint)iVar4 >> 0x10);
      local_24._2_2_ = (ushort)iVar4;
      iVar3 = CONCAT22(local_c,local_10._2_2_);
      local_6c = local_6c + 0x54;
      if ((uVar15 & 7) != 0) {
        puVar9 = (ushort *)(local_6c + (uVar15 & 7) * 0xc);
        if (0x7fff < *puVar9) {
          local_40 = (ushort)*(undefined4 *)puVar9;
          uStack_3e._0_2_ = (undefined2)((uint)*(undefined4 *)puVar9 >> 0x10);
          puVar2 = puVar9 + 4;
          uStack_3e._2_2_ = (undefined2)*(undefined4 *)(puVar9 + 2);
          uStack_3a = (ushort)((uint)*(undefined4 *)(puVar9 + 2) >> 0x10);
          puVar9 = &local_40;
          local_38 = *(int *)puVar2;
          iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e) + -1;
          uStack_3e._0_2_ = (undefined2)iVar1;
          uStack_3e._2_2_ = (undefined2)((uint)iVar1 >> 0x10);
        }
        local_4c = 0;
        local_14 = 0;
        uStack_13 = 0;
        uStack_12 = 0;
        local_10._0_2_ = 0;
        iVar19 = 0;
        local_10._2_2_ = 0;
        local_c = 0;
        iVar3 = 0;
        uStack_a = 0;
        uVar12 = (puVar9[5] ^ CONCAT11(bStack_19,local_1a)) & 0x8000;
        uVar13 = CONCAT11(bStack_19,local_1a) & 0x7fff;
        uVar8 = puVar9[5] & 0x7fff;
        uVar11 = uVar8 + uVar13;
        if (((uVar13 < 0x7fff) && (uVar8 < 0x7fff)) && (uVar11 < 0xbffe)) {
          if (0x3fbf < uVar11) {
            if (((uVar13 == 0) &&
                (uVar11 = uVar11 + 1,
                (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
               ((CONCAT22(uStack_1e,uStack_20) == 0 &&
                (CONCAT22(local_24._2_2_,(ushort)local_24) == 0)))) {
              local_1a = 0;
              bStack_19 = 0;
              goto LAB_100569c9;
            }
            if ((((uVar8 == 0) && (uVar11 = uVar11 + 1, (*(uint *)(puVar9 + 4) & 0x7fffffff) == 0))
                && (*(int *)(puVar9 + 2) == 0)) && (*(int *)puVar9 == 0)) goto LAB_100567e8;
            local_58 = 0;
            psVar18 = (short *)&local_10;
            local_44 = 5;
            do {
              local_54 = local_44;
              if (0 < local_44) {
                local_74 = (ushort *)((int)&local_24 + local_58 * 2);
                local_70 = puVar9 + 4;
                do {
                  bVar5 = false;
                  uVar7 = *(uint *)(psVar18 + -2) + (uint)*local_74 * (uint)*local_70;
                  if ((uVar7 < *(uint *)(psVar18 + -2)) ||
                     (uVar7 < (uint)*local_74 * (uint)*local_70)) {
                    bVar5 = true;
                  }
                  *(uint *)(psVar18 + -2) = uVar7;
                  if (bVar5) {
                    *psVar18 = *psVar18 + 1;
                  }
                  local_74 = local_74 + 1;
                  local_70 = local_70 + -1;
                  local_54 = local_54 + -1;
                } while (0 < local_54);
              }
              psVar18 = psVar18 + 1;
              local_58 = local_58 + 1;
              local_44 = local_44 + -1;
            } while (0 < local_44);
            uVar11 = uVar11 + 0xc002;
            if ((short)uVar11 < 1) {
LAB_100568f9:
              uVar11 = uVar11 - 1;
              if ((short)uVar11 < 0) {
                uVar7 = (uint)(ushort)-uVar11;
                uVar11 = 0;
                do {
                  if ((local_14 & 1) != 0) {
                    local_4c = local_4c + 1;
                  }
                  iVar3 = CONCAT22(uStack_a,local_c);
                  uVar20 = CONCAT22(local_10._2_2_,(ushort)local_10);
                  iVar19 = CONCAT22(local_10._2_2_,(ushort)local_10);
                  local_c = (ushort)(CONCAT22(uStack_a,local_c) >> 1);
                  uStack_a = uStack_a >> 1;
                  local_10._2_2_ = local_10._2_2_ >> 1 | (ushort)((uint)(iVar3 << 0x1f) >> 0x10);
                  uVar21 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
                  uStack_12 = uStack_12 >> 1 | (ushort)((uint)(iVar19 << 0x1f) >> 0x10);
                  uVar7 = uVar7 - 1;
                  local_10._0_2_ = (ushort)(uVar20 >> 1);
                  local_14 = (byte)uVar21;
                  uStack_13 = (undefined1)(uVar21 >> 8);
                } while (uVar7 != 0);
                if (local_4c != 0) {
                  local_14 = local_14 | 1;
                }
              }
            }
            else {
              do {
                uVar13 = local_10._2_2_;
                uVar8 = uStack_12;
                if ((uStack_a & 0x8000) != 0) break;
                iVar19 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) << 1;
                local_14 = (byte)iVar19;
                uStack_13 = (undefined1)((uint)iVar19 >> 8);
                uStack_12 = (ushort)((uint)iVar19 >> 0x10);
                iVar19 = CONCAT22(local_10._2_2_,(ushort)local_10) * 2;
                local_10._0_2_ = (ushort)iVar19 | uVar8 >> 0xf;
                local_10._2_2_ = (ushort)((uint)iVar19 >> 0x10);
                iVar19 = CONCAT22(uStack_a,local_c) * 2;
                local_c = (ushort)iVar19 | uVar13 >> 0xf;
                uVar11 = uVar11 - 1;
                uStack_a = (ushort)((uint)iVar19 >> 0x10);
              } while (0 < (short)uVar11);
              if ((short)uVar11 < 1) goto LAB_100568f9;
            }
            if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
               (iVar3 = CONCAT22(local_c,local_10._2_2_),
               iVar19 = CONCAT22((ushort)local_10,uStack_12),
               (CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
              if (CONCAT22((ushort)local_10,uStack_12) == -1) {
                iVar19 = 0;
                if (CONCAT22(local_c,local_10._2_2_) == -1) {
                  if (uStack_a == 0xffff) {
                    uStack_a = 0x8000;
                    uVar11 = uVar11 + 1;
                    iVar3 = 0;
                    iVar19 = 0;
                  }
                  else {
                    uStack_a = uStack_a + 1;
                    iVar3 = 0;
                    iVar19 = 0;
                  }
                }
                else {
                  iVar3 = CONCAT22(local_c,local_10._2_2_) + 1;
                }
              }
              else {
                iVar19 = CONCAT22((ushort)local_10,uStack_12) + 1;
                iVar3 = CONCAT22(local_c,local_10._2_2_);
              }
            }
            local_10._0_2_ = (ushort)((uint)iVar19 >> 0x10);
            uStack_12 = (ushort)iVar19;
            local_c = (ushort)((uint)iVar3 >> 0x10);
            local_10._2_2_ = (ushort)iVar3;
            if (uVar11 < 0x7fff) {
              bStack_19 = (byte)(uVar11 >> 8) | (byte)(uVar12 >> 8);
              local_24._0_2_ = uStack_12;
              local_24._2_2_ = (ushort)local_10;
              uStack_20 = local_10._2_2_;
              iVar4 = CONCAT22(local_10._2_2_,(ushort)local_10);
              uStack_1e = local_c;
              uStack_1c = uStack_a;
              local_1a = (undefined1)uVar11;
            }
            else {
              uStack_20 = 0;
              uStack_1e = 0;
              local_24._0_2_ = 0;
              local_24._2_2_ = 0;
              iVar4 = 0;
              iVar10 = ((uVar12 == 0) - 1 & 0x80000000) + 0x7fff8000;
              uStack_1c = (ushort)iVar10;
              local_1a = (undefined1)((uint)iVar10 >> 0x10);
              bStack_19 = (byte)((uint)iVar10 >> 0x18);
            }
            goto LAB_100569c9;
          }
LAB_100567e8:
          uStack_1c = 0;
          local_1a = 0;
          bStack_19 = 0;
        }
        else {
          iVar19 = ((uVar12 == 0) - 1 & 0x80000000) + 0x7fff8000;
          uStack_1c = (ushort)iVar19;
          local_1a = (undefined1)((uint)iVar19 >> 0x10);
          bStack_19 = (byte)((uint)iVar19 >> 0x18);
        }
        uStack_20 = 0;
        uStack_1e = 0;
        local_24._0_2_ = 0;
        local_24._2_2_ = 0;
        iVar4 = 0;
        iVar19 = 0;
        iVar3 = 0;
      }
LAB_100569c9:
      uStack_20 = (ushort)((uint)iVar4 >> 0x10);
      local_24._2_2_ = (ushort)iVar4;
      local_c = (ushort)((uint)iVar3 >> 0x10);
      local_10._2_2_ = (ushort)iVar3;
      local_10._0_2_ = (ushort)((uint)iVar19 >> 0x10);
      uStack_12 = (ushort)iVar19;
      param_1 = CONCAT22(uStack_12,local_24._2_2_);
      param_2 = CONCAT22(local_10._2_2_,(ushort)local_10);
      uVar15 = (int)uVar15 >> 3;
    }
  }
  uStack_12 = (ushort)((uint)param_1 >> 0x10);
  local_24._2_2_ = (ushort)param_1;
  uVar7 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
  uVar15 = CONCAT22(local_24._2_2_,(ushort)local_24);
  if (0x3ffe < (ushort)(uVar7 >> 0x10)) {
    local_50 = local_50 + 1;
    local_54 = 0;
    local_14 = 0;
    uStack_13 = 0;
    uStack_12 = 0;
    local_10._0_2_ = 0;
    local_10._2_2_ = 0;
    local_c = 0;
    uStack_a = 0;
    uVar15 = uVar7 >> 0x10 & 0x7fff;
    iVar19 = uVar15 + 0x3ffb;
    if (((ushort)uVar15 < 0x7fff) && ((ushort)iVar19 < 0xbffe)) {
      if (0x3fbf < (ushort)iVar19) {
        if (((((ushort)uVar15 == 0) &&
             (iVar19 = uVar15 + 0x3ffc,
             (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
            (CONCAT22(uStack_1e,uStack_20) == 0)) &&
           (CONCAT22(local_24._2_2_,(ushort)local_24) == 0)) {
          local_1a = 0;
          bStack_19 = 0;
          param_2 = 0;
          uVar15 = CONCAT22(local_24._2_2_,(ushort)local_24);
          goto LAB_10056c8e;
        }
        local_58 = 0;
        psVar18 = (short *)&local_10;
        local_44 = 5;
        do {
          local_4c = local_44;
          if (0 < local_44) {
            local_5c = &local_2c;
            puVar9 = (ushort *)((int)&local_24 + local_58 * 2);
            do {
              bVar5 = false;
              uVar15 = *(uint *)(psVar18 + -2) + (uint)*local_5c * (uint)*puVar9;
              if ((uVar15 < *(uint *)(psVar18 + -2)) || (uVar15 < (uint)*local_5c * (uint)*puVar9))
              {
                bVar5 = true;
              }
              *(uint *)(psVar18 + -2) = uVar15;
              if (bVar5) {
                *psVar18 = *psVar18 + 1;
              }
              local_5c = local_5c + -1;
              puVar9 = puVar9 + 1;
              local_4c = local_4c + -1;
            } while (0 < local_4c);
          }
          psVar18 = psVar18 + 1;
          local_58 = local_58 + 1;
          local_44 = local_44 + -1;
        } while (0 < local_44);
        iVar19 = iVar19 + 0xc002;
        if ((short)iVar19 < 1) {
LAB_10056b87:
          uVar11 = (ushort)(iVar19 + 0xffff);
          if ((short)uVar11 < 0) {
            uVar15 = -(iVar19 + 0xffff);
            uVar7 = uVar15 & 0xffff;
            uVar11 = uVar11 + (short)uVar15;
            do {
              if ((local_14 & 1) != 0) {
                local_54 = local_54 + 1;
              }
              iVar3 = CONCAT22(uStack_a,local_c);
              uVar15 = CONCAT22(local_10._2_2_,(ushort)local_10);
              iVar19 = CONCAT22(local_10._2_2_,(ushort)local_10);
              local_c = (ushort)(CONCAT22(uStack_a,local_c) >> 1);
              uStack_a = uStack_a >> 1;
              local_10._2_2_ = local_10._2_2_ >> 1 | (ushort)((uint)(iVar3 << 0x1f) >> 0x10);
              uVar20 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
              uStack_12 = uStack_12 >> 1 | (ushort)((uint)(iVar19 << 0x1f) >> 0x10);
              uVar7 = uVar7 - 1;
              local_10._0_2_ = (ushort)(uVar15 >> 1);
              local_14 = (byte)uVar20;
              uStack_13 = (undefined1)(uVar20 >> 8);
            } while (uVar7 != 0);
            if (local_54 != 0) {
              local_14 = local_14 | 1;
            }
          }
        }
        else {
          do {
            uVar8 = local_10._2_2_;
            uVar11 = uStack_12;
            if ((short)uStack_a < 0) break;
            iVar3 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) << 1;
            local_14 = (byte)iVar3;
            uStack_13 = (undefined1)((uint)iVar3 >> 8);
            uStack_12 = (ushort)((uint)iVar3 >> 0x10);
            iVar3 = CONCAT22(local_10._2_2_,(ushort)local_10) * 2;
            local_10._0_2_ = (ushort)iVar3 | uVar11 >> 0xf;
            local_10._2_2_ = (ushort)((uint)iVar3 >> 0x10);
            iVar3 = CONCAT22(uStack_a,local_c) * 2;
            local_c = (ushort)iVar3 | uVar8 >> 0xf;
            iVar19 = iVar19 + 0xffff;
            uStack_a = (ushort)((uint)iVar3 >> 0x10);
          } while (0 < (short)iVar19);
          uVar11 = (ushort)iVar19;
          if ((short)uVar11 < 1) goto LAB_10056b87;
        }
        if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
           (iVar19 = CONCAT22(local_c,local_10._2_2_), uVar15 = CONCAT22((ushort)local_10,uStack_12)
           , (CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
          if (CONCAT22((ushort)local_10,uStack_12) == -1) {
            uVar15 = 0;
            if (CONCAT22(local_c,local_10._2_2_) == -1) {
              if (uStack_a == 0xffff) {
                uStack_a = 0x8000;
                uVar11 = uVar11 + 1;
                iVar19 = 0;
                uVar15 = 0;
              }
              else {
                uStack_a = uStack_a + 1;
                iVar19 = 0;
                uVar15 = 0;
              }
            }
            else {
              iVar19 = CONCAT22(local_c,local_10._2_2_) + 1;
            }
          }
          else {
            uVar15 = CONCAT22((ushort)local_10,uStack_12) + 1;
            iVar19 = CONCAT22(local_c,local_10._2_2_);
          }
        }
        local_10._0_2_ = (ushort)(uVar15 >> 0x10);
        uStack_12 = (ushort)uVar15;
        local_c = (ushort)((uint)iVar19 >> 0x10);
        local_10._2_2_ = (ushort)iVar19;
        param_2 = CONCAT22(local_10._2_2_,(ushort)local_10);
        if (uVar11 < 0x7fff) {
          bStack_19 = (byte)(uVar11 >> 8) | bStack_19 & 0x80;
          uStack_20 = local_10._2_2_;
          uStack_1e = local_c;
          uStack_1c = uStack_a;
          local_1a = (undefined1)uVar11;
        }
        else {
          uStack_20 = 0;
          uStack_1e = 0;
          uVar15 = 0;
          iVar19 = (((bStack_19 & 0x80) == 0) - 1 & 0x80000000) + 0x7fff8000;
          uStack_1c = (ushort)iVar19;
          local_1a = (undefined1)((uint)iVar19 >> 0x10);
          bStack_19 = (byte)((uint)iVar19 >> 0x18);
          param_2 = CONCAT22(local_10._2_2_,(ushort)local_10);
        }
        goto LAB_10056c8e;
      }
      iVar19 = 0;
    }
    else {
      iVar19 = (((bStack_19 & 0x80) == 0) - 1 & 0x80000000) + 0x7fff8000;
    }
    uStack_1e = 0;
    uStack_20 = 0;
    uStack_1c = (ushort)iVar19;
    local_1a = (undefined1)((uint)iVar19 >> 0x10);
    bStack_19 = (byte)((uint)iVar19 >> 0x18);
    param_2 = 0;
    uVar15 = 0;
  }
LAB_10056c8e:
  *param_6 = local_50;
  if (((param_5 & 1) == 0) || (param_4 = param_4 + local_50, 0 < param_4)) {
    if (0x15 < param_4) {
      param_4 = 0x15;
    }
    iVar19 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 0x10) - 0x3ffe;
    local_1a = 0;
    bStack_19 = 0;
    local_48 = 8;
    uVar7 = uVar15;
    do {
      uVar15 = uVar7 << 1;
      iVar3 = CONCAT22(uStack_1e,uStack_20) * 2;
      uStack_20 = (ushort)iVar3 | (ushort)(uVar7 >> 0x1f);
      iVar4 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2;
      uStack_1c = (ushort)iVar4 | uStack_1e >> 0xf;
      local_48 = local_48 + -1;
      uStack_1e = (ushort)((uint)iVar3 >> 0x10);
      local_1a = (undefined1)((uint)iVar4 >> 0x10);
      bStack_19 = (byte)((uint)iVar4 >> 0x18);
      uVar7 = uVar15;
    } while (local_48 != 0);
    if ((iVar19 < 0) && (uVar20 = -iVar19 & 0xff, uVar20 != 0)) {
      do {
        iVar3 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
        uVar21 = CONCAT22(uStack_1e,uStack_20);
        iVar19 = CONCAT22(uStack_1e,uStack_20);
        uVar15 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 1;
        uStack_1c = (ushort)uVar15;
        local_1a = (undefined1)(uVar15 >> 0x10);
        bStack_19 = bStack_19 >> 1;
        uStack_1e = uStack_1e >> 1 | (ushort)((uint)(iVar3 << 0x1f) >> 0x10);
        uVar15 = uVar7 >> 1 | iVar19 << 0x1f;
        uVar20 = uVar20 - 1;
        uStack_20 = (ushort)(uVar21 >> 1);
        local_24._0_2_ = (ushort)(uVar7 >> 1);
        local_24._2_2_ = (ushort)(uVar15 >> 0x10);
        uVar7 = CONCAT22(local_24._2_2_,(ushort)local_24);
      } while (0 < (int)uVar20);
    }
    psVar18 = param_6 + 2;
    psVar16 = psVar18;
    uVar11 = uStack_1e;
    for (iVar19 = param_4 + 1; 0 < iVar19; iVar19 = iVar19 + -1) {
      local_24._2_2_ = (ushort)(uVar15 >> 0x10);
      local_24._0_2_ = (ushort)uVar15;
      iVar1 = CONCAT22(uStack_20,local_24._2_2_);
      local_38 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
      uVar20 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2 | (uint)(uVar11 >> 0xf)) * 2 |
               (CONCAT22(uVar11,uStack_20) & 0x7fffffff) >> 0x1e;
      uVar21 = (CONCAT22(uVar11,uStack_20) * 2 | (uint)(local_24._2_2_ >> 0xf)) * 2 |
               (uVar15 & 0x7fffffff) >> 0x1e;
      uVar7 = uVar15 * 5;
      if ((uVar7 < uVar15 * 4) || (uVar22 = uVar21, uVar7 < uVar15)) {
        uVar22 = uVar21 + 1;
        bVar5 = false;
        if ((uVar22 < uVar21) || (uVar22 == 0)) {
          bVar5 = true;
        }
        if (bVar5) {
          uVar20 = uVar20 + 1;
        }
      }
      uVar21 = CONCAT22(uVar11,uStack_20) + uVar22;
      if ((uVar21 < uVar22) || (uVar21 < CONCAT22(uVar11,uStack_20))) {
        uVar20 = uVar20 + 1;
      }
      iVar3 = (uVar20 + local_38) * 2;
      uStack_1c = (ushort)iVar3 | (ushort)(uVar21 >> 0x1f);
      uVar15 = uVar15 * 10;
      local_1a = (undefined1)((uint)iVar3 >> 0x10);
      uStack_20 = (ushort)(uVar21 * 2) | (ushort)(uVar7 >> 0x1f);
      *(char *)psVar16 = (char)((uint)iVar3 >> 0x18) + '0';
      psVar16 = (short *)((int)psVar16 + 1);
      uStack_1e = (ushort)(uVar21 * 2 >> 0x10);
      bStack_19 = 0;
      local_40 = (ushort)local_24;
      uStack_3a = uVar11;
      uVar11 = uStack_1e;
    }
    psVar17 = psVar16 + -1;
    uStack_1e = uVar11;
    if (*(char *)((int)psVar16 + -1) < '5') {
      for (; (psVar18 <= psVar17 && ((char)*psVar17 == '0')); psVar17 = (short *)((int)psVar17 + -1)
          ) {
      }
      if (psVar17 < psVar18) {
        *param_6 = 0;
        *(undefined1 *)((int)param_6 + 3) = 1;
        *(byte *)(param_6 + 1) = ((local_64 != 0x8000) - 1U & 0xd) + 0x20;
        *(char *)psVar18 = '0';
        *(undefined1 *)((int)param_6 + 5) = 0;
        goto LAB_10056e56;
      }
    }
    else {
      for (; (psVar18 <= psVar17 && ((char)*psVar17 == '9')); psVar17 = (short *)((int)psVar17 + -1)
          ) {
        *(char *)psVar17 = '0';
      }
      if (psVar17 < psVar18) {
        psVar17 = (short *)((int)psVar17 + 1);
        *param_6 = *param_6 + 1;
      }
      *(char *)psVar17 = (char)*psVar17 + '\x01';
    }
    cVar14 = ((char)psVar17 - (char)param_6) + -3;
    *(char *)((int)param_6 + 3) = cVar14;
    *(undefined1 *)(cVar14 + 4 + (int)param_6) = 0;
  }
  else {
    *param_6 = 0;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(byte *)(param_6 + 1) = ((local_64 != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined1 *)(param_6 + 2) = 0x30;
    *(undefined1 *)((int)param_6 + 5) = 0;
  }
LAB_10056e56:
  uStack_3e = iVar1;
  local_24 = uVar15;
  local_10 = param_2;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

