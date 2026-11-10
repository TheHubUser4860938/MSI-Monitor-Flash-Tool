// rea decompile_all
// name: CFrameImpl::OnShowPopupMenu
// address: 0x101179f9
// body: available
// range: 0x101179f9-0x10117bb8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: int __thiscall CFrameImpl::OnShowPopupMenu(class CMFCPopupMenu *,class CFrameWnd *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CFrameImpl::OnShowPopupMenu(CFrameImpl *this,CMFCPopupMenu *param_1,CFrameWnd *param_2)

{
  code *pcVar1;
  HWND pHVar2;
  int iVar3;
  HMENU pHVar4;
  int *piVar5;
  HWND pHVar6;
  CObject *this_00;
  undefined **local_1c;
  undefined4 local_18;
  CFrameImpl *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x10117a05;
  this_00 = (CObject *)0x0;
  if (*(int *)(this + 0xb4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(this + 0xb4) + 0x1b8);
  }
  if (((iVar3 == 0) || (*(int *)(iVar3 + 8) == 0)) || (*(int *)(iVar3 + 4) == 0)) {
    local_14 = this;
    if ((param_1 != (CMFCPopupMenu *)0x0) && (*(int *)(this + 0x18) != 0)) {
      pcVar1 = *(code **)(*(int *)param_1 + 0x1c8);
      guard_check_icall();
      (*pcVar1)();
      this = local_14;
      if (*(int *)(local_14 + 0xb4) != 0) {
        iVar3 = FUN_100930d7(*(undefined4 *)(local_14 + 0x18),0);
        if (-1 < iVar3) {
          if (DAT_1020e500 != 0) goto LAB_10117a2e;
          CMFCPopupMenu::RemoveAllItems(param_1);
          local_1c = CMenu::vftable;
          local_18 = 0;
          local_8 = 0;
          pHVar4 = CreatePopupMenu();
          CMenu::Attach((CMenu *)&local_1c,pHVar4);
          CDockingManager::BuildPanesMenu
                    (*(CDockingManager **)(this + 0xb4),(CMenu *)&local_1c,*(int *)(this + 0x38));
          pcVar1 = *(code **)(*(int *)param_1 + 0x1c8);
          guard_check_icall();
          piVar5 = (int *)(*pcVar1)();
          pcVar1 = *(code **)(*piVar5 + 0x438);
          guard_check_icall(local_18,1);
          (*pcVar1)();
          this = local_14;
          *(undefined4 *)(*(int *)(local_14 + 0xb4) + 0x1d8) = 1;
          local_8 = 1;
          local_1c = CMenu::vftable;
          CMenu::DestroyMenu((CMenu *)&local_1c);
          local_8 = 0xffffffff;
        }
      }
    }
    DAT_1020f8f4 = param_1;
    if (param_1 != (CMFCPopupMenu *)0x0) {
      iVar3 = FUN_101167df(param_1);
      if (iVar3 != 0) {
        ShowQuickCustomizePane(this,param_1);
      }
      if (DAT_1020e500 == 0) {
        do {
          if (*(int *)(param_1 + 0x158) == 0) break;
          this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_101ba5bc,
                                       *(CObject **)(*(int *)(param_1 + 0x158) + 0x6c));
          param_1 = CMFCPopupMenu::GetParentPopupMenu(param_1);
        } while (param_1 != (CMFCPopupMenu *)0x0);
        if (this_00 != (CObject *)0x0) {
          iVar3 = FUN_1004e58b(&PTR_s_CMFCPopupMenuBar_10205d98);
          if (iVar3 == 0) {
            pcVar1 = *(code **)(*(int *)this_00 + 0x168);
            guard_check_icall();
            iVar3 = (*pcVar1)();
            if (iVar3 != 0) {
              pHVar2 = *(HWND *)(this_00 + 0x20);
              pHVar6 = GetFocus();
              if ((pHVar6 != pHVar2) && (DAT_10205bdc != 0)) {
                CWnd::SetFocus((CWnd *)this_00);
              }
            }
          }
        }
      }
    }
    iVar3 = 1;
  }
  else {
LAB_10117a2e:
    iVar3 = 0;
  }
  return iVar3;
}

