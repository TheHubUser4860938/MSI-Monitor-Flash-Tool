// rea decompile_all
// name: CMFCTabCtrl::AdjustTabs
// address: 0x100a46db
// body: available
// range: 0x100a46db-0x100a5102 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100a480a to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCTabCtrl::AdjustTabs(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCTabCtrl::AdjustTabs(CMFCTabCtrl *this)

{
  code *pcVar1;
  CToolTipCtrl *pCVar2;
  bool bVar3;
  CMFCTabCtrl *pCVar4;
  int iVar5;
  int *piVar6;
  LRESULT LVar7;
  AFX_GLOBAL_DATA *pAVar8;
  undefined4 *puVar9;
  LPRECT ptVar10;
  tagRECT *ptVar11;
  CMFCVisualManager *pCVar12;
  BOOL BVar13;
  LPRECT ptVar14;
  LPRECT ptVar15;
  int iVar16;
  CClientDC local_bc [20];
  LPRECT local_a8;
  CPen *local_a4;
  int local_9c;
  CMFCTabCtrl *local_98;
  LPRECT local_94;
  LPRECT local_90;
  LPRECT local_8c;
  int local_88;
  int local_84;
  LPRECT local_80;
  int local_7c;
  int local_78;
  tagRECT local_74;
  undefined1 local_64 [8];
  LONG local_5c;
  LONG local_58;
  RECT local_54;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xac;
  local_8 = 0x100a46ea;
  local_a8 = (LPRECT)(this + 0x200);
  iVar16 = 0;
  *(undefined4 *)(this + 0x294) = 0;
  local_98 = this;
  SetRectEmpty(local_a8);
  pcVar1 = *(code **)(*(int *)this + 0x1a4);
  guard_check_icall();
  local_94 = (LPRECT)(*pcVar1)();
  if (local_94 != (LPRECT)0x0) {
    pcVar1 = *(code **)(*(int *)this + 0x17c);
    guard_check_icall();
    iVar5 = (*pcVar1)();
    if (iVar5 != 0) {
      if ((*(int *)(this + 300) == 0) || (1 < (int)local_94)) {
        iVar16 = *(int *)(this + 0xfc);
        if ((iVar16 != 0) &&
           ((*(int *)(iVar16 + 0x20) != 0 &&
            (LVar7 = SendMessageW(*(HWND *)(iVar16 + 0x20),0x40d,0,0), LVar7 == 0)))) {
          local_64._0_4_ = 0;
          local_64._4_4_ = 0;
          local_5c = 0;
          local_58 = 0;
          CToolTipCtrl::AddTool
                    (*(CToolTipCtrl **)(this + 0xfc),(CWnd *)this,(wchar_t *)0xffffffff,
                     (tagRECT *)local_64,1);
        }
        local_54.left = 0;
        local_54.top = 0;
        local_54.right = 0;
        local_54.bottom = 0;
        CClientDC::CClientDC(local_bc,(CWnd *)this);
        local_8 = 0;
        pAVar8 = GetGlobalData();
        local_a4 = CDC::SelectObject((CDC *)local_bc,(CPen *)(pAVar8 + 300));
        if (local_a4 == (CPen *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_1004886a();
        }
        local_84 = *(int *)(this + 0x2dc) - *(int *)(this + 0x2a4);
        *(undefined4 *)(this + 0x2ac) = 0;
        local_88 = 0;
        if (0 < *(int *)(this + 0xbc)) {
          do {
            iVar16 = 0;
            iVar5 = local_88;
            if (*(int *)(this + 0xb0) == *(int *)(this + 0xbc)) {
              piVar6 = (int *)FUN_10151a1d(local_88);
              iVar5 = *piVar6;
            }
            local_7c = iVar5;
            puVar9 = (undefined4 *)FUN_10151a1d(iVar5);
            local_78 = 0;
            ptVar10 = (LPRECT)*puVar9;
            if ((ptVar10->bottom != 0) || (ptVar10->right != -1)) {
              local_78 = *(int *)(this + 0xd4);
              local_9c = *(int *)(this + 0xd8);
            }
            local_90 = ptVar10;
            if ((*(int *)(this + 0x288) != 0) &&
               (((*(int *)(this + 0x254) != 0 || (*(int *)(this + 600) != 0)) ||
                (local_7c == *(int *)(this + 0xc0))))) {
              pAVar8 = GetGlobalData();
              CDC::SelectObject((CDC *)local_bc,(CPen *)(pAVar8 + 300));
            }
            local_80 = (LPRECT)0x0;
            if (ptVar10[3].top == 0) {
              ptVar10[2].top = 0;
            }
            else {
              if (ptVar10[3].bottom == 0) {
                piVar6 = (int *)CDC::GetTextExtent((CDC *)local_bc,
                                                   (
                                                  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                                  *)&local_5c);
                iVar16 = *piVar6;
              }
              local_8c = (LPRECT)(local_78 + iVar16 + DAT_10205acc * 2 + DAT_10205ad0);
              ptVar10[2].top = (LONG)local_8c;
              if (*(int *)(this + 0x25c) == 0) {
                if (*(int *)(this + 0x254) == 0) {
                  if (*(int *)(this + 600) == 0) goto LAB_100a499a;
                  iVar16 = *(int *)(this + 0x2e8) - *(int *)(this + 0x2e0);
                }
                else {
                  iVar16 = DAT_10205ad0 * 2 + (*(int *)(this + 0x2e8) - *(int *)(this + 0x2e0));
                }
                ptVar10[2].top = (int)&local_8c->left + iVar16;
                local_80 = (LPRECT)(((*(int *)(this + 0x2e8) - *(int *)(this + 0x2e0)) -
                                    DAT_10205ad0) + -1);
              }
              else {
                ptVar10[2].top =
                     (int)&local_8c->left + (*(int *)(this + 0x2e8) - *(int *)(this + 0x2e0)) / 2;
                local_80 = (LPRECT)((*(int *)(this + 0x2e8) - *(int *)(this + 0x2e0)) / 2);
              }
LAB_100a499a:
              if ((*(int *)(this + 0x28c) != 0) && (local_7c == *(int *)(this + 0xc0))) {
                ptVar10[2].top =
                     ptVar10[2].top + (*(int *)(this + 0x2e8) - *(int *)(this + 0x2e0)) + -2;
              }
            }
            if ((*(int *)(this + 0x288) != 0) && (local_7c == *(int *)(this + 0xc0))) {
              pAVar8 = GetGlobalData();
              CDC::SelectObject((CDC *)local_bc,(CPen *)(pAVar8 + 0x11c));
            }
            ptVar15 = local_90;
            local_78 = ptVar10[2].top;
            local_24.right = local_78;
            if ((*(int *)(this + 0x264) != 0) &&
               ((local_24.right = *(LONG *)(this + 0x2b8), local_24.right < 1 ||
                (local_78 < local_24.right)))) {
              local_24.right = local_78;
            }
            local_24.top = *(LONG *)(this + 0x2e0);
            local_24.right = local_24.right + local_84;
            local_24.left = local_84;
            local_24.bottom = local_24.top + (*(int *)(this + 0x2e8) - *(int *)(this + 0x2e0)) + -2;
            ptVar14 = ptVar10 + 1;
            ptVar14->left = local_84;
            ptVar10[1].top = local_24.top;
            ptVar10[1].right = local_24.right;
            ptVar10[1].bottom = local_24.bottom;
            local_8c = ptVar14;
            if (local_90[3].top == 0) {
              pCVar2 = *(CToolTipCtrl **)(this + 0xf8);
              if ((pCVar2 != (CToolTipCtrl *)0x0) && (*(int *)(pCVar2 + 0x20) != 0)) {
                local_34.left = 0;
                local_34.top = 0;
                local_34.right = 0;
                local_34.bottom = 0;
                CToolTipCtrl::SetToolRect(pCVar2,(CWnd *)this,local_90[2].right,&local_34);
              }
            }
            else {
              if (*(int *)(this + 0x90) == 1) {
                OffsetRect(ptVar14,0,2);
                ptVar14 = ptVar15 + 1;
              }
              if ((*(int *)(this + 0x290) != 0) && (*(int *)(this + 0x2e4) < ptVar15[1].right)) {
                if ((local_7c != *(int *)(this + 0xc0)) ||
                   ((local_88 != 0 ||
                    (*(int *)(this + 0x2e4) - ptVar14->left <
                     (int)&local_80->left + DAT_10205acc * 2)))) {
                  ptVar15[2].top = 0;
                  SetRectEmpty(ptVar14);
                  *(undefined4 *)(this + 0x294) = 1;
                  goto LAB_100a4c1b;
                }
                ptVar15[1].right = *(LONG *)(this + 0x2e4);
              }
              if ((*(int *)(this + 0xf8) == 0) || (*(int *)(*(int *)(this + 0xf8) + 0x20) == 0)) {
LAB_100a4bcd:
                ptVar10 = ptVar15 + 1;
              }
              else {
                if ((ptVar15[4].left == 0) && (*(int *)(this + 0x100) == 0)) {
                  bVar3 = false;
                  local_78 = 0;
                }
                else {
                  bVar3 = true;
                  local_78 = 1;
                }
                if ((ptVar14->left < *(int *)(this + 0x2dc)) ||
                   (*(int *)(this + 0x2e4) < ptVar15[1].right)) {
                  bVar3 = true;
                  local_78 = 1;
                }
                if (((*(int *)(this + 0x264) != 0) && (0 < *(int *)(this + 0x2b8))) &&
                   (ptVar14->right - ptVar14->left < ptVar15[2].top)) {
                  bVar3 = true;
                  local_78 = 1;
                }
                if (bVar3) {
                  ptVar11 = &local_74;
                  local_74.left = ptVar14->left;
                  local_74.top = ptVar14->top;
                  local_74.right = ptVar14->right;
                  local_74.bottom = ptVar14->bottom;
                  ptVar15 = local_90;
                }
                else {
                  local_44.left = 0;
                  ptVar11 = &local_44;
                  local_44.top = 0;
                  local_44.right = 0;
                  local_44.bottom = 0;
                }
                CToolTipCtrl::SetToolRect
                          (*(CToolTipCtrl **)(this + 0xf8),(CWnd *)this,ptVar15[2].right,ptVar11);
                if ((local_78 == 0) || (local_7c != *(int *)(this + 0xc0))) goto LAB_100a4bcd;
                local_54.left = local_8c->left;
                local_54.top = local_8c->top;
                local_54.right = local_8c->right;
                local_54.bottom = local_8c->bottom;
                ptVar10 = local_8c;
                ptVar15 = local_90;
              }
              ptVar14 = local_80;
              local_84 = local_84 + 1 + ((ptVar10->right - ptVar10->left) - (int)local_80);
              *(int *)(this + 0x2ac) = *(int *)(this + 0x2ac) + (ptVar10->right - ptVar10->left) + 1
              ;
              iVar16 = FUN_1008a7b0(local_7c);
              if (iVar16 == 0) {
                *(int *)(this + 0x2ac) = *(int *)(this + 0x2ac) - (int)ptVar14;
              }
              if (*(int *)(this + 0x250) != 0) {
                ptVar15[1].right = ptVar15[1].right + *(int *)(this + 0x110) / 2;
              }
            }
LAB_100a4c1b:
            local_88 = local_88 + 1;
          } while (local_88 < *(int *)(this + 0xbc));
        }
        if ((*(int *)(this + 0x264) == 0) && (*(int *)(this + 0x2e4) <= local_84)) {
          local_8c = (LPRECT)(*(int *)(this + 0x2e4) - *(int *)(this + 0x2dc));
          iVar16 = (int)local_8c / (int)local_94 + -1;
          if (*(int *)(this + 0x25c) != 0) {
            if (((int)local_8c - (*(int *)(this + 0x2e8) - *(int *)(this + 0x2e0)) / 3) /
                (int)local_94 <
                (*(int *)(this + 0x2e8) - *(int *)(this + 0x2e0)) / 2 + *(int *)(this + 0xd4)) {
              iVar16 = (*(int *)(this + 0x2e8) - *(int *)(this + 0x2e0)) / 2 + *(int *)(this + 0xd4)
              ;
            }
            else {
              iVar16 = ((int)local_8c - (*(int *)(this + 0x2e8) - *(int *)(this + 0x2e0)) / 3) /
                       (int)local_94;
            }
          }
          local_78 = 0;
          local_80 = local_94;
          local_88 = 0;
          if (0 < *(int *)(this + 0xbc)) {
            do {
              iVar5 = local_88;
              if (*(int *)(this + 0xb0) == *(int *)(this + 0xbc)) {
                piVar6 = (int *)FUN_10151a1d(local_88);
                iVar5 = *piVar6;
              }
              piVar6 = (int *)FUN_10151a1d(iVar5);
              iVar5 = *piVar6;
              if ((*(int *)(iVar5 + 0x34) != 0) && (*(int *)(iVar5 + 0x24) < iVar16)) {
                local_78 = local_78 + (iVar16 - *(int *)(iVar5 + 0x24));
                local_80 = (LPRECT)((int)&local_80[-1].bottom + 3);
              }
              local_88 = local_88 + 1;
            } while (local_88 < *(int *)(this + 0xbc));
          }
          if (0 < (int)local_80) {
            local_8c = (LPRECT)0x0;
            iVar16 = iVar16 + local_78 / (int)local_80;
            local_7c = *(int *)(this + 0x2dc);
            local_84 = iVar16;
            if (0 < *(int *)(this + 0xbc)) {
              do {
                iVar5 = 0;
                ptVar10 = local_8c;
                if (*(int *)(this + 0xb0) == *(int *)(this + 0xbc)) {
                  puVar9 = (undefined4 *)FUN_10151a1d(local_8c);
                  ptVar10 = (LPRECT)*puVar9;
                }
                local_90 = ptVar10;
                piVar6 = (int *)FUN_10151a1d(ptVar10);
                local_88 = *piVar6;
                if (*(int *)(local_88 + 0x34) == 0) {
                  pCVar2 = *(CToolTipCtrl **)(this + 0xf8);
                  if ((pCVar2 != (CToolTipCtrl *)0x0) && (*(int *)(pCVar2 + 0x20) != 0)) {
                    local_44.left = 0;
                    local_44.top = 0;
                    local_44.right = 0;
                    local_44.bottom = 0;
                    CToolTipCtrl::SetToolRect
                              (pCVar2,(CWnd *)this,*(uint *)(local_88 + 0x28),&local_44);
                  }
                }
                else {
                  if ((*(int *)(local_88 + 0xc) != 0) || (*(int *)(local_88 + 8) != -1)) {
                    iVar5 = *(int *)(this + 0xd4);
                  }
                  local_9c = *(int *)(local_88 + 0x24);
                  if (local_9c <= iVar16) {
                    iVar16 = local_9c;
                  }
                  if (local_84 < DAT_10205ad0 + iVar5) {
                    iVar16 = ((*(int *)(this + 0x2e4) + *(int *)(this + 0x10c) * 2) -
                             *(int *)(this + 0x2dc)) / (int)local_94;
                  }
                  else if ((*(int *)(*(int *)(local_88 + 4) + -0xc) == 0) ||
                          (*(int *)(local_88 + 0x3c) != 0)) {
                    iVar16 = iVar5 + DAT_10205acc * 2;
                  }
                  if (*(int *)(this + 0x25c) != 0) {
                    iVar5 = *(int *)(this + 0x2e8) - *(int *)(this + 0x2e0);
                    if (iVar5 < 0) {
                      iVar5 = iVar5 + 1;
                    }
                    iVar16 = iVar16 + (iVar5 >> 1) + -1;
                  }
                  local_34.top = *(LONG *)(this + 0x2e0);
                  local_34.bottom =
                       local_34.top + (*(int *)(this + 0x2e8) - *(int *)(this + 0x2e0)) + -2;
                  local_34.left = local_7c;
                  local_34.right = local_7c + iVar16;
                  local_80 = (LPRECT)(local_88 + 0x10);
                  local_80->left = local_7c;
                  *(LONG *)(local_88 + 0x14) = local_34.top;
                  *(LONG *)(local_88 + 0x18) = local_34.right;
                  *(LONG *)(local_88 + 0x1c) = local_34.bottom;
                  local_7c = local_34.right;
                  if (*(int *)(this + 0x250) == 0) {
                    if (*(int *)(this + 0x90) == 1) {
                      OffsetRect(local_80,0,2);
                    }
                    pCVar2 = *(CToolTipCtrl **)(this + 0xf8);
                    if ((pCVar2 != (CToolTipCtrl *)0x0) && (*(int *)(pCVar2 + 0x20) != 0)) {
                      if ((local_84 < local_9c) ||
                         ((*(int *)(local_88 + 0x40) != 0 || (*(int *)(this + 0x100) != 0)))) {
                        local_9c = 1;
                        ptVar11 = &local_74;
                        local_74.left = local_80->left;
                        local_74.top = local_80->top;
                        local_74.right = local_80->right;
                        local_74.bottom = local_80->bottom;
                        bVar3 = true;
                      }
                      else {
                        bVar3 = false;
                        local_24.left = 0;
                        local_24.top = 0;
                        ptVar11 = &local_24;
                        local_24.right = 0;
                        local_24.bottom = 0;
                      }
                      CToolTipCtrl::SetToolRect
                                (pCVar2,(CWnd *)this,*(uint *)(local_88 + 0x28),ptVar11);
                      if ((bVar3) && (local_90 == *(LPRECT *)(this + 0xc0))) {
                        local_54.left = local_80->left;
                        local_54.top = local_80->top;
                        local_54.right = local_80->right;
                        local_54.bottom = local_80->bottom;
                      }
                    }
                  }
                  if (*(int *)(this + 0x25c) != 0) {
                    local_7c = local_7c - (*(int *)(this + 0x2e8) - *(int *)(this + 0x2e0)) / 2;
                  }
                  iVar16 = local_84;
                  if (0 < local_78) {
                    local_7c = local_7c + 1;
                  }
                }
                local_8c = (LPRECT)((int)&local_8c->left + 1);
              } while ((int)local_8c < *(int *)(this + 0xbc));
            }
          }
        }
        else {
          *(int *)(this + 0x2ac) = *(int *)(this + 0x2ac) + *(int *)(this + 0x110) / 2;
        }
        CDC::SelectObject((CDC *)local_bc,local_a4);
        if ((*(int *)(this + 0x28c) != 0) && (-1 < *(int *)(this + 0xc0))) {
          ptVar10 = (LPRECT)(this + 0x200);
          pcVar1 = *(code **)(*(int *)this + 0x1b8);
          guard_check_icall(*(int *)(this + 0xc0),ptVar10);
          (*pcVar1)();
          ptVar10->left = (*(int *)(this + 0x208) - *(int *)(this + 0x20c)) + *(int *)(this + 0x204)
          ;
          InflateRect(ptVar10,-2,-2);
          pCVar12 = CMFCVisualManager::GetInstance();
          iVar16 = *(int *)(this + 0x90);
          pcVar1 = *(code **)(*(int *)pCVar12 + 0x120);
          guard_check_icall(local_98);
          iVar5 = (*pcVar1)();
          ptVar10 = local_a8;
          OffsetRect(local_a8,-iVar5,(uint)(iVar16 == 1) * 2 + -1);
          pCVar4 = local_98;
          pCVar2 = *(CToolTipCtrl **)(local_98 + 0xfc);
          if ((pCVar2 != (CToolTipCtrl *)0x0) && (*(int *)(pCVar2 + 0x20) != 0)) {
            CToolTipCtrl::SetToolRect(pCVar2,(CWnd *)local_98,1,ptVar10);
            piVar6 = (int *)FUN_10151a1d(*(undefined4 *)(pCVar4 + 0xc0));
            iVar16 = *piVar6;
            if ((((*(int *)(pCVar4 + 0xf8) != 0) && (*(int *)(*(int *)(pCVar4 + 0xf8) + 0x20) != 0))
                && (iVar16 != 0)) && (BVar13 = IsRectEmpty(&local_54), BVar13 == 0)) {
              local_54.right = ptVar10->left + -1;
              CToolTipCtrl::SetToolRect
                        (*(CToolTipCtrl **)(pCVar4 + 0xf8),(CWnd *)pCVar4,*(uint *)(iVar16 + 0x28),
                         &local_54);
            }
          }
        }
        CClientDC::~CClientDC(local_bc);
      }
      else if (0 < *(int *)(this + 0xbc)) {
        do {
          piVar6 = (int *)FUN_10151a1d(iVar16);
          SetRectEmpty((LPRECT)(*piVar6 + 0x10));
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(this + 0xbc));
      }
    }
  }
  FUN_1017f5f4();
  return;
}

