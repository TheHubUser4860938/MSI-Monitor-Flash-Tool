// rea decompile_all
// name: CMFCToolBarsMenuPropertyPage::OnInitDialog
// address: 0x1013a83a
// body: available
// range: 0x1013a83a-0x1013ae95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1013a89c to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCToolBarsMenuPropertyPage::OnInitDialog(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCToolBarsMenuPropertyPage::OnInitDialog(CMFCToolBarsMenuPropertyPage *this)

{
  code *pcVar1;
  int *piVar2;
  bool bVar3;
  undefined4 *puVar4;
  CWnd *pCVar5;
  CObject *pCVar6;
  AFX_MODULE_STATE *pAVar7;
  int *piVar8;
  int iVar9;
  LRESULT LVar10;
  undefined4 uVar11;
  HWND pHVar12;
  WPARAM WVar13;
  CStringList local_40 [4];
  undefined4 *local_3c;
  int *local_24;
  int *local_20;
  LPARAM local_1c;
  undefined4 *local_18;
  WPARAM local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x1013a846;
  CDialog::OnInitDialog((CDialog *)this);
  iVar9 = *(int *)(this + 0x5d4);
  puVar4 = DAT_10245d0c;
  while ((iVar9 == 0 && (puVar4 != (undefined4 *)0x0))) {
    local_18 = (undefined4 *)*puVar4;
    pCVar6 = (CObject *)puVar4[2];
    if (pCVar6 == (CObject *)0x0) goto LAB_1013a89c;
    pCVar5 = CWnd::FromHandlePermanent(*(HWND__ **)(pCVar6 + 0x20));
    if (pCVar5 != (CWnd *)0x0) {
      pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCMenuBar_1023dad8,pCVar6);
      *(CObject **)(this + 0x5d4) = pCVar6;
    }
    iVar9 = *(int *)(this + 0x5d4);
    puVar4 = local_18;
  }
  local_18 = puVar4;
  if (*(int *)(this + 0x5d4) == 0) {
    CWnd::EnableWindow((CWnd *)(this + 0x540),0);
    iVar9 = 0;
    pCVar5 = CWnd::GetDlgItem((CWnd *)this,0x40f0);
    CWnd::EnableWindow(pCVar5,iVar9);
    iVar9 = FUN_1004c4e6(0x3e87);
    if ((iVar9 == 0) || (iVar9 = FUN_10047070(iVar9,0x3e87), iVar9 == 0)) goto LAB_1013a89c;
    FUN_10057526(0);
  }
  else {
    local_14 = 0xffffffff;
    *(CMFCToolBarsMenuPropertyPage **)(*(int *)(this + 0x5d4) + 0xd88) = this;
    *(int *)(this + 0x5e0) = (*(int **)(this + 0x5d4))[0x353];
    pcVar1 = *(code **)(**(int **)(this + 0x5d4) + 0x3b0);
    guard_check_icall(0xffffffff);
    (*pcVar1)();
    FUN_100c8753(*(undefined4 *)(this + 0x5e0),*(undefined4 *)(this + 0x5d4));
    pAVar7 = AfxGetModuleState();
    piVar2 = *(int **)(*(int *)(pAVar7 + 4) + 0x5c);
    local_24 = piVar2;
    if ((*(int *)(this + 0x5f0) != 0) && (piVar2 != (int *)0x0)) {
      pcVar1 = *(code **)(*piVar2 + 0x10);
      guard_check_icall();
      local_18 = (undefined4 *)(*pcVar1)();
      while (local_18 != (undefined4 *)0x0) {
        pcVar1 = *(code **)(*piVar2 + 0x14);
        guard_check_icall(&local_18);
        piVar8 = (int *)(*pcVar1)();
        local_20 = piVar8;
        iVar9 = FUN_10051e53(&PTR_s_CMultiDocTemplate_101f5074);
        if ((iVar9 != 0) && (piVar8[0x22] != 0)) {
          bVar3 = false;
          WVar13 = 0;
          do {
            LVar10 = SendMessageW(*(HWND *)(this + 0x560),0x146,0,0);
            if (LVar10 <= (int)WVar13) break;
            LVar10 = SendMessageW(*(HWND *)(this + 0x560),0x150,WVar13,0);
            if ((LVar10 == 0) || (*(int *)(LVar10 + 0x54) != local_20[0x15])) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            WVar13 = WVar13 + 1;
          } while (!bVar3);
          piVar2 = local_24;
          if (!bVar3) {
            uVar11 = FUN_10049868();
            FUN_100476a0(uVar11);
            piVar2 = local_20;
            local_8 = 0;
            pcVar1 = *(code **)(*local_20 + 100);
            guard_check_icall(&local_1c,2);
            (*pcVar1)();
            WVar13 = SendMessageW(*(HWND *)(this + 0x560),0x143,0,local_1c);
            SendMessageW(*(HWND *)(this + 0x560),0x151,WVar13,(LPARAM)piVar2);
            if (piVar2[0x22] == *(int *)(this + 0x5e0)) {
              local_14 = WVar13;
            }
            local_8 = 0xffffffff;
            FUN_100476d0();
            piVar2 = local_24;
          }
        }
      }
    }
    uVar11 = FUN_10049868();
    FUN_100476a0(uVar11);
    local_8 = 1;
    iVar9 = FUN_1004c4e6(0x3eea);
    if ((iVar9 == 0) || (iVar9 = FUN_10047070(iVar9,0x3eea), iVar9 == 0)) goto LAB_1013a89c;
    WVar13 = SendMessageW(*(HWND *)(this + 0x560),0x143,0,(LPARAM)local_24);
    SendMessageW(*(HWND *)(this + 0x560),0x151,WVar13,0);
    if (local_14 == 0xffffffff) {
      *(undefined4 *)(this + 0x5ec) = 1;
      local_14 = WVar13;
    }
    *(undefined4 *)(this + 0x5e4) = *(undefined4 *)(this + 0x5e0);
    SendMessageW(*(HWND *)(this + 0x560),0x14e,local_14,0);
    uVar11 = FUN_10049868();
    FUN_100476a0(uVar11);
    local_8 = CONCAT31(local_8._1_3_,2);
    iVar9 = FUN_1004c4e6(0x42d6);
    if ((iVar9 == 0) || (iVar9 = FUN_10047070(iVar9,0x42d6), iVar9 == 0)) goto LAB_1013a89c;
    SendMessageW(*(HWND *)(this + 0x460),0x14a,0xffffffff,local_14);
    iVar9 = FUN_1004c4e6(0x42d7);
    if ((iVar9 == 0) || (iVar9 = FUN_10047070(iVar9,0x42d7), iVar9 == 0)) goto LAB_1013a89c;
    SendMessageW(*(HWND *)(this + 0x460),0x14a,0xffffffff,local_14);
    iVar9 = FUN_1004c4e6(0x42d8);
    if ((iVar9 == 0) || (iVar9 = FUN_10047070(iVar9,0x42d8), iVar9 == 0)) goto LAB_1013a89c;
    SendMessageW(*(HWND *)(this + 0x460),0x14a,0xffffffff,local_14);
    iVar9 = FUN_1004c4e6(0x42d9);
    if ((iVar9 == 0) || (iVar9 = FUN_10047070(iVar9,0x42d9), iVar9 == 0)) goto LAB_1013a89c;
    SendMessageW(*(HWND *)(this + 0x460),0x14a,0xffffffff,local_14);
    iVar9 = FUN_1004c4e6(0x42da);
    if ((iVar9 == 0) || (iVar9 = FUN_10047070(iVar9,0x42da), iVar9 == 0)) goto LAB_1013a89c;
    SendMessageW(*(HWND *)(this + 0x460),0x14a,0xffffffff,local_14);
    if (*(int *)(this + 0x5cc) == 999) {
      LVar10 = SendMessageW(*(HWND *)(this + 0x460),0x146,0,0);
      *(LRESULT *)(this + 0x5cc) = LVar10 + -1;
    }
    FUN_10057526(0);
    FUN_1013b41a();
    FUN_100476d0();
    local_8 = 0xffffffff;
    FUN_100476d0();
  }
  uVar11 = FUN_10049868();
  FUN_100476a0(uVar11);
  local_8 = 3;
  iVar9 = FUN_1004c4e6(0x3eec);
  if ((iVar9 != 0) && (iVar9 = FUN_10047070(iVar9,0x3eec), iVar9 != 0)) {
    SendMessageW(*(HWND *)(this + 0x4e0),0x143,0,(LPARAM)local_24);
    SendMessageW(*(HWND *)(this + 0x4e0),0x14e,0,0);
    local_8 = 0xffffffff;
    FUN_100476d0();
    if (DAT_10247224 == (CContextMenuManager *)0x0) {
      CWnd::ShowWindow((CWnd *)(this + 0x1c0),0);
      CWnd::ShowWindow((CWnd *)(this + 0x4c0),0);
      CWnd::ShowWindow((CWnd *)(this + 0x140),0);
      CWnd::ShowWindow((CWnd *)(this + 0x340),0);
      CWnd::ShowWindow((CWnd *)(this + 0x3c0),0);
    }
    else {
      CStringList::CStringList(local_40,10);
      local_8 = 4;
      CContextMenuManager::GetMenuNames(DAT_10247224,local_40);
      local_18 = local_3c;
      while (local_18 != (undefined4 *)0x0) {
        piVar2 = local_18 + 2;
        local_18 = (undefined4 *)*local_18;
        iVar9 = FUN_10047580(*piVar2 + -0x10);
        SendMessageW(*(HWND *)(this + 0x4e0),0x143,0,iVar9 + 0x10);
        FUN_100476d0();
      }
      LVar10 = SendMessageW(*(HWND *)(this + 0x4e0),0x146,0,0);
      CWnd::EnableWindow((CWnd *)(this + 0x1c0),(uint)(1 < LVar10));
      LVar10 = SendMessageW(*(HWND *)(this + 0x4e0),0x146,0,0);
      CWnd::EnableWindow((CWnd *)(this + 0x4c0),(uint)(1 < LVar10));
      local_8 = 0xffffffff;
      CStringList::~CStringList(local_40);
    }
    pHVar12 = GetParent(*(HWND *)(this + 0x20));
    pCVar5 = CWnd::FromHandle(pHVar12);
    pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarsCustomizeDialog_101efc88,
                                (CObject *)pCVar5);
    if (pCVar6 != (CObject *)0x0) {
      if (((byte)pCVar6[0x15c] & 1) == 0) {
        CWnd::ShowWindow((CWnd *)(this + 0x2c0),0);
      }
      if (((byte)pCVar6[0x15c] & 4) == 0) {
        CWnd::ShowWindow((CWnd *)(this + 0xc0),0);
        CWnd::ShowWindow((CWnd *)(this + 0x440),0);
      }
      return 1;
    }
  }
LAB_1013a89c:
                    /* WARNING: Subroutine does not return */
  FUN_1004a383();
}

