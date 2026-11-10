// rea decompile_all
// name: FUN_00548547
// address: 0x548547
// body: available
// range: 0x548547-0x54872b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x548727 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00548547(void)

{
  code *pcVar1;
  void *_Memory;
  longlong lVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  CObject *pCVar5;
  int iVar6;
  LRESULT LVar7;
  LRESULT LVar8;
  CMFCToolBarsKeyboardPropertyPage *in_ECX;
  undefined4 *puVar9;
  WPARAM wParam;
  int local_8;
  
  if ((((*(int *)(in_ECX + 0x564) != 0) && (*(int *)(in_ECX + 0x578) != 0)) &&
      (*(int *)(in_ECX + 0x1c0) != 0)) &&
     (in_ECX + 0x1c4 != (CMFCToolBarsKeyboardPropertyPage *)0x0)) {
    *(undefined2 *)(in_ECX + 0x1c8) = *(undefined2 *)(*(int *)(in_ECX + 0x578) + 0x20);
    pHVar3 = GetParent(*(HWND *)(in_ECX + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar3);
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarsCustomizeDialog_005c5c18,
                                (CObject *)pCVar4);
    pcVar1 = *(code **)(*(int *)pCVar5 + 400);
    guard_check_icall(in_ECX + 0x1c4);
    iVar6 = (*pcVar1)();
    if (iVar6 != 0) {
      _Memory = *(void **)(in_ECX + 0x564);
      lVar2 = (ulonglong)(*(int *)(in_ECX + 0x56c) + 1) * 6;
      iVar6 = FUN_00416444(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
      *(int *)(in_ECX + 0x564) = iVar6;
      if (iVar6 == 0) goto LAB_00548727;
      FUN_005734b0(iVar6,_Memory,*(int *)(in_ECX + 0x56c) * 6);
      LVar7 = SendMessageW(*(HWND *)(in_ECX + 0x378),0x18b,0,0);
      local_8 = 0;
      if (0 < *(int *)(in_ECX + 0x56c)) {
        iVar6 = 0;
        do {
          wParam = 0;
          if (0 < LVar7) {
            do {
              LVar8 = SendMessageW(*(HWND *)(in_ECX + 0x378),0x199,wParam,0);
              if (LVar8 == (int)_Memory + iVar6) {
                SendMessageW(*(HWND *)(in_ECX + 0x378),0x19a,wParam,*(int *)(in_ECX + 0x564) + iVar6
                            );
                break;
              }
              wParam = wParam + 1;
            } while ((int)wParam < LVar7);
          }
          local_8 = local_8 + 1;
          iVar6 = iVar6 + 6;
        } while (local_8 < *(int *)(in_ECX + 0x56c));
      }
      puVar9 = (undefined4 *)(*(int *)(in_ECX + 0x56c) * 6 + *(int *)(in_ECX + 0x564));
      *puVar9 = *(undefined4 *)(in_ECX + 0x1c4);
      *(undefined2 *)(puVar9 + 1) = *(undefined2 *)(in_ECX + 0x1c8);
      *(int *)(in_ECX + 0x56c) = *(int *)(in_ECX + 0x56c) + 1;
      FID_conflict__free(_Memory);
      FUN_004b11a7(*(undefined4 *)(in_ECX + 0x574),*(undefined4 *)(in_ECX + 0x564),
                   *(undefined4 *)(in_ECX + 0x56c),0);
      CMFCToolBarsKeyboardPropertyPage::AddKeyEntry
                (in_ECX,(tagACCEL *)(*(int *)(in_ECX + 0x564) + *(int *)(in_ECX + 0x56c) * 6 + -6));
      CMFCAcceleratorKeyAssignCtrl::ResetKey((CMFCAcceleratorKeyAssignCtrl *)(in_ECX + 0x140));
      FUN_005490e9();
      CWnd::SetFocus((CWnd *)(in_ECX + 0x3d8));
    }
    return;
  }
LAB_00548727:
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

