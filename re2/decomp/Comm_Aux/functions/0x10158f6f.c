// rea decompile_all
// name: FUN_10158f6f
// address: 0x10158f6f
// body: available
// range: 0x10158f6f-0x101593d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101593cf to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10158f6f(void)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  CPaneContainer *in_ECX;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 local_4c;
  double local_44;
  uint local_3c;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  SetRectEmpty(&local_28);
  uVar2 = CPaneContainerManager::IsAutoHideMode(*(CPaneContainerManager **)(in_ECX + 0x1c));
  pcVar1 = *(code **)(*(int *)in_ECX + 0xc);
  local_3c = uVar2;
  guard_check_icall(&local_28,0);
  (*pcVar1)();
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  SetRectEmpty(&local_18);
  local_38.left = 0;
  local_38.top = 0;
  local_38.right = 0;
  local_38.bottom = 0;
  SetRectEmpty(&local_38);
  local_54 = 0;
  local_50 = 0;
  local_5c = 0;
  local_58 = 0;
  if ((*(CWnd **)(in_ECX + 4) != (CWnd *)0x0) &&
     ((uVar3 = CWnd::GetExStyle(*(CWnd **)(in_ECX + 4)), (uVar3 & 0x10000000) != 0 || (uVar2 != 0)))
     ) {
    GetWindowRect(*(HWND *)(*(int *)(in_ECX + 4) + 0x20),&local_18);
    pcVar1 = *(code **)(**(int **)(in_ECX + 4) + 0x270);
    guard_check_icall(&local_54);
    (*pcVar1)();
    uVar2 = local_3c;
  }
  if ((*(CPaneContainer **)(in_ECX + 0x10) != (CPaneContainer *)0x0) &&
     ((iVar4 = CPaneContainer::IsVisible(*(CPaneContainer **)(in_ECX + 0x10)), iVar4 != 0 ||
      (uVar2 != 0)))) {
    pcVar1 = *(code **)(**(int **)(in_ECX + 0x10) + 0xc);
    guard_check_icall(&local_18,0);
    (*pcVar1)();
    pcVar1 = *(code **)(**(int **)(in_ECX + 0x10) + 0x10);
    guard_check_icall(&local_54);
    (*pcVar1)();
  }
  if ((*(CWnd **)(in_ECX + 8) != (CWnd *)0x0) &&
     ((uVar3 = CWnd::GetExStyle(*(CWnd **)(in_ECX + 8)), (uVar3 & 0x10000000) != 0 ||
      (local_3c != 0)))) {
    GetWindowRect(*(HWND *)(*(int *)(in_ECX + 8) + 0x20),&local_38);
    pcVar1 = *(code **)(**(int **)(in_ECX + 8) + 0x270);
    guard_check_icall(&local_5c);
    (*pcVar1)();
  }
  uVar2 = local_3c;
  if ((*(CPaneContainer **)(in_ECX + 0x14) != (CPaneContainer *)0x0) &&
     ((iVar4 = CPaneContainer::IsVisible(*(CPaneContainer **)(in_ECX + 0x14)), iVar4 != 0 ||
      (uVar2 != 0)))) {
    pcVar1 = *(code **)(**(int **)(in_ECX + 0x14) + 0xc);
    guard_check_icall(&local_38,0);
    (*pcVar1)();
    pcVar1 = *(code **)(**(int **)(in_ECX + 0x14) + 0x10);
    guard_check_icall(&local_5c);
    (*pcVar1)();
  }
  local_3c = (uint)(local_3c == 0);
  iVar4 = FID_conflict_IsLeftPartEmpty(local_3c);
  uVar2 = local_3c;
  if ((iVar4 == 0) && (iVar4 = FID_conflict_IsLeftPartEmpty(local_3c), iVar4 != 0)) {
    iVar4 = 100;
    if (*(int *)(in_ECX + 4) != 0) {
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x2d0) = 100;
    }
    if (*(int *)(in_ECX + 0x10) == 0) goto LAB_101593be;
    FUN_10158f6f();
    iVar6 = *(int *)(in_ECX + 0x10);
  }
  else {
    iVar4 = FID_conflict_IsLeftPartEmpty(uVar2);
    if ((iVar4 == 0) || (iVar4 = FID_conflict_IsLeftPartEmpty(uVar2), iVar4 != 0)) {
      iVar4 = FID_conflict_IsLeftPartEmpty(uVar2);
      if ((iVar4 != 0) || (iVar4 = FID_conflict_IsLeftPartEmpty(uVar2), iVar4 != 0))
      goto LAB_101593be;
      if (*(int *)(in_ECX + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1004886a();
      }
      iVar4 = CPaneContainer::IsPaneDividerHorz(in_ECX);
      local_3c = 0xffffffff;
      if (iVar4 == 0) {
        iVar4 = local_28.right - local_28.left;
        local_4c = (double)CONCAT44(iVar4,(undefined4)local_4c);
        if (iVar4 < ((local_38.right - local_38.left) - local_18.left) + local_18.right) {
          if (local_18.right - local_18.left == iVar4) {
            local_3c = 0x32;
            if (*(int *)(in_ECX + 8) == 0) {
              if (*(int *)(in_ECX + 0x14) != 0) {
                local_3c = *(int *)(*(int *)(in_ECX + 0x14) + 0x20);
              }
            }
            else {
              local_3c = *(int *)(*(int *)(in_ECX + 8) + 0x2d0);
            }
            local_18.right = (local_28.right - (int)(local_3c * iVar4) / 100) - local_28.left;
            local_3c = 100 - local_3c;
          }
          else {
            if (local_38.right - local_38.left != iVar4) goto LAB_10159328;
            local_3c = 0x32;
            if (*(int *)(in_ECX + 4) == 0) {
              if (*(int *)(in_ECX + 0x10) != 0) {
                local_3c = *(uint *)(*(int *)(in_ECX + 0x10) + 0x20);
              }
            }
            else {
              local_3c = *(uint *)(*(int *)(in_ECX + 4) + 0x2d0);
            }
            local_18.right = (int)(iVar4 * local_3c) / 100;
          }
          local_18.right = local_18.right + local_18.left;
        }
LAB_10159328:
        local_44 = (double)(local_18.right - local_18.left) / (double)iVar4;
      }
      else {
        iVar4 = local_28.bottom - local_28.top;
        if (iVar4 < (local_18.bottom - local_18.top) + (local_38.bottom - local_38.top)) {
          iVar6 = 0x32;
          local_3c = 0x32;
          if (local_18.bottom - local_18.top == iVar4) {
            if (*(int *)(in_ECX + 8) == 0) {
              if (*(int *)(in_ECX + 0x14) != 0) {
                iVar6 = *(int *)(*(int *)(in_ECX + 0x14) + 0x20);
              }
            }
            else {
              iVar6 = *(int *)(*(int *)(in_ECX + 8) + 0x2d0);
            }
            local_18.bottom = (local_28.bottom - (iVar4 * iVar6) / 100) - local_28.top;
            local_3c = 100 - iVar6;
          }
          else {
            if (local_38.bottom - local_38.top != iVar4) goto LAB_1015926f;
            if (*(int *)(in_ECX + 4) == 0) {
              if (*(int *)(in_ECX + 0x10) != 0) {
                local_3c = *(uint *)(*(int *)(in_ECX + 0x10) + 0x20);
              }
            }
            else {
              local_3c = *(uint *)(*(int *)(in_ECX + 4) + 0x2d0);
            }
            local_18.bottom = (int)(iVar4 * local_3c) / 100;
          }
          local_18.bottom = local_18.bottom + local_18.top;
        }
LAB_1015926f:
        local_4c = (double)(local_18.bottom - local_18.top);
        local_44 = local_4c / (double)iVar4;
      }
      local_44 = local_44 * 100.0;
      if (local_3c != 0xffffffff) {
        local_44 = (double)(int)local_3c;
      }
      iVar4 = *(int *)(in_ECX + 4);
      if (iVar4 != 0) {
        uVar5 = FUN_1017f8a0();
        *(undefined4 *)(iVar4 + 0x2d0) = uVar5;
      }
      if (*(int *)(in_ECX + 0x10) != 0) {
        FUN_10158f6f();
        uVar5 = FUN_1017f8a0();
        *(undefined4 *)(*(int *)(in_ECX + 0x10) + 0x20) = uVar5;
      }
      iVar4 = *(int *)(in_ECX + 8);
      if (iVar4 != 0) {
        iVar6 = FUN_1017f8a0();
        *(int *)(iVar4 + 0x2d0) = 100 - iVar6;
      }
      if (*(int *)(in_ECX + 0x14) == 0) goto LAB_101593be;
      FUN_10158f6f();
      iVar4 = FUN_1017f8a0();
      iVar4 = 100 - iVar4;
    }
    else {
      iVar4 = 100;
      if (*(int *)(in_ECX + 8) != 0) {
        *(undefined4 *)(*(int *)(in_ECX + 8) + 0x2d0) = 100;
      }
      if (*(int *)(in_ECX + 0x14) == 0) goto LAB_101593be;
      FUN_10158f6f();
    }
    iVar6 = *(int *)(in_ECX + 0x14);
  }
  *(int *)(iVar6 + 0x20) = iVar4;
LAB_101593be:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

