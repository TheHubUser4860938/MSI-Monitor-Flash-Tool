// rea decompile_all
// name: FUN_10142c11
// address: 0x10142c11
// body: available
// range: 0x10142c11-0x10142e33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10142e2f to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_10142c11(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  CWnd *pCVar3;
  int iVar4;
  CFrameWnd *pCVar5;
  CFrameWnd *pCVar6;
  undefined4 uVar7;
  WPARAM wParam;
  ulong uVar8;
  HWND pHVar9;
  CWnd *pCVar10;
  CObject *pCVar11;
  LRESULT LVar12;
  CDialog *in_ECX;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x10142c1d;
  CDialog::OnInitDialog(in_ECX);
  puVar1 = DAT_10209d54;
  if (*(int *)(in_ECX + 1000) == 0) {
    CWnd::EnableWindow((CWnd *)(in_ECX + 0x1c0),0);
    CWnd::ShowWindow((CWnd *)(in_ECX + 0x1c0),0);
    CWnd::ShowWindow((CWnd *)(in_ECX + 0x240),0);
    CWnd::ShowWindow((CWnd *)(in_ECX + 0x140),0);
    puVar1 = DAT_10209d54;
  }
  while (puVar1 != (undefined4 *)0x0) {
    if (puVar1 == (undefined4 *)0x0) goto LAB_10142e2f;
    pCVar10 = (CWnd *)puVar1[2];
    puVar1 = (undefined4 *)*puVar1;
    if (pCVar10 == (CWnd *)0x0) goto LAB_10142e2f;
    pCVar3 = CWnd::FromHandlePermanent(*(HWND__ **)(pCVar10 + 0x20));
    if ((pCVar3 != (CWnd *)0x0) &&
       (iVar4 = FUN_100250d6(&PTR_s_CMFCDropDownToolBar_10201b38), iVar4 == 0)) {
      pCVar5 = CWnd::GetTopLevelFrame(*(CWnd **)(in_ECX + 0x3ec));
      pCVar6 = CWnd::GetTopLevelFrame(pCVar10);
      if (pCVar5 == pCVar6) {
        pcVar2 = *(code **)(*(int *)pCVar10 + 0x3f0);
        guard_check_icall();
        iVar4 = (*pcVar2)();
        if ((iVar4 != 0) && (*(int *)(pCVar10 + 0xb80) == 0)) {
          uVar7 = FUN_1001e20a();
          FUN_1001d224(uVar7);
          local_8 = 0;
          CWnd::GetWindowTextW
                    (pCVar10,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             local_14);
          if ((*(int *)(local_14[0] + -0xc) == 0) &&
             ((iVar4 = FUN_1001de45(0x3ee8), iVar4 == 0 ||
              (iVar4 = FUN_10018c20(iVar4,0x3ee8), iVar4 == 0)))) goto LAB_10142e2f;
          wParam = SendMessageW(*(HWND *)(in_ECX + 0x360),0x180,0,local_14[0]);
          SendMessageW(*(HWND *)(in_ECX + 0x360),0x19a,wParam,(LPARAM)pCVar10);
          uVar8 = CWnd::GetExStyle(pCVar10);
          if ((uVar8 & 0x10000000) != 0) {
            CCheckListBox::SetCheck((CCheckListBox *)(in_ECX + 0x340),wParam,1);
          }
          pcVar2 = *(code **)(*(int *)pCVar10 + 0x1c8);
          guard_check_icall();
          uVar7 = (*pcVar2)();
          FUN_10147974(wParam,uVar7);
          local_8 = 0xffffffff;
          ATL::CStringData::Release((CStringData *)(local_14[0] + -0x10));
        }
      }
    }
  }
  pHVar9 = GetParent(*(HWND *)(in_ECX + 0x20));
  pCVar10 = CWnd::FromHandle(pHVar9);
  pCVar11 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarsCustomizeDialog_101c3a40,
                               (CObject *)pCVar10);
  if (pCVar11 != (CObject *)0x0) {
    if (((byte)pCVar11[0x15c] & 2) == 0) {
      CWnd::ShowWindow((CWnd *)(in_ECX + 0xc0),0);
    }
    LVar12 = SendMessageW(*(HWND *)(in_ECX + 0x360),0x18b,0,0);
    if (0 < LVar12) {
      SendMessageW(*(HWND *)(in_ECX + 0x360),0x186,0,0);
      CMFCToolBarsListPropertyPage::OnSelchangeToolbarList((CMFCToolBarsListPropertyPage *)in_ECX);
    }
    return 1;
  }
LAB_10142e2f:
                    /* WARNING: Subroutine does not return */
  FUN_1001d023();
}

