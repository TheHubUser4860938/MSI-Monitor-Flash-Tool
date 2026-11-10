// rea decompile_all
// name: CMultiPaneFrameWnd::DockPaneStandard
// address: 0x100f7fcb
// body: available
// range: 0x100f7fcb-0x100f817b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f80c7 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual class CDockablePane * __thiscall CMultiPaneFrameWnd::DockPaneStandard(int &)
   
   Library: Visual Studio 2015 Release */

CDockablePane * __thiscall
CMultiPaneFrameWnd::DockPaneStandard(CMultiPaneFrameWnd *this,int *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  HWND pHVar4;
  BOOL BVar5;
  CWnd *pCVar6;
  CObject *pCVar7;
  undefined4 *puVar8;
  CObList local_50 [4];
  undefined4 *local_4c;
  undefined **local_34;
  undefined4 *local_30;
  CObject *local_18;
  CWnd *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_8 = 0x100f7fd7;
  pcVar2 = *(code **)(*(int *)this + 0x19c);
  guard_check_icall();
  iVar3 = (*pcVar2)();
  if (iVar3 == 0) {
    return (CDockablePane *)0x0;
  }
  CObList::CObList(local_50,10);
  local_8 = 0;
  CPaneContainerManager::AddPanesToList
            ((CPaneContainerManager *)(this + 400),local_50,(CObList *)0x0);
  CList<HWND__*,HWND__*>::CList<HWND__*,HWND__*>((CList<HWND__*,HWND__*> *)&local_34,10);
  local_8 = CONCAT31(local_8._1_3_,1);
  puVar8 = local_4c;
  while (puVar8 != (undefined4 *)0x0) {
    if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1004a383();
    }
    puVar1 = puVar8 + 2;
    puVar8 = (undefined4 *)*puVar8;
    pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_DAT_101d7084,(CObject *)*puVar1);
    if (pCVar7 != (CObject *)0x0) {
      CList<HWND__*,HWND__*>::AddTail
                ((CList<HWND__*,HWND__*> *)&local_34,*(HWND__ **)(pCVar7 + 0x20));
    }
  }
  local_14 = *(CWnd **)(this + 0x164);
  iVar3 = *(int *)(this + 0x158);
  local_18 = (CObject *)0x0;
  if (local_14 != (CWnd *)0x0) {
    pcVar2 = *(code **)(*(int *)local_14 + 0x228);
    guard_check_icall(0);
    local_18 = (CObject *)(*pcVar2)();
  }
  pCVar6 = local_14;
  pHVar4 = GetFocus();
  local_14 = CWnd::FromHandle(pHVar4);
  if (local_18 == (CObject *)0x0) {
    pcVar2 = *(code **)(*(int *)this + 400);
    guard_check_icall((iVar3 != 0) + '\x01',pCVar6,5);
    iVar3 = (*pcVar2)();
  }
  else {
    pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMultiPaneFrameWnd_1023d950,local_18);
    if ((pCVar7 == (CObject *)0x0) || (pCVar7 == (CObject *)this)) goto LAB_100f80fe;
    pcVar2 = *(code **)(*(int *)pCVar7 + 0x248);
    guard_check_icall(this,5);
    iVar3 = (*pcVar2)();
  }
  *param_1 = (uint)(iVar3 == 0);
LAB_100f80fe:
  pCVar6 = local_14;
  if ((local_14 != (CWnd *)0x0) && (BVar5 = IsWindow(*(HWND *)(local_14 + 0x20)), BVar5 != 0)) {
    CWnd::SetFocus(pCVar6);
  }
  if (*param_1 != 0) {
    while (local_30 != (undefined4 *)0x0) {
      puVar8 = (undefined4 *)*local_30;
      pCVar6 = CWnd::FromHandle((HWND__ *)local_30[2]);
      pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1023db9c,(CObject *)pCVar6);
      local_30 = puVar8;
      if (pCVar7 != (CObject *)0x0) {
        pcVar2 = *(code **)(*(int *)pCVar7 + 0x35c);
        guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  local_34 = CList<HWND__*,HWND__*>::vftable;
  CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)&local_34);
  CObList::~CObList(local_50);
  return (CDockablePane *)0x0;
}

