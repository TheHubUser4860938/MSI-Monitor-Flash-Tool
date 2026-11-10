// rea decompile_all
// name: CMFCToolBarComboBoxButton::NotifyCommand
// address: 0x100c26b3
// body: available
// range: 0x100c26b3-0x100c2aae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c28e1 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBarComboBoxButton::NotifyCommand(int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCToolBarComboBoxButton::NotifyCommand(CMFCToolBarComboBoxButton *this,int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  LRESULT LVar4;
  int iVar5;
  undefined4 uVar6;
  WPARAM wParam;
  CObject *pCVar7;
  int iVar8;
  CObList local_50 [4];
  undefined4 *local_4c;
  CObList local_34 [4];
  undefined4 *local_30;
  WPARAM local_18;
  CMFCToolBarComboBoxButton *local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_8 = 0x100c26bf;
  iVar8 = *(int *)(this + 0xb4);
  if ((iVar8 != 0) && (*(int *)(iVar8 + 0x20) != 0)) {
    if (DAT_10205c6c != 0) {
      if (param_1 == 0) {
        return 1;
      }
      pHVar2 = GetParent(*(HWND *)(iVar8 + 0x20));
      pCVar3 = CWnd::FromHandle(pHVar2);
      if (pCVar3 != (CWnd *)0x0) {
        pHVar2 = GetParent(*(HWND *)(*(int *)(this + 0xb4) + 0x20));
        pCVar3 = CWnd::FromHandle(pHVar2);
        InvalidateRect(*(HWND *)(pCVar3 + 0x20),(RECT *)(this + 0x90),1);
        pHVar2 = GetParent(*(HWND *)(*(int *)(this + 0xb4) + 0x20));
        pCVar3 = CWnd::FromHandle(pHVar2);
        UpdateWindow(*(HWND *)(pCVar3 + 0x20));
      }
    }
    if (param_1 == 1) {
      if (*(int *)(this + 0xb0) == 0) {
        return 1;
      }
      uVar6 = FUN_10048e90();
      FUN_10034c30(uVar6);
      local_8 = 1;
      LVar4 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x147,0,0);
      CComboBox::GetLBText
                (*(CComboBox **)(this + 0xb4),LVar4,
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_18);
      FUN_10056072(local_18);
      FUN_10034f00();
      return 1;
    }
    if (param_1 == 3) {
      if (*(CWnd **)(this + 0xb0) == (CWnd *)0x0) {
        return 1;
      }
      CWnd::SetFocus(*(CWnd **)(this + 0xb0));
      return 1;
    }
    if (param_1 == 4) {
      return 1;
    }
    if (param_1 == 5) {
      CWnd::GetWindowTextW
                (*(CWnd **)(this + 0xb4),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(this + 0xb8)
                );
      if ((*(int *)(this + 0xb0) != 0) && (*(int *)(*(int *)(this + 0xb0) + 0x20) != 0)) {
        uVar6 = FUN_10048e90();
        FUN_10034c30(uVar6);
        local_8 = 2;
        CWnd::GetWindowTextW
                  (*(CWnd **)(this + 0xb0),
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
        iVar8 = *(int *)(this + 0xb4);
        if ((iVar8 != 0) && (*(int *)(iVar8 + 0x20) != 0)) {
          LVar4 = SendMessageW(*(HWND *)(iVar8 + 0x20),0x147,0,0);
          local_18 = LVar4 + 1;
          wParam = SendMessageW(*(HWND *)(iVar8 + 0x20),0x158,local_18,(LPARAM)local_14[0]);
          if ((wParam != 0xffffffff) ||
             (wParam = SendMessageW(*(HWND *)(iVar8 + 0x20),0x14c,local_18,(LPARAM)local_14[0]),
             wParam != 0xffffffff)) {
            SendMessageW(*(HWND *)(iVar8 + 0x20),0x14e,wParam,0);
          }
          FUN_10056072(local_14[0]);
        }
        local_8 = 0xffffffff;
        FUN_10034f00();
      }
      CObList::CObList(local_50,10);
      local_8 = 3;
      iVar8 = FUN_10094980(*(undefined4 *)(this + 0x20),local_50);
      if (0 < iVar8) {
        while (local_4c != (undefined4 *)0x0) {
          if (local_4c == (undefined4 *)0x0) goto LAB_100c28e1;
          puVar1 = (undefined4 *)*local_4c;
          pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarComboBoxButton_10205c74,
                                      (CObject *)local_4c[2]);
          local_4c = puVar1;
          if ((pCVar7 != (CObject *)0x0) && (pCVar7 != (CObject *)this)) {
            if (*(int *)(pCVar7 + 0xb4) != 0) {
              FUN_10056072(*(undefined4 *)(this + 0xb8));
            }
            FUN_10034940(this + 0xb8);
          }
        }
      }
      CObList::~CObList(local_50);
      return 1;
    }
    if (param_1 == 6) {
      return 1;
    }
    iVar8 = param_1 + -9;
    if (iVar8 == 0) {
      LVar4 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x147,0,0);
      *(LRESULT *)(this + 0x74) = LVar4;
      if (-1 < LVar4) {
        CComboBox::GetLBText
                  (*(CComboBox **)(this + 0xb4),LVar4,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                   (this + 0xb8));
        if (*(int *)(this + 0xb0) != 0) {
          FUN_10056072(*(undefined4 *)(this + 0xb8));
        }
        CObList::CObList(local_34,10);
        local_8 = iVar8;
        iVar5 = FUN_10094980(*(undefined4 *)(this + 0x20),local_34);
        if (0 < iVar5) {
          while (local_30 != (undefined4 *)0x0) {
            if (local_30 == (undefined4 *)0x0) {
LAB_100c28e1:
                    /* WARNING: Subroutine does not return */
              FUN_1004886a();
            }
            puVar1 = (undefined4 *)*local_30;
            local_14[0] = (CMFCToolBarComboBoxButton *)
                          AfxDynamicDownCast((CRuntimeClass *)
                                             &PTR_s_CMFCToolBarComboBoxButton_10205c74,
                                             (CObject *)local_30[2]);
            local_30 = puVar1;
            if ((local_14[0] != (CMFCToolBarComboBoxButton *)0x0) && (local_14[0] != this)) {
              iVar5 = iVar8;
              LVar4 = SendMessageW(*(HWND *)(*(int *)(this + 0xb4) + 0x20),0x147,0,0);
              SelectItem(local_14[0],LVar4,iVar5);
              iVar5 = *(int *)(local_14[0] + 0xb4);
              if ((iVar5 != 0) && (*(int *)(iVar5 + 0x20) != 0)) {
                pHVar2 = GetParent(*(HWND *)(iVar5 + 0x20));
                pCVar3 = CWnd::FromHandle(pHVar2);
                if (pCVar3 != (CWnd *)0x0) {
                  pHVar2 = GetParent(*(HWND *)(*(int *)(local_14[0] + 0xb4) + 0x20));
                  pCVar3 = CWnd::FromHandle(pHVar2);
                  InvalidateRect(*(HWND *)(pCVar3 + 0x20),(RECT *)(local_14[0] + 0x90),1);
                  pHVar2 = GetParent(*(HWND *)(*(int *)(local_14[0] + 0xb4) + 0x20));
                  pCVar3 = CWnd::FromHandle(pHVar2);
                  UpdateWindow(*(HWND *)(pCVar3 + 0x20));
                }
              }
            }
          }
        }
        local_8 = 0xffffffff;
        CObList::~CObList(local_34);
        if (*(CWnd **)(this + 0xb0) == (CWnd *)0x0) {
          return 1;
        }
        CWnd::SetFocus(*(CWnd **)(this + 0xb0));
        return 1;
      }
    }
  }
  return 0;
}

