// rea decompile_all
// name: CPaneContainerManager::AddPaneContainerManager
// address: 0x1015e1c2
// body: available
// range: 0x1015e1c2-0x1015e414 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1015e349 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CPaneContainerManager::AddPaneContainerManager(class
   CDockablePane *,unsigned long,class CPaneContainerManager &,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CPaneContainerManager::AddPaneContainerManager
          (CPaneContainerManager *this,CDockablePane *param_1,ulong param_2,
          CPaneContainerManager *param_3,int param_4)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  CWnd *pCVar4;
  undefined4 *puVar5;
  CObject *pCVar6;
  CDockablePane *pCVar7;
  CObList local_5c [4];
  undefined4 *local_58;
  CObList local_40 [4];
  undefined4 *local_3c;
  CPaneContainer *local_38;
  CPaneContainerManager *local_24;
  CObList *local_20;
  undefined4 local_1c;
  __POSITION *local_18;
  CPaneContainer *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x4c;
  local_8 = 0x1015e1ce;
  local_24 = this;
  CObList::CObList(local_40,10);
  local_8 = 0;
  CObList::CObList(local_5c,10);
  local_8 = CONCAT31(local_8._1_3_,1);
  AddPanesToList(param_3,local_40,local_5c);
  puVar5 = &local_1c;
  local_1c = 0;
  pcVar2 = *(code **)(*(int *)this + 0x8c);
  pCVar7 = param_1;
  guard_check_icall(param_1,puVar5);
  iVar3 = (*pcVar2)();
  if (iVar3 != 0) {
    local_20 = (CObList *)(this + 4);
    local_18 = CObList::Find(local_20,(CObject *)param_1,(__POSITION *)0x0);
    if (local_18 != (__POSITION *)0x0) {
      if (param_4 == 0) {
        local_14[0] = *(CPaneContainer **)(param_3 + 0x3c);
      }
      else {
        pcVar2 = *(code **)(**(int **)(param_3 + 0x3c) + 0x50);
        guard_check_icall(*(undefined4 *)(this + 0x3c));
        local_14[0] = (CPaneContainer *)(*pcVar2)();
        CPaneContainer::SetPaneContainerManager(local_14[0],this,1);
        RemoveAllPanesAndPaneDividers(param_3);
      }
      pcVar2 = *(code **)(*(int *)param_3 + 0x74);
      guard_check_icall(pCVar7,puVar5);
      pCVar4 = (CWnd *)(*pcVar2)();
      CGlobalUtils::SetNewParent
                ((CGlobalUtils *)&PTR_vftable_10205db4,local_40,*(CWnd **)(this + 0x4c),1);
      CGlobalUtils::SetNewParent
                ((CGlobalUtils *)&PTR_vftable_10205db4,local_5c,*(CWnd **)(this + 0x4c),1);
      iVar3 = AddPaneAndPaneContainer(this,param_1,local_14[0],param_2);
      if (iVar3 != 0) {
        if ((param_2 & 0x3000) == 0) {
          local_14[0] = local_38;
          if (local_38 != (CPaneContainer *)0x0) {
            do {
              puVar5 = (undefined4 *)FUN_10069da3(local_14);
              CObList::InsertAfter((CObList *)(this + 4),local_18,(CObject *)*puVar5);
            } while (local_14[0] != (CPaneContainer *)0x0);
          }
        }
        else {
          while (local_3c != (undefined4 *)0x0) {
            if (local_3c == (undefined4 *)0x0) goto LAB_1015e349;
            puVar5 = (undefined4 *)*local_3c;
            CObList::InsertBefore((CObList *)(this + 4),local_18,(CObject *)local_3c[2]);
            local_3c = puVar5;
          }
        }
        FUN_10069cee(local_5c);
        while (local_58 != (undefined4 *)0x0) {
          if (local_58 == (undefined4 *)0x0) {
LAB_1015e349:
                    /* WARNING: Subroutine does not return */
            FUN_1004886a();
          }
          piVar1 = local_58 + 2;
          local_58 = (undefined4 *)*local_58;
          *(CPaneContainerManager **)(*piVar1 + 0x168) = this;
        }
        if (param_4 == 0) {
          *(undefined4 *)(param_3 + 0x48) = 0;
          CPaneContainer::SetPaneContainerManager(*(CPaneContainer **)(param_3 + 0x3c),this,1);
        }
        local_18 = *(__POSITION **)(this + 8);
        while (local_18 != (__POSITION *)0x0) {
          puVar5 = (undefined4 *)FUN_10034920(&local_18);
          pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1020600c,
                                      (CObject *)*puVar5);
          pcVar2 = *(code **)(*(int *)pCVar6 + 0x1f0);
          guard_check_icall(1);
          (*pcVar2)();
          RedrawWindow(*(HWND *)(pCVar6 + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
          this = local_24;
        }
        iVar3 = 1;
        CPaneContainer::CheckPaneDividerVisibility(*(CPaneContainer **)(this + 0x3c));
        FUN_10158f6f();
        goto LAB_1015e2f3;
      }
      CGlobalUtils::SetNewParent((CGlobalUtils *)&PTR_vftable_10205db4,local_40,pCVar4,1);
      CGlobalUtils::SetNewParent((CGlobalUtils *)&PTR_vftable_10205db4,local_5c,pCVar4,1);
    }
  }
  iVar3 = 0;
LAB_1015e2f3:
  CObList::~CObList(local_5c);
  CObList::~CObList(local_40);
  return iVar3;
}

