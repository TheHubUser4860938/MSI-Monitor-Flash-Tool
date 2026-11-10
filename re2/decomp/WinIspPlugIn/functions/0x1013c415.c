// rea decompile_all
// name: FUN_1013c415
// address: 0x1013c415
// body: available
// range: 0x1013c415-0x1013c781 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1013c77d to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1013c415(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  __POSITION *p_Var4;
  uint uVar5;
  CObject *pCVar6;
  uint uVar7;
  HWND pHVar8;
  CWnd *pCVar9;
  CMFCCustomizeMenuButton *in_ECX;
  int iVar10;
  CWnd *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  if ((*(int *)(in_ECX + 0xf0) == 0) && (*(int *)(in_ECX + 0xfc) != 0)) {
    iVar3 = *(int *)(in_ECX + 0x6c);
    if (iVar3 == 0) {
LAB_1013c77d:
                    /* WARNING: Subroutine does not return */
      FUN_1004a383();
    }
    iVar2 = FUN_1009455c(in_ECX);
    if ((iVar2 != -1) && (*(int *)(iVar3 + 0xbf0) != iVar2)) {
      *(int *)(iVar3 + 0xbf0) = iVar2;
      InvalidateRect(*(HWND *)(iVar3 + 0x20),(RECT *)(in_ECX + 0x54),1);
    }
    if (*(int *)(in_ECX + 0x100) == 0) {
      iVar2 = *(int *)(in_ECX + 0xe8);
      if (iVar2 == 0x4278) {
        PostMessageW(*(HWND *)(DAT_10247fdc + 0x20),DAT_10245d04,0,0);
      }
      else if (*(int *)(in_ECX + 0xf4) == 0) {
        p_Var4 = CObList::FindIndex((CObList *)(DAT_10247fdc + 0xc74),iVar2);
        if (p_Var4 == (__POSITION *)0x0) goto LAB_1013c77d;
        iVar2 = *(int *)(p_Var4 + 8);
        if (iVar2 != 0) {
          pcVar1 = *(code **)(*(int *)DAT_10247fdc + 0x344);
          guard_check_icall(iVar2,*(undefined4 *)(in_ECX + 0xe8));
          uVar5 = (*pcVar1)();
          if (uVar5 == 0xffffffff) {
            pcVar1 = *(code **)(*(int *)DAT_10247fdc + 0x344);
            guard_check_icall(iVar2,0xffffffff);
            uVar5 = (*pcVar1)();
          }
          else {
            iVar2 = FUN_1009651c();
            if (0 < iVar2) {
              iVar10 = 0;
              do {
                pCVar6 = (CObject *)FUN_1009640a(iVar10);
                pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCCustomizeMenuButton_101f37e0
                                            ,pCVar6);
                if ((((pCVar6 != (CObject *)0x0) &&
                     (uVar7 = *(uint *)(pCVar6 + 0xe8), uVar5 <= uVar7)) && (uVar7 != 0x4278)) &&
                   (*(int *)(pCVar6 + 0xf4) != 0)) {
                  *(uint *)(pCVar6 + 0xe8) = uVar7 + 1;
                }
                iVar10 = iVar10 + 1;
              } while (iVar10 < iVar2);
            }
          }
          *(uint *)(in_ECX + 0xe8) = uVar5;
          if ((*(int *)(in_ECX + 0xf8) != 0) &&
             ((uVar7 = FUN_1009651c(), uVar7 <= uVar5 ||
              (iVar2 = FUN_1009640a(uVar5 + 1), (*(byte *)(iVar2 + 0x24) & 1) == 0)))) {
            pcVar1 = *(code **)(*(int *)DAT_10247fdc + 0x348);
            guard_check_icall(0xffffffff);
            (*pcVar1)();
          }
          pcVar1 = *(code **)(*(int *)DAT_10247fdc + 0x20c);
          guard_check_icall();
          (*pcVar1)();
          pcVar1 = *(code **)(*(int *)DAT_10247fdc + 0x2d4);
          guard_check_icall(1);
          (*pcVar1)();
          CMFCCustomizeMenuButton::UpdateCustomizeButton(in_ECX);
          *(undefined4 *)(in_ECX + 0xf4) = 1;
          *(undefined4 *)(in_ECX + 0xec) = 1;
          InvalidateRect(*(HWND *)(iVar3 + 0x20),(RECT *)0x0,1);
        }
      }
      else {
        iVar2 = FUN_1009640a(iVar2);
        uVar5 = (uint)(*(int *)(iVar2 + 0x50) == 0);
        *(uint *)(iVar2 + 0x50) = uVar5;
        iVar2 = *(int *)(in_ECX + 0xe8);
        *(uint *)(in_ECX + 0xec) = uVar5;
        iVar10 = FUN_1009651c();
        if ((iVar2 + 1 < iVar10) &&
           (iVar2 = FUN_1009640a(iVar2 + 1), (*(byte *)(iVar2 + 0x24) & 1) != 0)) {
          *(uint *)(iVar2 + 0x50) = uVar5;
        }
        local_1c = (CWnd *)0x0;
        pHVar8 = GetParent(*(HWND *)(iVar3 + 0x20));
        pCVar9 = CWnd::FromHandle(pHVar8);
        pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_1023d77c,(CObject *)pCVar9
                                   );
        if (pCVar6 != (CObject *)0x0) {
          do {
            local_1c = (CWnd *)pCVar6;
            pCVar6 = (CObject *)CMFCPopupMenu::GetParentPopupMenu((CMFCPopupMenu *)local_1c);
          } while (pCVar6 != (CObject *)0x0);
          if (local_1c != (CWnd *)0x0) {
            CWnd::ShowWindow(local_1c,0);
          }
        }
        pcVar1 = *(code **)(*(int *)DAT_10247fdc + 0x20c);
        guard_check_icall();
        (*pcVar1)();
        pcVar1 = *(code **)(*(int *)DAT_10247fdc + 0x2d4);
        guard_check_icall(1);
        (*pcVar1)();
        CMFCCustomizeMenuButton::UpdateCustomizeButton(in_ECX);
        InvalidateRect(*(HWND *)(iVar3 + 0x20),(RECT *)0x0,1);
        if (local_1c != (CWnd *)0x0) {
          CWnd::ShowWindow(local_1c,4);
          local_18.left = 0;
          local_18.top = 0;
          local_18.right = 0;
          local_18.bottom = 0;
          GetWindowRect(*(HWND *)(local_1c + 0x20),&local_18);
          CMFCPopupMenu::UpdateAllShadows(&local_18);
        }
      }
    }
    else {
      iVar3 = CMFCToolBar::IsOneRowWithSibling(DAT_10247fdc);
      if (iVar3 == 0) {
        CMFCToolBar::SetOneRowWithSibling(DAT_10247fdc);
      }
      else {
        CMFCToolBar::SetTwoRowsWithSibling(DAT_10247fdc);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

