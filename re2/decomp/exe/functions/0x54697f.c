// rea decompile_all
// name: CMFCToolBarsCommandsPropertyPage::OnSelchangeCategory
// address: 0x54697f
// body: available
// range: 0x54697f-0x546bf1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x546a62 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarsCommandsPropertyPage::OnSelchangeCategory(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarsCommandsPropertyPage::OnSelchangeCategory(CMFCToolBarsCommandsPropertyPage *this)

{
  WPARAM WVar1;
  AFX_MODULE_STATE *pAVar2;
  undefined4 uVar3;
  int iVar4;
  LRESULT LVar5;
  HWND pHVar6;
  CWnd *pCVar7;
  CObject *pCVar8;
  int *piVar9;
  CCommandManager *this_00;
  int iVar10;
  LRESULT LVar11;
  uint uVar12;
  int iVar13;
  int local_2c;
  uint local_28;
  int local_24;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  WPARAM local_18;
  CWaitCursor local_11 [9];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x54698b;
  FUN_00432070(1);
  WVar1 = SendMessageW(*(HWND *)(this + 0xe0),0x188,0,0);
  if (WVar1 != 0xffffffff) {
    pAVar2 = AfxGetModuleState();
    CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
    local_8 = 0;
    SendMessageW(*(HWND *)(this + 0x160),0xb,0,0);
    SendMessageW(*(HWND *)(this + 0x160),0x184,0,0);
    uVar3 = FUN_004295fe();
    FUN_0040eb30(uVar3);
    local_8 = CONCAT31(local_8._1_3_,1);
    GetText(WVar1,local_20);
    iVar4 = FUN_0042cb39(*(undefined4 *)(this + 0x1d4));
    local_28 = (uint)(iVar4 == 0);
    OnChangeSelButton(this,(CMFCToolBarButton *)0x0);
    LVar5 = SendMessageW(*(HWND *)(this + 0xe0),0x199,WVar1,0);
    pHVar6 = GetParent(*(HWND *)(this + 0x20));
    pCVar7 = CWnd::FromHandle(pHVar6);
    pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarsCustomizeDialog_005c5c18,
                                (CObject *)pCVar7);
    if (pCVar8 == (CObject *)0x0) {
LAB_00546a62:
                    /* WARNING: Subroutine does not return */
      FUN_00429127();
    }
    local_2c = *(int *)(LVar5 + 4);
    while (local_2c != 0) {
      piVar9 = (int *)FUN_004ead48(&local_2c);
      iVar4 = *piVar9;
      if (iVar4 == 0) goto LAB_00546a62;
      if (*(int *)(iVar4 + 0x20) == -1) {
LAB_00546aaa:
        uVar3 = 0;
      }
      else {
        iVar13 = 0;
        uVar12 = *(uint *)(iVar4 + 0x20);
        this_00 = (CCommandManager *)FUN_004b1aad();
        iVar13 = CCommandManager::GetCmdImage(this_00,uVar12,iVar13);
        if (iVar13 != -1) goto LAB_00546aaa;
        uVar3 = 1;
      }
      *(undefined4 *)(iVar4 + 4) = uVar3;
      iVar13 = FUN_00415ee0(*(int *)(iVar4 + 0x2c) + -0x10);
      iVar13 = iVar13 + 0x10;
      local_8 = CONCAT31(local_8._1_3_,2);
      local_24 = iVar13;
      if ((*(int *)(*(int *)(iVar4 + 0x30) + -0xc) != 0) &&
         ((local_28 != 0 || (iVar10 = FUN_004eacf8(iVar13,LVar5), 1 < iVar10)))) {
        FUN_00415f50((int *)(iVar4 + 0x30));
        iVar13 = local_24;
      }
      WVar1 = 0xffffffff;
      if (local_28 == 0) {
LAB_00546b83:
        WVar1 = SendMessageW(*(HWND *)(this + 0x160),0x180,0,iVar13);
      }
      else {
        local_18 = 0;
        do {
          LVar11 = SendMessageW(*(HWND *)(this + 0x160),0x18b,0,0);
          if (LVar11 <= (int)local_18) break;
          uVar3 = FUN_004295fe();
          FUN_0040eb30(uVar3);
          local_8 = CONCAT31(local_8._1_3_,3);
          GetText(local_18,local_1c);
          iVar10 = FUN_0042cb39(iVar13);
          if (0 < iVar10) {
            WVar1 = SendMessageW(*(HWND *)(this + 0x160),0x181,local_18,iVar13);
          }
          local_8 = CONCAT31(local_8._1_3_,2);
          FUN_0040efa0();
          local_18 = local_18 + 1;
        } while (WVar1 == 0xffffffff);
        if (WVar1 == 0xffffffff) goto LAB_00546b83;
      }
      SendMessageW(*(HWND *)(this + 0x160),0x19a,WVar1,iVar4);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_0040efa0();
    }
    SendMessageW(*(HWND *)(this + 0x160),0xb,1,0);
    FUN_0040efa0();
    CWaitCursor::~CWaitCursor(local_11);
  }
  return;
}

