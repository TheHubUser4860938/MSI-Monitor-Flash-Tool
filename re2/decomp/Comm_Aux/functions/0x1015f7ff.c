// rea decompile_all
// name: CPaneContainerManager::RemovePaneFromPaneContainer
// address: 0x1015f7ff
// body: available
// range: 0x1015f7ff-0x1015f939 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1015f87b to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CPaneContainerManager::RemovePaneFromPaneContainer(class
   CDockablePane *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CPaneContainerManager::RemovePaneFromPaneContainer
          (CPaneContainerManager *this,CDockablePane *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  __POSITION *p_Var4;
  undefined4 *puVar5;
  CObject *pCVar6;
  HWND__ *pHVar7;
  undefined **local_38 [7];
  __POSITION *local_1c;
  int local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x1015f80b;
  if (*(int *)(this + 0x3c) == 0) {
    iVar2 = 0;
  }
  else {
    local_14[0] = 0;
    pcVar1 = *(code **)(*(int *)this + 0x8c);
    guard_check_icall(param_1,local_14);
    piVar3 = (int *)(*pcVar1)();
    iVar2 = 0;
    if (piVar3 != (int *)0x0) {
      iVar2 = *piVar3;
      guard_check_icall(param_1,local_14[0] == 0);
      (**(code **)(iVar2 + 0x28))();
      CPaneContainer::CheckPaneDividerVisibility(*(CPaneContainer **)(this + 0x3c));
      if ((CObject *)piVar3[3] != (CObject *)0x0) {
        p_Var4 = CObList::Find((CObList *)(this + 0x20),(CObject *)piVar3[3],(__POSITION *)0x0);
        if (p_Var4 == (__POSITION *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_1004886a();
        }
        FUN_1015d6ca(0);
      }
      local_1c = CObList::Find((CObList *)(this + 4),(CObject *)param_1,(__POSITION *)0x0);
      if (local_1c != (__POSITION *)0x0) {
        CList<HWND__*,HWND__*>::CList<HWND__*,HWND__*>((CList<HWND__*,HWND__*> *)local_38,10);
        local_18 = *(int *)(this + 8);
        local_8 = 0;
        while (local_18 != 0) {
          puVar5 = (undefined4 *)FUN_10034920(&local_18);
          pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_DAT_101b15d4,(CObject *)*puVar5);
          pHVar7 = (HWND__ *)0x0;
          if (pCVar6 != (CObject *)0x0) {
            pHVar7 = *(HWND__ **)(pCVar6 + 0x20);
          }
          CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)local_38,pHVar7);
        }
        iVar2 = FUN_1004e58b(&PTR_s_CPaneFrameWnd_10205d4c);
        CRecentDockSiteInfo::SaveListOfRecentPanes
                  ((CRecentDockSiteInfo *)(param_1 + 0x1e4),(CList<HWND__*,HWND__*> *)local_38,
                   (uint)(iVar2 == 0));
        FUN_10063c9c(local_1c);
        local_8 = 1;
        local_38[0] = CList<HWND__*,HWND__*>::vftable;
        CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)local_38);
      }
      iVar2 = 1;
    }
  }
  return iVar2;
}

