// rea decompile_all
// name: FUN_10117d02
// address: 0x10117d02
// body: available
// range: 0x10117d02-0x10117fc9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10117fc5 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10117d02(WPARAM param_1,undefined4 *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ushort uVar5;
  CMFCPopupMenu *pCVar6;
  HWND pHVar7;
  CWnd *pCVar8;
  int iVar9;
  BOOL BVar10;
  CObject *pCVar11;
  int *piVar12;
  undefined2 extraout_var;
  uint uVar13;
  undefined4 uVar14;
  int in_ECX;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined4 local_8;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 1;
  }
  pCVar6 = CMFCPopupMenu::GetSafeActivePopupMenu();
  if (pCVar6 == (CMFCPopupMenu *)0x0) {
    BVar10 = IsIconic(*(HWND *)(*(int *)(in_ECX + 0xb0) + 0x20));
    if (BVar10 != 0) {
      return 1;
    }
    if (DAT_1020e500 != 0) {
      return 0;
    }
    bVar2 = false;
    bVar4 = false;
    puVar15 = DAT_1020e564;
    do {
      if (puVar15 == (undefined4 *)0x0) break;
      piVar12 = puVar15 + 2;
      puVar15 = (undefined4 *)*puVar15;
      if (*piVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1004886a();
      }
      pCVar8 = CWnd::FromHandlePermanent(*(HWND__ **)(*piVar12 + 0x20));
      if (pCVar8 != (CWnd *)0x0) {
        local_8 = 0;
        iVar9 = FUN_10094a15();
        if (0 < iVar9) {
          do {
            piVar12 = (int *)FUN_10094903(local_8);
            pcVar1 = *(code **)(*piVar12 + 0xa4);
            guard_check_icall();
            iVar9 = (*pcVar1)();
            if (iVar9 != 0) {
              bVar4 = true;
              bVar2 = true;
              break;
            }
            local_8 = local_8 + 1;
            iVar9 = FUN_10094a15();
            bVar2 = bVar4;
          } while (local_8 < iVar9);
        }
      }
    } while (!bVar2);
    uVar5 = GetAsyncKeyState(0x11);
    local_8._2_2_ = uVar5 >> 0xc & 0xff08;
    uVar5 = GetAsyncKeyState(0x12);
    if ((uVar5 & 0x8000) != 0) {
      local_8._2_2_ = local_8._2_2_ | 0x10;
    }
    uVar5 = GetAsyncKeyState(0x10);
    uVar13 = CONCAT22(extraout_var,local_8._2_2_);
    if ((uVar5 & 0x8000) != 0) {
      uVar13 = CONCAT22(extraout_var,local_8._2_2_) | 4;
      local_8._2_2_ = (ushort)uVar13;
    }
    bVar3 = true;
    if (!bVar2) {
      iVar9 = FUN_100c70ca(param_1,uVar13 | 1,*(undefined4 *)(in_ECX + 0xb0),1);
      if (iVar9 != 0) {
        return 0;
      }
      uVar16 = 0;
      pcVar1 = *(code **)(**(int **)(in_ECX + 0xb0) + 0x170);
      guard_check_icall(0);
      uVar14 = (*pcVar1)();
      iVar9 = FUN_100c70ca(param_1,uVar13 | 1,uVar14,uVar16);
      bVar3 = bVar4;
      if (iVar9 != 0) {
        return 0;
      }
    }
    if (((*(int *)(in_ECX + 0xfc) == 0) ||
        (BVar10 = IsWindowVisible(*(HWND *)(*(int *)(in_ECX + 0xfc) + 0x20)), BVar10 == 0)) ||
       ((char)local_8._2_2_ != '\b')) {
      if (((char)local_8._2_2_ == '\x10') && (iVar9 = FUN_101171d8(param_1), iVar9 != 0)) {
        return 1;
      }
    }
    else if ((param_1 == 0x70) && (*(int *)(*(CMFCRibbonBar **)(in_ECX + 0xfc) + 0x7a8) != 0)) {
      CMFCRibbonBar::ToggleMimimizeState(*(CMFCRibbonBar **)(in_ECX + 0xfc));
      return 1;
    }
    if ((bVar3) && (param_2 != (undefined4 *)0x0)) {
      *param_2 = 0;
    }
  }
  else {
    pHVar7 = GetFocus();
    pCVar8 = CWnd::FromHandle(pHVar7);
    pcVar1 = *(code **)(*(int *)pCVar6 + 0x208);
    guard_check_icall();
    iVar9 = (*pcVar1)();
    if (iVar9 == 0) {
      if (((pCVar8 == (CWnd *)0x0) || (*(int *)(pCVar8 + 0x20) == 0)) ||
         (BVar10 = IsChild(*(HWND *)(pCVar6 + 0x20),*(HWND *)(pCVar8 + 0x20)), BVar10 == 0)) {
        pcVar1 = *(code **)(*(int *)pCVar6 + 0x1c8);
        guard_check_icall();
        iVar9 = (*pcVar1)();
        iVar9 = *(int *)(iVar9 + 0xd80);
        SendMessageW(*(HWND *)(pCVar6 + 0x20),0x100,param_1,0);
        if (iVar9 == 0) {
          return 1;
        }
        pCVar6 = CMFCPopupMenu::GetSafeActivePopupMenu();
        pCVar11 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCDropDownListBox_101d7450,
                                     (CObject *)pCVar6);
        if ((pCVar11 != (CObject *)0x0) && (iVar9 = FUN_10116881(), iVar9 != 0)) {
          return 0;
        }
        return 1;
      }
    }
    else if (((pCVar8 == (CWnd *)0x0) || (*(int *)(pCVar8 + 0x20) == 0)) ||
            ((BVar10 = IsChild(*(HWND *)(pCVar6 + 0x20),*(HWND *)(pCVar8 + 0x20)), BVar10 == 0 &&
             (*(int *)(pCVar8 + 0x20) != *(int *)(pCVar6 + 0x20))))) {
      SendMessageW(*(HWND *)(pCVar6 + 0x20),0x10,0,0);
    }
  }
  return 0;
}

