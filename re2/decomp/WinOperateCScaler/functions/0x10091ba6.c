// rea decompile_all
// name: FUN_10091ba6
// address: 0x10091ba6
// body: available
// range: 0x10091ba6-0x10091d8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10091d86 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10091ba6(CMenu *param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  _AFX_THREAD_STATE *p_Var3;
  HMENU pHVar4;
  HMENU pHVar5;
  uint uVar6;
  UINT UVar7;
  CWnd *in_ECX;
  undefined4 uVar8;
  CCmdUI local_34 [4];
  UINT local_30;
  uint local_2c;
  CMenu *local_28;
  CMenu *local_24;
  uint local_14;
  CMenu *local_10;
  int local_c;
  CWnd *local_8;
  
  AfxCancelModes(*(HWND__ **)(in_ECX + 0x20));
  if (param_3 == 0) {
    local_8 = *(CWnd **)(in_ECX + 0xac);
    if (local_8 != (CWnd *)0x0) {
      pcVar1 = *(code **)(*(int *)local_8 + 0x74);
      guard_check_icall(param_1,param_2,0);
      iVar2 = (*pcVar1)();
      if (iVar2 != 0) {
        return;
      }
    }
    if (param_1 == (CMenu *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001d023();
    }
    CCmdUI::CCmdUI(local_34);
    local_28 = param_1;
    p_Var3 = AfxGetThreadState();
    if (*(int *)(p_Var3 + 0x78) == *(int *)(param_1 + 4)) {
      local_10 = param_1;
    }
    else {
      if (*(int *)(in_ECX + 0x100) == 1) {
        pHVar5 = GetMenu(*(HWND *)(in_ECX + 0x20));
      }
      else {
        pHVar5 = *(HMENU *)(in_ECX + 0x104);
      }
      if ((pHVar5 != (HMENU)0x0) &&
         (local_8 = CWnd::GetTopLevelParent(in_ECX), local_8 != (CWnd *)0x0)) {
        pcVar1 = *(code **)(*(int *)local_8 + 0x6c);
        guard_check_icall();
        iVar2 = (*pcVar1)();
        if ((iVar2 != 0) && (pHVar5 = *(HMENU *)(iVar2 + 4), pHVar5 != (HMENU)0x0)) {
          local_c = GetMenuItemCount(pHVar5);
          local_8 = (CWnd *)0x0;
          if (0 < local_c) {
            do {
              pHVar4 = GetSubMenu(pHVar5,(int)local_8);
              if (pHVar4 == *(HMENU *)(param_1 + 4)) {
                local_10 = CMenu::FromHandle(pHVar5);
                break;
              }
              local_8 = local_8 + 1;
            } while ((int)local_8 < local_c);
          }
        }
      }
    }
    local_14 = GetMenuItemCount(*(HMENU *)(param_1 + 4));
    local_2c = 0;
    if (local_14 != 0) {
      do {
        local_30 = GetMenuItemID(*(HMENU *)(param_1 + 4),local_2c);
        uVar6 = local_14;
        if (local_30 != 0) {
          if (local_30 == 0xffffffff) {
            pHVar5 = GetSubMenu(*(HMENU *)(param_1 + 4),local_2c);
            local_24 = CMenu::FromHandle(pHVar5);
            uVar6 = local_14;
            if (((local_24 == (CMenu *)0x0) ||
                (local_30 = GetMenuItemID(*(HMENU *)(local_24 + 4),0), uVar6 = local_14,
                local_30 == 0)) || (local_30 == 0xffffffff)) goto LAB_10091d71;
            uVar8 = 0;
          }
          else {
            local_24 = (CMenu *)0x0;
            if ((*(int *)(in_ECX + 0x80) == 0) || (0xefff < local_30)) {
              uVar8 = 0;
            }
            else {
              uVar8 = 1;
            }
          }
          FUN_1002069a(in_ECX,uVar8);
          uVar6 = GetMenuItemCount(*(HMENU *)(param_1 + 4));
          if (uVar6 < local_14) {
            local_2c = local_2c + (uVar6 - local_14);
            while ((local_2c < uVar6 &&
                   (UVar7 = GetMenuItemID(*(HMENU *)(param_1 + 4),local_2c), UVar7 == local_30))) {
              local_2c = local_2c + 1;
            }
          }
        }
LAB_10091d71:
        local_14 = uVar6;
        local_2c = local_2c + 1;
      } while (local_2c < local_14);
    }
  }
  return;
}

