// rea decompile_all
// name: CMFCRibbonBar::SetKeyboardNavigationLevel
// address: 0x10152886
// body: available
// range: 0x10152886-0x10152c2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall CMFCRibbonBar::SetKeyboardNavigationLevel(class CObject *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonBar::SetKeyboardNavigationLevel(CMFCRibbonBar *this,CObject *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  CMFCRibbonKeyTip *pCVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  BOOL BVar6;
  undefined4 uVar7;
  int *piVar8;
  CObject *pCVar9;
  CMFCRibbonBaseElement *pCVar10;
  CMFCPopupMenu *pCVar11;
  CObject *pCVar12;
  undefined4 *puVar13;
  CMFCRibbonBar *pCVar14;
  int iVar15;
  undefined **local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  CMFCRibbonKeyTip *local_30;
  CMFCRibbonBar *local_2c;
  CFrameWnd *local_28;
  RECT local_24;
  CObject *local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  local_8 = (CObject *)0x10152892;
  local_2c = this;
  if ((*(int *)(this + 0x318) != 0) && (((byte)this[0x330] & 2) == 0)) {
    if (param_2 != 0) {
      CWnd::SetFocus((CWnd *)this);
    }
    RemoveAllKeys(this);
    *(undefined4 *)(this + 0x2d8) = 0;
    *(undefined4 *)(this + 0x844) = 0;
    *(CObject **)(this + 0x848) = param_1;
    local_28 = CWnd::GetParentFrame((CWnd *)this);
    pHVar4 = GetFocus();
    pCVar5 = CWnd::FromHandle(pHVar4);
    if (((pCVar5 != (CWnd *)0x0) && (*(int *)(pCVar5 + 0x20) != 0)) &&
       ((BVar6 = IsChild(*(HWND *)(local_28 + 0x20),*(HWND *)(pCVar5 + 0x20)), BVar6 != 0 ||
        (*(int *)(pCVar5 + 0x20) == *(int *)(local_28 + 0x20))))) {
      if (param_1 == (CObject *)0x0) {
        *(undefined4 *)(this + 0x2d4) = 0;
        if (*(int *)(this + 0x334) != 0) {
          local_30 = (CMFCRibbonKeyTip *)FUN_10047eb4(0x98);
          local_8 = param_1;
          if (local_30 == (CMFCRibbonKeyTip *)0x0) {
            uVar7 = 0;
          }
          else {
            uVar7 = CMFCRibbonKeyTip::CMFCRibbonKeyTip
                              (local_30,*(CMFCRibbonBaseElement **)(this + 0x334),0);
          }
          local_8 = (CObject *)0xffffffff;
          FUN_10100265(*(undefined4 *)(this + 0x7e8),uVar7);
        }
        if (0 < *(int *)(this + 0x7d4)) {
          iVar15 = 0;
          do {
            piVar8 = (int *)FUN_10151a1d(iVar15);
            iVar1 = *piVar8;
            if (*(int *)(iVar1 + 0x68) != 0) {
              local_30 = (CMFCRibbonKeyTip *)FUN_10047eb4(0x98);
              local_8 = (CObject *)0x1;
              if (local_30 == (CMFCRibbonKeyTip *)0x0) {
                uVar7 = 0;
              }
              else {
                uVar7 = CMFCRibbonKeyTip::CMFCRibbonKeyTip
                                  (local_30,(CMFCRibbonBaseElement *)(iVar1 + 0x90),0);
              }
              local_8 = (CObject *)0xffffffff;
              FUN_10100265(*(undefined4 *)(this + 0x7e8),uVar7);
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < *(int *)(this + 0x7d4));
        }
        pCVar14 = this + 0x7e0;
        pcVar2 = *(code **)(*(int *)(this + 0xda8) + 0x1e0);
        guard_check_icall(pCVar14);
        (*pcVar2)();
        this = local_2c;
        pcVar2 = *(code **)(*(int *)(local_2c + 0x340) + 0x1e0);
        guard_check_icall(pCVar14);
        (*pcVar2)();
        if ((*(int *)(this + 0x7a8) == 0) || (((byte)this[0x330] & 2) != 0)) {
          if (*(int *)(this + 0x334) != 0) {
            *(undefined4 *)(*(int *)(this + 0x334) + 0xcc) = 1;
          }
        }
        else {
          *(undefined4 *)(*(int *)(this + 0x7a8) + 0x15c) = 1;
        }
      }
      else {
        local_44 = CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::vftable;
        local_40 = 0;
        local_34 = 0;
        local_38 = 0;
        local_3c = 0;
        local_8 = (CObject *)0x2;
        local_28 = (CFrameWnd *)
                   AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonCategory_101ca410,param_1);
        pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonPanel_101c9d78,param_1);
        if (local_28 == (CFrameWnd *)0x0) {
          if (pCVar9 != (CObject *)0x0) {
            CMFCRibbonPanel::GetElements
                      ((CMFCRibbonPanel *)pCVar9,
                       (CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *)&local_44);
            pcVar2 = *(code **)(*(int *)pCVar9 + 0xb4);
            guard_check_icall();
            iVar15 = (*pcVar2)();
            if (iVar15 == 0) {
              local_28 = (CFrameWnd *)0x0;
              pCVar10 = CMFCRibbonPanel::GetParentButton((CMFCRibbonPanel *)pCVar9);
              if ((pCVar10 == (CMFCRibbonBaseElement *)0x0) ||
                 (pCVar10 = CMFCRibbonPanel::GetParentButton((CMFCRibbonPanel *)pCVar9),
                 *(int *)(pCVar10 + 0xc4) == 0)) {
                local_28 = *(CFrameWnd **)(pCVar9 + 0x108);
              }
              if (*(int *)(pCVar9 + 0x10c) != 0) {
                pHVar4 = GetParent(*(HWND *)(*(int *)(pCVar9 + 0x10c) + 0x20));
                pCVar5 = CWnd::FromHandle(pHVar4);
                pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10205bec,
                                            (CObject *)pCVar5);
                pCVar11 = CMFCPopupMenu::GetParentPopupMenu((CMFCPopupMenu *)pCVar9);
                pCVar12 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonPanelMenu_101d3afc,
                                             (CObject *)pCVar11);
                if (pCVar12 == (CObject *)0x0) {
                  if (*(int *)(pCVar9 + 0x116c) != 0) {
                    local_28 = *(CFrameWnd **)(*(int *)(pCVar9 + 0x116c) + 0x88);
                  }
                }
                else {
                  iVar15 = *(int *)(pCVar12 + 0x201c);
                  *(int *)(this + 0x844) = iVar15;
                  if (iVar15 == 0) {
                    local_28 = *(CFrameWnd **)(pCVar12 + 0x202c);
                  }
                }
              }
              if (local_28 != (CFrameWnd *)0x0) {
                local_24.left = *(LONG *)((int)local_28 + 0x7c);
                local_24.top = *(LONG *)((int)local_28 + 0x80);
                local_24.right = *(LONG *)((int)local_28 + 0x84);
                local_24.bottom = *(LONG *)((int)local_28 + 0x88);
                BVar6 = IsRectEmpty(&local_24);
                if (BVar6 == 0) {
                  *(CFrameWnd **)(this + 0x844) = local_28;
                }
              }
            }
          }
        }
        else if ((*(int *)(this + 0x330) == 0) || (*(int *)(local_28 + 0x540) != 0)) {
          CMFCRibbonCategory::GetElements
                    ((CMFCRibbonCategory *)local_28,
                     (CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *)&local_44);
        }
        local_28 = (CFrameWnd *)0x0;
        if (0 < local_3c) {
          local_30 = (CMFCRibbonKeyTip *)(this + 0x7e0);
          iVar15 = 0;
          do {
            pCVar3 = local_30;
            puVar13 = (undefined4 *)FUN_10151a1d(iVar15);
            pcVar2 = *(code **)(*(int *)*puVar13 + 0x1e0);
            guard_check_icall(pCVar3);
            (*pcVar2)();
            iVar15 = iVar15 + 1;
            this = local_2c;
          } while (iVar15 < local_3c);
        }
        local_8 = (CObject *)0xffffffff;
        *(undefined4 *)(this + 0x2d4) = 1;
        CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::
        ~CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>
                  ((CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *)&local_44);
      }
      FUN_10153105(0);
      RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
    }
  }
  FUN_1017f5f4();
  return;
}

