// rea decompile_all
// name: FUN_00596fd9
// address: 0x596fd9
// body: available
// range: 0x596fd9-0x597ade inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00596fd9(double param_1,int param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  ushort uVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong lVar20;
  ulonglong uVar21;
  ulonglong in_XMM2_Qb;
  undefined1 auVar22 [16];
  longlong lVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar26 [16];
  ulonglong uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 local_c [4];
  
  dVar13 = (double)((ulonglong)param_1 >> 0x2c);
  uVar11 = (ushort)((ulonglong)param_1 >> 0x30);
  uVar3 = (SUB82(dVar13,0) & 0xff) + 1 & 0x1fe;
  dVar34 = (double)((ulonglong)param_1 & 0xfffffffffffff | 0x3ff0000000000000) *
           *(double *)(&DAT_005e45e0 + uVar3 * 4);
  dVar30 = *(double *)(&DAT_005e45e0 + uVar3 * 4);
  dVar14 = *(double *)(&DAT_005e49f0 + uVar3 * 8);
  dVar32 = *(double *)(&UNK_005e49f8 + uVar3 * 8);
  uVar7 = 0x7fef - uVar11;
  uVar3 = SUB84(param_1,0);
  uVar9 = (uint)((ulonglong)param_1 >> 0x20);
  dVar31 = param_1;
  if ((uVar11 - 0x10 | uVar7) < 0x80000000) {
    uVar7 = 0;
    uVar8 = 0x3fe7f;
LAB_00597056:
    uVar4 = ((ushort)((ulonglong)dVar34 >> 0x26) & 0xff) + 1 & 0x1fe;
    dVar28 = (double)((ulonglong)dVar31 & 0xfffffffffffff | DAT_005e2ad0);
    dVar15 = (double)((ulonglong)dVar28 & 0xfffffffff8000000);
    in_XMM3._8_8_ = in_XMM3._8_8_ >> 0x1f;
    dVar28 = dVar28 - dVar15;
    uVar5 = ((ushort)((ulonglong)(dVar34 * *(double *)(&DAT_005e5200 + uVar4 * 4)) >> 0x1f) & 0x1ff)
            + 1 & 0x3fe;
    dVar29 = dVar30 * *(double *)(&DAT_005e5200 + uVar4 * 4) *
             *(double *)(&DAT_005e5e20 + uVar5 * 4);
    dVar34 = dVar34 * *(double *)(&DAT_005e5200 + uVar4 * 4) *
             *(double *)(&DAT_005e5e20 + uVar5 * 4);
    dVar31 = dVar14 + *(double *)(&DAT_005e5610 + uVar4 * 8) +
             (double)(int)((longlong)dVar13 - (ulonglong)uVar8 >> 8) +
             *(double *)(&DAT_005e6630 + uVar5 * 8);
    dVar33 = dVar32 + *(double *)(&DAT_005e5618 + uVar4 * 8) +
             *(double *)(&DAT_005e6638 + uVar5 * 8);
    dVar14 = (double)((ulonglong)dVar29 & 0xfffffffff8000000);
    dVar29 = dVar29 - dVar14;
    dVar35 = dVar34 + -1.442694902420044;
    dVar32 = dVar31 + dVar35;
    dVar30 = (double)CONCAT44(param_3,param_2);
    uVar2 = (ushort)(param_3 >> 0x10);
    dVar31 = dVar31 - dVar32;
    in_XMM3._0_8_ = 0xfffffffff8000000;
    uVar4 = (uint)(ushort)((ulonglong)dVar32 >> 0x30);
    dVar14 = (((dVar34 - dVar14 * dVar15) - dVar15 * dVar29) - dVar14 * dVar28) - dVar28 * dVar29;
    dVar34 = dVar35 - dVar14;
    dVar13 = dVar32 - dVar14;
    uVar8 = uVar2 & 0x7ff0;
    if (uVar8 < 0x7ff0) {
      iVar6 = (uVar8 - 0x3ff0) + (uVar4 & 0x7ff0);
      if ((0x40a0U - iVar6 | iVar6 - 0x3c70U) < 0x80000000) {
LAB_005971a8:
        dVar15 = (double)((ulonglong)dVar30 & 0xfffffffff8000000);
        dVar28 = (double)((ulonglong)dVar13 & 0xfffffffff8000000);
        dVar14 = (dVar31 + dVar35) - (dVar14 - (dVar32 - dVar13));
        dVar32 = dVar15 * dVar28 * 128.0;
        uVar3 = (uint)ROUND(dVar32);
        dVar30 = dVar15 * (dVar13 - dVar28) + dVar28 * (dVar30 - dVar15) +
                 (dVar13 - dVar28) * (dVar30 - dVar15);
        if (0 < (int)(0x1ff7f - uVar3 | uVar3 + 0x1e1ff)) {
          iVar6 = (uVar3 & 0x7f) * 0x10;
          auVar16._0_8_ = (double)((ulonglong)((uVar7 + uVar3 & 0xffffff80) + 0x1ff80) << 0x2d);
          auVar16._8_4_ = 0;
          auVar16._12_4_ = (int)((ulonglong)auVar16._0_8_ >> 0x20);
          dVar31 = *(double *)(&DAT_005e7660 + iVar6) * auVar16._0_8_;
          dVar30 = (dVar32 - ((dVar32 + 6755399441055744.0) - 6755399441055744.0)) * 0.0078125 +
                   dVar30 + ((dVar34 * 0.16015105075297303 + dVar34 * dVar34 * -0.08325619496072671)
                             * dVar34 * dVar34 +
                             dVar34 * 9.597935033233511e-08 + dVar34 * dVar34 * -0.3465736568077919
                            + dVar33 + dVar14) * (double)CONCAT44(param_3,param_2);
          return (float10)(dVar30 * dVar30 * dVar31 *
                           (dVar30 * 0.0013333558146428443 + 0.009618129107628477) * dVar30 * dVar30
                           + *(double *)(&UNK_005e7668 + iVar6) * auVar16._8_8_ +
                           (dVar30 * 0.055504108664821576 + 0.2402265069591007) * dVar30 * dVar30 *
                           dVar31 + dVar30 * 0.6931471805599453 * dVar31 + dVar31);
        }
        if ((int)uVar3 < 1) {
          if ((int)uVar3 < -0x3fdff) {
LAB_00597a07:
            _local_c = (double)((ulonglong)uVar7 << 0x2d);
            uVar10 = 0x19;
            goto LAB_005977ae;
          }
          uVar7 = uVar7 + 0x80;
          uVar9 = (uVar3 & 0xffffff80) + 0x3fe80;
          uVar11 = 0;
        }
        else {
          if (0x3ffff < uVar3) goto LAB_00597a2a;
          uVar7 = uVar7 + 0x3ff00;
          uVar9 = uVar3 - 0x80 & 0xffffff80;
          uVar11 = 0x3ff0;
        }
        iVar6 = (uVar3 & 0x7f) * 0x10;
        uVar3 = ((int)-(uVar9 - 0x1ff80) >> 7) + 2;
        auVar19._0_8_ = (double)((ulonglong)uVar9 << 0x2d);
        auVar19._8_4_ = 0;
        auVar19._12_4_ = (int)((ulonglong)auVar19._0_8_ >> 0x20);
        dVar31 = *(double *)(&DAT_005e7660 + iVar6) * auVar19._0_8_;
        dVar30 = (dVar32 - ((dVar32 + 6755399441055744.0) - 6755399441055744.0)) * 0.0078125 +
                 dVar30 + ((dVar34 * 0.16015105075297303 + dVar34 * dVar34 * -0.08325619496072671) *
                           dVar34 * dVar34 +
                           dVar34 * 9.597935033233511e-08 + dVar34 * dVar34 * -0.3465736568077919 +
                          dVar33 + dVar14) * (double)CONCAT44(param_3,param_2);
        _local_c = (double)((ulonglong)uVar7 << 0x2d);
        uVar27 = (ulonglong)(uVar3 + (uVar3 & 0x20));
        dVar14 = (double)(-1L << uVar27 & (ulonglong)dVar31);
        dVar30 = dVar30 * dVar30 * dVar31 *
                 (dVar30 * 0.0013333558146428443 + 0.009618129107628477) * dVar30 * dVar30 +
                 *(double *)(&UNK_005e7668 + iVar6) * auVar19._8_8_ +
                 (dVar30 * 0.055504108664821576 + 0.2402265069591007) * dVar30 * dVar30 * dVar31 +
                 dVar30 * 0.6931471805599453 * dVar31;
        dVar32 = (double)((ulonglong)(dVar14 + dVar30) & -1L << uVar27);
        dVar30 = dVar30 + (dVar14 - dVar32) + (dVar31 - dVar14);
        if ((int)(uVar9 - 0x1ff80) < 1) {
          _local_c = dVar30 * _local_c + dVar32 * _local_c;
          _local_c = _local_c + (double)((ulonglong)uVar11 << 0x30) * _local_c;
          uVar10 = 0x18;
          if ((((ushort)((ulonglong)_local_c >> 0x30) & 0x7ff0) != 0x7ff0) &&
             (uVar10 = 0x19, ((ulonglong)_local_c & 0x7ff0000000000000) != 0)) {
            return (float10)_local_c;
          }
        }
        else {
          _local_c = (dVar30 + dVar32) * _local_c;
          _local_c = _local_c + (double)((ulonglong)uVar11 << 0x30) * _local_c;
          uVar10 = 0x18;
          if ((((ushort)((ulonglong)_local_c >> 0x30) & 0x7ff0) != 0x7ff0) &&
             (uVar10 = 0x19, ((ulonglong)_local_c & 0x7ff0000000000000) != 0)) {
            return (float10)_local_c;
          }
        }
      }
      else {
        dVar32 = dVar30 * dVar13;
        uVar3 = (ushort)((ulonglong)dVar32 >> 0x30) & 0x7ff0;
        uVar9 = uVar3 - 0x3c70;
        if ((0x40a0 - uVar3 | uVar9) < 0x80000000) goto LAB_005971a8;
        if (0x7fffffff < uVar9) {
          return (float10)(double)((ulonglong)(uVar7 | 0x1ff80) << 0x2d);
        }
        if (((uVar2 ^ (uVar11 & 0x7ff0) + 0xc010) & 0x8000) != 0) goto LAB_00597a07;
LAB_00597a2a:
        uVar10 = 0x18;
        if (uVar7 == 0) {
          _local_c = INFINITY;
        }
        else {
          _local_c = -INFINITY;
        }
      }
      goto LAB_005977ae;
    }
    auVar22._4_4_ = param_3;
    auVar22._0_4_ = param_2;
    auVar22._8_8_ = in_XMM2_Qb;
    bVar12 = uVar3 == 0;
    uVar3 = uVar4;
    if (bVar12) {
      if (uVar9 == 0x3ff00000) goto LAB_005977ab;
      uVar3 = uVar9;
      if (uVar9 == 0xbff00000) {
        return (float10)1;
      }
    }
  }
  else {
    auVar22._4_4_ = param_3;
    auVar22._0_4_ = param_2;
    in_XMM3._0_8_ = 0x7fffffffffffffff;
    auVar22._8_8_ = in_XMM2_Qb;
    uVar8 = param_3 & 0x7fffffff;
    if (uVar8 < 0x7ff00000) {
      if (param_2 == 0 && uVar8 == 0) {
        _local_c = 1.0;
        uVar10 = 0x1a;
        if (uVar3 != 0 || ((ulonglong)param_1 & 0x7fffffff00000000) != 0) {
          uVar10 = 0x1d;
          if (((uVar9 & 0x7fffffff) < 0x7ff00001) &&
             (((uVar9 & 0x7fffffff) < 0x7ff00000 || (uVar3 == 0)))) {
            return (float10)1.0;
          }
        }
        goto LAB_005977ae;
      }
      if ((int)uVar7 < 0) {
        auVar26._8_8_ = in_XMM3._8_8_ << 0x34;
        auVar26._0_8_ = 0xfff0000000000000;
        iVar6 = (uVar8 >> 0x14) - 0x3f3;
        in_XMM3 = (undefined1  [16])0x0;
        uVar27 = (ulonglong)
                 CONCAT22((ushort)(-1 < iVar6) * (short)((uint)iVar6 >> 0x10),
                          (ushort)(-1 < (short)iVar6) * (short)iVar6);
        lVar20 = SUB168(auVar22 | auVar26,0) << uVar27;
        lVar25 = SUB168(auVar22 | auVar26,8) << uVar27;
        auVar23._0_4_ = -(uint)((int)lVar20 == 0);
        auVar23._4_4_ = -(uint)((int)((ulonglong)lVar20 >> 0x20) == 0);
        auVar23._8_4_ = -(uint)((int)lVar25 == 0);
        auVar23._12_4_ = -(uint)((int)((ulonglong)lVar25 >> 0x20) == 0);
        bVar1 = SUB161(auVar23 >> 7,0) & 1 | (SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                (SUB161(auVar23 >> 0x17,0) & 1) << 2 | (SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                (SUB161(auVar23 >> 0x27,0) & 1) << 4 | (SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                (SUB161(auVar23 >> 0x37,0) & 1) << 6 | SUB161(auVar23 >> 0x3f,0) << 7;
        uVar8 = 0x7fef - uVar7 & 0x7fff;
        uVar27 = auVar23._8_8_;
        if (0x7fef < uVar8) {
          auVar17._0_4_ = -(uint)((int)((ulonglong)param_1 & 0xfffffffffffff) == 0);
          auVar17._4_4_ = -(uint)((int)(((ulonglong)param_1 & 0xfffffffffffff) >> 0x20) == 0);
          auVar17._8_4_ = 0xffffffff;
          auVar17._12_4_ = 0xffffffff;
          if ((byte)(SUB161(auVar17 >> 7,0) & 1 | (SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar17 >> 0x17,0) & 1) << 2 | (SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar17 >> 0x27,0) & 1) << 4 | (SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                     (SUB161(auVar17 >> 0x37,0) & 1) << 6 | SUB161(auVar17 >> 0x3f,0) << 7) == 0xff)
          {
            if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
              if ((bVar1 != 0xff) ||
                 (uVar21 = (ulonglong)(((param_3 & 0x7fffffff) >> 0x14) - 0x3f4),
                 lVar20 = CONCAT44(param_3,param_2) << uVar21, lVar25 = uVar27 << uVar21,
                 auVar24._0_4_ = -(uint)((int)lVar20 == 0),
                 auVar24._4_4_ = -(uint)((int)((ulonglong)lVar20 >> 0x20) == 0),
                 auVar24._8_4_ = -(uint)((int)lVar25 == 0),
                 auVar24._12_4_ = -(uint)((int)((ulonglong)lVar25 >> 0x20) == 0),
                 (byte)(SUB161(auVar24 >> 7,0) & 1 | (SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                        (SUB161(auVar24 >> 0x17,0) & 1) << 2 | (SUB161(auVar24 >> 0x1f,0) & 1) << 3
                        | (SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                        (SUB161(auVar24 >> 0x2f,0) & 1) << 5 | (SUB161(auVar24 >> 0x37,0) & 1) << 6
                       | SUB161(auVar24 >> 0x3f,0) << 7) == 0xff)) {
                if ((param_3 & 0x80000000) != 0) {
                  return (float10)0;
                }
                goto LAB_0059773f;
              }
              if ((param_3 & 0x80000000) == 0) {
                return (float10)-INFINITY;
              }
              goto LAB_005975f9;
            }
            if ((param_3 & 0x80000000) != 0) {
              return (float10)0;
            }
            goto LAB_0059773f;
          }
          goto LAB_0059763f;
        }
        if (bVar1 == 0xff) {
          uVar21 = (ulonglong)(((param_3 & 0x7fffffff) >> 0x14) - 0x3f4);
          in_XMM3 = ZEXT816(0x8000000000000000);
          lVar20 = CONCAT44(param_3,param_2) << uVar21;
          lVar25 = uVar27 << uVar21;
          auVar22._0_4_ = -(uint)((int)lVar20 == 0);
          auVar22._4_4_ = -(uint)((int)((ulonglong)lVar20 >> 0x20) == in_XMM3._4_4_);
          auVar22._8_4_ = -(uint)((int)lVar25 == 0);
          auVar22._12_4_ = -(uint)((int)((ulonglong)lVar25 >> 0x20) == 0);
          uVar7 = (ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7) + 0x3ff01 & 0x40000;
          if (0xf < uVar8) {
            uVar8 = 0xbfe7f;
            in_XMM3 = ZEXT816(0xfffffffffffff);
            in_XMM2_Qb = auVar22._8_8_;
            goto LAB_00597056;
          }
          goto LAB_00597474;
        }
        uVar21 = (ulonglong)param_1 >> 0x20;
        in_XMM2_Qb = uVar27 >> 0x20;
        uVar7 = 0;
        uVar8 = 0;
        if (uVar3 != 0 || ((ulonglong)param_1 & 0x7fffffff00000000) != 0) {
          _local_c = -NAN;
          uVar10 = 0x1c;
          goto LAB_005977ae;
        }
LAB_005974fa:
        dVar31 = dVar13;
        if ((uVar8 & 0x7fffffff) == 0) {
          if ((param_3 & 0x80000000) == 0) {
            if ((uVar8 & uVar7 << 0xd) == 0) {
              return (float10)0;
            }
LAB_005975f9:
            return (float10)-0.0;
          }
          _local_c = (double)((ulonglong)(uVar8 & uVar7 << 0xd | 0x7ff00000) << 0x20);
          uVar10 = 0x1b;
          goto LAB_005977ae;
        }
      }
      else {
        uVar7 = 0;
LAB_00597474:
        dVar34 = 2.225073858507201e-308;
        in_XMM2_Qb = auVar22._8_8_;
        uVar21 = 0x3ff0000000000000;
        dVar13 = param_1 * 1.8446744073709552e+19;
        uVar8 = uVar9;
        dVar31 = dVar13;
        if (uVar3 == 0) goto LAB_005974fa;
      }
      dVar13 = (double)((ulonglong)ABS(dVar31) >> 0x2c);
      uVar8 = (SUB82(dVar13,0) & 0xff) + 1 & 0x1fe;
      dVar34 = (double)((ulonglong)dVar34 & (ulonglong)dVar31 | uVar21) *
               *(double *)(&DAT_005e45e0 + uVar8 * 4);
      dVar30 = *(double *)(&DAT_005e45e0 + uVar8 * 4);
      dVar14 = *(double *)(&DAT_005e49f0 + uVar8 * 8);
      dVar32 = *(double *)(&UNK_005e49f8 + uVar8 * 8);
      uVar8 = 0x43e7f;
      goto LAB_00597056;
    }
    uVar7 = uVar9;
    if ((0x7fefffff < (uVar9 & 0x7fffffff)) && ((0x7ff00000 < (uVar9 & 0x7fffffff) || (uVar3 != 0)))
       ) {
LAB_0059763f:
      _local_c = param_1 + param_1;
      uVar10 = 0x3ee;
      goto LAB_005977ae;
    }
  }
  _local_c = auVar22._0_8_;
  uVar27 = in_XMM3._8_8_ & auVar22._8_8_;
  auVar18._0_4_ = -(uint)((int)((ulonglong)_local_c & 0xfffffffffffff) == 0);
  auVar18._4_4_ = -(uint)((int)(((ulonglong)_local_c & 0xfffffffffffff) >> 0x20) == 0);
  auVar18._8_4_ = -(uint)((int)uVar27 == 0);
  auVar18._12_4_ = -(uint)((int)(uVar27 >> 0x20) == 0);
  if ((byte)(SUB161(auVar18 >> 7,0) & 1 | (SUB161(auVar18 >> 0xf,0) & 1) << 1 |
             (SUB161(auVar18 >> 0x17,0) & 1) << 2 | (SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
             (SUB161(auVar18 >> 0x27,0) & 1) << 4 | (SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
             (SUB161(auVar18 >> 0x37,0) & 1) << 6 | SUB161(auVar18 >> 0x3f,0) << 7) == 0xff) {
    if (uVar3 != 0 || uVar7 != 0xbff00000) {
      if ((auVar22._6_2_ & 0x8000) == 0) {
        if ((uVar11 & 0x7ff0) < 0x3ff0) {
          return (float10)0;
        }
      }
      else if (0x3fef < (uVar11 & 0x7ff0)) {
        return (float10)0;
      }
LAB_0059773f:
      return (float10)INFINITY;
    }
LAB_005977ab:
    return (float10)1;
  }
  _local_c = _local_c + _local_c;
  uVar10 = 0x3ee;
LAB_005977ae:
  ___libm_error_support(&param_1,&param_2,local_c,uVar10);
  return (float10)_local_c;
}

