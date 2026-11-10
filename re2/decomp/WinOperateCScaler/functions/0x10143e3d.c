// rea decompile_all
// name: FUN_10143e3d
// address: 0x10143e3d
// body: available
// range: 0x10143e3d-0x10143fa8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10143fa4 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10143e3d(void)

{
  code *pcVar1;
  HINSTANCE pHVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  CObject *pCVar5;
  int iVar6;
  HMENU pHVar7;
  CMenu *pCVar8;
  undefined4 uVar9;
  CDialog *in_ECX;
  undefined4 uVar10;
  LPCSTR unaff_EDI;
  int local_8;
  
  CDialog::OnInitDialog(in_ECX);
  if (DAT_1020b6c8 != 0) {
    pHVar3 = GetParent(*(HWND *)(in_ECX + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar3);
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarsCustomizeDialog_101c3a40,
                                (CObject *)pCVar4);
    *(CObject **)(in_ECX + 0x1460) = pCVar5;
    if (pCVar5 != (CObject *)0x0) {
      CVSListBoxBase::SetStandardButtons((CVSListBoxBase *)(in_ECX + 0x1250),0xf);
      pcVar1 = *(code **)(**(int **)(in_ECX + 0x1460) + 0x180);
      guard_check_icall();
      (*pcVar1)();
      local_8 = *(int *)(DAT_1020b6c8 + 8);
      if (local_8 != 0) {
        do {
          iVar6 = FUN_1006a9f1(&local_8);
          pcVar1 = *(code **)(*(int *)(in_ECX + 0x1250) + 0x16c);
          guard_check_icall(iVar6 + 4,iVar6,0xffffffff);
          (*pcVar1)();
        } while (local_8 != 0);
      }
      pHVar2 = *(HINSTANCE *)(DAT_1020b6c8 + 0x3c);
      uVar10 = 0;
      if (pHVar2 != (HINSTANCE)0x0) {
        CWnd::ShowWindow((CWnd *)(in_ECX + 0xc0),5);
        FID_conflict_LoadMenuA(pHVar2,unaff_EDI);
        pHVar7 = GetSubMenu(*(HMENU *)(in_ECX + 0x1470),0);
        pCVar8 = CMenu::FromHandle(pHVar7);
        if (pCVar8 == (CMenu *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined4 *)(pCVar8 + 4);
        }
        *(undefined4 *)(in_ECX + 0x86c) = uVar9;
      }
      pHVar2 = *(HINSTANCE *)(DAT_1020b6c8 + 0x38);
      if (pHVar2 != (HINSTANCE)0x0) {
        CWnd::ShowWindow((CWnd *)(in_ECX + 0x888),5);
        FID_conflict_LoadMenuA(pHVar2,unaff_EDI);
        pHVar7 = GetSubMenu(*(HMENU *)(in_ECX + 0x1468),0);
        pCVar8 = CMenu::FromHandle(pHVar7);
        if (pCVar8 != (CMenu *)0x0) {
          uVar10 = *(undefined4 *)(pCVar8 + 4);
        }
        *(undefined4 *)(in_ECX + 0x1034) = uVar10;
      }
      *(undefined4 *)(in_ECX + 0x868) = 1;
      *(undefined4 *)(in_ECX + 0x1030) = 1;
      CMFCToolBarsToolsPropertyPage::EnableControls((CMFCToolBarsToolsPropertyPage *)in_ECX);
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1001d023();
}

