// rea decompile_all
// name: FUN_004fe7bc
// address: 0x4fe7bc
// body: available
// range: 0x4fe7bc-0x4ff521 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4ff51d to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fe7bc(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5,
                 undefined4 param_6)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  undefined4 uVar6;
  BOOL BVar7;
  HWND pHVar8;
  CWnd *pCVar9;
  CPaneContainer *in_ECX;
  undefined4 *puVar10;
  float10 fVar11;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 fVar12;
  float10 fVar13;
  float10 extraout_ST1;
  tagRECT *ptVar14;
  int local_d4;
  int local_d0;
  CPaneContainer *local_cc;
  int local_c8;
  int local_c4;
  undefined4 local_c0;
  int local_bc;
  undefined8 local_b8;
  int local_b0;
  undefined4 *local_ac;
  int *local_a8;
  double local_a4;
  int local_9c;
  tagRECT local_98;
  tagRECT local_88;
  tagRECT local_78;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  tagRECT local_58;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  tagRECT local_38;
  tagRECT local_28;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_ac = param_5;
  local_c0 = param_6;
  local_38.left = 0;
  local_38.top = 0;
  local_38.right = 0;
  local_38.bottom = 0;
  local_cc = in_ECX;
  SetRectEmpty(&local_38);
  local_78.left = 0;
  local_78.top = 0;
  local_78.right = 0;
  local_78.bottom = 0;
  SetRectEmpty(&local_78);
  iVar3 = CPaneContainerManager::IsAutoHideMode(*(CPaneContainerManager **)(in_ECX + 0x1c));
  local_9c = iVar3;
  if ((*(CWnd **)(in_ECX + 0xc) != (CWnd *)0x0) &&
     ((uVar4 = CWnd::GetExStyle(*(CWnd **)(in_ECX + 0xc)), (uVar4 & 0x10000000) != 0 || (iVar3 != 0)
      ))) {
    GetWindowRect(*(HWND *)(*(int *)(in_ECX + 0xc) + 0x20),&local_78);
  }
  pcVar1 = *(code **)(*(int *)in_ECX + 0xc);
  guard_check_icall(&local_38,0);
  (*pcVar1)();
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  SetRectEmpty(&local_28);
  local_58.left = 0;
  local_58.top = 0;
  local_58.right = 0;
  local_58.bottom = 0;
  SetRectEmpty(&local_58);
  local_c8 = 0;
  local_c4 = 0;
  local_d4 = 0;
  local_d0 = 0;
  if ((*(CWnd **)(in_ECX + 4) != (CWnd *)0x0) &&
     ((uVar4 = CWnd::GetExStyle(*(CWnd **)(in_ECX + 4)), (uVar4 & 0x10000000) != 0 || (iVar3 != 0)))
     ) {
    GetWindowRect(*(HWND *)(*(int *)(in_ECX + 4) + 0x20),&local_28);
    pcVar1 = *(code **)(**(int **)(in_ECX + 4) + 0x270);
    guard_check_icall(&local_c8);
    (*pcVar1)();
    iVar3 = local_9c;
  }
  if ((*(CPaneContainer **)(in_ECX + 0x10) != (CPaneContainer *)0x0) &&
     ((iVar5 = CPaneContainer::IsVisible(*(CPaneContainer **)(in_ECX + 0x10)), iVar5 != 0 ||
      (iVar3 != 0)))) {
    pcVar1 = *(code **)(**(int **)(in_ECX + 0x10) + 0xc);
    guard_check_icall(&local_28,0);
    (*pcVar1)();
    pcVar1 = *(code **)(**(int **)(in_ECX + 0x10) + 0x10);
    guard_check_icall(&local_c8);
    (*pcVar1)();
  }
  if ((*(CWnd **)(in_ECX + 8) != (CWnd *)0x0) &&
     ((uVar4 = CWnd::GetExStyle(*(CWnd **)(in_ECX + 8)), (uVar4 & 0x10000000) != 0 ||
      (local_9c != 0)))) {
    GetWindowRect(*(HWND *)(*(int *)(in_ECX + 8) + 0x20),&local_58);
    pcVar1 = *(code **)(**(int **)(in_ECX + 8) + 0x270);
    guard_check_icall(&local_d4);
    (*pcVar1)();
  }
  iVar3 = local_9c;
  if ((*(CPaneContainer **)(in_ECX + 0x14) != (CPaneContainer *)0x0) &&
     ((iVar5 = CPaneContainer::IsVisible(*(CPaneContainer **)(in_ECX + 0x14)), iVar5 != 0 ||
      (iVar3 != 0)))) {
    pcVar1 = *(code **)(**(int **)(in_ECX + 0x14) + 0xc);
    guard_check_icall(&local_58,0);
    (*pcVar1)();
    pcVar1 = *(code **)(**(int **)(in_ECX + 0x14) + 0x10);
    guard_check_icall(&local_d4);
    (*pcVar1)();
  }
  local_a8 = (int *)(uint)(local_9c == 0);
  iVar3 = CPaneContainer::IsLeftPartEmpty(in_ECX,(int)local_a8);
  piVar2 = local_a8;
  if ((iVar3 == 0) && (iVar3 = CPaneContainer::IsRightPartEmpty(in_ECX,(int)local_a8), iVar3 != 0))
  {
    if (*(int **)(in_ECX + 4) != (int *)0x0) {
      if ((param_3 - param_1 < local_c8) && (DAT_00616244 != 0)) {
        param_3 = param_1 + local_c8;
      }
      if ((param_4 - param_2 < local_c4) && (DAT_00616244 != 0)) {
        param_4 = param_2 + local_c4;
      }
      pcVar1 = *(code **)(**(int **)(in_ECX + 4) + 0x234);
      guard_check_icall(&param_1,local_c0,*local_ac);
      uVar6 = (*pcVar1)();
      *local_ac = uVar6;
    }
    local_a8 = *(int **)(in_ECX + 0x10);
    if (local_a8 == (int *)0x0) goto LAB_004ff50a;
    iVar3 = *local_a8;
    guard_check_icall(param_1,param_2,param_3,param_4,local_ac,local_c0);
  }
  else {
    iVar3 = CPaneContainer::IsLeftPartEmpty(in_ECX,(int)piVar2);
    if ((iVar3 == 0) || (iVar3 = CPaneContainer::IsRightPartEmpty(in_ECX,(int)piVar2), iVar3 != 0))
    {
      iVar3 = CPaneContainer::IsLeftPartEmpty(in_ECX,(int)piVar2);
      if ((iVar3 != 0) || (iVar3 = CPaneContainer::IsRightPartEmpty(in_ECX,(int)piVar2), iVar3 != 0)
         ) goto LAB_004ff50a;
      local_18 = param_1;
      local_14 = param_2;
      local_10 = param_3;
      local_c = param_4;
      local_48 = param_1;
      local_44 = param_2;
      local_40 = param_3;
      local_3c = param_4;
      local_68 = param_1;
      local_64 = param_2;
      local_60 = param_3;
      local_5c = param_4;
      if (*(int *)(in_ECX + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00429127();
      }
      iVar5 = CPaneContainer::IsPaneDividerHorz(in_ECX);
      iVar3 = -1;
      local_bc = 100;
      local_9c = -1;
      if (iVar5 == 0) {
        if ((local_38.right - local_38.left <
             ((local_58.right - local_58.left) - local_28.left) + local_28.right) ||
           (BVar7 = IsRectEmpty(&local_28), BVar7 != 0)) {
LAB_004ff01b:
          iVar5 = local_38.right - local_38.left;
          if (local_28.right - local_28.left == iVar5) {
            local_9c = 0x32;
            if (*(int *)(in_ECX + 8) == 0) {
              if (*(int *)(in_ECX + 0x14) != 0) {
                local_9c = *(int *)(*(int *)(in_ECX + 0x14) + 0x20);
                goto LAB_004ff046;
              }
            }
            else {
              local_9c = *(int *)(*(int *)(in_ECX + 8) + 0x2d0);
LAB_004ff046:
              if ((local_9c == local_bc) || (local_9c == 0)) {
                local_9c = 0x32;
              }
            }
            local_28.right =
                 ((local_38.right - (iVar5 * local_9c) / local_bc) - local_38.left) + local_28.left;
            local_9c = local_bc - local_9c;
            iVar3 = local_9c;
          }
          else {
            if (local_58.right - local_58.left != iVar5) goto LAB_004ff0dc;
            local_9c = 0x32;
            if (*(int *)(in_ECX + 4) == 0) {
              if (*(int *)(in_ECX + 0x10) != 0) {
                local_9c = *(int *)(*(int *)(in_ECX + 0x10) + 0x20);
                goto LAB_004ff0aa;
              }
            }
            else {
              local_9c = *(int *)(*(int *)(in_ECX + 4) + 0x2d0);
LAB_004ff0aa:
              if ((local_9c == local_bc) || (local_9c == 0)) {
                local_9c = 0x32;
              }
            }
            local_28.right = (iVar5 * local_9c) / local_bc + local_28.left;
            iVar3 = local_9c;
          }
        }
        else {
          BVar7 = IsRectEmpty(&local_58);
          if (BVar7 != 0) goto LAB_004ff01b;
        }
LAB_004ff0dc:
        iVar5 = local_28.right - local_28.left;
        local_b0 = local_38.right - local_38.left;
        local_a8 = (int *)(((local_38.left - local_38.right) - param_1) + param_3);
        local_b8 = (double)CONCAT44(iVar5,(undefined4)local_b8);
        fVar12 = (float10)local_b0;
        fVar11 = (float10)100.0;
        fVar13 = ((float10)iVar5 / fVar12) * fVar11;
        local_a4 = (double)fVar13;
        if ((fVar13 == fVar11) || ((float10)0 == fVar13)) {
          local_a4 = 50.0;
        }
        if (DAT_006173ac == 0) {
          if (DAT_006173b0 == 0) {
            if (((int)local_a8 < 1) && (-1 < (int)local_a8)) goto LAB_004ff27f;
            goto LAB_004ff268;
          }
          local_10 = local_18 + iVar5;
          pHVar8 = GetCapture();
          pCVar9 = CWnd::FromHandle(pHVar8);
          if (pCVar9 != *(CWnd **)(in_ECX + 0xc)) {
            local_98.left = local_78.left;
            ptVar14 = &local_98;
            local_98.top = local_78.top;
            local_98.right = local_78.right;
            local_98.bottom = local_78.bottom;
            pHVar8 = GetParent(*(HWND *)(*(CWnd **)(in_ECX + 0xc) + 0x20));
            pCVar9 = CWnd::FromHandle(pHVar8);
            CWnd::ScreenToClient(pCVar9,ptVar14);
            local_10 = local_98.left;
          }
          fVar12 = (float10)(local_38.right - local_38.left);
          local_b8 = (double)CONCAT44(local_10 - local_18,(undefined4)local_b8);
          local_a4 = (double)((float10)(local_10 - local_18) / fVar12);
          fVar11 = (float10)100.0;
        }
        else if (local_a8 == (int *)0x0) {
LAB_004ff27f:
          local_10 = iVar5 + local_18;
          if (iVar3 != -1) {
            local_a4 = (double)local_9c;
          }
        }
        else {
LAB_004ff268:
          local_b8 = (double)(int)local_a8;
          iVar3 = FUN_0055bce0();
          local_10 = ((local_28.right - iVar3) - local_28.left) + local_18;
          fVar11 = extraout_ST0_01;
          fVar12 = extraout_ST1;
        }
        local_60 = *(int *)(*(int *)(in_ECX + 0xc) + 0x118) + local_10;
        local_68 = local_10;
        local_48 = local_60;
        if (DAT_00616244 != 0) {
          iVar5 = (local_18 - local_10) + local_c8;
          iVar3 = (local_60 - local_40) + local_d4;
          local_60 = *(int *)(*(int *)(in_ECX + 0xc) + 0x118);
          if (iVar5 < 1) {
            if (0 < iVar3) {
              local_10 = local_10 - iVar3;
              if (local_10 - local_18 < local_c8) goto LAB_004ff320;
LAB_004ff323:
              local_48 = local_60 + local_10;
              goto LAB_004ff32c;
            }
          }
          else {
            if (0 < iVar3) {
LAB_004ff320:
              local_10 = local_18 + local_c8;
              goto LAB_004ff323;
            }
            local_10 = local_10 + iVar5;
            local_48 = local_60 + local_10;
            if (local_d4 <= local_40 - local_48) goto LAB_004ff32f;
LAB_004ff32c:
            local_40 = local_48 + local_d4;
          }
LAB_004ff32f:
          local_60 = local_60 + local_10;
          local_b8 = (double)CONCAT44(local_10 - local_18,(undefined4)local_b8);
          local_a4 = (double)(fVar11 * ((float10)(local_10 - local_18) / fVar12));
          in_ECX = local_cc;
          local_68 = local_10;
          if (local_c - local_14 < local_c4) {
            local_c = local_14 + local_c4;
            local_3c = local_44 + local_c4;
          }
        }
      }
      else {
        if (((local_38.bottom - local_38.top <
              ((local_58.bottom - local_58.top) - local_28.top) + local_28.bottom) ||
            (BVar7 = IsRectEmpty(&local_28), BVar7 != 0)) ||
           (BVar7 = IsRectEmpty(&local_58), BVar7 != 0)) {
          iVar5 = local_38.bottom - local_38.top;
          iVar3 = 0x32;
          local_9c = 0x32;
          if (local_28.bottom - local_28.top == iVar5) {
            if (*(int *)(in_ECX + 8) == 0) {
              if (*(int *)(in_ECX + 0x14) != 0) {
                iVar3 = *(int *)(*(int *)(in_ECX + 0x14) + 0x20);
                goto LAB_004fec6f;
              }
            }
            else {
              iVar3 = *(int *)(*(int *)(in_ECX + 8) + 0x2d0);
LAB_004fec6f:
              if ((iVar3 == local_bc) || (iVar3 == 0)) {
                iVar3 = 0x32;
              }
            }
            local_28.bottom =
                 ((local_38.bottom - (iVar5 * iVar3) / local_bc) - local_38.top) + local_28.top;
            local_9c = local_bc - iVar3;
            iVar3 = local_9c;
          }
          else {
            if (local_58.bottom - local_58.top != iVar5) goto LAB_004fecf8;
            if (*(int *)(in_ECX + 4) == 0) {
              if (*(int *)(in_ECX + 0x10) != 0) {
                local_9c = *(int *)(*(int *)(in_ECX + 0x10) + 0x20);
                goto LAB_004fecc7;
              }
            }
            else {
              local_9c = *(int *)(*(int *)(in_ECX + 4) + 0x2d0);
LAB_004fecc7:
              if ((local_9c == local_bc) || (local_9c == 0)) {
                local_9c = 0x32;
              }
            }
            local_28.bottom = (iVar5 * local_9c) / local_bc + local_28.top;
            iVar3 = local_9c;
          }
        }
LAB_004fecf8:
        local_a8 = (int *)(((local_38.top - local_38.bottom) - param_2) + param_4);
        fVar11 = (float10)(local_38.bottom - local_38.top);
        local_b0 = local_28.bottom - local_28.top;
        fVar12 = ((float10)local_b0 / fVar11) * (float10)100.0;
        local_a4 = (double)fVar12;
        if ((fVar12 == (float10)100.0) || ((float10)0 == fVar12)) {
          local_a4 = 50.0;
        }
        if (DAT_006173ac == 0) {
          if (DAT_006173b0 == 0) {
            if ((int)local_a8 < 1) {
              if (-1 < (int)local_a8) goto LAB_004feec5;
              goto LAB_004feea2;
            }
            local_b8 = (double)(int)local_a8;
            iVar3 = FUN_0055bce0();
            local_c = ((local_14 - iVar3) - local_28.top) + local_28.bottom;
            fVar11 = extraout_ST0;
          }
          else {
            local_c = (local_14 - local_28.top) + local_28.bottom;
            pHVar8 = GetCapture();
            pCVar9 = CWnd::FromHandle(pHVar8);
            if (pCVar9 != *(CWnd **)(in_ECX + 0xc)) {
              local_88.left = local_78.left;
              ptVar14 = &local_88;
              local_88.top = local_78.top;
              local_88.right = local_78.right;
              local_88.bottom = local_78.bottom;
              pHVar8 = GetParent(*(HWND *)(*(CWnd **)(in_ECX + 0xc) + 0x20));
              pCVar9 = CWnd::FromHandle(pHVar8);
              CWnd::ScreenToClient(pCVar9,ptVar14);
              local_c = local_88.top;
            }
            fVar11 = (float10)(local_38.bottom - local_38.top);
            local_b0 = local_c - local_14;
            local_a4 = (double)((float10)local_b0 / fVar11);
          }
        }
        else if (local_a8 == (int *)0x0) {
LAB_004feec5:
          local_c = (local_14 - local_28.top) + local_28.bottom;
          if (iVar3 != -1) {
            local_a4 = (double)local_9c;
          }
        }
        else {
LAB_004feea2:
          local_b8 = (double)(int)local_a8;
          iVar3 = FUN_0055bce0();
          local_c = ((local_14 - iVar3) - local_28.top) + local_28.bottom;
          fVar11 = extraout_ST0_00;
        }
        local_5c = *(int *)(*(int *)(in_ECX + 0xc) + 0x118) + local_c;
        local_64 = local_c;
        local_44 = local_5c;
        if (DAT_00616244 != 0) {
          iVar5 = (local_14 - local_c) + local_c4;
          iVar3 = (local_5c - local_3c) + local_d0;
          local_5c = *(int *)(*(int *)(in_ECX + 0xc) + 0x118);
          if (iVar5 < 1) {
            if (0 < iVar3) {
              local_c = local_c - iVar3;
              if (local_c - local_14 < local_c4) goto LAB_004fef6b;
LAB_004fef6e:
              local_44 = local_5c + local_c;
              goto LAB_004fef77;
            }
          }
          else {
            if (0 < iVar3) {
LAB_004fef6b:
              local_c = local_14 + local_c4;
              goto LAB_004fef6e;
            }
            local_c = local_c + iVar5;
            local_44 = local_5c + local_c;
            if (local_d0 <= local_3c - local_44) goto LAB_004fef7a;
LAB_004fef77:
            local_3c = local_44 + local_d0;
          }
LAB_004fef7a:
          local_5c = local_5c + local_c;
          local_b0 = local_c - local_14;
          local_a4 = (double)((float10)100.0 * ((float10)local_b0 / fVar11));
          in_ECX = local_cc;
          local_64 = local_c;
          if (local_10 - local_18 < local_c8) {
            local_10 = local_18 + local_c8;
            local_40 = local_48 + local_c8;
          }
        }
      }
      puVar10 = local_ac;
      if (*(int **)(in_ECX + 4) != (int *)0x0) {
        pcVar1 = *(code **)(**(int **)(in_ECX + 4) + 0x234);
        guard_check_icall(&local_18,local_c0,*local_ac);
        uVar6 = (*pcVar1)();
        puVar10 = local_ac;
        *local_ac = uVar6;
        uVar6 = FUN_0055bce0();
        *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2d0) = uVar6;
      }
      piVar2 = *(int **)(in_ECX + 0x10);
      local_b8 = (double)CONCAT44(piVar2,(undefined4)local_b8);
      if (piVar2 != (int *)0x0) {
        iVar3 = *piVar2;
        guard_check_icall(local_18,local_14,local_10,local_c,puVar10,local_c0);
        (**(code **)(iVar3 + 0x48))();
        uVar6 = FUN_0055bce0();
        *(undefined4 *)(*(int *)(local_cc + 0x10) + 0x20) = uVar6;
        in_ECX = local_cc;
      }
      puVar10 = local_ac;
      if (*(int **)(in_ECX + 8) != (int *)0x0) {
        pcVar1 = *(code **)(**(int **)(in_ECX + 8) + 0x234);
        guard_check_icall(&local_48,local_c0,*local_ac);
        uVar6 = (*pcVar1)();
        puVar10 = local_ac;
        *local_ac = uVar6;
        iVar3 = FUN_0055bce0();
        *(int *)(*(int *)(in_ECX + 8) + 0x2d0) = local_bc - iVar3;
      }
      piVar2 = *(int **)(in_ECX + 0x14);
      local_b8 = (double)CONCAT44(piVar2,(undefined4)local_b8);
      if (piVar2 != (int *)0x0) {
        iVar3 = *piVar2;
        guard_check_icall(local_48,local_44,local_40,local_3c,puVar10,local_c0);
        (**(code **)(iVar3 + 0x48))();
        iVar3 = FUN_0055bce0();
        *(int *)(*(int *)(local_cc + 0x14) + 0x20) = local_bc - iVar3;
        in_ECX = local_cc;
      }
      uVar4 = CWnd::GetExStyle(*(CWnd **)(in_ECX + 0xc));
      puVar10 = local_ac;
      if ((uVar4 & 0x10000000) != 0) {
        pcVar1 = *(code **)(**(int **)(in_ECX + 0xc) + 0x234);
        guard_check_icall(&local_68,local_c0,*local_ac);
        uVar6 = (*pcVar1)();
        *puVar10 = uVar6;
      }
      goto LAB_004ff50a;
    }
    if (*(int **)(in_ECX + 8) != (int *)0x0) {
      if ((param_3 - param_1 < local_d4) && (DAT_00616244 != 0)) {
        param_3 = local_d4 + param_1;
      }
      if ((param_4 - param_2 < local_d0) && (DAT_00616244 != 0)) {
        param_4 = local_d0 + param_2;
      }
      pcVar1 = *(code **)(**(int **)(in_ECX + 8) + 0x234);
      guard_check_icall(&param_1,local_c0,*local_ac);
      uVar6 = (*pcVar1)();
      *local_ac = uVar6;
    }
    local_a8 = *(int **)(in_ECX + 0x14);
    if (local_a8 == (int *)0x0) goto LAB_004ff50a;
    iVar3 = *local_a8;
    guard_check_icall(param_1,param_2,param_3,param_4,local_ac,local_c0);
  }
  (**(code **)(iVar3 + 0x48))();
LAB_004ff50a:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

