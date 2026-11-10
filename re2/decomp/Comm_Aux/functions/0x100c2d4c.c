// rea decompile_all
// name: CMFCToolBarComboBoxButton::OnChangeParentWnd
// address: 0x100c2d4c
// body: available
// range: 0x100c2d4c-0x100c31ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c2d91 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarComboBoxButton::OnChangeParentWnd(class CWnd *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarComboBoxButton::OnChangeParentWnd(CMFCToolBarComboBoxButton *this,CWnd *param_1)

{
  LPARAM *pLVar1;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *pCVar2;
  code *pcVar3;
  undefined4 *puVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  ulong uVar7;
  int iVar8;
  AFX_GLOBAL_DATA *pAVar9;
  WPARAM WVar10;
  LRESULT LVar11;
  undefined4 uVar12;
  HWND__ *pHVar13;
  int *piVar14;
  uint local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x100c2d58;
  CMFCToolBarButton::OnChangeParentWnd((CMFCToolBarButton *)this,param_1);
  iVar8 = *(int *)(this + 0xb4);
  if ((iVar8 != 0) && (*(int *)(iVar8 + 0x20) != 0)) {
    pHVar5 = GetParent(*(HWND *)(iVar8 + 0x20));
    pCVar6 = CWnd::FromHandle(pHVar5);
    if (pCVar6 == (CWnd *)0x0) {
LAB_100c2d91:
                    /* WARNING: Subroutine does not return */
      FUN_1004886a();
    }
    if (param_1 != (CWnd *)0x0) {
      iVar8 = 0;
      if (pCVar6 != (CWnd *)0x0) {
        iVar8 = *(int *)(pCVar6 + 0x20);
      }
      if (iVar8 == *(int *)(param_1 + 0x20)) goto LAB_100c31e8;
    }
    pcVar3 = *(code **)(**(int **)(this + 0xb4) + 0x60);
    guard_check_icall();
    (*pcVar3)();
    if (*(int **)(this + 0xb4) != (int *)0x0) {
      pcVar3 = *(code **)(**(int **)(this + 0xb4) + 4);
      guard_check_icall(1);
      (*pcVar3)();
    }
    *(undefined4 *)(this + 0xb4) = 0;
    if (*(int **)(this + 0xb0) != (int *)0x0) {
      pcVar3 = *(code **)(**(int **)(this + 0xb0) + 0x60);
      guard_check_icall();
      (*pcVar3)();
      if (*(int **)(this + 0xb0) != (int *)0x0) {
        pcVar3 = *(code **)(**(int **)(this + 0xb0) + 4);
        guard_check_icall(1);
        (*pcVar3)();
      }
      *(undefined4 *)(this + 0xb0) = 0;
    }
  }
  if ((param_1 != (CWnd *)0x0) && (*(int *)(param_1 + 0x20) != 0)) {
    if ((DAT_1020e500 == 0) && ((*(uint *)(this + 0x24) & 0x40000) == 0)) {
      local_28 = 0;
    }
    else {
      local_28 = 1;
    }
    local_24.left = *(LONG *)(this + 0x54);
    local_24.top = *(LONG *)(this + 0x58);
    local_24.right = *(LONG *)(this + 0x5c);
    local_24.bottom = *(LONG *)(this + 0x60);
    InflateRect(&local_24,-2,0);
    local_24.bottom = *(int *)(this + 0x78) + local_24.top;
    pcVar3 = *(code **)(*(int *)this + 0xd4);
    guard_check_icall(param_1,&local_24);
    pCVar6 = (CWnd *)(*pcVar3)();
    *(CWnd **)(this + 0xb4) = pCVar6;
    if (pCVar6 != (CWnd *)0x0) {
      if (*(int *)(pCVar6 + 0x20) != 0) {
        CWnd::EnableWindow(pCVar6,local_28 ^ 1);
        RedrawWindow(*(HWND *)(*(int *)(this + 0xb4) + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
      }
      if ((DAT_10205c6c != 0) &&
         (uVar7 = CWnd::GetExStyle(*(CWnd **)(this + 0xb4)), ((byte)uVar7 & 3) == 2)) {
        uVar7 = CWnd::GetExStyle(*(CWnd **)(this + 0xb4));
        pcVar3 = *(code **)(*(int *)this + 0xd8);
        guard_check_icall(param_1,&local_24,uVar7 & 0x10000 | 0x50001080);
        iVar8 = (*pcVar3)();
        *(int *)(this + 0xb0) = iVar8;
        if (iVar8 == 0) goto LAB_100c31e8;
        pAVar9 = GetGlobalData();
        if (pAVar9 == (AFX_GLOBAL_DATA *)0xfffffee4) {
          WVar10 = 0;
        }
        else {
          WVar10 = *(WPARAM *)(pAVar9 + 0x120);
        }
        SendMessageW(*(HWND *)(*(int *)(this + 0xb0) + 0x20),0x30,WVar10,1);
        pHVar5 = GetParent(*(HWND *)(*(int *)(this + 0xb4) + 0x20));
        pCVar6 = CWnd::FromHandle(pHVar5);
        pCVar6 = CWnd::GetOwner(pCVar6);
        if (pCVar6 == (CWnd *)0x0) {
          uVar12 = 0;
        }
        else {
          uVar12 = *(undefined4 *)(pCVar6 + 0x20);
        }
        *(undefined4 *)(*(int *)(this + 0xb0) + 0x5c) = uVar12;
        pCVar6 = *(CWnd **)(this + 0xb0);
        if ((pCVar6 != (CWnd *)0x0) && (*(int *)(pCVar6 + 0x20) != 0)) {
          CWnd::EnableWindow(pCVar6,local_28 ^ 1);
          RedrawWindow(*(HWND *)(*(int *)(this + 0xb0) + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
        }
      }
      FUN_100c1e59();
      pAVar9 = GetGlobalData();
      if (pAVar9 == (AFX_GLOBAL_DATA *)0xfffffee4) {
        WVar10 = 0;
      }
      else {
        WVar10 = *(WPARAM *)(pAVar9 + 0x120);
      }
      SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x30,WVar10,1);
      LVar11 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x146,0,0);
      if (LVar11 < 1) {
        SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x14b,0,0);
        local_28 = *(uint *)(this + 0xc0);
        puVar4 = *(undefined4 **)(this + 0xdc);
        while (local_28 != 0) {
          if (puVar4 == (undefined4 *)0x0) goto LAB_100c2d91;
          piVar14 = (int *)FUN_10034920(&local_28);
          iVar8 = FUN_100349e0(*piVar14 + -0x10);
          WVar10 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x143,0,iVar8 + 0x10);
          pLVar1 = puVar4 + 2;
          puVar4 = (undefined4 *)*puVar4;
          SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x151,WVar10,*pLVar1);
          FUN_10034f00();
        }
        if (*(int *)(this + 0x74) == -1) goto LAB_100c31e8;
        SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x14e,*(WPARAM *)(this + 0x74),0);
      }
      else {
        FUN_1004a7fc();
        pcVar3 = *(code **)(*(int *)this + 0xe4);
        guard_check_icall();
        (*pcVar3)();
        CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(this + 0xd8));
        WVar10 = 0;
        LVar11 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x146,0,0);
        if (0 < LVar11) {
          do {
            uVar12 = FUN_10048e90();
            FUN_10034c30(uVar12);
            local_8 = 0;
            CComboBox::GetLBText
                      (*(CComboBox **)(this + 0xb4),WVar10,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_28);
            AddTail(&local_28);
            pHVar13 = (HWND__ *)SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x150,WVar10,0)
            ;
            CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)(this + 0xd8),pHVar13);
            local_8 = 0xffffffff;
            FUN_10034f00();
            WVar10 = WVar10 + 1;
            LVar11 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x146,0,0);
          } while ((int)WVar10 < LVar11);
        }
        LVar11 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x147,0,0);
        *(LRESULT *)(this + 0x74) = LVar11;
      }
      if ((*(int *)(this + 0x74) != -1) &&
         (LVar11 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x146,0,0),
         *(int *)(this + 0x74) < LVar11)) {
        pCVar2 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(this + 0xb8)
        ;
        CComboBox::GetLBText(*(CComboBox **)(this + 0xb4),*(int *)(this + 0x74),pCVar2);
        FUN_10056072(*(undefined4 *)pCVar2);
        if (*(int *)(this + 0xb0) != 0) {
          FUN_10056072(*(undefined4 *)pCVar2);
        }
      }
    }
  }
LAB_100c31e8:
  FUN_1017f5f4();
  return;
}

