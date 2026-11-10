// rea decompile_all
// name: FUN_1019cb6b
// address: 0x1019cb6b
// body: available
// range: 0x1019cb6b-0x1019df06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1019df06 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1019cb6b(int param_1,uint param_2,int param_3,int *param_4,char *param_5,rsize_t param_6)

{
  byte bVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int *piVar6;
  char cVar7;
  __acrt_fp_class _Var8;
  rsize_t rVar9;
  uint uVar10;
  errno_t eVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  char *pcVar19;
  uint *puVar20;
  uint uVar21;
  __uint64 _Var22;
  ulonglong uVar23;
  char *_Src;
  uint local_964 [115];
  undefined1 local_798 [8];
  char local_790;
  int local_788;
  int *local_784;
  char *local_780;
  char *local_77c;
  uint local_778;
  uint *local_774;
  uint local_770;
  undefined8 local_76c;
  uint *local_764;
  uint *local_760;
  uint *local_75c;
  uint *local_758;
  uint *local_754;
  uint *local_750;
  undefined1 local_749;
  uint *local_748;
  uint local_744 [115];
  uint *local_578;
  uint local_574 [115];
  uint *local_3a8;
  uint local_3a4 [115];
  uint *local_1d8;
  uint local_1d4 [115];
  uint local_8;
  
  pcVar19 = param_5;
  piVar6 = param_4;
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_784 = param_4;
  local_780 = param_5;
  scoped_fp_state_reset();
  uVar12 = param_2;
  iVar13 = param_1;
  cVar7 = '-';
  if ((param_2 & 0x80000000) == 0) {
    cVar7 = ' ';
  }
  *piVar6 = (int)cVar7;
  piVar6[2] = (int)pcVar19;
  if (((param_2 & 0x7ff00000) == 0) && (param_1 == 0 && (param_2 & 0xfffff) == 0)) {
    _Src = "0";
    local_784[1] = 0;
  }
  else {
    _Var8 = __acrt_fp_classify((double *)&param_1);
    if (_Var8 != 0) {
      local_784[1] = 1;
    }
    if (_Var8 == 1) {
      _Src = "1#INF";
    }
    else if (_Var8 == 2) {
      _Src = "1#QNAN";
    }
    else if (_Var8 == 3) {
      _Src = "1#SNAN";
    }
    else {
      if (_Var8 != 4) {
        param_2 = uVar12 & 0x7fffffff;
        local_788 = 0;
        local_77c = (char *)(param_3 + 1);
        uVar23 = CONCAT44(uVar12,iVar13) & 0x7fffffffffffffff;
        local_76c._4_4_ = (uint)(uVar23 >> 0x20);
        uVar12 = local_76c._4_4_ >> 0x14;
        if (uVar12 != 0) {
          iVar15 = 0x100000;
        }
        else {
          iVar15 = 0;
        }
        local_76c._0_4_ = (uint)uVar23;
        uVar10 = (uint)local_76c;
        uVar21 = (local_76c._4_4_ & 0xfffff) + iVar15;
        puVar16 = (uint *)(uVar12 + ((uVar12 == 0) - 0x433));
        param_1 = iVar13;
        local_76c = uVar23;
        local_750 = puVar16;
        FUN_1019f4d0();
        FUN_10192330();
        local_770 = FUN_1017f8a0();
        if ((local_770 == 0x7fffffff) || (local_770 == 0x80000000)) {
          local_770 = 0;
        }
        local_1d4[0] = uVar10;
        local_1d4[1] = uVar21;
        uVar12 = (uint)(uVar21 != 0);
        puVar14 = (uint *)(uVar12 + 1);
        local_1d8 = puVar14;
        if ((int)puVar16 < 0) {
          if (puVar16 == (uint *)0xfffffc02) {
LAB_1019d20d:
            uVar12 = local_1d4[uVar12];
            local_76c = local_76c & 0xffffffff;
            iVar13 = 0x1f;
            if (uVar12 != 0) {
              for (; uVar12 >> iVar13 == 0; iVar13 = iVar13 + -1) {
              }
            }
            if (uVar12 == 0) {
              iVar13 = 0;
            }
            else {
              iVar13 = iVar13 + 1;
            }
            local_749 = iVar13 == 0x20;
            if ((puVar14 == (uint *)0x73) && ((bool)local_749)) {
              bVar5 = true;
            }
            else {
              bVar5 = false;
            }
            if (((uint *)0x73 < puVar14) || (bVar5)) {
              local_578 = (uint *)0x0;
              local_1d8 = (uint *)0x0;
              _memcpy_s(local_1d4,0x1cc,local_574,0);
            }
            else {
              puVar17 = (uint *)0x72;
              if (puVar14 < (uint *)0x72) {
                puVar17 = puVar14;
              }
              if (puVar17 != (uint *)0xffffffff) {
                puVar20 = local_1d4 + (int)puVar17;
                puVar18 = puVar17;
                local_758 = puVar20;
                do {
                  if (puVar18 < puVar14) {
                    local_754 = (uint *)*puVar20;
                  }
                  else {
                    local_754 = (uint *)0x0;
                  }
                  if ((uint *)((int)puVar18 + -1) < puVar14) {
                    uVar12 = puVar20[-1];
                  }
                  else {
                    uVar12 = 0;
                  }
                  puVar20 = puVar20 + -1;
                  puVar18 = (uint *)((int)puVar18 + -1);
                  *local_758 = uVar12 >> 0x1f ^ (int)local_754 * 2;
                  local_758 = local_758 + -1;
                  puVar14 = local_1d8;
                  puVar16 = local_750;
                } while (puVar18 != (uint *)0xffffffff);
              }
              local_1d8 = puVar17;
              if ((bool)local_749) {
                local_1d8 = (uint *)((int)puVar17 + 1);
              }
            }
            uVar12 = 1U - (int)puVar16 >> 5;
            _memset(local_574,0,uVar12 * 4);
            local_574[uVar12] = 1 << ((byte)(1U - (int)puVar16) & 0x1f);
          }
          else {
            local_574[0] = 0;
            puVar17 = (uint *)0x2;
            local_574[1] = 0x100000;
            local_578 = (uint *)0x2;
            if (puVar14 != (uint *)0x2) goto LAB_1019d20d;
            iVar13 = 0;
            do {
              if (*(int *)((int)local_574 + iVar13) != *(int *)((int)local_1d4 + iVar13))
              goto LAB_1019d20d;
              iVar13 = iVar13 + 4;
            } while (iVar13 != 8);
            local_76c = local_76c & 0xffffffff;
            iVar13 = 0x1f;
            if (uVar21 != 0) {
              for (; uVar21 >> iVar13 == 0; iVar13 = iVar13 + -1) {
              }
            }
            if (uVar21 == 0) {
              iVar13 = 0;
            }
            else {
              iVar13 = iVar13 + 1;
            }
            local_749 = 0x20U - iVar13 < 2;
            puVar16 = local_1d4 + 2;
            local_758 = puVar16;
            do {
              if (puVar17 < puVar14) {
                local_754 = (uint *)*puVar16;
              }
              else {
                local_754 = (uint *)0x0;
              }
              if ((uint *)((int)puVar17 + -1) < puVar14) {
                uVar12 = puVar16[-1];
              }
              else {
                uVar12 = 0;
              }
              puVar16 = puVar16 + -1;
              puVar17 = (uint *)((int)puVar17 + -1);
              *local_758 = uVar12 >> 0x1e ^ (int)local_754 << 2;
              local_758 = local_758 + -1;
              puVar14 = local_1d8;
            } while (puVar17 != (uint *)0xffffffff);
            local_1d8 = (uint *)((byte)local_749 + 2);
            local_75c = (uint *)(2 - (int)local_750);
            uVar12 = (uint)local_75c >> 5;
            _memset(local_574,0,uVar12 * 4);
            local_574[uVar12] = 1 << ((byte)local_75c & 0x1f);
          }
          local_578 = (uint *)(uVar12 + 1);
          local_3a8 = local_578;
          _memcpy_s(local_3a4,0x1cc,local_574,(int)local_578 * 4);
        }
        else {
          local_574[0] = 0;
          local_574[1] = 0x100000;
          local_578 = (uint *)0x2;
          if (puVar14 == (uint *)0x2) {
            iVar13 = 0;
            do {
              if (*(int *)((int)local_574 + iVar13) != *(int *)((int)local_1d4 + iVar13))
              goto LAB_1019cf1d;
              iVar13 = iVar13 + 4;
            } while (iVar13 != 8);
            local_760 = (uint *)((int)local_750 + 2U & 0x1f);
            local_774 = (uint *)(0x20 - (int)local_760);
            puVar16 = (uint *)((int)local_750 + 2U >> 5);
            local_754 = puVar16;
            iVar13 = __allshl();
            local_76c = local_76c & 0xffffffff;
            local_75c = (uint *)(iVar13 + -1);
            iVar13 = 0x1f;
            if (uVar21 != 0) {
              for (; uVar21 >> iVar13 == 0; iVar13 = iVar13 + -1) {
              }
            }
            local_778 = ~(uint)local_75c;
            if (uVar21 == 0) {
              iVar13 = 0;
            }
            else {
              iVar13 = iVar13 + 1;
            }
            local_758 = (uint *)((int)puVar16 + 2);
            local_749 = (uint *)(0x20 - iVar13) < local_760;
            if ((local_758 == (uint *)0x73) && ((bool)local_749)) {
              bVar5 = true;
            }
            else {
              bVar5 = false;
            }
            if ((0x73 < local_758) || (bVar5)) {
              local_578 = (uint *)0x0;
              local_1d8 = (uint *)0x0;
              _memcpy_s(local_1d4,0x1cc,local_574,0);
            }
            else {
              if (0x71 < local_758) {
                local_758 = (uint *)0x72;
              }
              local_764 = local_758;
              if (local_758 != (uint *)0xffffffff) {
                puVar17 = (uint *)((int)local_758 - (int)local_754);
                local_750 = local_1d4 + (int)puVar17;
                do {
                  puVar16 = local_754;
                  if (local_764 < local_754) break;
                  if (puVar17 < puVar14) {
                    uVar12 = *local_750;
                  }
                  else {
                    uVar12 = 0;
                  }
                  if ((uint *)((int)puVar17 + -1) < puVar14) {
                    uVar21 = local_750[-1];
                  }
                  else {
                    uVar21 = 0;
                  }
                  local_1d4[(int)local_764] =
                       (uVar21 & local_778) >> ((byte)local_774 & 0x1f) |
                       (uVar12 & (uint)local_75c) << ((byte)local_760 & 0x1f);
                  local_764 = (uint *)((int)local_764 + -1);
                  puVar17 = (uint *)((int)puVar17 + -1);
                  local_750 = local_750 + -1;
                  puVar14 = local_1d8;
                } while (local_764 != (uint *)0xffffffff);
              }
              if (puVar16 != (uint *)0x0) {
                puVar14 = local_1d4;
                for (; puVar16 != (uint *)0x0; puVar16 = (uint *)((int)puVar16 + -1)) {
                  *puVar14 = 0;
                  puVar14 = puVar14 + 1;
                }
              }
              local_1d8 = local_758;
              if ((bool)local_749) {
                local_1d8 = (uint *)((int)local_758 + 1);
              }
            }
            local_574[0] = 4;
          }
          else {
LAB_1019cf1d:
            local_754 = (uint *)((int)local_750 + 1U & 0x1f);
            local_774 = (uint *)(0x20 - (int)local_754);
            puVar16 = (uint *)((int)local_750 + 1U >> 5);
            local_750 = puVar16;
            iVar13 = __allshl();
            uVar12 = local_1d4[uVar12];
            local_75c = (uint *)(iVar13 + -1);
            local_76c = local_76c & 0xffffffff;
            iVar13 = 0x1f;
            if (uVar12 != 0) {
              for (; uVar12 >> iVar13 == 0; iVar13 = iVar13 + -1) {
              }
            }
            local_778 = ~(uint)local_75c;
            if (uVar12 == 0) {
              iVar13 = 0;
            }
            else {
              iVar13 = iVar13 + 1;
            }
            local_764 = (uint *)((int)puVar14 + (int)puVar16);
            local_749 = (uint *)(0x20 - iVar13) < local_754;
            if ((local_764 == (uint *)0x73) && ((bool)local_749)) {
              bVar5 = true;
            }
            else {
              bVar5 = false;
            }
            if (((uint *)0x73 < local_764) || (bVar5)) {
              local_578 = (uint *)0x0;
              local_1d8 = (uint *)0x0;
              _memcpy_s(local_1d4,0x1cc,local_574,0);
            }
            else {
              if ((uint *)0x71 < local_764) {
                local_764 = (uint *)0x72;
              }
              local_758 = local_764;
              if (local_764 != (uint *)0xffffffff) {
                puVar17 = (uint *)((int)local_764 - (int)local_750);
                local_760 = local_1d4 + (int)puVar17;
                do {
                  puVar16 = local_750;
                  if (local_758 < local_750) break;
                  if (puVar17 < puVar14) {
                    uVar12 = *local_760;
                  }
                  else {
                    uVar12 = 0;
                  }
                  if ((uint *)((int)puVar17 + -1) < puVar14) {
                    uVar21 = local_760[-1];
                  }
                  else {
                    uVar21 = 0;
                  }
                  local_760 = local_760 + -1;
                  local_1d4[(int)local_758] =
                       (uVar12 & (uint)local_75c) << ((byte)local_754 & 0x1f) |
                       (uVar21 & local_778) >> ((byte)local_774 & 0x1f);
                  local_758 = (uint *)((int)local_758 + -1);
                  puVar17 = (uint *)((int)puVar17 + -1);
                  puVar14 = local_1d8;
                } while (local_758 != (uint *)0xffffffff);
              }
              if (puVar16 != (uint *)0x0) {
                puVar14 = local_1d4;
                for (; puVar16 != (uint *)0x0; puVar16 = (uint *)((int)puVar16 + -1)) {
                  *puVar14 = 0;
                  puVar14 = puVar14 + 1;
                }
              }
              local_1d8 = local_764;
              if ((bool)local_749) {
                local_1d8 = (uint *)((int)local_764 + 1);
              }
            }
            local_574[0] = 2;
          }
          local_3a8 = (uint *)0x1;
          local_574[1] = 0;
          local_578 = (uint *)0x1;
          _memcpy_s(local_3a4,0x1cc,local_574,4);
        }
        local_778 = 10;
        if ((int)local_770 < 0) {
          local_75c = (uint *)(-local_770 % 10);
          for (local_758 = (uint *)(-local_770 / 10); local_758 != (uint *)0x0;
              local_758 = (uint *)((int)local_758 - (int)local_750)) {
            local_750 = local_758;
            if ((uint *)0x26 < local_758) {
              local_750 = (uint *)0x26;
            }
            uVar12 = (uint)(byte)(&DAT_101de0d6)[(int)local_750 * 4];
            bVar1 = (&DAT_101de0d7)[(int)local_750 * 4];
            local_578 = (uint *)(uVar12 + bVar1);
            _memset(local_574,0,uVar12 * 4);
            FUN_10181570(local_574 + uVar12,
                         &DAT_101dd7d0 + (uint)*(ushort *)(&DAT_101de0d4 + (int)local_750 * 4) * 4,
                         (uint)bVar1 << 2);
            uVar12 = local_1d4[0];
            local_764 = local_578;
            if (local_578 < (uint *)0x2) {
              if (local_574[0] == 0) {
LAB_1019d896:
                local_1d8 = (uint *)0x0;
                rVar9 = 0;
                puVar16 = local_964;
                goto LAB_1019db22;
              }
              if ((local_574[0] == 1) || (local_1d8 == (uint *)0x0)) goto LAB_1019db33;
              uVar21 = 0;
              local_76c = CONCAT44(local_1d8,(uint)local_76c);
              puVar16 = (uint *)0x0;
              do {
                lVar4 = (ulonglong)local_574[0] * (ulonglong)local_1d4[(int)puVar16] +
                        (ulonglong)uVar21;
                local_1d4[(int)puVar16] = (uint)lVar4;
                uVar21 = (uint)((ulonglong)lVar4 >> 0x20);
                puVar16 = (uint *)((int)puVar16 + 1);
              } while (puVar16 != local_1d8);
LAB_1019d8f6:
              if (uVar21 == 0) goto LAB_1019db33;
              if (local_1d8 < (uint *)0x73) {
                local_1d4[(int)local_1d8] = uVar21;
                local_1d8 = (uint *)((int)local_1d8 + 1);
                goto LAB_1019db33;
              }
LAB_1019dbd1:
              local_1d8 = (uint *)0x0;
              _memcpy_s(local_1d4,0x1cc,local_964,0);
              bVar5 = false;
            }
            else {
              if (local_1d8 < (uint *)0x2) {
                local_1d8 = local_578;
                _memcpy_s(local_1d4,0x1cc,local_574,(int)local_578 << 2);
                if (uVar12 != 0) {
                  if ((uVar12 != 1) && (local_1d8 != (uint *)0x0)) {
                    uVar21 = 0;
                    local_76c = CONCAT44(local_1d8,(uint)local_76c);
                    puVar16 = (uint *)0x0;
                    do {
                      lVar4 = (ulonglong)uVar12 * (ulonglong)local_1d4[(int)puVar16] +
                              (ulonglong)uVar21;
                      local_1d4[(int)puVar16] = (uint)lVar4;
                      uVar21 = (uint)((ulonglong)lVar4 >> 0x20);
                      puVar16 = (uint *)((int)puVar16 + 1);
                    } while (puVar16 != local_1d8);
                    goto LAB_1019d8f6;
                  }
                  goto LAB_1019db33;
                }
                goto LAB_1019d896;
              }
              puVar16 = local_574;
              if (local_578 < local_1d8) {
                local_774 = local_1d4;
                local_764 = local_1d8;
                local_754 = local_578;
              }
              else {
                puVar16 = local_1d4;
                local_774 = local_574;
                local_754 = local_1d8;
              }
              local_1d8 = (uint *)0x0;
              puVar14 = (uint *)0x0;
              local_748 = (uint *)0x0;
              if (local_754 != (uint *)0x0) {
                local_788 = (int)puVar16 - (int)local_744;
                do {
                  uVar12 = *(uint *)((int)local_744 + local_788 + (int)puVar14 * 4);
                  local_76c = CONCAT44(uVar12,(uint)local_76c);
                  if (uVar12 == 0) {
                    if (puVar14 == local_1d8) {
                      local_744[(int)puVar14] = 0;
                      local_1d8 = (uint *)((int)puVar14 + 1);
                      local_748 = local_1d8;
                    }
                  }
                  else {
                    uVar21 = 0;
                    local_760 = (uint *)0x0;
                    puVar16 = puVar14;
                    if (local_764 != (uint *)0x0) {
                      do {
                        if (puVar16 == (uint *)0x73) break;
                        if (puVar16 == local_1d8) {
                          local_744[(int)puVar16] = 0;
                          local_748 = (uint *)((int)local_760 + 1U + (int)puVar14);
                        }
                        lVar4 = (ulonglong)local_774[(int)local_760] * (ulonglong)uVar12 +
                                (ulonglong)uVar21;
                        uVar10 = (uint)lVar4;
                        puVar17 = local_744 + (int)puVar16;
                        uVar21 = *puVar17;
                        *puVar17 = *puVar17 + uVar10;
                        uVar21 = (int)((ulonglong)lVar4 >> 0x20) + (uint)CARRY4(uVar21,uVar10);
                        local_760 = (uint *)((int)local_760 + 1);
                        puVar16 = (uint *)((int)puVar16 + 1);
                        local_1d8 = local_748;
                      } while (local_760 != local_764);
                      do {
                        if (uVar21 == 0) break;
                        if (puVar16 == (uint *)0x73) goto LAB_1019dbd1;
                        if (puVar16 == local_1d8) {
                          local_744[(int)puVar16] = 0;
                          local_748 = (uint *)((int)puVar16 + 1);
                        }
                        puVar17 = local_744 + (int)puVar16;
                        uVar12 = *puVar17;
                        *puVar17 = *puVar17 + uVar21;
                        uVar21 = (uint)CARRY4(uVar12,uVar21);
                        puVar16 = (uint *)((int)puVar16 + 1);
                        local_1d8 = local_748;
                      } while( true );
                    }
                    if (puVar16 == (uint *)0x73) goto LAB_1019dbd1;
                  }
                  puVar14 = (uint *)((int)puVar14 + 1);
                } while (puVar14 != local_754);
              }
              rVar9 = (int)local_1d8 << 2;
              puVar16 = local_744;
LAB_1019db22:
              _memcpy_s(local_1d4,0x1cc,puVar16,rVar9);
LAB_1019db33:
              bVar5 = true;
            }
            if (!bVar5) goto LAB_1019dc1f;
          }
          if (local_75c != (uint *)0x0) {
            uVar12 = *(uint *)(&DAT_101de16c + (int)local_75c * 2);
            local_76c = CONCAT44(uVar12,(uint)local_76c);
            if (uVar12 == 0) {
LAB_1019dc1f:
              local_1d8 = (uint *)0x0;
              puVar16 = local_1d4;
              goto LAB_1019dc2c;
            }
            if ((uVar12 != 1) && (local_1d8 != (uint *)0x0)) {
              uVar21 = 0;
              puVar16 = (uint *)0x0;
              do {
                lVar4 = (ulonglong)uVar12 * (ulonglong)local_1d4[(int)puVar16] + (ulonglong)uVar21;
                local_1d4[(int)puVar16] = (uint)lVar4;
                uVar21 = (uint)((ulonglong)lVar4 >> 0x20);
                puVar16 = (uint *)((int)puVar16 + 1);
              } while (puVar16 != local_1d8);
              if (uVar21 != 0) {
                if ((uint *)0x72 < local_1d8) goto LAB_1019dc1f;
                local_1d4[(int)local_1d8] = uVar21;
                local_1d8 = (uint *)((int)local_1d8 + 1);
              }
            }
          }
        }
        else {
          local_774 = (uint *)(local_770 / 10);
          local_76c = CONCAT44(local_770 % 10,(uint)local_76c);
          uVar12 = local_770 % 10;
          if (local_774 != (uint *)0x0) {
            do {
              local_760 = local_774;
              if ((uint *)0x26 < local_774) {
                local_760 = (uint *)0x26;
              }
              uVar12 = (uint)(byte)(&DAT_101de0d6)[(int)local_760 * 4];
              bVar1 = (&DAT_101de0d7)[(int)local_760 * 4];
              local_578 = (uint *)(uVar12 + bVar1);
              _memset(local_574,0,uVar12 * 4);
              FUN_10181570(local_574 + uVar12,
                           &DAT_101dd7d0 + (uint)*(ushort *)(&DAT_101de0d4 + (int)local_760 * 4) * 4
                           ,(uint)bVar1 << 2);
              uVar12 = local_3a4[0];
              local_764 = local_578;
              if (local_578 < (uint *)0x2) {
                if (local_574[0] == 0) {
                  rVar9 = 0;
                  local_748 = (uint *)0x0;
                  local_3a8 = (uint *)0x0;
LAB_1019d6df:
                  puVar16 = local_744;
                  goto LAB_1019d6e6;
                }
                if ((local_574[0] == 1) || (local_3a8 == (uint *)0x0)) goto LAB_1019d6f7;
                uVar21 = 0;
                puVar16 = (uint *)0x0;
                do {
                  lVar4 = (ulonglong)local_574[0] * (ulonglong)local_3a4[(int)puVar16] +
                          (ulonglong)uVar21;
                  local_3a4[(int)puVar16] = (uint)lVar4;
                  uVar21 = (uint)((ulonglong)lVar4 >> 0x20);
                  puVar16 = (uint *)((int)puVar16 + 1);
                } while (puVar16 != local_3a8);
LAB_1019d537:
                local_75c = local_3a8;
                if (uVar21 == 0) goto LAB_1019d6f7;
                if (local_3a8 < (uint *)0x73) {
                  local_3a4[(int)local_3a8] = uVar21;
                  local_3a8 = (uint *)((int)local_3a8 + 1);
                  goto LAB_1019d6f7;
                }
                local_578 = (uint *)0x0;
                puVar16 = local_574;
LAB_1019d754:
                local_3a8 = (uint *)0x0;
                _memcpy_s(local_3a4,0x1cc,puVar16,0);
                bVar5 = false;
              }
              else {
                if ((uint *)0x1 < local_3a8) {
                  puVar16 = local_574;
                  if (local_578 < local_3a8) {
                    local_754 = local_3a4;
                    local_764 = local_3a8;
                    local_758 = local_578;
                  }
                  else {
                    puVar16 = local_3a4;
                    local_754 = local_574;
                    local_758 = local_3a8;
                  }
                  local_3a8 = (uint *)0x0;
                  puVar14 = (uint *)0x0;
                  local_748 = (uint *)0x0;
                  if (local_758 != (uint *)0x0) {
                    local_788 = (int)puVar16 - (int)local_744;
                    do {
                      local_75c = *(uint **)((int)local_744 + local_788 + (int)puVar14 * 4);
                      if (local_75c == (uint *)0x0) {
                        if (puVar14 == local_3a8) {
                          local_744[(int)puVar14] = 0;
                          local_3a8 = (uint *)((int)puVar14 + 1);
                          local_748 = local_3a8;
                        }
                      }
                      else {
                        uVar12 = 0;
                        local_750 = (uint *)0x0;
                        puVar16 = puVar14;
                        if (local_764 != (uint *)0x0) {
                          do {
                            if (puVar16 == (uint *)0x73) break;
                            if (puVar16 == local_3a8) {
                              local_744[(int)puVar16] = 0;
                              local_748 = (uint *)((int)local_750 + 1U + (int)puVar14);
                            }
                            lVar4 = (ulonglong)local_754[(int)local_750] * ZEXT48(local_75c) +
                                    (ulonglong)uVar12;
                            uVar21 = (uint)lVar4;
                            puVar17 = local_744 + (int)puVar16;
                            uVar12 = *puVar17;
                            *puVar17 = *puVar17 + uVar21;
                            uVar12 = (int)((ulonglong)lVar4 >> 0x20) + (uint)CARRY4(uVar12,uVar21);
                            local_750 = (uint *)((int)local_750 + 1);
                            puVar16 = (uint *)((int)puVar16 + 1);
                            local_3a8 = local_748;
                          } while (local_750 != local_764);
                          do {
                            if (uVar12 == 0) break;
                            if (puVar16 == (uint *)0x73) goto LAB_1019d73f;
                            if (puVar16 == local_3a8) {
                              local_744[(int)puVar16] = 0;
                              local_748 = (uint *)((int)puVar16 + 1);
                            }
                            puVar17 = local_744 + (int)puVar16;
                            uVar21 = *puVar17;
                            *puVar17 = *puVar17 + uVar12;
                            uVar12 = (uint)CARRY4(uVar21,uVar12);
                            puVar16 = (uint *)((int)puVar16 + 1);
                            local_3a8 = local_748;
                          } while( true );
                        }
                        if (puVar16 == (uint *)0x73) {
LAB_1019d73f:
                          puVar16 = local_964;
                          goto LAB_1019d754;
                        }
                      }
                      puVar14 = (uint *)((int)puVar14 + 1);
                    } while (puVar14 != local_758);
                  }
                  rVar9 = (int)local_3a8 << 2;
                  goto LAB_1019d6df;
                }
                local_3a8 = local_578;
                _memcpy_s(local_3a4,0x1cc,local_574,(int)local_578 << 2);
                if (uVar12 != 0) {
                  if ((uVar12 != 1) && (local_3a8 != (uint *)0x0)) {
                    uVar21 = 0;
                    puVar16 = (uint *)0x0;
                    do {
                      lVar4 = (ulonglong)uVar12 * (ulonglong)local_3a4[(int)puVar16] +
                              (ulonglong)uVar21;
                      local_3a4[(int)puVar16] = (uint)lVar4;
                      uVar21 = (uint)((ulonglong)lVar4 >> 0x20);
                      puVar16 = (uint *)((int)puVar16 + 1);
                    } while (puVar16 != local_3a8);
                    goto LAB_1019d537;
                  }
                  goto LAB_1019d6f7;
                }
                local_578 = (uint *)0x0;
                local_3a8 = (uint *)0x0;
                rVar9 = 0;
                puVar16 = local_574;
LAB_1019d6e6:
                _memcpy_s(local_3a4,0x1cc,puVar16,rVar9);
LAB_1019d6f7:
                bVar5 = true;
              }
              if (!bVar5) goto LAB_1019d779;
              local_774 = (uint *)((int)local_774 - (int)local_760);
            } while (local_774 != (uint *)0x0);
            uVar12 = local_76c._4_4_;
          }
          if (uVar12 != 0) {
            uVar12 = *(uint *)(&DAT_101de16c + uVar12 * 2);
            if (uVar12 == 0) {
LAB_1019d779:
              local_3a8 = (uint *)0x0;
              puVar16 = local_3a4;
LAB_1019dc2c:
              _memcpy_s(puVar16,0x1cc,local_964,0);
            }
            else if (uVar12 != 1) {
              local_76c = CONCAT44(local_3a8,(uint)local_76c);
              if (local_3a8 != (uint *)0x0) {
                uVar21 = 0;
                puVar16 = (uint *)0x0;
                do {
                  lVar4 = (ulonglong)uVar12 * (ulonglong)local_3a4[(int)puVar16] + (ulonglong)uVar21
                  ;
                  local_3a4[(int)puVar16] = (uint)lVar4;
                  uVar21 = (uint)((ulonglong)lVar4 >> 0x20);
                  puVar16 = (uint *)((int)puVar16 + 1);
                } while (puVar16 != local_3a8);
                if (uVar21 != 0) {
                  if ((uint *)0x72 < local_3a8) goto LAB_1019d779;
                  local_3a4[(int)local_3a8] = uVar21;
                  local_3a8 = (uint *)((int)local_3a8 + 1);
                }
              }
            }
          }
        }
        pcVar19 = local_780;
        local_750 = (uint *)local_780;
        if (local_1d8 != (uint *)0x0) {
          uVar12 = 0;
          puVar16 = (uint *)0x0;
          do {
            lVar4 = (ulonglong)local_1d4[(int)puVar16] * 10 + (ulonglong)uVar12;
            local_1d4[(int)puVar16] = (uint)lVar4;
            uVar12 = (uint)((ulonglong)lVar4 >> 0x20);
            puVar16 = (uint *)((int)puVar16 + 1);
          } while (puVar16 != local_1d8);
          local_76c = CONCAT44(uVar12,(uint)local_76c);
          if (uVar12 != 0) {
            if (local_1d8 < (uint *)0x73) {
              local_1d4[(int)local_1d8] = uVar12;
              local_1d8 = (uint *)((int)local_1d8 + 1);
            }
            else {
              local_1d8 = (uint *)0x0;
              _memcpy_s(local_1d4,0x1cc,local_964,0);
            }
          }
        }
        _Var22 = __crt_strtox::divide((big_integer *)&local_1d8,(big_integer *)&local_3a8);
        if ((int)_Var22 == 10) {
          local_770 = local_770 + 1;
          local_750 = (uint *)(pcVar19 + 1);
          *pcVar19 = '1';
          if (local_3a8 != (uint *)0x0) {
            uVar12 = 0;
            puVar16 = (uint *)0x0;
            do {
              lVar4 = (ulonglong)local_3a4[(int)puVar16] * 10 + (ulonglong)uVar12;
              local_3a4[(int)puVar16] = (uint)lVar4;
              uVar12 = (uint)((ulonglong)lVar4 >> 0x20);
              puVar16 = (uint *)((int)puVar16 + 1);
            } while (puVar16 != local_3a8);
            if (uVar12 != 0) {
              if (local_3a8 < (uint *)0x73) {
                local_3a4[(int)local_3a8] = uVar12;
                local_3a8 = (uint *)((int)local_3a8 + 1);
              }
              else {
                local_3a8 = (uint *)0x0;
                _memcpy_s(local_3a4,0x1cc,local_964,0);
              }
            }
          }
LAB_1019dd90:
          pcVar19 = pcVar19 + 1;
          uVar12 = local_770;
        }
        else {
          if ((int)_Var22 != 0) {
            local_750 = (uint *)(pcVar19 + 1);
            *pcVar19 = (char)_Var22 + '0';
            goto LAB_1019dd90;
          }
          uVar12 = local_770 - 1;
        }
        local_784[1] = uVar12;
        if ((-1 < (int)uVar12) && (local_77c < 0x80000000)) {
          local_77c = (char *)((int)local_77c + uVar12);
        }
        uVar12 = param_6 - 1;
        if (local_77c <= param_6 - 1) {
          uVar12 = (uint)local_77c;
        }
        local_77c = local_780 + uVar12;
        if (pcVar19 != local_77c) {
          do {
            puVar16 = local_750;
            if (local_1d8 == (uint *)0x0) break;
            uVar12 = 0;
            puVar14 = (uint *)0x0;
            do {
              lVar4 = (ulonglong)local_1d4[(int)puVar14] * 1000000000 + (ulonglong)uVar12;
              local_1d4[(int)puVar14] = (uint)lVar4;
              uVar12 = (uint)((ulonglong)lVar4 >> 0x20);
              puVar14 = (uint *)((int)puVar14 + 1);
            } while (puVar14 != local_1d8);
            if (uVar12 != 0) {
              if (local_1d8 < (uint *)0x73) {
                local_1d4[(int)local_1d8] = uVar12;
                local_1d8 = (uint *)((int)local_1d8 + 1);
              }
              else {
                local_1d8 = (uint *)0x0;
                _memcpy_s(local_1d4,0x1cc,local_964,0);
              }
            }
            uVar23 = __crt_strtox::divide((big_integer *)&local_1d8,(big_integer *)&local_3a8);
            uVar21 = 8;
            uVar12 = (int)local_77c - (int)puVar16;
            do {
              uVar2 = uVar23 & 0xffffffff;
              uVar23 = uVar2 / local_778;
              if (uVar21 <= uVar12) {
                *(char *)((int)puVar16 + uVar21) = (char)(uVar2 % (ulonglong)local_778) + '0';
              }
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0xffffffff);
            if (9 < uVar12) {
              uVar12 = 9;
            }
            pcVar19 = (char *)((int)puVar16 + uVar12);
            local_750 = (uint *)pcVar19;
          } while (pcVar19 != local_77c);
        }
        *pcVar19 = '\0';
        goto LAB_1019ded3;
      }
      _Src = "1#IND";
    }
  }
  eVar11 = _strcpy_s(pcVar19,param_6,_Src);
  if (eVar11 != 0) {
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1019ded3:
  if (local_790 != '\0') {
    fesetenv(local_798);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

