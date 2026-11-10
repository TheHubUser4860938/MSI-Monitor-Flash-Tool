// rea decompile_all
// name: FUN_1017018d
// address: 0x1017018d
// body: available
// range: 0x1017018d-0x1017031d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10170319 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1017018d(void)

{
  code *pcVar1;
  undefined4 *_Memory;
  longlong lVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  CObject *pCVar5;
  int iVar6;
  LRESULT LVar7;
  undefined4 *puVar8;
  CMFCToolBarsKeyboardPropertyPage *in_ECX;
  int iVar9;
  undefined4 *puVar10;
  WPARAM wParam;
  int local_c;
  
  if ((*(int *)(in_ECX + 0x568) != 0) && (*(int *)(in_ECX + 0x564) != 0)) {
    pHVar3 = GetParent(*(HWND *)(in_ECX + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar3);
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarsCustomizeDialog_101cbd10,
                                (CObject *)pCVar4);
    pcVar1 = *(code **)(*(int *)pCVar5 + 0x194);
    guard_check_icall(*(undefined4 *)(in_ECX + 0x568));
    iVar6 = (*pcVar1)();
    if (iVar6 != 0) {
      _Memory = *(undefined4 **)(in_ECX + 0x564);
      lVar2 = (ulonglong)(*(int *)(in_ECX + 0x56c) - 1) * 6;
      iVar6 = FUN_10047ef0(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
      *(int *)(in_ECX + 0x564) = iVar6;
      if (iVar6 == 0) goto LAB_10170319;
      local_c = 0;
      if (0 < *(int *)(in_ECX + 0x56c)) {
        iVar6 = 0;
        puVar10 = _Memory;
        do {
          iVar9 = iVar6;
          if (*(undefined4 **)(in_ECX + 0x568) != puVar10) {
            iVar9 = *(int *)(in_ECX + 0x564);
            *(undefined4 *)(iVar9 + iVar6) = *puVar10;
            *(undefined2 *)(iVar9 + 4 + iVar6) = *(undefined2 *)(puVar10 + 1);
            iVar9 = iVar6 + 6;
            LVar7 = SendMessageW(*(HWND *)(in_ECX + 0x378),0x18b,0,0);
            wParam = 0;
            if (0 < LVar7) {
              do {
                puVar8 = (undefined4 *)SendMessageW(*(HWND *)(in_ECX + 0x378),0x199,wParam,0);
                if (puVar8 == puVar10) {
                  SendMessageW(*(HWND *)(in_ECX + 0x378),0x19a,wParam,
                               *(int *)(in_ECX + 0x564) + iVar6);
                  break;
                }
                wParam = wParam + 1;
              } while ((int)wParam < LVar7);
            }
          }
          local_c = local_c + 1;
          puVar10 = (undefined4 *)((int)puVar10 + 6);
          iVar6 = iVar9;
        } while (local_c < *(int *)(in_ECX + 0x56c));
      }
      FID_conflict__free(_Memory);
      *(int *)(in_ECX + 0x56c) = *(int *)(in_ECX + 0x56c) + -1;
      FUN_100c75aa(*(undefined4 *)(in_ECX + 0x574),*(undefined4 *)(in_ECX + 0x564),
                   *(undefined4 *)(in_ECX + 0x56c),0);
      CMFCToolBarsKeyboardPropertyPage::OnSelchangeCommandsList(in_ECX);
      CWnd::SetFocus((CWnd *)(in_ECX + 0x3d8));
    }
    return;
  }
LAB_10170319:
                    /* WARNING: Subroutine does not return */
  FUN_1004886a();
}

