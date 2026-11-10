// rea decompile_all
// name: FUN_005224ed
// address: 0x5224ed
// body: available
// range: 0x5224ed-0x5228e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5228e5 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005224ed(undefined4 param_1,uint param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  WPARAM WVar3;
  int iVar4;
  int *piVar5;
  LRESULT LVar6;
  UINT UVar7;
  HWND pHVar8;
  CWnd *pCVar9;
  CListCtrl *in_ECX;
  HMENU pHVar10;
  uint uVar11;
  undefined4 local_7c;
  HMENU local_78;
  int local_5c;
  int *local_40;
  int local_3c;
  int *local_38;
  uint local_34;
  HMENU local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  tagPOINT local_20;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if (*(int *)(DAT_00612cc4 + 4) == 0) {
LAB_005228e5:
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  if (DAT_00617ad8 != (int *)0x0) goto LAB_005228d4;
  if (*(int *)(in_ECX + 0x164) == 0) {
    FUN_0042ec70();
    goto LAB_005228d4;
  }
  if (*(int *)(in_ECX + 0x154) == 0) goto LAB_005228d4;
  uVar2 = SendMessageW(*(HWND *)(in_ECX + 0x20),0x1032,0,0);
  pHVar10 = (HMENU)0xffffffff;
  local_30 = (HMENU)0xffffffff;
  local_34 = uVar2;
  if ((param_2 == 0xffffffff) && (param_3 == -1)) {
    if (uVar2 == 0) goto LAB_005228d4;
    WVar3 = 0xffffffff;
    uVar11 = uVar2;
    do {
      WVar3 = SendMessageW(*(HWND *)(in_ECX + 0x20),0x100c,WVar3,2);
      uVar2 = local_34;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    iVar4 = CListCtrl::GetItemRect(in_ECX,WVar3,&local_18,0);
    if (iVar4 != 0) {
      param_2 = local_18.left;
      param_3 = local_18.bottom + 1;
      ClientToScreen(*(HWND *)(in_ECX + 0x20),(LPPOINT)&param_2);
    }
  }
  else {
    local_20.y = param_3;
    local_20.x = param_2;
    ScreenToClient(*(HWND *)(in_ECX + 0x20),&local_20);
    local_18.left = 1;
    SendMessageW(*(HWND *)(in_ECX + 0x20),0x1012,0,(LPARAM)&local_20);
    if ((local_18.left & 0xeU) == 0) goto LAB_005228d4;
    local_30 = (HMENU)local_18.top;
  }
  pcVar1 = *(code **)(**(int **)(DAT_00612cc4 + 4) + 0xc);
  guard_check_icall(*(int **)(DAT_00612cc4 + 4),uVar2 << 2);
  piVar5 = (int *)(*pcVar1)();
  local_38 = piVar5;
  if (piVar5 == (int *)0x0) goto LAB_005228e5;
  _memset(&local_7c,0,0x3c);
  local_3c = local_5c;
  local_7c = 4;
  if (-1 < (int)local_30) {
    local_78 = local_30;
    LVar6 = SendMessageW(*(HWND *)(in_ECX + 0x20),0x104b,0,(LPARAM)&local_7c);
    if (LVar6 != 0) {
      local_3c = local_5c;
      *piVar5 = *(int *)(local_5c + 8);
    }
  }
  for (uVar2 = ~(uint)local_30 >> 0x1f; piVar5 = local_38, uVar2 < local_34; uVar2 = uVar2 + 1) {
    pHVar10 = (HMENU)SendMessageW(*(HWND *)(in_ECX + 0x20),0x100c,(WPARAM)pHVar10,2);
    if (pHVar10 == local_30) {
      uVar2 = uVar2 - 1;
    }
    else {
      local_78 = pHVar10;
      LVar6 = SendMessageW(*(HWND *)(in_ECX + 0x20),0x104b,0,(LPARAM)&local_7c);
      if ((LVar6 != 0) && (local_38[uVar2] = *(int *)(local_5c + 8), local_3c == 0)) {
        local_3c = local_5c;
      }
    }
  }
  if (*local_38 != 0) {
    iVar4 = **(int **)(in_ECX + 0x154);
    guard_check_icall(*(int **)(in_ECX + 0x154),*(undefined4 *)(in_ECX + 0x20),local_34,local_38,
                      &DAT_005db870,0,&local_40);
    iVar4 = (**(code **)(iVar4 + 0x28))();
    if (-1 < iVar4) {
      pcVar1 = *(code **)*local_40;
      guard_check_icall(local_40,&DAT_005db890,&DAT_00617ad8);
      iVar4 = (*pcVar1)();
      if (-1 < iVar4) {
        pHVar10 = CreatePopupMenu();
        local_30 = pHVar10;
        if (pHVar10 != (HMENU)0x0) {
          iVar4 = *DAT_00617ad8;
          guard_check_icall(DAT_00617ad8,pHVar10,0,1,0x7fff,4);
          iVar4 = (**(code **)(iVar4 + 0xc))();
          if ((-1 < iVar4) &&
             (WVar3 = TrackPopupMenu(pHVar10,0x102,param_2,param_3,0,*(HWND *)(in_ECX + 0x20),
                                     (RECT *)0x0), WVar3 != 0)) {
            if ((local_34 == 1) && (UVar7 = GetMenuDefaultItem(local_30,0,0), WVar3 == UVar7)) {
              local_34 = 0x20000000;
              iVar4 = **(int **)(in_ECX + 0x154);
              guard_check_icall(*(int **)(in_ECX + 0x154),1,local_3c + 8,&local_34);
              (**(code **)(iVar4 + 0x24))();
              if ((local_34 & 0x20000000) != 0) {
                pcVar1 = *(code **)(*(int *)in_ECX + 0x188);
                guard_check_icall(local_3c);
                (*pcVar1)();
                goto LAB_00522885;
              }
            }
            local_2c = 0x24;
            local_28 = 0;
            pHVar8 = GetParent(*(HWND *)(in_ECX + 0x20));
            pCVar9 = CWnd::FromHandle(pHVar8);
            if (pCVar9 == (CWnd *)0x0) {
              local_24 = 0;
            }
            else {
              local_24 = *(undefined4 *)(pCVar9 + 0x20);
            }
            local_20.x = WVar3 - 1;
            local_20.y = 0;
            local_18.left = 0;
            local_18.right = 0;
            local_18.bottom = 0;
            local_18.top = 1;
            pcVar1 = *(code **)(*local_40 + 0x10);
            guard_check_icall(local_40,&local_2c);
            iVar4 = (*pcVar1)();
            if (-1 < iVar4) {
              pHVar8 = GetParent(*(HWND *)(in_ECX + 0x20));
              pCVar9 = CWnd::FromHandle(pHVar8);
              if (pCVar9 != (CWnd *)0x0) {
                pHVar8 = GetParent(*(HWND *)(in_ECX + 0x20));
                pCVar9 = CWnd::FromHandle(pHVar8);
                SendMessageW(*(HWND *)(pCVar9 + 0x20),DAT_00612cc8,WVar3,0);
              }
            }
          }
        }
LAB_00522885:
        piVar5 = local_38;
        if (DAT_00617ad8 != (int *)0x0) {
          pcVar1 = *(code **)(*DAT_00617ad8 + 8);
          guard_check_icall(DAT_00617ad8);
          (*pcVar1)();
          DAT_00617ad8 = (int *)0x0;
          piVar5 = local_38;
        }
      }
      pcVar1 = *(code **)(*local_40 + 8);
      guard_check_icall(local_40);
      (*pcVar1)();
    }
  }
  pcVar1 = *(code **)(**(int **)(DAT_00612cc4 + 4) + 0x14);
  guard_check_icall(*(int **)(DAT_00612cc4 + 4),piVar5);
  (*pcVar1)();
LAB_005228d4:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

