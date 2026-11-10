// rea decompile_all
// name: __crt_strtox::convert_decimal_string_to_floating_type_common
// address: 0x10156e85
// body: available
// range: 0x10156e85-0x10158c47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    enum SLD_STATUS __cdecl __crt_strtox::convert_decimal_string_to_floating_type_common(struct
   __crt_strtox::floating_point_string const &,class __crt_strtox::floating_point_value const &)
   
   Library: Visual Studio 2015 Release */

SLD_STATUS __cdecl
__crt_strtox::convert_decimal_string_to_floating_type_common
          (floating_point_string *param_1,floating_point_value *param_2)

{
  floating_point_string *pfVar1;
  byte bVar2;
  floating_point_string fVar3;
  floating_point_string **ppfVar4;
  int iVar5;
  SLD_STATUS SVar6;
  uint uVar7;
  floating_point_string *pfVar8;
  floating_point_string *pfVar9;
  floating_point_string *pfVar10;
  uint uVar11;
  uint uVar12;
  floating_point_string *pfVar13;
  floating_point_string *pfVar14;
  bool bVar15;
  __uint64 _Var16;
  longlong lVar17;
  rsize_t rVar18;
  undefined1 local_b2c [460];
  uint local_960;
  floating_point_value *local_95c;
  floating_point_string *local_958;
  floating_point_string *local_954;
  uint local_950;
  uint local_94c;
  floating_point_string *local_948;
  undefined1 local_941;
  floating_point_string *local_940;
  floating_point_string *local_93c;
  floating_point_string *local_938;
  floating_point_string *local_934;
  floating_point_string *local_930;
  floating_point_string *local_92c;
  floating_point_string *local_928;
  floating_point_string *local_924;
  floating_point_string *local_920;
  floating_point_string *local_91c;
  floating_point_string *local_918;
  floating_point_string *local_914 [115];
  floating_point_string *local_748;
  floating_point_string *local_744 [115];
  floating_point_string *local_578;
  floating_point_string *local_574 [115];
  floating_point_string *local_3a8;
  floating_point_string *local_3a4 [115];
  floating_point_string *local_1d8;
  floating_point_string *local_1d4 [115];
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_954 = param_1;
  local_95c = param_2;
  uVar12 = *(uint *)param_1;
  local_958 = (floating_point_string *)
              (((param_2[4] == (floating_point_value)0x0) - 1 & 0x1d) + 0x19);
  if ((int)uVar12 < 0) {
    uVar12 = 0;
  }
  uVar11 = *(uint *)(param_1 + 4);
  uVar7 = uVar12;
  if (uVar11 <= uVar12) {
    uVar7 = uVar11;
  }
  local_940 = param_1 + uVar11 + 8;
  pfVar9 = param_1 + uVar7 + 8;
  local_938 = (floating_point_string *)(uVar12 - uVar7);
  local_924 = local_940 + -(int)pfVar9;
  pfVar13 = param_1 + 8;
  local_91c = (floating_point_string *)0x0;
  uVar12 = 0;
  local_1d8 = (floating_point_string *)0x0;
  local_920 = (floating_point_string *)0x0;
  local_930 = pfVar9;
  local_928 = pfVar13;
  if (pfVar13 != pfVar9) {
    do {
      if (uVar12 == 9) {
        local_928 = pfVar13;
        pfVar9 = local_91c;
        if (local_91c != (floating_point_string *)0x0) {
          pfVar8 = (floating_point_string *)0x0;
          pfVar9 = (floating_point_string *)0x0;
          do {
            lVar17 = ZEXT48(local_1d4[(int)pfVar9]) * 1000000000 + ZEXT48(pfVar8);
            local_1d4[(int)pfVar9] = (floating_point_string *)lVar17;
            pfVar8 = (floating_point_string *)((ulonglong)lVar17 >> 0x20);
            pfVar9 = pfVar9 + 1;
          } while (pfVar9 != local_91c);
          pfVar9 = local_1d8;
          if (pfVar8 != (floating_point_string *)0x0) {
            if (local_1d8 < (floating_point_string *)0x73) {
              local_1d4[(int)local_1d8] = pfVar8;
              local_1d8 = local_1d8 + 1;
              pfVar9 = local_1d8;
            }
            else {
              local_748 = (floating_point_string *)0x0;
              local_1d8 = (floating_point_string *)0x0;
              _memcpy_s(local_1d4,0x1cc,local_744,0);
              pfVar9 = local_1d8;
            }
          }
        }
        local_91c = pfVar9;
        if (local_920 != (floating_point_string *)0x0) {
          pfVar8 = (floating_point_string *)0x0;
          pfVar9 = local_920;
          if (local_91c != (floating_point_string *)0x0) {
            do {
              ppfVar4 = local_1d4 + (int)pfVar8;
              pfVar14 = *ppfVar4;
              *ppfVar4 = pfVar9 + (int)*ppfVar4;
              pfVar9 = (floating_point_string *)(uint)CARRY4((uint)pfVar14,(uint)pfVar9);
              pfVar8 = pfVar8 + 1;
              local_91c = local_1d8;
            } while (pfVar8 != local_1d8);
          }
          if (pfVar9 != (floating_point_string *)0x0) {
            if (local_91c < (floating_point_string *)0x73) {
              local_1d4[(int)local_91c] = pfVar9;
              local_91c = local_1d8 + 1;
              local_1d8 = local_91c;
            }
            else {
              local_748 = (floating_point_string *)0x0;
              local_1d8 = (floating_point_string *)0x0;
              _memcpy_s(local_1d4,0x1cc,local_744,0);
              local_91c = local_1d8;
            }
          }
        }
        local_920 = (floating_point_string *)0x0;
        uVar12 = 0;
        pfVar9 = local_930;
      }
      local_920 = (floating_point_string *)((int)local_920 * 10 + (uint)(byte)*pfVar13);
      uVar12 = uVar12 + 1;
      pfVar13 = pfVar13 + 1;
    } while (pfVar13 != pfVar9);
    local_928 = pfVar13;
    if (uVar12 != 0) {
      local_94c = uVar12 % 10;
      pfVar9 = local_91c;
      for (local_93c = (floating_point_string *)(uVar12 / 10);
          local_93c != (floating_point_string *)0x0; local_93c = local_93c + -(int)local_934) {
        local_934 = local_93c;
        if ((floating_point_string *)0x26 < local_93c) {
          local_934 = (floating_point_string *)0x26;
        }
        uVar12 = (uint)(byte)(&DAT_101acd76)[(int)local_934 * 4];
        bVar2 = (&DAT_101acd77)[(int)local_934 * 4];
        local_748 = (floating_point_string *)(uVar12 + bVar2);
        _memset(local_744,0,uVar12 * 4);
        FUN_1014c320(local_744 + uVar12,
                     &DAT_101ac470 + (uint)*(ushort *)(&DAT_101acd74 + (int)local_934 * 4) * 4,
                     (uint)bVar2 << 2);
        pfVar13 = local_1d4[0];
        if (local_748 < (floating_point_string *)0x2) {
          if (local_744[0] == (floating_point_string *)0x0) {
            local_918 = (floating_point_string *)0x0;
            local_1d8 = (floating_point_string *)0x0;
            rVar18 = 0;
            ppfVar4 = local_914;
            goto LAB_101573fa;
          }
          if ((local_744[0] == (floating_point_string *)0x1) ||
             (pfVar9 == (floating_point_string *)0x0)) {
            bVar15 = true;
          }
          else {
            pfVar8 = (floating_point_string *)0x0;
            pfVar13 = (floating_point_string *)0x0;
            do {
              lVar17 = ZEXT48(local_744[0]) * ZEXT48(local_1d4[(int)pfVar13]) + ZEXT48(pfVar8);
              local_1d4[(int)pfVar13] = (floating_point_string *)lVar17;
              pfVar8 = (floating_point_string *)((ulonglong)lVar17 >> 0x20);
              pfVar13 = pfVar13 + 1;
            } while (pfVar13 != pfVar9);
LAB_10157186:
            if (pfVar8 != (floating_point_string *)0x0) {
              if ((floating_point_string *)0x72 < local_1d8) {
                ppfVar4 = local_744;
                local_748 = (floating_point_string *)0x0;
LAB_101571b9:
                local_1d8 = (floating_point_string *)0x0;
                _memcpy_s(local_1d4,0x1cc,ppfVar4,0);
                bVar15 = false;
                pfVar9 = local_1d8;
                local_91c = local_1d8;
                goto LAB_10157417;
              }
              local_1d4[(int)local_1d8] = pfVar8;
              local_1d8 = local_1d8 + 1;
            }
            bVar15 = true;
            pfVar9 = local_1d8;
            local_91c = local_1d8;
          }
        }
        else {
          if (pfVar9 < (floating_point_string *)0x2) {
            local_1d8 = local_748;
            _memcpy_s(local_1d4,0x1cc,local_744,(int)local_748 << 2);
            if (pfVar13 != (floating_point_string *)0x0) {
              bVar15 = true;
              local_91c = local_1d8;
              pfVar9 = local_1d8;
              if ((pfVar13 != (floating_point_string *)0x1) &&
                 (local_1d8 != (floating_point_string *)0x0)) {
                pfVar8 = (floating_point_string *)0x0;
                pfVar9 = (floating_point_string *)0x0;
                do {
                  lVar17 = ZEXT48(pfVar13) * ZEXT48(local_1d4[(int)pfVar9]) + ZEXT48(pfVar8);
                  local_1d4[(int)pfVar9] = (floating_point_string *)lVar17;
                  pfVar8 = (floating_point_string *)((ulonglong)lVar17 >> 0x20);
                  pfVar9 = pfVar9 + 1;
                } while (pfVar9 != local_1d8);
                goto LAB_10157186;
              }
              goto LAB_10157417;
            }
            rVar18 = 0;
            local_748 = (floating_point_string *)0x0;
            local_1d8 = (floating_point_string *)0x0;
            ppfVar4 = local_744;
          }
          else {
            ppfVar4 = local_744;
            if (local_748 < pfVar9) {
              local_928 = (floating_point_string *)local_1d4;
              pfVar13 = pfVar9;
              pfVar9 = local_748;
            }
            else {
              ppfVar4 = local_1d4;
              local_928 = (floating_point_string *)local_744;
              pfVar13 = local_748;
            }
            local_1d8 = (floating_point_string *)0x0;
            pfVar8 = (floating_point_string *)0x0;
            local_3a8 = (floating_point_string *)0x0;
            if (pfVar9 != (floating_point_string *)0x0) {
              local_950 = (int)ppfVar4 - (int)local_3a4;
              do {
                local_960 = *(uint *)((int)local_3a4 + local_950 + (int)pfVar8 * 4);
                if (local_960 == 0) {
                  if (pfVar8 == local_1d8) {
                    local_3a4[(int)pfVar8] = (floating_point_string *)0x0;
                    local_1d8 = pfVar8 + 1;
                    local_3a8 = local_1d8;
                  }
                }
                else {
                  local_92c = (floating_point_string *)0x0;
                  local_948 = (floating_point_string *)0x0;
                  pfVar14 = pfVar8;
                  if (pfVar13 != (floating_point_string *)0x0) {
                    do {
                      pfVar10 = local_92c;
                      if (pfVar14 == (floating_point_string *)0x73) break;
                      if (pfVar14 == local_1d8) {
                        local_3a4[(int)pfVar14] = (floating_point_string *)0x0;
                        local_3a8 = local_948 + 1 + (int)pfVar8;
                      }
                      uVar12 = *(uint *)(local_928 + (int)local_948 * 4);
                      uVar11 = (uint)((ulonglong)uVar12 * (ulonglong)local_960);
                      ppfVar4 = local_3a4 + (int)pfVar14;
                      pfVar10 = *ppfVar4;
                      *ppfVar4 = local_92c + uVar11 + (int)*ppfVar4;
                      pfVar10 = (floating_point_string *)
                                ((int)((ulonglong)uVar12 * (ulonglong)local_960 >> 0x20) +
                                 (uint)CARRY4(uVar11,(uint)local_92c) +
                                (uint)CARRY4((uint)pfVar10,(uint)(local_92c + uVar11)));
                      local_948 = local_948 + 1;
                      pfVar14 = pfVar14 + 1;
                      local_1d8 = local_3a8;
                      local_92c = pfVar10;
                    } while (local_948 != pfVar13);
                    do {
                      if (pfVar10 == (floating_point_string *)0x0) break;
                      if (pfVar14 == (floating_point_string *)0x73) goto LAB_10157485;
                      if (pfVar14 == local_1d8) {
                        local_3a4[(int)pfVar14] = (floating_point_string *)0x0;
                        local_3a8 = pfVar14 + 1;
                      }
                      ppfVar4 = local_3a4 + (int)pfVar14;
                      pfVar1 = *ppfVar4;
                      *ppfVar4 = pfVar10 + (int)*ppfVar4;
                      pfVar10 = (floating_point_string *)(uint)CARRY4((uint)pfVar1,(uint)pfVar10);
                      pfVar14 = pfVar14 + 1;
                      local_1d8 = local_3a8;
                    } while( true );
                  }
                  if (pfVar14 == (floating_point_string *)0x73) {
LAB_10157485:
                    ppfVar4 = local_914;
                    local_918 = (floating_point_string *)0x0;
                    local_91c = pfVar9;
                    goto LAB_101571b9;
                  }
                }
                pfVar8 = pfVar8 + 1;
              } while (pfVar8 != pfVar9);
            }
            rVar18 = (int)local_1d8 << 2;
            ppfVar4 = local_3a4;
            local_91c = pfVar9;
          }
LAB_101573fa:
          _memcpy_s(local_1d4,0x1cc,ppfVar4,rVar18);
          bVar15 = true;
          pfVar9 = local_1d8;
          local_91c = local_1d8;
        }
LAB_10157417:
        if (!bVar15) goto LAB_1015744c;
      }
      if (local_94c != 0) {
        uVar12 = *(uint *)(&DAT_101ace0c + local_94c * 2);
        if (uVar12 == 0) {
LAB_1015744c:
          local_748 = (floating_point_string *)0x0;
          local_1d8 = (floating_point_string *)0x0;
          _memcpy_s(local_1d4,0x1cc,local_744,0);
LAB_1015747d:
          local_91c = local_1d8;
        }
        else if ((uVar12 != 1) && (local_91c != (floating_point_string *)0x0)) {
          pfVar9 = (floating_point_string *)0x0;
          pfVar13 = (floating_point_string *)0x0;
          do {
            lVar17 = (ulonglong)uVar12 * ZEXT48(local_1d4[(int)pfVar13]) + ZEXT48(pfVar9);
            local_1d4[(int)pfVar13] = (floating_point_string *)lVar17;
            pfVar9 = (floating_point_string *)((ulonglong)lVar17 >> 0x20);
            pfVar13 = pfVar13 + 1;
          } while (pfVar13 != local_91c);
          if (pfVar9 == (floating_point_string *)0x0) goto LAB_1015747d;
          if ((floating_point_string *)0x72 < local_1d8) goto LAB_1015744c;
          local_1d4[(int)local_1d8] = pfVar9;
          local_91c = local_1d8 + 1;
          local_1d8 = local_91c;
        }
      }
      if (local_920 != (floating_point_string *)0x0) {
        pfVar13 = (floating_point_string *)0x0;
        pfVar9 = local_920;
        if (local_91c != (floating_point_string *)0x0) {
          do {
            ppfVar4 = local_1d4 + (int)pfVar13;
            pfVar8 = *ppfVar4;
            *ppfVar4 = pfVar9 + (int)*ppfVar4;
            pfVar9 = (floating_point_string *)(uint)CARRY4((uint)pfVar8,(uint)pfVar9);
            local_91c = local_1d8;
            pfVar13 = pfVar13 + 1;
          } while (pfVar13 != local_1d8);
        }
        if (pfVar9 != (floating_point_string *)0x0) {
          if (local_91c < (floating_point_string *)0x73) {
            local_1d4[(int)local_91c] = pfVar9;
            local_91c = local_1d8 + 1;
            local_1d8 = local_91c;
          }
          else {
            local_748 = (floating_point_string *)0x0;
            local_1d8 = (floating_point_string *)0x0;
            _memcpy_s(local_1d4,0x1cc,local_744,0);
            local_91c = local_1d8;
          }
        }
      }
    }
  }
  if (local_938 == (floating_point_string *)0x0) {
LAB_101579b5:
    if (local_91c == (floating_point_string *)0x0) goto LAB_101579bd;
    pfVar9 = local_1d4[(int)(local_91c + -1)];
    local_938 = (floating_point_string *)0x0;
    iVar5 = 0x1f;
    if (pfVar9 != (floating_point_string *)0x0) {
      for (; (uint)pfVar9 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (pfVar9 == (floating_point_string *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar5 + 1;
    }
    local_948 = (floating_point_string *)((int)(local_91c + -1) * 0x20 + iVar5);
  }
  else {
    local_94c = (uint)local_938 % 10;
    pfVar9 = local_91c;
    for (local_92c = (floating_point_string *)((uint)local_938 / 10); local_91c = pfVar9,
        local_92c != (floating_point_string *)0x0; local_92c = local_92c + -(int)local_948) {
      local_948 = local_92c;
      if ((floating_point_string *)0x26 < local_92c) {
        local_948 = (floating_point_string *)0x26;
      }
      uVar12 = (uint)(byte)(&DAT_101acd76)[(int)local_948 * 4];
      bVar2 = (&DAT_101acd77)[(int)local_948 * 4];
      local_748 = (floating_point_string *)(uVar12 + bVar2);
      _memset(local_744,0,uVar12 * 4);
      FUN_1014c320(local_744 + uVar12,
                   &DAT_101ac470 + (uint)*(ushort *)(&DAT_101acd74 + (int)local_948 * 4) * 4,
                   (uint)bVar2 << 2);
      pfVar13 = local_1d4[0];
      if (local_748 < (floating_point_string *)0x2) {
        if (local_744[0] == (floating_point_string *)0x0) {
          local_918 = (floating_point_string *)0x0;
          ppfVar4 = local_914;
LAB_1015765d:
          local_1d8 = (floating_point_string *)0x0;
          _memcpy_s(local_1d4,0x1cc,ppfVar4,0);
        }
        else {
          if ((local_744[0] == (floating_point_string *)0x1) ||
             (pfVar9 == (floating_point_string *)0x0)) {
            bVar15 = true;
            goto LAB_10157946;
          }
          pfVar8 = (floating_point_string *)0x0;
          pfVar13 = (floating_point_string *)0x0;
          do {
            lVar17 = ZEXT48(local_744[0]) * ZEXT48(local_1d4[(int)pfVar13]) + ZEXT48(pfVar8);
            local_1d4[(int)pfVar13] = (floating_point_string *)lVar17;
            pfVar8 = (floating_point_string *)((ulonglong)lVar17 >> 0x20);
            pfVar13 = pfVar13 + 1;
          } while (pfVar13 != pfVar9);
LAB_1015775d:
          if (pfVar8 != (floating_point_string *)0x0) {
            if ((floating_point_string *)0x72 < local_1d8) {
              local_748 = (floating_point_string *)0x0;
              local_1d8 = (floating_point_string *)0x0;
              _memcpy_s(local_1d4,0x1cc,local_744,0);
              bVar15 = false;
              local_91c = local_1d8;
              goto LAB_10157946;
            }
            local_1d4[(int)local_1d8] = pfVar8;
            local_1d8 = local_1d8 + 1;
          }
        }
        bVar15 = true;
        local_91c = local_1d8;
      }
      else if (pfVar9 < (floating_point_string *)0x2) {
        local_1d8 = local_748;
        _memcpy_s(local_1d4,0x1cc,local_744,(int)local_748 << 2);
        if (pfVar13 == (floating_point_string *)0x0) {
          local_748 = (floating_point_string *)0x0;
          ppfVar4 = local_744;
          goto LAB_1015765d;
        }
        bVar15 = true;
        local_91c = local_1d8;
        if ((pfVar13 != (floating_point_string *)0x1) && (local_1d8 != (floating_point_string *)0x0)
           ) {
          pfVar8 = (floating_point_string *)0x0;
          pfVar9 = (floating_point_string *)0x0;
          do {
            lVar17 = ZEXT48(pfVar13) * ZEXT48(local_1d4[(int)pfVar9]) + ZEXT48(pfVar8);
            local_1d4[(int)pfVar9] = (floating_point_string *)lVar17;
            pfVar8 = (floating_point_string *)((ulonglong)lVar17 >> 0x20);
            pfVar9 = pfVar9 + 1;
          } while (pfVar9 != local_1d8);
          goto LAB_1015775d;
        }
      }
      else {
        local_920 = (floating_point_string *)local_744;
        local_93c = (floating_point_string *)local_1d4;
        pfVar13 = pfVar9;
        local_928 = local_748;
        if (pfVar9 <= local_748) {
          local_920 = (floating_point_string *)local_1d4;
          local_93c = (floating_point_string *)local_744;
          pfVar13 = local_748;
          local_928 = pfVar9;
        }
        local_1d8 = (floating_point_string *)0x0;
        pfVar9 = (floating_point_string *)0x0;
        local_3a8 = (floating_point_string *)0x0;
        if (local_928 != (floating_point_string *)0x0) {
          local_920 = local_920 + -(int)local_3a4;
          do {
            local_938 = *(floating_point_string **)
                         ((int)local_3a4 + (int)(local_920 + (int)pfVar9 * 4));
            if (local_938 == (floating_point_string *)0x0) {
              if (pfVar9 == local_1d8) {
                local_3a4[(int)pfVar9] = (floating_point_string *)0x0;
                local_1d8 = pfVar9 + 1;
                local_3a8 = local_1d8;
              }
            }
            else {
              uVar12 = 0;
              local_934 = (floating_point_string *)0x0;
              pfVar8 = pfVar9;
              if (pfVar13 != (floating_point_string *)0x0) {
                do {
                  if (pfVar8 == (floating_point_string *)0x73) break;
                  if (pfVar8 == local_1d8) {
                    local_3a4[(int)pfVar8] = (floating_point_string *)0x0;
                    local_3a8 = local_934 + 1 + (int)pfVar9;
                  }
                  lVar17 = (ulonglong)*(uint *)(local_93c + (int)local_934 * 4) * ZEXT48(local_938)
                           + (ulonglong)uVar12;
                  uVar12 = (uint)lVar17;
                  ppfVar4 = local_3a4 + (int)pfVar8;
                  pfVar14 = *ppfVar4;
                  *ppfVar4 = *ppfVar4 + uVar12;
                  uVar12 = (int)((ulonglong)lVar17 >> 0x20) + (uint)CARRY4((uint)pfVar14,uVar12);
                  local_934 = local_934 + 1;
                  pfVar8 = pfVar8 + 1;
                  local_1d8 = local_3a8;
                } while (local_934 != pfVar13);
                do {
                  if (uVar12 == 0) break;
                  if (pfVar8 == (floating_point_string *)0x73) goto LAB_101579c4;
                  if (pfVar8 == local_1d8) {
                    local_3a4[(int)pfVar8] = (floating_point_string *)0x0;
                    local_3a8 = pfVar8 + 1;
                  }
                  ppfVar4 = local_3a4 + (int)pfVar8;
                  pfVar14 = *ppfVar4;
                  *ppfVar4 = *ppfVar4 + uVar12;
                  uVar12 = (uint)CARRY4((uint)pfVar14,uVar12);
                  pfVar8 = pfVar8 + 1;
                  local_1d8 = local_3a8;
                } while( true );
              }
              if (pfVar8 == (floating_point_string *)0x73) {
LAB_101579c4:
                local_918 = (floating_point_string *)0x0;
                local_1d8 = (floating_point_string *)0x0;
                _memcpy_s(local_1d4,0x1cc,local_914,0);
                bVar15 = false;
                goto LAB_1015793a;
              }
            }
            pfVar9 = pfVar9 + 1;
          } while (pfVar9 != local_928);
        }
        _memcpy_s(local_1d4,0x1cc,local_3a4,(int)local_1d8 << 2);
        bVar15 = true;
LAB_1015793a:
        local_91c = local_1d8;
      }
LAB_10157946:
      if (!bVar15) goto LAB_10157a6b;
      pfVar9 = local_91c;
    }
    if (local_94c == 0) goto LAB_101579b5;
    uVar12 = *(uint *)(&DAT_101ace0c + local_94c * 2);
    if (uVar12 == 0) {
      local_748 = (floating_point_string *)0x0;
      local_1d8 = (floating_point_string *)0x0;
      _memcpy_s(local_1d4,0x1cc,local_744,0);
      local_91c = local_1d8;
      goto LAB_101579b5;
    }
    if (uVar12 == 1) goto LAB_101579b5;
    if (pfVar9 != (floating_point_string *)0x0) {
      pfVar13 = (floating_point_string *)0x0;
      pfVar8 = (floating_point_string *)0x0;
      do {
        lVar17 = (ulonglong)uVar12 * ZEXT48(local_1d4[(int)pfVar8]) + ZEXT48(pfVar13);
        local_1d4[(int)pfVar8] = (floating_point_string *)lVar17;
        pfVar13 = (floating_point_string *)((ulonglong)lVar17 >> 0x20);
        pfVar8 = pfVar8 + 1;
      } while (pfVar8 != pfVar9);
      local_91c = local_1d8;
      if (pfVar13 != (floating_point_string *)0x0) {
        local_91c = pfVar9;
        if ((floating_point_string *)0x72 < local_1d8) {
LAB_10157a6b:
          local_1d8 = (floating_point_string *)0x0;
          local_748 = (floating_point_string *)0x0;
          _memcpy_s(local_1d4,0x1cc,local_744,0);
          assemble_floating_point_infinity((bool)local_954[0x308],local_95c);
          goto LAB_10158c37;
        }
        local_1d4[(int)local_1d8] = pfVar13;
        local_1d8 = local_1d8 + 1;
        local_91c = local_1d8;
      }
      goto LAB_101579b5;
    }
LAB_101579bd:
    local_948 = (floating_point_string *)0x0;
  }
  if ((local_958 <= local_948) || (local_924 == (floating_point_string *)0x0)) {
    bVar15 = local_924 != (floating_point_string *)0x0;
    fVar3 = local_954[0x308];
LAB_10158c28:
    assemble_floating_point_value_from_big_integer
              ((big_integer *)&local_1d8,(uint)local_948,(bool)fVar3,bVar15,local_95c);
    goto LAB_10158c37;
  }
  pfVar9 = (floating_point_string *)0x0;
  local_920 = (floating_point_string *)0x0;
  uVar12 = 0;
  local_578 = (floating_point_string *)0x0;
  local_928 = (floating_point_string *)0x0;
  if (local_930 != local_940) {
    do {
      pfVar13 = local_928;
      pfVar8 = local_930;
      if (uVar12 == 9) {
        if (pfVar9 != (floating_point_string *)0x0) {
          pfVar8 = (floating_point_string *)0x0;
          pfVar14 = (floating_point_string *)0x0;
          do {
            lVar17 = ZEXT48(local_574[(int)pfVar14]) * 1000000000 + ZEXT48(pfVar8);
            local_574[(int)pfVar14] = (floating_point_string *)lVar17;
            pfVar8 = (floating_point_string *)((ulonglong)lVar17 >> 0x20);
            pfVar14 = pfVar14 + 1;
          } while (pfVar14 != pfVar9);
          pfVar9 = local_578;
          if (pfVar8 != (floating_point_string *)0x0) {
            if (local_578 < (floating_point_string *)0x73) {
              local_574[(int)local_578] = pfVar8;
              local_578 = local_578 + 1;
              pfVar9 = local_578;
            }
            else {
              local_748 = (floating_point_string *)0x0;
              local_578 = (floating_point_string *)0x0;
              _memcpy_s(local_574,0x1cc,local_744,0);
              pfVar9 = local_578;
            }
          }
        }
        pfVar8 = local_930;
        if (pfVar13 != (floating_point_string *)0x0) {
          pfVar14 = (floating_point_string *)0x0;
          if (pfVar9 != (floating_point_string *)0x0) {
            do {
              ppfVar4 = local_574 + (int)pfVar14;
              pfVar9 = *ppfVar4;
              *ppfVar4 = pfVar13 + (int)*ppfVar4;
              pfVar13 = (floating_point_string *)(uint)CARRY4((uint)pfVar9,(uint)pfVar13);
              pfVar14 = pfVar14 + 1;
              pfVar9 = local_578;
            } while (pfVar14 != local_578);
          }
          if (pfVar13 != (floating_point_string *)0x0) {
            if (pfVar9 < (floating_point_string *)0x73) {
              local_574[(int)pfVar9] = pfVar13;
              local_578 = local_578 + 1;
              pfVar9 = local_578;
            }
            else {
              local_748 = (floating_point_string *)0x0;
              local_578 = (floating_point_string *)0x0;
              _memcpy_s(local_574,0x1cc,local_744,0);
              pfVar9 = local_578;
            }
          }
        }
        local_928 = (floating_point_string *)0x0;
        uVar12 = 0;
      }
      local_928 = (floating_point_string *)((int)local_928 * 10 + (uint)(byte)*pfVar8);
      uVar12 = uVar12 + 1;
      local_930 = pfVar8 + 1;
    } while (local_930 != local_940);
    local_920 = pfVar9;
    if (uVar12 != 0) {
      local_950 = uVar12 % 10;
      for (local_93c = (floating_point_string *)(uVar12 / 10);
          local_93c != (floating_point_string *)0x0; local_93c = local_93c + -(int)local_92c) {
        local_92c = local_93c;
        if ((floating_point_string *)0x26 < local_93c) {
          local_92c = (floating_point_string *)0x26;
        }
        uVar12 = (uint)(byte)(&DAT_101acd76)[(int)local_92c * 4];
        bVar2 = (&DAT_101acd77)[(int)local_92c * 4];
        local_748 = (floating_point_string *)(uVar12 + bVar2);
        _memset(local_744,0,uVar12 * 4);
        FUN_1014c320(local_744 + uVar12,
                     &DAT_101ac470 + (uint)*(ushort *)(&DAT_101acd74 + (int)local_92c * 4) * 4,
                     (uint)bVar2 << 2);
        pfVar13 = local_574[0];
        if (local_748 < (floating_point_string *)0x2) {
          if (local_744[0] == (floating_point_string *)0x0) {
            local_918 = (floating_point_string *)0x0;
            local_578 = (floating_point_string *)0x0;
            rVar18 = 0;
            ppfVar4 = local_914;
            goto LAB_10157f99;
          }
          if ((local_744[0] == (floating_point_string *)0x1) ||
             (pfVar9 == (floating_point_string *)0x0)) {
            bVar15 = true;
          }
          else {
            pfVar8 = (floating_point_string *)0x0;
            pfVar13 = (floating_point_string *)0x0;
            do {
              lVar17 = ZEXT48(local_744[0]) * ZEXT48(local_574[(int)pfVar13]) + ZEXT48(pfVar8);
              local_574[(int)pfVar13] = (floating_point_string *)lVar17;
              pfVar8 = (floating_point_string *)((ulonglong)lVar17 >> 0x20);
              pfVar13 = pfVar13 + 1;
            } while (pfVar13 != pfVar9);
LAB_10157d3b:
            if (pfVar8 != (floating_point_string *)0x0) {
              if ((floating_point_string *)0x72 < local_578) {
                local_748 = (floating_point_string *)0x0;
                local_578 = (floating_point_string *)0x0;
                _memcpy_s(local_574,0x1cc,local_744,0);
                bVar15 = false;
                pfVar9 = local_578;
                local_920 = local_578;
                goto LAB_10157fb6;
              }
              local_574[(int)local_578] = pfVar8;
              local_578 = local_578 + 1;
            }
            bVar15 = true;
            pfVar9 = local_578;
            local_920 = local_578;
          }
        }
        else {
          if (pfVar9 < (floating_point_string *)0x2) {
            local_578 = local_748;
            _memcpy_s(local_574,0x1cc,local_744,(int)local_748 << 2);
            if (pfVar13 != (floating_point_string *)0x0) {
              bVar15 = true;
              local_920 = local_578;
              pfVar9 = local_578;
              if ((pfVar13 != (floating_point_string *)0x1) &&
                 (local_578 != (floating_point_string *)0x0)) {
                pfVar8 = (floating_point_string *)0x0;
                pfVar9 = (floating_point_string *)0x0;
                do {
                  lVar17 = ZEXT48(pfVar13) * ZEXT48(local_574[(int)pfVar9]) + ZEXT48(pfVar8);
                  local_574[(int)pfVar9] = (floating_point_string *)lVar17;
                  pfVar8 = (floating_point_string *)((ulonglong)lVar17 >> 0x20);
                  pfVar9 = pfVar9 + 1;
                } while (pfVar9 != local_578);
                goto LAB_10157d3b;
              }
              goto LAB_10157fb6;
            }
            rVar18 = 0;
            local_748 = (floating_point_string *)0x0;
            local_578 = (floating_point_string *)0x0;
            ppfVar4 = local_744;
          }
          else {
            ppfVar4 = local_744;
            if (local_748 < pfVar9) {
              local_940 = (floating_point_string *)local_574;
            }
            else {
              ppfVar4 = local_574;
              local_940 = (floating_point_string *)local_744;
            }
            local_930 = local_748;
            pfVar13 = pfVar9;
            if (local_748 >= pfVar9) {
              pfVar13 = local_748;
              local_930 = pfVar9;
            }
            local_578 = (floating_point_string *)0x0;
            pfVar9 = (floating_point_string *)0x0;
            local_3a8 = (floating_point_string *)0x0;
            if (local_930 != (floating_point_string *)0x0) {
              local_94c = (int)ppfVar4 - (int)local_3a4;
              do {
                local_938 = *(floating_point_string **)
                             ((int)local_3a4 + local_94c + (int)pfVar9 * 4);
                if (local_938 == (floating_point_string *)0x0) {
                  if (pfVar9 == local_578) {
                    local_3a4[(int)pfVar9] = (floating_point_string *)0x0;
                    local_578 = pfVar9 + 1;
                    local_3a8 = local_578;
                  }
                }
                else {
                  uVar12 = 0;
                  local_934 = (floating_point_string *)0x0;
                  pfVar8 = pfVar9;
                  if (pfVar13 != (floating_point_string *)0x0) {
                    do {
                      if (pfVar8 == (floating_point_string *)0x73) break;
                      if (pfVar8 == local_578) {
                        local_3a4[(int)pfVar8] = (floating_point_string *)0x0;
                        local_3a8 = local_934 + 1 + (int)pfVar9;
                      }
                      lVar17 = (ulonglong)*(uint *)(local_940 + (int)local_934 * 4) *
                               ZEXT48(local_938) + (ulonglong)uVar12;
                      uVar12 = (uint)lVar17;
                      ppfVar4 = local_3a4 + (int)pfVar8;
                      pfVar14 = *ppfVar4;
                      *ppfVar4 = *ppfVar4 + uVar12;
                      uVar12 = (int)((ulonglong)lVar17 >> 0x20) + (uint)CARRY4((uint)pfVar14,uVar12)
                      ;
                      local_934 = local_934 + 1;
                      pfVar8 = pfVar8 + 1;
                      local_578 = local_3a8;
                    } while (local_934 != pfVar13);
                    do {
                      if (uVar12 == 0) break;
                      if (pfVar8 == (floating_point_string *)0x73) goto LAB_1015804d;
                      if (pfVar8 == local_578) {
                        local_3a4[(int)pfVar8] = (floating_point_string *)0x0;
                        local_3a8 = pfVar8 + 1;
                      }
                      ppfVar4 = local_3a4 + (int)pfVar8;
                      pfVar14 = *ppfVar4;
                      *ppfVar4 = *ppfVar4 + uVar12;
                      uVar12 = (uint)CARRY4((uint)pfVar14,uVar12);
                      pfVar8 = pfVar8 + 1;
                      local_578 = local_3a8;
                    } while( true );
                  }
                  if (pfVar8 == (floating_point_string *)0x73) {
LAB_1015804d:
                    local_918 = (floating_point_string *)0x0;
                    local_578 = (floating_point_string *)0x0;
                    _memcpy_s(local_574,0x1cc,local_914,0);
                    bVar15 = false;
                    pfVar9 = local_578;
                    local_920 = local_578;
                    goto LAB_10157fb6;
                  }
                }
                pfVar9 = pfVar9 + 1;
              } while (pfVar9 != local_930);
            }
            rVar18 = (int)local_578 << 2;
            ppfVar4 = local_3a4;
          }
LAB_10157f99:
          _memcpy_s(local_574,0x1cc,ppfVar4,rVar18);
          bVar15 = true;
          pfVar9 = local_578;
          local_920 = local_578;
        }
LAB_10157fb6:
        if (!bVar15) goto LAB_1015809f;
      }
      pfVar13 = local_920;
      if (local_950 != 0) {
        uVar12 = *(uint *)(&DAT_101ace0c + local_950 * 2);
        if (uVar12 == 0) {
LAB_1015809f:
          local_578 = (floating_point_string *)0x0;
          local_748 = (floating_point_string *)0x0;
          _memcpy_s(local_574,0x1cc,local_744,0);
          pfVar9 = local_578;
          pfVar13 = local_578;
        }
        else if ((uVar12 != 1) && (pfVar9 != (floating_point_string *)0x0)) {
          pfVar8 = (floating_point_string *)0x0;
          pfVar13 = (floating_point_string *)0x0;
          do {
            lVar17 = (ulonglong)uVar12 * ZEXT48(local_574[(int)pfVar13]) + ZEXT48(pfVar8);
            local_574[(int)pfVar13] = (floating_point_string *)lVar17;
            pfVar8 = (floating_point_string *)((ulonglong)lVar17 >> 0x20);
            pfVar13 = pfVar13 + 1;
          } while (pfVar13 != pfVar9);
          pfVar9 = local_578;
          pfVar13 = local_578;
          if (pfVar8 != (floating_point_string *)0x0) {
            if ((floating_point_string *)0x72 < local_578) goto LAB_1015809f;
            local_574[(int)local_578] = pfVar8;
            local_578 = local_578 + 1;
            pfVar9 = local_578;
            pfVar13 = local_578;
          }
        }
      }
      local_920 = pfVar13;
      if (local_928 != (floating_point_string *)0x0) {
        pfVar8 = (floating_point_string *)0x0;
        pfVar13 = local_928;
        if (pfVar9 != (floating_point_string *)0x0) {
          do {
            ppfVar4 = local_574 + (int)pfVar8;
            pfVar9 = *ppfVar4;
            *ppfVar4 = pfVar13 + (int)*ppfVar4;
            pfVar13 = (floating_point_string *)(uint)CARRY4((uint)pfVar9,(uint)pfVar13);
            local_920 = local_578;
            pfVar8 = pfVar8 + 1;
            pfVar9 = local_578;
          } while (pfVar8 != local_578);
        }
        if (pfVar13 != (floating_point_string *)0x0) {
          if (pfVar9 < (floating_point_string *)0x73) {
            local_574[(int)pfVar9] = pfVar13;
            local_578 = local_578 + 1;
            pfVar9 = local_578;
            local_920 = local_578;
          }
          else {
            local_748 = (floating_point_string *)0x0;
            local_578 = (floating_point_string *)0x0;
            _memcpy_s(local_574,0x1cc,local_744,0);
            pfVar9 = local_578;
            local_920 = local_578;
          }
        }
      }
    }
  }
  local_93c = local_924;
  if (*(int *)local_954 < 0) {
    local_93c = local_924 + -*(int *)local_954;
  }
  local_3a4[1] = (floating_point_string *)0x0;
  local_950 = (uint)local_93c % 10;
  local_3a4[0] = (floating_point_string *)0x1;
  local_924 = (floating_point_string *)0x1;
  local_3a8 = (floating_point_string *)0x1;
  for (local_93c = (floating_point_string *)((uint)local_93c / 10);
      local_93c != (floating_point_string *)0x0; local_93c = local_93c + -(int)local_934) {
    local_934 = local_93c;
    if ((floating_point_string *)0x26 < local_93c) {
      local_934 = (floating_point_string *)0x26;
    }
    uVar12 = (uint)(byte)(&DAT_101acd76)[(int)local_934 * 4];
    bVar2 = (&DAT_101acd77)[(int)local_934 * 4];
    local_748 = (floating_point_string *)(uVar12 + bVar2);
    _memset(local_744,0,uVar12 * 4);
    FUN_1014c320(local_744 + uVar12,
                 &DAT_101ac470 + (uint)*(ushort *)(&DAT_101acd74 + (int)local_934 * 4) * 4,
                 (uint)bVar2 << 2);
    pfVar13 = local_3a4[0];
    if (local_748 < (floating_point_string *)0x2) {
      if (local_744[0] == (floating_point_string *)0x0) {
        local_918 = (floating_point_string *)0x0;
        ppfVar4 = local_914;
LAB_10158231:
        local_3a8 = (floating_point_string *)0x0;
        _memcpy_s(local_3a4,0x1cc,ppfVar4,0);
      }
      else {
        if ((local_744[0] == (floating_point_string *)0x1) ||
           (local_924 == (floating_point_string *)0x0)) {
          bVar15 = true;
          goto LAB_10158548;
        }
        pfVar13 = (floating_point_string *)0x0;
        pfVar8 = (floating_point_string *)0x0;
        do {
          lVar17 = ZEXT48(local_744[0]) * ZEXT48(local_3a4[(int)pfVar8]) + ZEXT48(pfVar13);
          local_3a4[(int)pfVar8] = (floating_point_string *)lVar17;
          pfVar13 = (floating_point_string *)((ulonglong)lVar17 >> 0x20);
          pfVar8 = pfVar8 + 1;
        } while (pfVar8 != local_924);
LAB_10158357:
        if (pfVar13 != (floating_point_string *)0x0) {
          if ((floating_point_string *)0x72 < local_3a8) {
            local_748 = (floating_point_string *)0x0;
            local_3a8 = (floating_point_string *)0x0;
            _memcpy_s(local_3a4,0x1cc,local_744,0);
            bVar15 = false;
            local_924 = local_3a8;
            goto LAB_10158548;
          }
          local_3a4[(int)local_3a8] = pfVar13;
          local_3a8 = local_3a8 + 1;
        }
      }
      bVar15 = true;
      local_924 = local_3a8;
    }
    else if (local_924 < (floating_point_string *)0x2) {
      local_3a8 = local_748;
      local_938 = local_3a4[0];
      _memcpy_s(local_3a4,0x1cc,local_744,(int)local_748 << 2);
      if (pfVar13 == (floating_point_string *)0x0) {
        local_748 = (floating_point_string *)0x0;
        ppfVar4 = local_744;
        goto LAB_10158231;
      }
      bVar15 = true;
      local_924 = local_3a8;
      if ((pfVar13 != (floating_point_string *)0x1) && (local_3a8 != (floating_point_string *)0x0))
      {
        pfVar13 = (floating_point_string *)0x0;
        pfVar8 = (floating_point_string *)0x0;
        do {
          lVar17 = ZEXT48(local_938) * ZEXT48(local_3a4[(int)pfVar8]) + ZEXT48(pfVar13);
          local_3a4[(int)pfVar8] = (floating_point_string *)lVar17;
          pfVar13 = (floating_point_string *)((ulonglong)lVar17 >> 0x20);
          pfVar8 = pfVar8 + 1;
          pfVar9 = local_920;
        } while (pfVar8 != local_3a8);
        goto LAB_10158357;
      }
    }
    else {
      ppfVar4 = local_744;
      if (local_748 < local_924) {
        local_940 = (floating_point_string *)local_3a4;
      }
      else {
        ppfVar4 = local_3a4;
        local_940 = (floating_point_string *)local_744;
      }
      local_92c = local_748;
      pfVar13 = local_924;
      if (local_748 >= local_924) {
        local_92c = local_924;
        pfVar13 = local_748;
      }
      local_3a8 = (floating_point_string *)0x0;
      pfVar8 = (floating_point_string *)0x0;
      local_918 = (floating_point_string *)0x0;
      if (local_92c != (floating_point_string *)0x0) {
        local_94c = (int)ppfVar4 - (int)local_914;
        do {
          local_938 = *(floating_point_string **)((int)local_914 + local_94c + (int)pfVar8 * 4);
          if (local_938 == (floating_point_string *)0x0) {
            if (pfVar8 == local_3a8) {
              local_914[(int)pfVar8] = (floating_point_string *)0x0;
              local_3a8 = pfVar8 + 1;
              local_918 = local_3a8;
            }
          }
          else {
            local_930 = (floating_point_string *)0x0;
            local_928 = (floating_point_string *)0x0;
            pfVar14 = pfVar8;
            if (pfVar13 != (floating_point_string *)0x0) {
              do {
                if (pfVar14 == (floating_point_string *)0x73) break;
                if (pfVar14 == local_3a8) {
                  local_914[(int)pfVar14] = (floating_point_string *)0x0;
                  local_918 = local_928 + 1 + (int)pfVar8;
                }
                uVar12 = *(uint *)(local_940 + (int)local_928 * 4);
                uVar11 = (uint)((ulonglong)uVar12 * ZEXT48(local_938));
                ppfVar4 = local_914 + (int)pfVar14;
                pfVar10 = *ppfVar4;
                *ppfVar4 = local_930 + uVar11 + (int)*ppfVar4;
                local_930 = (floating_point_string *)
                            ((int)((ulonglong)uVar12 * ZEXT48(local_938) >> 0x20) +
                             (uint)CARRY4(uVar11,(uint)local_930) +
                            (uint)CARRY4((uint)pfVar10,(uint)(local_930 + uVar11)));
                local_928 = local_928 + 1;
                pfVar14 = pfVar14 + 1;
                local_3a8 = local_918;
              } while (local_928 != pfVar13);
              do {
                if (local_930 == (floating_point_string *)0x0) break;
                if (pfVar14 == (floating_point_string *)0x73) goto LAB_101585c0;
                if (pfVar14 == local_3a8) {
                  local_914[(int)pfVar14] = (floating_point_string *)0x0;
                  local_918 = pfVar14 + 1;
                }
                ppfVar4 = local_914 + (int)pfVar14;
                pfVar10 = *ppfVar4;
                *ppfVar4 = local_930 + (int)*ppfVar4;
                local_930 = (floating_point_string *)(uint)CARRY4((uint)pfVar10,(uint)local_930);
                pfVar14 = pfVar14 + 1;
                local_3a8 = local_918;
              } while( true );
            }
            if (pfVar14 == (floating_point_string *)0x73) {
LAB_101585c0:
              local_3a8 = (floating_point_string *)0x0;
              _memcpy_s(local_3a4,0x1cc,local_b2c,0);
              bVar15 = false;
              goto LAB_1015853c;
            }
          }
          pfVar8 = pfVar8 + 1;
        } while (pfVar8 != local_92c);
      }
      _memcpy_s(local_3a4,0x1cc,local_914,(int)local_3a8 << 2);
      bVar15 = true;
LAB_1015853c:
      local_924 = local_3a8;
    }
LAB_10158548:
    if (!bVar15) goto LAB_10158676;
  }
  if (local_950 != 0) {
    local_938 = *(floating_point_string **)(&DAT_101ace0c + local_950 * 2);
    if (local_938 == (floating_point_string *)0x0) {
      local_3a8 = local_938;
      _memcpy_s(local_3a4,0x1cc,local_b2c,0);
LAB_101585af:
      local_924 = local_3a8;
    }
    else if ((local_938 != (floating_point_string *)0x1) &&
            (local_924 != (floating_point_string *)0x0)) {
      pfVar13 = (floating_point_string *)0x0;
      pfVar8 = (floating_point_string *)0x0;
      do {
        lVar17 = ZEXT48(local_938) * ZEXT48(local_3a4[(int)pfVar8]) + ZEXT48(pfVar13);
        local_3a4[(int)pfVar8] = (floating_point_string *)lVar17;
        pfVar13 = (floating_point_string *)((ulonglong)lVar17 >> 0x20);
        pfVar8 = pfVar8 + 1;
      } while (pfVar8 != local_924);
      if (pfVar13 == (floating_point_string *)0x0) goto LAB_101585af;
      if ((floating_point_string *)0x72 < local_3a8) {
LAB_10158676:
        local_3a8 = (floating_point_string *)0x0;
        _memcpy_s(local_3a4,0x1cc,local_b2c,0);
        assemble_floating_point_zero((bool)local_954[0x308],local_95c);
        goto LAB_10158c37;
      }
      local_3a4[(int)local_3a8] = pfVar13;
      local_924 = local_3a8 + 1;
      local_3a8 = local_924;
    }
  }
  if (pfVar9 == (floating_point_string *)0x0) {
    uVar12 = 0;
  }
  else {
    pfVar13 = local_574[(int)(pfVar9 + -1)];
    local_938 = (floating_point_string *)0x0;
    iVar5 = 0x1f;
    if (pfVar13 != (floating_point_string *)0x0) {
      for (; (uint)pfVar13 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (pfVar13 == (floating_point_string *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar5 + 1;
    }
    uVar12 = (int)(pfVar9 + -1) * 0x20 + iVar5;
  }
  if (local_924 == (floating_point_string *)0x0) {
    uVar11 = 0;
  }
  else {
    pfVar13 = local_3a4[(int)(local_924 + -1)];
    local_938 = (floating_point_string *)0x0;
    iVar5 = 0x1f;
    if (pfVar13 != (floating_point_string *)0x0) {
      for (; (uint)pfVar13 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (pfVar13 == (floating_point_string *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar5 + 1;
    }
    uVar11 = (int)(local_924 + -1) * 0x20 + iVar5;
  }
  local_930 = (floating_point_string *)(-(uint)(uVar12 < uVar11) & uVar11 - uVar12);
  if (local_930 != (floating_point_string *)0x0) {
    local_93c = (floating_point_string *)((uint)local_930 & 0x1f);
    pfVar8 = (floating_point_string *)((uint)local_930 >> 5);
    local_94c = 0x20 - (int)local_93c;
    local_928 = pfVar8;
    iVar5 = __allshl();
    pfVar13 = local_574[(int)(pfVar9 + -1)];
    local_950 = iVar5 - 1;
    iVar5 = 0x1f;
    if (pfVar13 != (floating_point_string *)0x0) {
      for (; (uint)pfVar13 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    local_938 = (floating_point_string *)~local_950;
    if (pfVar13 == (floating_point_string *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar5 + 1;
    }
    local_934 = pfVar8 + (int)pfVar9;
    local_941 = (floating_point_string *)(0x20 - iVar5) < local_93c;
    if ((local_934 == (floating_point_string *)0x73) && ((bool)local_941)) {
      bVar15 = true;
    }
    else {
      bVar15 = false;
    }
    if (((floating_point_string *)0x73 < local_934) || (bVar15)) {
      local_578 = (floating_point_string *)0x0;
      _memcpy_s(local_574,0x1cc,local_b2c,0);
      pfVar9 = local_578;
    }
    else {
      if ((floating_point_string *)0x71 < local_934) {
        local_934 = (floating_point_string *)0x72;
      }
      local_92c = local_934;
      if (local_934 != (floating_point_string *)0xffffffff) {
        pfVar13 = local_934 + -(int)local_928;
        ppfVar4 = local_574 + (int)pfVar13;
        do {
          pfVar8 = local_928;
          if (local_92c < local_928) break;
          if (pfVar13 < pfVar9) {
            local_940 = *ppfVar4;
          }
          else {
            local_940 = (floating_point_string *)0x0;
          }
          if (pfVar13 + -1 < pfVar9) {
            pfVar9 = ppfVar4[-1];
          }
          else {
            pfVar9 = (floating_point_string *)0x0;
          }
          ppfVar4 = ppfVar4 + -1;
          local_574[(int)local_92c] =
               (floating_point_string *)
               (((uint)pfVar9 & (uint)local_938) >> ((byte)local_94c & 0x1f) |
               ((uint)local_940 & local_950) << ((byte)local_93c & 0x1f));
          local_92c = local_92c + -1;
          pfVar13 = pfVar13 + -1;
          pfVar9 = local_578;
        } while (local_92c != (floating_point_string *)0xffffffff);
      }
      if (pfVar8 != (floating_point_string *)0x0) {
        ppfVar4 = local_574;
        for (; pfVar8 != (floating_point_string *)0x0; pfVar8 = pfVar8 + -1) {
          *ppfVar4 = (floating_point_string *)0x0;
          ppfVar4 = ppfVar4 + 1;
        }
      }
      local_578 = local_934 + 1;
      if (!(bool)local_941) {
        local_578 = local_934;
      }
      pfVar9 = local_578;
    }
  }
  local_958 = local_958 + -(int)local_948;
  pfVar13 = local_958;
  if (local_948 != (floating_point_string *)0x0) {
    if (local_958 < local_930) {
      bVar15 = true;
      fVar3 = local_954[0x308];
      goto LAB_10158c28;
    }
    pfVar13 = local_958 + -(int)local_930;
  }
  if (pfVar9 <= local_924) {
    if (pfVar9 < local_924) {
LAB_10158948:
      local_930 = local_930 + 1;
    }
    else {
      pfVar8 = pfVar9 + -1;
      if (pfVar8 != (floating_point_string *)0xffffffff) {
        do {
          if (local_574[(int)pfVar8] != local_3a4[(int)pfVar8]) break;
          pfVar8 = pfVar8 + -1;
        } while (pfVar8 != (floating_point_string *)0xffffffff);
        if ((pfVar8 != (floating_point_string *)0xffffffff) &&
           (local_574[(int)pfVar8] <= local_3a4[(int)pfVar8])) goto LAB_10158948;
      }
    }
  }
  local_93c = (floating_point_string *)((uint)pfVar13 & 0x1f);
  pfVar13 = (floating_point_string *)((uint)pfVar13 >> 5);
  local_94c = 0x20 - (int)local_93c;
  local_928 = pfVar13;
  iVar5 = __allshl();
  pfVar8 = local_574[(int)(pfVar9 + -1)];
  local_950 = iVar5 - 1;
  iVar5 = 0x1f;
  if (pfVar8 != (floating_point_string *)0x0) {
    for (; (uint)pfVar8 >> iVar5 == 0; iVar5 = iVar5 + -1) {
    }
  }
  local_938 = (floating_point_string *)~local_950;
  if (pfVar8 == (floating_point_string *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = iVar5 + 1;
  }
  local_934 = pfVar13 + (int)pfVar9;
  local_941 = (floating_point_string *)(0x20 - iVar5) < local_93c;
  if ((local_934 == (floating_point_string *)0x73) && ((bool)local_941)) {
    bVar15 = true;
  }
  else {
    bVar15 = false;
  }
  if (((floating_point_string *)0x73 < local_934) || (bVar15)) {
    local_578 = (floating_point_string *)0x0;
    _memcpy_s(local_574,0x1cc,local_b2c,0);
  }
  else {
    if ((floating_point_string *)0x71 < local_934) {
      local_934 = (floating_point_string *)0x72;
    }
    local_92c = local_934;
    if (local_934 != (floating_point_string *)0xffffffff) {
      pfVar8 = local_934 + -(int)local_928;
      ppfVar4 = local_574 + (int)pfVar8;
      do {
        pfVar13 = local_928;
        if (local_92c < local_928) break;
        if (pfVar8 < pfVar9) {
          local_940 = *ppfVar4;
        }
        else {
          local_940 = (floating_point_string *)0x0;
        }
        if (pfVar8 + -1 < pfVar9) {
          pfVar9 = ppfVar4[-1];
        }
        else {
          pfVar9 = (floating_point_string *)0x0;
        }
        ppfVar4 = ppfVar4 + -1;
        local_574[(int)local_92c] =
             (floating_point_string *)
             (((uint)pfVar9 & (uint)local_938) >> ((byte)local_94c & 0x1f) |
             ((uint)local_940 & local_950) << ((byte)local_93c & 0x1f));
        local_92c = local_92c + -1;
        pfVar8 = pfVar8 + -1;
        pfVar9 = local_578;
      } while (local_92c != (floating_point_string *)0xffffffff);
    }
    if (pfVar13 != (floating_point_string *)0x0) {
      ppfVar4 = local_574;
      for (; pfVar13 != (floating_point_string *)0x0; pfVar13 = pfVar13 + -1) {
        *ppfVar4 = (floating_point_string *)0x0;
        ppfVar4 = ppfVar4 + 1;
      }
    }
    local_578 = local_934;
    if ((bool)local_941) {
      local_578 = local_934 + 1;
    }
  }
  _Var16 = divide((big_integer *)&local_578,(big_integer *)&local_3a8);
  local_928 = (floating_point_string *)(_Var16 >> 0x20);
  uVar12 = (uint)_Var16;
  local_92c = (floating_point_string *)
              CONCAT31(local_92c._1_3_,local_578 == (floating_point_string *)0x0);
  if (local_928 == (floating_point_string *)0x0) {
    iVar5 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar12 == 0) {
      pfVar9 = (floating_point_string *)0x0;
    }
    else {
      pfVar9 = (floating_point_string *)(iVar5 + 1);
    }
  }
  else {
    iVar5 = 0x1f;
    if (local_928 != (floating_point_string *)0x0) {
      for (; (uint)local_928 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (local_928 == (floating_point_string *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar5 + 1;
    }
    pfVar9 = (floating_point_string *)(iVar5 + 0x20);
  }
  if (local_958 < pfVar9) {
    if (local_578 == (floating_point_string *)0x0) {
      local_940 = (floating_point_string *)uVar12;
      lVar17 = __allshl();
      _Var16 = CONCAT44(local_928,local_940);
      local_92c = (floating_point_string *)CONCAT31(local_92c._1_3_,1);
      if (((uint)(lVar17 + -1) & uVar12) != 0 ||
          ((uint)((ulonglong)(lVar17 + -1) >> 0x20) & (uint)local_928) != 0) goto LAB_10158b71;
    }
    else {
LAB_10158b71:
      local_92c = (floating_point_string *)((uint)local_92c & 0xffffff00);
    }
    local_928 = (floating_point_string *)(_Var16 >> 0x20);
    local_940 = (floating_point_string *)_Var16;
    _Var16 = __aullshr();
  }
  local_928 = (floating_point_string *)(_Var16 >> 0x20);
  local_940 = (floating_point_string *)_Var16;
  lVar17 = __allshl();
  if (local_948 == (floating_point_string *)0x0) {
    pfVar9 = (floating_point_string *)(-1 - (int)local_930);
  }
  else {
    pfVar9 = local_948 + -2;
  }
  assemble_floating_point_value
            (lVar17 + CONCAT44(local_928,local_940),(int)pfVar9,(bool)local_954[0x308],
             SUB41(local_92c,0),local_95c);
LAB_10158c37:
  SVar6 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return SVar6;
}

