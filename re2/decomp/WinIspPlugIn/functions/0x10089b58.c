// rea decompile_all
// name: FUN_10089b58
// address: 0x10089b58
// body: available
// range: 0x10089b58-0x1008a1af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

bool FUN_10089b58(double param_1)

{
  CMFCToolBarImages *pCVar1;
  double dVar2;
  byte bVar3;
  HANDLE h;
  undefined4 uVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  long lVar8;
  HBITMAP__ *pHVar9;
  double *_Dst;
  double *pdVar10;
  undefined1 *puVar11;
  CMFCToolBarImages *in_ECX;
  byte *pbVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined1 local_12c [8];
  long local_124;
  double local_114;
  undefined4 local_10c;
  uint local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  int local_ec;
  undefined4 local_e4;
  undefined4 local_e0;
  int local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  int local_c0;
  byte local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  size_t local_a0;
  CMFCToolBarImages *local_9c;
  int local_98;
  undefined **local_94;
  undefined4 local_90;
  uint *local_8c;
  undefined **local_88;
  undefined4 local_84;
  int local_80;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  uint local_68;
  double *local_64;
  undefined1 *local_60;
  undefined1 *local_5c;
  uint local_58;
  HBITMAP__ *local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined1 *local_40;
  void *local_3c;
  uint *local_38;
  int local_34;
  undefined1 *local_30;
  int local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  undefined1 *local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x11c;
  local_8 = 0x10089b67;
  h = *(HANDLE *)(in_ECX + 0x8c);
  if (((h == (HANDLE)0x0) || (*(int *)(in_ECX + 8) < 0x18)) || (param_1 == 0.0)) {
LAB_10089b79:
    bVar5 = false;
  }
  else {
    if (param_1 != 1.0) {
      local_40 = *(undefined1 **)(in_ECX + 0x58);
      local_78 = (double)(int)local_40;
      local_9c = in_ECX;
      local_24 = (int)local_40;
      local_18 = FUN_101804f0();
      iVar7 = *(int *)(in_ECX + 0x54);
      local_78 = (double)iVar7;
      local_24 = iVar7;
      local_30 = (undefined1 *)FUN_101804f0();
      if (((((local_30 != *(undefined1 **)(in_ECX + 0x54)) || (local_18 != *(uint *)(in_ECX + 0x58))
            ) && ((0 < iVar7 && ((0 < (int)local_40 && (0 < (int)local_30)))))) &&
          (0 < (int)local_18)) && (local_2c = *(int *)(in_ECX + 4), local_2c != 0)) {
        iVar7 = GetObjectW(h,0x18,local_12c);
        if (iVar7 != 0) {
          lVar8 = _labs(local_124);
          local_44 = *(int *)(in_ECX + 0x54);
          local_24 = 0;
          local_1c = (undefined1 *)0x0;
          local_20 = 0;
          *(double *)(in_ECX + 0xb8) = *(double *)(in_ECX + 0xb8) * param_1;
          if ((local_2c == 1) && (*(int *)(in_ECX + 0x58) < lVar8)) {
            local_2c = lVar8 / *(int *)(in_ECX + 0x58);
            local_44 = 0;
            local_24 = *(int *)(in_ECX + 0x58);
          }
          iVar7 = local_2c;
          local_54 = CDrawingManager::CreateBitmap_32
                               (*(HBITMAP__ **)(in_ECX + 0x8c),*(ulong *)(in_ECX + 0xa8));
          if (local_54 != (HBITMAP__ *)0x0) {
            local_5c = local_30;
            if (local_44 < 1) {
              local_58 = local_18 * iVar7;
              local_20 = local_18;
            }
            else {
              local_1c = local_30;
              local_5c = (undefined1 *)(iVar7 * (int)local_30);
              local_58 = local_18;
            }
            if (local_124 < 0) {
              local_58 = -local_58;
            }
            pHVar9 = CDrawingManager::CreateBitmap_32((CSize *)&local_5c,(void **)0x0);
            local_78 = (double)CONCAT44(pHVar9,(undefined4)local_78);
            local_58 = _labs(local_58);
            if (pHVar9 != (HBITMAP__ *)0x0) {
              if (1.0 <= param_1) {
                uVar17 = 6;
              }
              else {
                uVar17 = 5;
              }
              local_e0 = 0;
              local_d4 = 0;
              local_d0 = 0;
              local_cc = 0;
              local_c8 = 0;
              local_c4 = 0;
              local_c0 = 0;
              local_b8 = 0;
              local_dc = 0;
              local_d8 = 0;
              local_8 = 0;
              local_ac = 0;
              local_a8 = 0;
              CMFCScanlinerBitmap::attach
                        ((CMFCScanlinerBitmap *)&local_e0,local_54,(CPoint *)&local_ac);
              local_10c = 0;
              local_100 = 0;
              local_fc = 0;
              local_f8 = 0;
              local_f4 = 0;
              local_f0 = 0;
              local_ec = 0;
              local_e4 = 0;
              local_108 = 0;
              local_104 = 0;
              local_b4 = 0;
              local_b0 = 0;
              CMFCScanlinerBitmap::attach
                        ((CMFCScanlinerBitmap *)&local_10c,pHVar9,(CPoint *)&local_b4);
              local_14 = (uint)local_bc;
              local_94 = CMFCZoomKernel::vftable;
              local_90 = 0;
              local_8c = (uint *)0x0;
              local_8._0_1_ = 2;
              FUN_100866bb(*(undefined4 *)(in_ECX + 0x54),local_30,0,*(undefined4 *)(in_ECX + 0x54),
                           uVar17);
              uVar16 = local_18;
              local_88 = CMFCZoomKernel::vftable;
              local_84 = 0;
              local_80 = 0;
              local_8 = CONCAT31(local_8._1_3_,3);
              FUN_100866bb(*(undefined4 *)(in_ECX + 0x58),local_18,0,*(undefined4 *)(in_ECX + 0x58),
                           uVar17);
              _Dst = (double *)
                     FUN_100491e5(-(uint)((int)((ulonglong)local_14 * 8 >> 0x20) != 0) |
                                  (uint)((ulonglong)local_14 * 8));
              local_64 = _Dst;
              local_3c = (void *)FUN_100491e5(-(uint)((int)((ulonglong)local_14 * 8 >> 0x20) != 0) |
                                              (uint)((ulonglong)local_14 * 8));
              local_48 = 0;
              local_4c = 0;
              if (0 < local_2c) {
                local_a0 = local_14 << 3;
                local_50 = 0;
                local_98 = local_ec * local_20;
                local_a4 = local_14 * (int)local_1c;
                local_20 = local_108;
                local_34 = local_80;
                iVar7 = local_ec;
                uVar14 = local_14;
                do {
                  local_28 = 0;
                  if (uVar16 != 0) {
                    local_1c = (undefined1 *)(local_50 + local_20);
                    puVar11 = local_30;
                    do {
                      local_60 = local_1c;
                      _Dst = local_64;
                      if (puVar11 != (undefined1 *)0x0) {
                        local_38 = local_8c;
                        local_40 = puVar11;
                        do {
                          _memset(_Dst,0,uVar14 << 3);
                          local_68 = 0;
                          if (*(int *)(local_34 + local_28 * 8) != 0) {
                            local_7c = 0;
                            do {
                              iVar15 = local_7c;
                              iVar7 = *(int *)(local_34 + 4 + local_28 * 8);
                              local_114 = *(double *)(iVar7 + 8 + local_7c);
                              iVar7 = (*(int *)(iVar7 + local_7c) + local_4c) * local_c0 + local_dc;
                              _memset(local_3c,0,local_a0);
                              local_70 = (double)((ulonglong)local_70 & 0xffffffff);
                              dVar2 = local_70;
                              if (*local_38 != 0) {
                                local_70._4_4_ = 0;
                                iVar13 = 0;
                                uVar16 = local_70._4_4_;
                                local_70 = dVar2;
                                do {
                                  uVar14 = 0;
                                  dVar2 = *(double *)(local_38[1] + 8 + iVar13);
                                  pbVar12 = (byte *)((*(int *)(local_38[1] + iVar13) + local_48) *
                                                     local_14 + iVar7);
                                  if (local_14 != 0) {
                                    do {
                                      bVar3 = *pbVar12;
                                      pbVar12 = pbVar12 + 1;
                                      local_70._4_4_ = (uint)bVar3;
                                      local_70 = (double)local_70._4_4_;
                                      *(double *)((int)local_3c + uVar14 * 8) =
                                           local_70 * dVar2 +
                                           *(double *)((int)local_3c + uVar14 * 8);
                                      uVar14 = uVar14 + 1;
                                    } while (uVar14 < local_14);
                                  }
                                  uVar16 = uVar16 + 1;
                                  iVar13 = iVar13 + 0x10;
                                  iVar15 = local_7c;
                                  _Dst = local_64;
                                } while (uVar16 < *local_38);
                              }
                              if (local_14 != 0) {
                                pdVar10 = _Dst;
                                uVar16 = local_14;
                                do {
                                  *pdVar10 = *(double *)(((int)local_3c - (int)_Dst) + (int)pdVar10)
                                             * local_114 + *pdVar10;
                                  pdVar10 = pdVar10 + 1;
                                  uVar16 = uVar16 - 1;
                                } while (uVar16 != 0);
                              }
                              local_7c = iVar15 + 0x10;
                              local_68 = local_68 + 1;
                            } while (local_68 < *(uint *)(local_34 + local_28 * 8));
                            local_34 = local_80;
                            uVar14 = local_14;
                          }
                          if (uVar14 == 4) {
                            if (_Dst[3] <= *_Dst) {
                              dVar2 = _Dst[3];
                            }
                            else {
                              dVar2 = *_Dst;
                            }
                            *_Dst = dVar2;
                            if (_Dst[3] <= _Dst[1]) {
                              dVar2 = _Dst[3];
                            }
                            else {
                              dVar2 = _Dst[1];
                            }
                            _Dst[1] = dVar2;
                            if (_Dst[3] <= _Dst[2]) {
                              dVar2 = _Dst[3];
                            }
                            else {
                              dVar2 = _Dst[2];
                            }
                            _Dst[2] = dVar2;
                          }
                          uVar16 = 0;
                          if (uVar14 != 0) {
                            do {
                              uVar6 = FUN_10180530();
                              *local_60 = uVar6;
                              local_60 = local_60 + 1;
                              uVar16 = uVar16 + 1;
                            } while (uVar16 < uVar14);
                          }
                          local_38 = local_38 + 2;
                          local_40 = local_40 + -1;
                        } while (local_40 != (undefined1 *)0x0);
                        local_40 = (undefined1 *)0x0;
                        puVar11 = local_30;
                        iVar7 = local_ec;
                        uVar16 = local_18;
                      }
                      local_1c = local_1c + iVar7;
                      local_28 = local_28 + 1;
                    } while (local_28 < uVar16);
                  }
                  local_48 = local_48 + local_44;
                  local_4c = local_4c + local_24;
                  local_50 = local_50 + local_a4;
                  local_20 = local_20 + local_98;
                  local_2c = local_2c + -1;
                } while (local_2c != 0);
                local_2c = 0;
                in_ECX = local_9c;
              }
              FID_conflict__free(_Dst);
              FID_conflict__free(local_3c);
              DeleteObject(local_54);
              uVar17 = *(undefined4 *)(in_ECX + 4);
              iVar7 = CSize::operator==((CSize *)(in_ECX + 0x5c),(tagSIZE)0x0);
              if (iVar7 != 0) {
                *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(in_ECX + 0x54);
                *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(in_ECX + 0x58);
              }
              pCVar1 = in_ECX + 0x8c;
              *(undefined1 **)(in_ECX + 0x54) = local_30;
              *(uint *)(in_ECX + 0x58) = local_18;
              uVar4 = *(undefined4 *)(in_ECX + 0xa8);
              *(undefined4 *)(in_ECX + 0xa8) = 0xffffffff;
              *(undefined4 *)(in_ECX + 0xac) = uVar4;
              FUN_1005ba69(pCVar1);
              *(int *)pCVar1 = local_78._4_4_;
              *(undefined4 *)(in_ECX + 4) = uVar17;
              *(undefined4 *)(in_ECX + 8) = 0x20;
              CMFCToolBarImages::UpdateInternalImage(in_ECX,0);
              CMFCToolBarImages::UpdateInternalImage(in_ECX,1);
              iVar7 = *(int *)pCVar1;
              local_88 = CMFCZoomKernel::vftable;
              CMFCZoomKernel::Empty((CMFCZoomKernel *)&local_88);
              local_94 = CMFCZoomKernel::vftable;
              CMFCZoomKernel::Empty((CMFCZoomKernel *)&local_94);
              return iVar7 != 0;
            }
            DeleteObject(local_54);
          }
        }
        goto LAB_10089b79;
      }
    }
    bVar5 = true;
  }
  return bVar5;
}

