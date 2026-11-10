// rea decompile_all
// name: CMFCToolBarsKeyboardPropertyPage::OnInitDialog
// address: 0x1016fefb
// body: available
// range: 0x1016fefb-0x1017018c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1016ff17 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCToolBarsKeyboardPropertyPage::OnInitDialog(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCToolBarsKeyboardPropertyPage::OnInitDialog(CMFCToolBarsKeyboardPropertyPage *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  CObject *pCVar6;
  AFX_MODULE_STATE *pAVar7;
  int *piVar8;
  int iVar9;
  LRESULT LVar10;
  undefined4 uVar11;
  WPARAM WVar12;
  int local_20;
  int *local_1c;
  int *local_18;
  LPARAM local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x1016ff07;
  CDialog::OnInitDialog((CDialog *)this);
  if (DAT_1020fb2c != 0) {
    pHVar4 = GetParent(*(HWND *)(this + 0x20));
    pCVar5 = CWnd::FromHandle(pHVar4);
    pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarsCustomizeDialog_101cbd10,
                                (CObject *)pCVar5);
    CMFCToolBarsCustomizeDialog::FillCategoriesComboBox
              ((CMFCToolBarsCustomizeDialog *)pCVar6,(CComboBox *)(this + 0x458),0);
    SendMessageW(*(HWND *)(this + 0x478),0x14e,0,0);
    OnSelchangeCategory(this);
    pAVar7 = AfxGetModuleState();
    piVar1 = *(int **)(*(int *)(pAVar7 + 4) + 0x5c);
    local_1c = piVar1;
    if ((*(int *)(this + 0x570) != 0) && (piVar1 != (int *)0x0)) {
      pcVar2 = *(code **)(*piVar1 + 0x10);
      guard_check_icall();
      local_20 = (*pcVar2)();
      while (local_20 != 0) {
        pcVar2 = *(code **)(*piVar1 + 0x14);
        guard_check_icall(&local_20);
        piVar8 = (int *)(*pcVar2)();
        local_18 = piVar8;
        iVar9 = FUN_1004e58b(&PTR_s_CMultiDocTemplate_101d10fc);
        if ((iVar9 != 0) && (piVar8[0x23] != 0)) {
          bVar3 = false;
          WVar12 = 0;
          do {
            LVar10 = SendMessageW(*(HWND *)(this + 0x1f8),0x146,0,0);
            if (LVar10 <= (int)WVar12) break;
            LVar10 = SendMessageW(*(HWND *)(this + 0x1f8),0x150,WVar12,0);
            if ((LVar10 == 0) || (*(int *)(LVar10 + 0x54) != local_18[0x15])) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            WVar12 = WVar12 + 1;
          } while (!bVar3);
          piVar1 = local_1c;
          if (!bVar3) {
            uVar11 = FUN_10048e90();
            FUN_10034c30(uVar11);
            piVar1 = local_18;
            local_8 = 0;
            pcVar2 = *(code **)(*local_18 + 100);
            guard_check_icall(local_14,2);
            (*pcVar2)();
            WVar12 = SendMessageW(*(HWND *)(this + 0x1f8),0x143,0,local_14[0]);
            SendMessageW(*(HWND *)(this + 0x1f8),0x151,WVar12,(LPARAM)piVar1);
            local_8 = 0xffffffff;
            FUN_10034f00();
            piVar1 = local_1c;
          }
        }
      }
    }
    pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_101bf4c8,
                                *(CObject **)(this + 0x57c));
    if ((pCVar6 != (CObject *)0x0) && (*(int *)(pCVar6 + 0x8c) != 0)) {
      uVar11 = FUN_10048e90();
      FUN_10034c30(uVar11);
      local_8 = 1;
      iVar9 = FUN_10048ace(0x3ef2);
      if ((iVar9 == 0) || (iVar9 = FUN_10034d90(iVar9,0x3ef2), iVar9 == 0)) goto LAB_1016ff17;
      WVar12 = SendMessageW(*(HWND *)(this + 0x1f8),0x143,0,local_20);
      SendMessageW(*(HWND *)(this + 0x1f8),0x151,WVar12,0);
      SendMessageW(*(HWND *)(this + 0x1f8),0x14e,WVar12,0);
      FUN_10170760();
      local_8 = 0xffffffff;
      FUN_10034f00();
    }
    LVar10 = SendMessageW(*(HWND *)(this + 0x1f8),0x147,0,0);
    if (LVar10 == -1) {
      SendMessageW(*(HWND *)(this + 0x1f8),0x14e,0,0);
      FUN_10170760();
    }
    return 1;
  }
LAB_1016ff17:
                    /* WARNING: Subroutine does not return */
  FUN_1004886a();
}

