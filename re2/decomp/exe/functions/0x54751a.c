// rea decompile_all
// name: FUN_0054751a
// address: 0x54751a
// body: available
// range: 0x54751a-0x547685 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x547681 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0054751a(void)

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
  if (DAT_00616ad0 != 0) {
    pHVar3 = GetParent(*(HWND *)(in_ECX + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar3);
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarsCustomizeDialog_005c5c18,
                                (CObject *)pCVar4);
    *(CObject **)(in_ECX + 0x1460) = pCVar5;
    if (pCVar5 != (CObject *)0x0) {
      CVSListBoxBase::SetStandardButtons((CVSListBoxBase *)(in_ECX + 0x1250),0xf);
      pcVar1 = *(code **)(**(int **)(in_ECX + 0x1460) + 0x180);
      guard_check_icall();
      (*pcVar1)();
      local_8 = *(int *)(DAT_00616ad0 + 8);
      if (local_8 != 0) {
        do {
          iVar6 = FUN_0043410a(&local_8);
          pcVar1 = *(code **)(*(int *)(in_ECX + 0x1250) + 0x16c);
          guard_check_icall(iVar6 + 4,iVar6,0xffffffff);
          (*pcVar1)();
        } while (local_8 != 0);
      }
      pHVar2 = *(HINSTANCE *)(DAT_00616ad0 + 0x3c);
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
      pHVar2 = *(HINSTANCE *)(DAT_00616ad0 + 0x38);
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
  FUN_00429127();
}

