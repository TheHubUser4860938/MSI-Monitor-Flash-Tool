// rea decompile_all
// name: CMFCRibbonPanel::Reposition
// address: 0x100df4b6
// body: available
// range: 0x100df4b6-0x100e0c7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonPanel::Reposition(class CDC *,class CRect const &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonPanel::Reposition(CMFCRibbonPanel *this,CDC *param_1,CRect *param_2)

{
  int iVar1;
  CMFCRibbonBaseElement *pCVar2;
  int *piVar3;
  BOOL BVar4;
  int iVar5;
  undefined4 *puVar6;
  code *pcVar7;
  CMFCRibbonPanel *pCVar8;
  RECT *pRVar9;
  CMFCRibbonPanel *pCVar10;
  CMFCRibbonPanel *pCVar11;
  LONG *pLVar12;
  undefined **local_148 [7];
  CMFCRibbonPanel *local_12c;
  int local_128;
  RECT local_124;
  CMFCRibbonPanel *local_114;
  undefined **local_110;
  CMFCRibbonPanel *local_10c;
  int local_108;
  int local_104;
  int local_100;
  CMFCRibbonPanel *local_fc;
  CMFCRibbonPanel *local_f8;
  int local_f4;
  int local_f0;
  CMFCRibbonPanel *local_ec;
  CMFCRibbonPanel *local_e8;
  int local_e4;
  CMFCRibbonPanel *local_e0;
  CMFCRibbonPanel *local_dc;
  CMFCRibbonPanel *local_d8;
  CMFCRibbonPanel *local_d4;
  CMFCRibbonPanel *local_d0;
  CMFCRibbonPanel *local_cc;
  CMFCRibbonPanel *local_c8;
  CMFCRibbonPanel *local_c4;
  CMFCRibbonBaseElement *local_c0;
  CMFCRibbonPanel *local_bc;
  CMFCRibbonPanel *local_b8;
  RECT local_b4;
  RECT local_a4;
  RECT local_94;
  RECT local_84;
  RECT local_74;
  RECT local_64;
  RECT local_54;
  RECT local_44;
  RECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x158;
  local_8 = 0x100df4c5;
  local_cc = (CMFCRibbonPanel *)param_1;
  local_d0 = (CMFCRibbonPanel *)param_2;
  local_f8 = this;
  SetRectEmpty((LPRECT)(this + 0xbc));
  SetRectEmpty((LPRECT)(this + 0xdc));
  SetRectEmpty((LPRECT)(this + 0xec));
  if (*(int *)(this + 0x110) == 0) {
    if (*(int *)(this + 0x78) == 0) {
      *(undefined4 *)(this + 0x368) = *(undefined4 *)(this + 0x108);
      *(undefined4 *)(this + 0x19c) = *(undefined4 *)(this + 0x108);
      *(CMFCRibbonPanel **)(this + 0x2d8) = this;
      pcVar7 = *(code **)(*(int *)(this + 0x2e0) + 0x180);
      guard_check_icall(param_1);
      (*pcVar7)();
      pcVar7 = *(code **)(*(int *)(this + 0x2e0) + 0xf8);
      guard_check_icall(&local_34.right,local_cc);
      piVar3 = (int *)(*pcVar7)();
      pCVar8 = local_cc;
      local_128 = *piVar3;
      *(int *)(this + 0xcc) = *(int *)local_d0;
      local_34.left = 0;
      local_34.top = 0;
      local_34.right = 0;
      *(int *)(this + 0xd0) = *(int *)(local_d0 + 4);
      local_34.bottom = 0;
      *(int *)(this + 0xd4) = *(int *)(local_d0 + 8);
      *(int *)(this + 0xd8) = *(int *)(local_d0 + 0xc);
      *(undefined4 *)(this + 0x188) = 0;
      *(undefined4 *)(this + 0x18c) = 0;
      *(undefined4 *)(this + 400) = 0;
      *(undefined4 *)(this + 0x194) = 0;
      if (*(int *)(this + 100) != 0) {
        ShowDefaultButton(this,(CDC *)local_cc);
        goto LAB_100e0c78;
      }
      local_34.left = 0;
      local_34.top = 0;
      local_34.right = 0;
      local_34.bottom = 0;
      *(undefined4 *)(this + 0x354) = 0;
      *(undefined4 *)(this + 0xa8) = 0;
      *(undefined4 *)(this + 0xac) = 0;
      *(undefined4 *)(this + 0x60) = 1;
      *(undefined4 *)(this + 0x358) = 0;
      *(undefined4 *)(this + 0x35c) = 0;
      *(undefined4 *)(this + 0x360) = 0;
      GetCaptionSize(this,(CDC *)&local_f4);
      if (*(int *)(this + 0x9c) == 0) {
        iVar5 = *(int *)(local_d0 + 8) - *(int *)local_d0;
        if (*(int *)(local_d0 + 8) - *(int *)local_d0 <= local_f4) {
          iVar5 = local_f4;
        }
        *(int *)(this + 0xd4) = *(int *)(this + 0xcc) + iVar5;
      }
      local_d8 = (CMFCRibbonPanel *)
                 (((*(int *)(local_d0 + 0xc) - *(int *)(local_d0 + 4)) - *(int *)(this + 0xb4)) -
                 local_f0);
      local_e8 = (CMFCRibbonPanel *)
                 ((*(int *)(local_d0 + 8) - *(int *)local_d0) - *(int *)(this + 0xb0));
      local_c8 = (CMFCRibbonPanel *)0x0;
      if (0 < *(int *)(this + 0x4e4)) {
        do {
          piVar3 = (int *)FUN_1009f8c7(local_c8);
          piVar3 = (int *)*piVar3;
          pcVar7 = *(code **)(*piVar3 + 0x180);
          guard_check_icall(pCVar8);
          (*pcVar7)();
          if (*(int *)(this + 0x80) != 0) {
            pcVar7 = *(code **)(*piVar3 + 0xec);
          }
          else {
            pcVar7 = *(code **)(*piVar3 + 0x110);
          }
          guard_check_icall(*(int *)(this + 0x80) != 0);
          (*pcVar7)();
          iVar5 = *(int *)(this + 0x80);
          piVar3[0x2a] = -1;
          piVar3[0x30] = iVar5;
          local_c8 = local_c8 + 1;
          pCVar8 = local_cc;
        } while ((int)local_c8 < *(int *)(this + 0x4e4));
      }
      local_bc = (CMFCRibbonPanel *)0x0;
      if ((*(int *)(this + 0x70) != 0) && (*(int *)(this + 0x80) == 0)) {
        do {
          local_b8 = (CMFCRibbonPanel *)0x0;
          local_bc = (CMFCRibbonPanel *)0x0;
          local_c4 = (CMFCRibbonPanel *)0x0;
          CMap<int,int,int,int>::CMap<int,int,int,int>((CMap<int,int,int,int> *)local_148,10);
          local_8 = 1;
          local_d4 = (CMFCRibbonPanel *)0x0;
          pCVar8 = (CMFCRibbonPanel *)0x0;
          pCVar10 = (CMFCRibbonPanel *)0x0;
          if (0 < *(int *)(this + 0x4e4)) {
            do {
              piVar3 = (int *)FUN_1009f8c7(local_d4);
              piVar3 = (int *)*piVar3;
              pcVar7 = *(code **)(*piVar3 + 0xf4);
              guard_check_icall(&local_24.right,local_cc);
              (*pcVar7)();
              if (((CMFCRibbonPanel *)local_24.right == (CMFCRibbonPanel *)0x0) &&
                 ((CMFCRibbonPanel *)local_24.bottom == (CMFCRibbonPanel *)0x0)) {
                local_34.left = 0;
                local_34.top = 0;
                local_34.right = 0;
                local_34.bottom = 0;
                piVar3[0x1d] = 0;
                piVar3[0x1e] = 0;
                piVar3[0x1f] = 0;
                piVar3[0x20] = 0;
              }
              else {
                pcVar7 = *(code **)(*piVar3 + 0x118);
                guard_check_icall();
                iVar5 = (*pcVar7)();
                if (iVar5 == 0) {
                  pcVar7 = *(code **)(*piVar3 + 0x144);
                  guard_check_icall();
                  iVar5 = (*pcVar7)();
                  if (iVar5 != 0) {
                    local_24.bottom = (LONG)local_d8;
                  }
                  if ((int)local_d8 < (int)(local_24.bottom + (int)local_b8)) {
                    if (local_b8 == (CMFCRibbonPanel *)0x0) goto LAB_100dff6e;
                    local_c4 = local_c4 + (int)local_bc;
                    local_b8 = (CMFCRibbonPanel *)0x0;
                    local_bc = (CMFCRibbonPanel *)0x0;
                  }
                  local_dc = (CMFCRibbonPanel *)0x1;
                  local_c8 = local_c4 + *(int *)local_d0 + *(int *)(this + 0xb0);
                  local_44.top = (LONG)(local_b8 + *(int *)(local_d0 + 4) + *(int *)(this + 0xb4));
                  local_44.right = local_24.right + (int)local_c8;
                  local_44.bottom = local_24.bottom + local_44.top;
                  piVar3[0x1d] = (int)local_c8;
                  piVar3[0x1e] = local_44.top;
                  piVar3[0x1f] = local_44.right;
                  piVar3[0x20] = local_44.bottom;
                  local_44.left = (LONG)local_c8;
                  iVar5 = CMap<int,int,int,int>::Lookup
                                    ((CMap<int,int,int,int> *)local_148,(int)local_c8,
                                     (int *)&local_dc);
                  pCVar8 = local_dc;
                  if (iVar5 != 0) {
                    pCVar8 = local_dc + 1;
                  }
                  puVar6 = (undefined4 *)FUN_100c3357(local_c8);
                  *puVar6 = pCVar8;
                  if ((int)local_bc <= local_24.right) {
                    local_bc = (CMFCRibbonPanel *)local_24.right;
                  }
                  local_b8 = local_b8 + local_24.bottom;
                }
                else {
                  local_124.top = *(int *)(this + 0xb4) + *(int *)(local_d0 + 4);
                  local_124.left =
                       (LONG)(local_c4 + (int)local_bc + *(int *)local_d0 + *(int *)(this + 0xb0));
                  local_124.right = local_24.right + local_124.left;
                  local_124.bottom = (LONG)(local_d8 + local_124.top);
                  piVar3[0x1d] = local_124.left;
                  piVar3[0x1e] = local_124.top;
                  piVar3[0x1f] = local_124.right;
                  piVar3[0x20] = local_124.bottom;
                  local_c4 = local_c4 + (int)local_bc +
                             (int)(local_24.right + *(int *)(this + 0xb0));
                  local_b8 = (CMFCRibbonPanel *)0x0;
                  local_bc = (CMFCRibbonPanel *)0x0;
                }
              }
              local_d4 = local_d4 + 1;
              pCVar8 = local_bc;
              pCVar10 = local_c4;
            } while ((int)local_d4 < *(int *)(this + 0x4e4));
          }
          if ((int)(pCVar8 + (int)pCVar10) <= (int)local_e8) {
            *(CMFCRibbonPanel **)(this + 0xa8) = pCVar8 + (int)pCVar10;
            local_8 = 3;
            local_148[0] = CMap<int,int,int,int>::vftable;
            CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)local_148);
            local_8 = 0xffffffff;
            goto LAB_100e07f4;
          }
          if (pCVar8 == (CMFCRibbonPanel *)0x0) goto LAB_100dff6e;
          local_c4 = (CMFCRibbonPanel *)0x0;
          local_c8 = (CMFCRibbonPanel *)0x0;
          if (*(int *)(this + 0x4e4) < 1) {
LAB_100dfa7e:
            local_b8 = (CMFCRibbonPanel *)0x0;
            local_dc = *(CMFCRibbonPanel **)(this + 0x4e4);
            local_c8 = (CMFCRibbonPanel *)0x3;
            if ((int)local_dc < 4) {
              local_c8 = local_dc;
            }
            local_dc = local_dc + -1;
            do {
              if ((int)local_dc < 0) break;
              local_e0 = this + 0x4dc;
              piVar3 = (int *)FUN_1009f8c7(local_dc);
              local_c0 = (CMFCRibbonBaseElement *)*piVar3;
              local_94.left = *(LONG *)(local_c0 + 0x74);
              local_94.top = *(LONG *)(local_c0 + 0x78);
              local_94.right = *(LONG *)(local_c0 + 0x7c);
              local_94.bottom = *(LONG *)(local_c0 + 0x80);
              BVar4 = IsRectEmpty(&local_94);
              pCVar2 = local_c0;
              if (BVar4 == 0) {
                iVar5 = CMFCRibbonBaseElement::IsLargeMode(local_c0);
                if (iVar5 != 0) {
                  pcVar7 = *(code **)(*(int *)pCVar2 + 0xf0);
                  guard_check_icall();
                  iVar5 = (*pcVar7)();
                  if (iVar5 != 0) {
                    local_b8 = local_b8 + 1;
                    if (local_b8 == local_c8) {
                      local_c0 = (CMFCRibbonBaseElement *)0x0;
                      local_c4 = (CMFCRibbonPanel *)0x1;
                      if (0 < (int)local_b8) {
                        iVar5 = 0;
                        do {
                          puVar6 = (undefined4 *)FUN_1009f8c7(local_dc + iVar5);
                          local_c0 = (CMFCRibbonBaseElement *)*puVar6;
                          local_a4.left = *(LONG *)(local_c0 + 0x74);
                          local_a4.top = *(LONG *)(local_c0 + 0x78);
                          local_a4.right = *(LONG *)(local_c0 + 0x7c);
                          local_a4.bottom = *(LONG *)(local_c0 + 0x80);
                          BVar4 = IsRectEmpty(&local_a4);
                          if (BVar4 == 0) {
                            pcVar7 = *(code **)(*(int *)local_c0 + 0xec);
                            guard_check_icall(1);
                            (*pcVar7)();
                          }
                          else {
                            iVar5 = iVar5 + 1;
                          }
                          iVar5 = iVar5 + 1;
                          this = local_f8;
                        } while (iVar5 < (int)local_b8);
                      }
                    }
                    goto LAB_100dfbc0;
                  }
                }
                local_b8 = (CMFCRibbonPanel *)0x0;
              }
LAB_100dfbc0:
              local_dc = local_dc + -1;
            } while (local_c4 == (CMFCRibbonPanel *)0x0);
            if (local_c4 == (CMFCRibbonPanel *)0x0) {
              local_bc = (CMFCRibbonPanel *)0xffffffff;
              local_dc = (CMFCRibbonPanel *)(*(int *)(this + 0x4e4) + -1);
              local_b8 = (CMFCRibbonPanel *)0x0;
              do {
                if ((int)local_dc < 0) break;
                local_e0 = this + 0x4dc;
                puVar6 = (undefined4 *)FUN_1009f8c7(local_dc);
                local_c0 = (CMFCRibbonBaseElement *)*puVar6;
                local_c8 = (CMFCRibbonPanel *)(local_c0 + 0x74);
                local_b4.left = *(LONG *)local_c8;
                local_b4.top = *(LONG *)(local_c0 + 0x78);
                local_b4.right = *(LONG *)(local_c0 + 0x7c);
                local_b4.bottom = *(LONG *)(local_c0 + 0x80);
                BVar4 = IsRectEmpty(&local_b4);
                if (BVar4 == 0) {
                  if ((local_bc == (CMFCRibbonPanel *)0xffffffff) ||
                     (*(CMFCRibbonPanel **)local_c8 == local_bc)) {
                    local_10c = *(CMFCRibbonPanel **)local_c8;
                    local_108 = *(int *)(local_c8 + 4);
                    local_104 = *(int *)(local_c8 + 8);
                    local_100 = *(int *)(local_c8 + 0xc);
                    if (*(int *)(local_c0 + 0xbc) != 0) {
                      pcVar7 = *(code **)(*(int *)local_c0 + 0x10c);
                      local_bc = local_10c;
                      guard_check_icall();
                      iVar5 = (*pcVar7)();
                      if (iVar5 != 0) {
                        local_b8 = local_b8 + 1;
                        if (local_b8 == (CMFCRibbonPanel *)0x3) {
                          iVar5 = 0;
                          local_c4 = (CMFCRibbonPanel *)0x1;
                          do {
                            puVar6 = (undefined4 *)FUN_1009f8c7(local_dc + iVar5);
                            local_c0 = (CMFCRibbonBaseElement *)*puVar6;
                            local_74.left = *(LONG *)(local_c0 + 0x74);
                            local_74.top = *(LONG *)(local_c0 + 0x78);
                            local_74.right = *(LONG *)(local_c0 + 0x7c);
                            local_74.bottom = *(LONG *)(local_c0 + 0x80);
                            BVar4 = IsRectEmpty(&local_74);
                            if (BVar4 == 0) {
                              pcVar7 = *(code **)(*(int *)local_c0 + 0xec);
                              guard_check_icall(1);
                              (*pcVar7)();
                            }
                            else {
                              iVar5 = iVar5 + 1;
                            }
                            iVar5 = iVar5 + 1;
                            this = local_f8;
                          } while (iVar5 < 3);
                        }
                        goto LAB_100dfd52;
                      }
                    }
                  }
                  local_bc = (CMFCRibbonPanel *)0xffffffff;
                  local_b8 = (CMFCRibbonPanel *)0x0;
                }
LAB_100dfd52:
                local_dc = local_dc + -1;
              } while (local_c4 == (CMFCRibbonPanel *)0x0);
              if (local_c4 == (CMFCRibbonPanel *)0x0) {
                local_b8 = (CMFCRibbonPanel *)(uint)(2 < *(int *)(this + 0x4e4));
                local_bc = local_b8;
                if ((int)local_b8 < *(int *)(this + 0x4e4)) {
                  do {
                    piVar3 = (int *)FUN_1009f8c7(local_b8);
                    local_d4 = (CMFCRibbonPanel *)*piVar3;
                    local_84.left = *(LONG *)(local_d4 + 0x74);
                    local_84.top = *(LONG *)(local_d4 + 0x78);
                    local_84.right = *(LONG *)(local_d4 + 0x7c);
                    local_84.bottom = *(LONG *)(local_d4 + 0x80);
                    BVar4 = IsRectEmpty(&local_84);
                    pCVar8 = local_d4;
                    pCVar10 = local_b8;
                    if ((BVar4 == 0) &&
                       (iVar5 = CMFCRibbonBaseElement::IsLargeMode
                                          ((CMFCRibbonBaseElement *)local_d4), pCVar10 = local_b8,
                       iVar5 != 0)) {
                      pcVar7 = *(code **)(*(int *)pCVar8 + 0xf0);
                      guard_check_icall();
                      iVar5 = (*pcVar7)();
                      pCVar10 = local_b8;
                      if ((iVar5 != 0) &&
                         (((int)local_b8 < *(int *)(this + 0x4e4) + -1 &&
                          (piVar3 = (int *)FUN_1009f8c7(local_b8 + 1), *(int *)(*piVar3 + 0xbc) != 0
                          )))) {
                        local_c8 = (CMFCRibbonPanel *)0x0;
                        piVar3 = (int *)FUN_1009f8c7(pCVar10 + 1);
                        iVar5 = CMap<int,int,int,int>::Lookup
                                          ((CMap<int,int,int,int> *)local_148,
                                           *(int *)(*piVar3 + 0x74),(int *)&local_c8);
                        if ((iVar5 != 0) && ((int)local_c8 < 3)) {
                          *(int *)(local_d4 + 0xb8) = 0;
                          *(int *)(local_d4 + 0xbc) = 1;
                          local_8 = 8;
                          goto LAB_100dfa64;
                        }
                        break;
                      }
                    }
                    local_b8 = pCVar10 + 1;
                  } while ((int)local_b8 < *(int *)(this + 0x4e4));
                }
                if (*(int *)(this + 0x4e4) <= (int)local_bc) goto LAB_100dff6e;
                do {
                  puVar6 = (undefined4 *)FUN_1009f8c7(local_bc);
                  local_c0 = (CMFCRibbonBaseElement *)*puVar6;
                  local_64.left = *(LONG *)(local_c0 + 0x74);
                  local_64.top = *(LONG *)(local_c0 + 0x78);
                  local_64.right = *(LONG *)(local_c0 + 0x7c);
                  local_64.bottom = *(LONG *)(local_c0 + 0x80);
                  BVar4 = IsRectEmpty(&local_64);
                  pCVar2 = local_c0;
                  if ((BVar4 == 0) && (*(int *)(local_c0 + 0xbc) != 0)) {
                    pcVar7 = *(code **)(*(int *)local_c0 + 0x10c);
                    guard_check_icall();
                    iVar5 = (*pcVar7)();
                    if (iVar5 != 0) {
                      *(int *)(pCVar2 + 0xbc) = 0;
                      *(int *)(pCVar2 + 0xb8) = 1;
                      local_c4 = (CMFCRibbonPanel *)0x1;
                    }
                  }
                  local_bc = local_bc + 1;
                } while ((int)local_bc < *(int *)(this + 0x4e4));
                if (local_c4 == (CMFCRibbonPanel *)0x0) goto LAB_100dff6e;
                local_8 = 9;
              }
              else {
                local_8 = 7;
              }
            }
            else {
              local_8 = 6;
            }
          }
          else {
            do {
              if (local_c4 != (CMFCRibbonPanel *)0x0) goto LAB_100dfa5d;
              piVar3 = (int *)FUN_1009f8c7(local_c8);
              local_c0 = (CMFCRibbonBaseElement *)*piVar3;
              local_54.left = *(LONG *)(local_c0 + 0x74);
              local_54.top = *(LONG *)(local_c0 + 0x78);
              local_54.right = *(LONG *)(local_c0 + 0x7c);
              local_54.bottom = *(LONG *)(local_c0 + 0x80);
              BVar4 = IsRectEmpty(&local_54);
              pCVar2 = local_c0;
              if (BVar4 == 0) {
                pcVar7 = *(code **)(*(int *)local_c0 + 0x18c);
                guard_check_icall();
                iVar5 = (*pcVar7)();
                if (iVar5 != 0) {
                  pcVar7 = *(code **)(*(int *)pCVar2 + 400);
                  guard_check_icall();
                  (*pcVar7)();
                  local_c4 = (CMFCRibbonPanel *)0x1;
                }
              }
              local_c8 = local_c8 + 1;
            } while ((int)local_c8 < *(int *)(this + 0x4e4));
            if (local_c4 == (CMFCRibbonPanel *)0x0) goto LAB_100dfa7e;
LAB_100dfa5d:
            local_8 = 5;
          }
LAB_100dfa64:
          local_148[0] = CMap<int,int,int,int>::vftable;
          CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)local_148);
        } while( true );
      }
      local_c4 = (CMFCRibbonPanel *)0x0;
      local_d4 = (CMFCRibbonPanel *)0x0;
      local_114 = (CMFCRibbonPanel *)0x0;
      local_ec = (CMFCRibbonPanel *)0x0;
      local_c8 = *(CMFCRibbonPanel **)(this + 0xd8);
      if ((*(int *)(this + 0x6c) == 0) &&
         (iVar5 = CMap<int,int,int,int>::Lookup
                            ((CMap<int,int,int,int> *)(this + 0x4ac),(int)local_e8,(int *)&local_ec)
         , iVar5 != 0)) {
        local_e8 = local_ec;
      }
      local_10c = (CMFCRibbonPanel *)0x0;
      local_100 = 0;
      local_104 = 0;
      local_108 = 0;
      local_110 = CArray<int,int>::vftable;
      local_8 = 0;
      if (*(int *)(this + 0x80) == 0) {
        local_fc = (CMFCRibbonPanel *)0x0;
        local_e0 = (CMFCRibbonPanel *)0x0;
        local_12c = (CMFCRibbonPanel *)0x0;
        local_dc = (CMFCRibbonPanel *)0x0;
        local_c0 = (CMFCRibbonBaseElement *)0x0;
        if (0 < *(int *)(this + 0x4e4)) {
          do {
            puVar6 = (undefined4 *)FUN_1009f8c7(local_c0);
            pLVar12 = &local_34.right;
            pCVar10 = (CMFCRibbonPanel *)*puVar6;
            pcVar7 = *(code **)(*(int *)pCVar10 + 0xf4);
            local_24.bottom = (LONG)pCVar10;
            guard_check_icall(pLVar12,pCVar8);
            (*pcVar7)();
            pcVar7 = *(code **)(*(int *)pCVar10 + 0x104);
            guard_check_icall();
            iVar5 = (*pcVar7)();
            if (((iVar5 == 0) || (*(int *)(pCVar10 + 0xb8) != 0)) || (*(int *)(pCVar10 + 0xbc) != 0)
               ) {
              local_ec = (CMFCRibbonPanel *)0x0;
            }
            else {
              local_ec = (CMFCRibbonPanel *)0x1;
            }
            local_b8 = (CMFCRibbonPanel *)0x0;
            pcVar7 = *(code **)(*(int *)pCVar10 + 0x118);
            guard_check_icall(pLVar12,pCVar8);
            iVar5 = (*pcVar7)();
            if (iVar5 != 0) {
              if ((local_fc == (CMFCRibbonPanel *)0x0) || (local_e0 != (CMFCRibbonPanel *)0x0)) {
                local_b8 = (CMFCRibbonPanel *)0x0;
              }
              else {
                local_b8 = (CMFCRibbonPanel *)0x1;
              }
            }
            if ((local_ec != (CMFCRibbonPanel *)0x0) || (local_b8 != (CMFCRibbonPanel *)0x0)) {
              pcVar7 = *(code **)(*(int *)pCVar10 + 0x118);
              guard_check_icall();
              iVar5 = (*pcVar7)();
              if (iVar5 == 0) {
                local_12c = (CMFCRibbonPanel *)local_34.right;
                local_dc = (CMFCRibbonPanel *)local_34.bottom;
              }
              else if ((local_12c != (CMFCRibbonPanel *)0x0) || (local_dc != (CMFCRibbonPanel *)0x0)
                      ) {
                local_34.bottom = (LONG)local_dc;
              }
              local_44.bottom = local_34.bottom;
              if (local_c8 != (CMFCRibbonPanel *)0x7fff) {
                local_44.bottom = (LONG)local_d8;
              }
              local_44.top = *(LONG *)(local_d0 + 4);
              local_44.left = (LONG)(local_bc + *(int *)local_d0 + *(int *)(this + 0xb0));
              local_44.right = local_44.left + local_34.right;
              local_44.bottom = local_44.top + local_44.bottom;
              *(LONG *)(pCVar10 + 0x74) = local_44.left;
              *(int *)(local_24.bottom + 0xa8) = 999;
              *(LONG *)(pCVar10 + 0x78) = local_44.top;
              *(LONG *)(pCVar10 + 0x7c) = local_44.right;
              *(LONG *)(pCVar10 + 0x80) = local_44.bottom;
              local_114 = local_bc + (int)(local_34.right + *(int *)(this + 0xb0));
              local_bc = local_114;
            }
            local_c0 = (CMFCRibbonBaseElement *)((int)local_c0 + 1);
            local_fc = local_ec;
            pCVar8 = local_cc;
            local_e0 = local_b8;
          } while ((int)local_c0 < *(int *)(this + 0x4e4));
        }
      }
      local_b8 = (CMFCRibbonPanel *)0x0;
      local_c0 = (CMFCRibbonBaseElement *)0x0;
      if (0 < *(int *)(this + 0x4e4)) {
        do {
          puVar6 = (undefined4 *)FUN_1009f8c7(local_c0);
          pCVar8 = (CMFCRibbonPanel *)*puVar6;
          pcVar7 = *(code **)(*(int *)pCVar8 + 0xf4);
          local_24.bottom = (LONG)pCVar8;
          guard_check_icall(&local_e4,local_cc);
          (*pcVar7)();
          if ((local_e4 == 0) && (local_e0 == (CMFCRibbonPanel *)0x0)) {
            pRVar9 = &local_44;
            local_44.left = 0;
            local_44.top = 0;
            local_44.right = 0;
            local_44.bottom = 0;
LAB_100e029d:
            *(LONG *)(pCVar8 + 0x74) = pRVar9->left;
            *(LONG *)(pCVar8 + 0x78) = pRVar9->top;
            *(LONG *)(pCVar8 + 0x7c) = pRVar9->right;
            *(LONG *)(pCVar8 + 0x80) = pRVar9->bottom;
          }
          else if (*(int *)(pCVar8 + 0xa8) == -1) {
            pcVar7 = *(code **)(*(int *)pCVar8 + 0x118);
            guard_check_icall();
            iVar5 = (*pcVar7)();
            if (iVar5 != 0) {
              pRVar9 = &local_124;
              local_124.left = 0;
              local_124.top = 0;
              local_124.right = 0;
              local_124.bottom = 0;
              goto LAB_100e029d;
            }
            pCVar10 = local_b8;
            if ((int)local_e8 < (int)(local_bc + *(int *)(this + 0xb0) + -1 + local_e4)) {
              if (local_bc != local_114) {
                pCVar10 = local_b8 + (int)local_c4;
                if (*(int *)(this + 0x80) != 0) {
                  pCVar10 = pCVar10 + *(int *)(this + 0xb4);
                }
                local_b8 = pCVar10;
                FUN_100d52cc(local_108,local_bc);
                *(int *)(this + 0xac) = *(int *)(this + 0xac) + 1;
                local_c4 = (CMFCRibbonPanel *)0x0;
                local_bc = local_114;
                goto LAB_100e037a;
              }
            }
            else {
LAB_100e037a:
              if ((int)(local_e0 + (int)pCVar10) <= (int)local_d8) {
                local_34.top = (LONG)(pCVar10 + *(int *)(local_d0 + 4) + *(int *)(this + 0xb4));
                local_34.left = (LONG)(local_bc + *(int *)local_d0 + *(int *)(this + 0xb0));
                local_34.right = local_34.left + local_e4;
                local_34.bottom = (LONG)(local_e0 + local_34.top);
                *(LONG *)(pCVar8 + 0x74) = local_34.left;
                *(LONG *)(pCVar8 + 0x78) = local_34.top;
                *(LONG *)(pCVar8 + 0x7c) = local_34.right;
                *(LONG *)(pCVar8 + 0x80) = local_34.bottom;
                *(int *)(local_24.bottom + 0xa8) = *(int *)(this + 0xac);
                if ((int)local_c4 <= (int)local_e0) {
                  local_c4 = local_e0;
                }
                local_bc = local_bc + *(int *)(this + 0xb0) + local_e4 + -1;
                pCVar8 = *(CMFCRibbonPanel **)(this + 0xa8);
                if ((int)*(CMFCRibbonPanel **)(this + 0xa8) <= (int)(local_bc + -1)) {
                  pCVar8 = local_bc + -1;
                }
                *(CMFCRibbonPanel **)(this + 0xa8) = pCVar8;
                if ((int)local_d4 <= local_34.bottom) {
                  local_d4 = (CMFCRibbonPanel *)local_34.bottom;
                }
                goto LAB_100e0432;
              }
            }
            ShowDefaultButton(this,(CDC *)local_cc);
            CArray<int,int>::~CArray<int,int>((CArray<int,int> *)&local_110);
            goto LAB_100e0c78;
          }
LAB_100e0432:
          local_c0 = local_c0 + 1;
        } while ((int)local_c0 < *(int *)(this + 0x4e4));
      }
      FUN_100d52cc(local_108,local_bc);
      *(int *)(this + 0xac) = *(int *)(this + 0xac) + 1;
      if (local_c8 == (CMFCRibbonPanel *)0x7fff) {
        *(CMFCRibbonPanel **)(this + 0xd8) = local_d4 + local_f0 + *(int *)(this + 0xb4);
        local_d8 = (CMFCRibbonPanel *)
                   (((*(int *)(this + 0xd8) - *(int *)(this + 0xd0)) - *(int *)(this + 0xb4)) -
                   local_f0);
      }
      if ((*(int *)(this + 0x84) == 0) && (1 < *(int *)(this + 0xac))) {
        local_e0 = (CMFCRibbonPanel *)0x0;
        while( true ) {
          local_d4 = (CMFCRibbonPanel *)0x0;
          pCVar10 = (CMFCRibbonPanel *)0x0;
          pCVar8 = (CMFCRibbonPanel *)0xffffffff;
          if (local_108 < 1) break;
          pCVar11 = (CMFCRibbonPanel *)0x0;
          do {
            piVar3 = (int *)FUN_1009f8c7(pCVar10);
            if ((int)pCVar11 < *piVar3) {
              puVar6 = (undefined4 *)FUN_1009f8c7(pCVar10);
              pCVar11 = (CMFCRibbonPanel *)*puVar6;
              pCVar8 = pCVar10;
            }
            this = local_f8;
            pCVar10 = pCVar10 + 1;
          } while ((int)pCVar10 < local_108);
          local_d4 = pCVar11;
          local_d0 = pCVar8;
          if ((int)pCVar8 < 0) break;
          local_cc = (CMFCRibbonPanel *)0x270f;
          pCVar10 = (CMFCRibbonPanel *)0x0;
          local_c0 = (CMFCRibbonBaseElement *)0x0;
          local_bc = (CMFCRibbonPanel *)0x0;
          if (*(int *)(local_f8 + 0x4e4) < 1) break;
          do {
            puVar6 = (undefined4 *)FUN_1009f8c7(local_c0);
            local_24.bottom = *puVar6;
            if (*(CMFCRibbonPanel **)(local_24.bottom + 0xa8) == pCVar8) {
              local_34.left = *(LONG *)(local_24.bottom + 0x74);
              local_34.top = *(LONG *)(local_24.bottom + 0x78);
              local_34.right = *(LONG *)(local_24.bottom + 0x7c);
              local_34.bottom = *(LONG *)(local_24.bottom + 0x80);
              BVar4 = IsRectEmpty(&local_34);
              pCVar10 = local_bc;
              pCVar8 = local_d0;
              if ((BVar4 == 0) && ((int)(local_34.right + -local_34.left) < (int)local_cc)) {
                local_bc = (CMFCRibbonPanel *)local_24.bottom;
                pCVar10 = (CMFCRibbonPanel *)local_24.bottom;
                local_cc = (CMFCRibbonPanel *)(local_34.right + -local_34.left);
              }
            }
            local_c0 = local_c0 + 1;
          } while ((int)local_c0 < *(int *)(this + 0x4e4));
          pCVar11 = pCVar8;
          if (pCVar10 == (CMFCRibbonPanel *)0x0) break;
          do {
            pCVar11 = pCVar11 + 1;
            local_b8 = pCVar11;
            if (local_108 <= (int)pCVar11) goto LAB_100e0621;
            piVar3 = (int *)FUN_1009f8c7(pCVar11);
          } while ((int)local_d4 <= (int)(local_cc + *piVar3));
          local_d4 = (CMFCRibbonPanel *)0x0;
          local_e0 = (CMFCRibbonPanel *)0x0;
          local_c0 = (CMFCRibbonBaseElement *)0x0;
          if (0 < *(int *)(this + 0x4e4)) {
            do {
              piVar3 = (int *)FUN_1009f8c7(local_c0);
              iVar5 = *piVar3;
              if (*(CMFCRibbonPanel **)(iVar5 + 0xa8) == pCVar11) {
                local_64.left = *(int *)(iVar5 + 0x74);
                local_64.top = *(int *)(iVar5 + 0x78);
                local_64.right = *(int *)(iVar5 + 0x7c);
                local_64.bottom = *(int *)(iVar5 + 0x80);
                if ((int)local_d4 < local_64.right + *(int *)(this + 0xb0)) {
                  local_d4 = (CMFCRibbonPanel *)(*(int *)(iVar5 + 0x7c) + *(int *)(this + 0xb0));
                }
                local_84.left = *(int *)(iVar5 + 0x74);
                local_e0 = *(CMFCRibbonPanel **)(iVar5 + 0x78);
                local_84.right = *(LONG *)(iVar5 + 0x7c);
                local_84.bottom = *(LONG *)(iVar5 + 0x80);
                pCVar11 = local_b8;
                pCVar8 = local_d0;
                local_84.top = (LONG)local_e0;
              }
              else if (*(CMFCRibbonPanel **)(iVar5 + 0xa8) == pCVar8) {
                local_24.bottom = iVar5 + 0x74;
                local_54.left = *(LONG *)local_24.bottom;
                local_54.top = *(int *)(iVar5 + 0x78);
                local_54.right = *(int *)(iVar5 + 0x7c);
                local_54.bottom = *(int *)(iVar5 + 0x80);
                local_74.left = *(LONG *)(local_bc + 0x74);
                local_74.top = *(LONG *)(local_bc + 0x78);
                local_74.right = *(LONG *)(local_bc + 0x7c);
                local_74.bottom = *(LONG *)(local_bc + 0x80);
                pCVar11 = local_b8;
                pCVar8 = local_d0;
                if (local_74.left < local_54.left) {
                  OffsetRect(&local_54,-(int)(local_cc + *(int *)(this + 0xb0)),0);
                  *(LONG *)local_24.bottom = local_54.left;
                  *(LONG *)(local_24.bottom + 4) = local_54.top;
                  *(LONG *)(local_24.bottom + 8) = local_54.right;
                  *(LONG *)(local_24.bottom + 0xc) = local_54.bottom;
                  pCVar11 = local_b8;
                  pCVar8 = local_d0;
                }
              }
              local_c0 = local_c0 + 1;
            } while ((int)local_c0 < *(int *)(this + 0x4e4));
          }
          local_44.left = *(LONG *)(local_bc + 0x74);
          local_44.top = *(LONG *)(local_bc + 0x78);
          local_44.right = *(LONG *)(local_bc + 0x7c);
          local_44.bottom = *(LONG *)(local_bc + 0x80);
          local_124.right = (LONG)(local_d4 + (local_44.right - local_44.left));
          local_124.top = (LONG)local_e0;
          local_124.bottom = local_44.bottom + ((int)local_e0 - local_44.top);
          local_124.left = (LONG)local_d4;
          *(CMFCRibbonPanel **)(local_bc + 0x74) = local_d4;
          *(CMFCRibbonPanel **)(local_bc + 0xa8) = local_b8;
          *(CMFCRibbonPanel **)(local_bc + 0x78) = local_e0;
          *(LONG *)(local_bc + 0x7c) = local_124.right;
          *(LONG *)(local_bc + 0x80) = local_124.bottom;
          piVar3 = (int *)FUN_1009f8c7(local_b8);
          pCVar8 = local_cc;
          *piVar3 = (int)(local_cc + *piVar3);
          piVar3 = (int *)FUN_1009f8c7(local_d0);
          local_e0 = (CMFCRibbonPanel *)0x1;
          *piVar3 = *piVar3 - (int)pCVar8;
        }
LAB_100e0621:
        if (local_e0 != (CMFCRibbonPanel *)0x0) {
          *(undefined4 *)(this + 0xa8) = 0;
          local_c0 = (CMFCRibbonBaseElement *)0x0;
          if (0 < *(int *)(this + 0x4e4)) {
            do {
              piVar3 = (int *)FUN_1009f8c7(local_c0);
              iVar1 = *piVar3;
              iVar5 = *(int *)(this + 0xa8);
              local_64.left = *(int *)(iVar1 + 0x74);
              local_64.top = *(int *)(iVar1 + 0x78);
              local_64.right = *(int *)(iVar1 + 0x7c);
              local_64.bottom = *(int *)(iVar1 + 0x80);
              if (iVar5 <= local_64.right) {
                iVar5 = *(int *)(iVar1 + 0x7c);
              }
              *(int *)(this + 0xa8) = iVar5;
              local_c0 = local_c0 + 1;
            } while ((int)local_c0 < *(int *)(this + 0x4e4));
          }
          *(int *)(this + 0xa8) =
               *(int *)(this + 0xa8) - (*(int *)(this + 0xcc) + *(int *)(this + 0xb0));
        }
      }
      if ((((local_c8 != (CMFCRibbonPanel *)0x7fff) && (*(int *)(this + 0x80) == 0)) &&
          (iVar5 = *(int *)(this + 0xac), 1 < iVar5)) &&
         ((local_e0 = (CMFCRibbonPanel *)(((int)local_d8 - iVar5 * (int)local_c4) / (iVar5 + 1)),
          0 < (int)local_e0 && (local_c0 = (CMFCRibbonBaseElement *)0x0, 0 < *(int *)(this + 0x4e4))
          ))) {
        do {
          piVar3 = (int *)FUN_1009f8c7(local_c0);
          iVar5 = *piVar3;
          local_24.bottom = *(undefined4 *)(iVar5 + 0xa8);
          local_fc = (CMFCRibbonPanel *)(iVar5 + 0x74);
          local_54.left = *(LONG *)local_fc;
          local_54.top = *(int *)(iVar5 + 0x78);
          local_54.right = *(int *)(iVar5 + 0x7c);
          local_54.bottom = *(int *)(iVar5 + 0x80);
          if (((CMFCRibbonPanel *)local_24.bottom != (CMFCRibbonPanel *)0x3e7) &&
             (BVar4 = IsRectEmpty(&local_54), BVar4 == 0)) {
            OffsetRect(&local_54,0,(int)(local_24.bottom + 1) * (int)local_e0 - local_24.bottom);
            *(LONG *)local_fc = local_54.left;
            *(LONG *)(local_fc + 4) = local_54.top;
            *(LONG *)(local_fc + 8) = local_54.right;
            *(LONG *)(local_fc + 0xc) = local_54.bottom;
          }
          local_c0 = local_c0 + 1;
        } while ((int)local_c0 < *(int *)(this + 0x4e4));
      }
      if (((*(int *)(this + 0x84) != 0) && (0 < (int)local_c4)) && (0 < *(int *)(this + 0x4e4))) {
        piVar3 = (int *)FUN_1009f8c7(*(int *)(this + 0x4e4) + -1);
        iVar5 = *piVar3;
        local_54.left = *(int *)(iVar5 + 0x74);
        local_54.top = *(int *)(iVar5 + 0x78);
        local_54.right = *(int *)(iVar5 + 0x7c);
        local_54.bottom = (LONG)(local_c4 + local_54.top);
        *(LONG *)(iVar5 + 0x74) = local_54.left;
        *(LONG *)(iVar5 + 0x78) = local_54.top;
        *(LONG *)(iVar5 + 0x7c) = local_54.right;
        *(LONG *)(iVar5 + 0x80) = local_54.bottom;
      }
      local_8 = 0xffffffff;
      CArray<int,int>::~CArray<int,int>((CArray<int,int> *)&local_110);
LAB_100e07f4:
      if (*(int *)(this + 0x80) != 0) goto LAB_100e0c78;
      if (*(int *)(this + 0x70) == 0) {
LAB_100e0afd:
        iVar5 = *(int *)(this + 0xa8) + -1;
      }
      else {
        if ((*(int *)(this + 0x74) != 0) || (*(int *)(this + 0x90) != 0)) {
          local_b8 = (CMFCRibbonPanel *)0x0;
          local_d8 = (CMFCRibbonPanel *)0xffffffff;
          local_e8 = (CMFCRibbonPanel *)0xffffffff;
          local_c8 = (CMFCRibbonPanel *)0xffffffff;
          if (0 < *(int *)(this + 0x4e4)) {
            do {
              piVar3 = (int *)FUN_1009f8c7(local_b8);
              iVar5 = *piVar3;
              local_44.left = *(undefined4 *)(iVar5 + 0x74);
              local_44.top = *(int *)(iVar5 + 0x78);
              local_44.right = *(int *)(iVar5 + 0x7c);
              local_44.bottom = *(int *)(iVar5 + 0x80);
              BVar4 = IsRectEmpty(&local_44);
              pCVar8 = local_b8;
              if (BVar4 == 0) {
                pCVar10 = local_e8;
                if (local_d8 == (CMFCRibbonPanel *)0xffffffff) {
                  local_d8 = local_b8;
                  local_c8 = (CMFCRibbonPanel *)local_44.left;
                  pCVar10 = local_b8;
                }
                if (local_c8 == (CMFCRibbonPanel *)local_44.left) {
                  local_e8 = local_b8;
                }
                else {
                  if (*(int *)(this + 0x74) != 0) {
                    CenterElementsInColumn(this,(int)local_d8,(int)pCVar10,local_f0);
                  }
                  if (*(int *)(this + 0x90) != 0) {
                    JustifyElementsInColumn(this,(int)local_d8,(int)pCVar10);
                  }
                  local_d8 = pCVar8;
                  local_e8 = pCVar8;
                  local_c8 = (CMFCRibbonPanel *)local_44.left;
                }
              }
              local_b8 = pCVar8 + 1;
            } while ((int)local_b8 < *(int *)(this + 0x4e4));
          }
          pCVar8 = local_e8;
          if (*(int *)(this + 0x74) != 0) {
            CenterElementsInColumn(this,(int)local_d8,(int)local_e8,local_f0);
          }
          if (*(int *)(this + 0x90) != 0) {
            JustifyElementsInColumn(this,(int)local_d8,(int)pCVar8);
          }
        }
        if ((*(int *)(this + 0x70) == 0) || (*(int *)(this + 0x80) != 0)) goto LAB_100e0afd;
        iVar5 = CalcTotalWidth(this);
      }
      if ((iVar5 < local_f4) && (*(int *)(this + 0x9c) == 0)) {
        local_24.bottom = (local_f4 - iVar5) / 2;
        local_c0 = (CMFCRibbonBaseElement *)0x0;
        if (0 < *(int *)(this + 0x4e4)) {
          do {
            piVar3 = (int *)FUN_1009f8c7(local_c0);
            iVar5 = *piVar3;
            local_54.left = *(int *)(iVar5 + 0x74);
            local_54.top = *(int *)(iVar5 + 0x78);
            local_54.right = *(int *)(iVar5 + 0x7c);
            local_54.bottom = *(int *)(iVar5 + 0x80);
            OffsetRect(&local_54,local_24.bottom,0);
            *(LONG *)(iVar5 + 0x74) = local_54.left;
            local_c0 = local_c0 + 1;
            *(LONG *)(iVar5 + 0x78) = local_54.top;
            *(LONG *)(iVar5 + 0x7c) = local_54.right;
            *(LONG *)(iVar5 + 0x80) = local_54.bottom;
            this = local_f8;
          } while ((int)local_c0 < *(int *)(local_f8 + 0x4e4));
        }
        iVar5 = *(int *)(this + 0xa8);
        if (*(int *)(this + 0xa8) <= local_f4) {
          iVar5 = local_f4;
        }
        *(int *)(this + 0xa8) = iVar5;
        iVar5 = local_f4;
      }
      if (*(int *)(this + 0x4e4) == 0) {
        if (local_f4 <= local_128) {
          local_f4 = local_128;
        }
        *(int *)(this + 0xa8) = *(int *)(this + 0xb0) + local_f4;
      }
      if (iVar5 < local_128) {
        iVar5 = *(int *)(this + 0xcc) + *(int *)(this + 0xb0) + local_128;
      }
      else {
        iVar5 = *(int *)(this + 0xcc) + *(int *)(this + 0xb0) * 2 + iVar5;
      }
      *(int *)(this + 0xd4) = iVar5;
      if (*(int *)(this + 0x1b8) != 0) {
        local_24.left = *(LONG *)(this + 0xcc);
        local_24.top = *(LONG *)(this + 0xd0);
        local_24.right = *(LONG *)(this + 0xd4);
        local_24.bottom = *(LONG *)(this + 0xd8);
        InflateRect(&local_24,-1,-1);
        local_24.top = (local_24.bottom - local_f0) + 1;
        local_24.left = local_24.right - local_f0;
        local_24.bottom = local_24.bottom + -1;
        local_24.right = local_24.right + -1;
        *(LONG *)(this + 0x188) = local_24.left;
        *(LONG *)(this + 0x18c) = local_24.top;
        *(LONG *)(this + 400) = local_24.right;
        *(LONG *)(this + 0x194) = local_24.bottom;
      }
      if (*(int *)(this + 0x60) != 0) {
        *(undefined4 *)(this + 0xbc) = *(undefined4 *)(this + 0xcc);
        *(undefined4 *)(this + 0xc0) = *(undefined4 *)(this + 0xd0);
        *(undefined4 *)(this + 0xc4) = *(undefined4 *)(this + 0xd4);
        *(undefined4 *)(this + 200) = *(undefined4 *)(this + 0xd8);
        *(int *)(this + 0xc0) = (*(int *)(this + 200) - local_f0) + -1;
      }
      goto LAB_100e0c78;
    }
    pcVar7 = *(code **)(*(int *)this + 0xf0);
  }
  else {
    pcVar7 = *(code **)(*(int *)this + 0xf4);
  }
  guard_check_icall(param_1,param_2);
  (*pcVar7)();
LAB_100e0c78:
  FUN_10154478();
  return;
LAB_100dff6e:
  ShowDefaultButton(this,(CDC *)local_cc);
  local_8 = 10;
  local_148[0] = CMap<int,int,int,int>::vftable;
  CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)local_148);
  goto LAB_100e0c78;
}

