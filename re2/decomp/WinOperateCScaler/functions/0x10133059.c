// rea decompile_all
// name: FUN_10133059
// address: 0x10133059
// body: available
// range: 0x10133059-0x1013327f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1013327b to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10133059(CPaneContainerManager *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  CDockingManager *this;
  CPaneContainer *this_00;
  undefined4 *puVar3;
  CObject *pCVar4;
  HWND pHVar5;
  CWnd *this_01;
  int *piVar6;
  undefined4 uVar7;
  CPaneContainerManager *in_ECX;
  tagRECT *ptVar8;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  if (*(CPaneContainer **)(in_ECX + 0x3c) != (CPaneContainer *)0x0) {
    iVar2 = CPaneContainer::IsEmpty(*(CPaneContainer **)(in_ECX + 0x3c));
    if ((iVar2 != 0) &&
       (this = CGlobalUtils::GetDockingManager
                         ((CGlobalUtils *)&PTR_vftable_1020194c,*(CWnd **)(in_ECX + 0x4c)),
       this != (CDockingManager *)0x0)) {
      CObList::RemoveAll((CObList *)(in_ECX + 4));
      CObList::RemoveAll((CObList *)(in_ECX + 0x20));
      CPaneContainerManager::AddPanesToList
                (param_1,(CObList *)(in_ECX + 4),(CObList *)(in_ECX + 0x20));
      CPaneContainerManager::RemoveAllPanesAndPaneDividers(param_1);
      pcVar1 = *(code **)(**(int **)(param_1 + 0x3c) + 0x50);
      guard_check_icall(*(undefined4 *)(in_ECX + 0x3c));
      this_00 = (CPaneContainer *)(*pcVar1)();
      CPaneContainer::SetPaneContainer(*(CPaneContainer **)(in_ECX + 0x3c),this_00,1);
      CPaneContainer::SetPaneContainerManager(this_00,in_ECX,1);
      CGlobalUtils::SetNewParent
                ((CGlobalUtils *)&PTR_vftable_1020194c,(CObList *)(in_ECX + 4),
                 *(CWnd **)(in_ECX + 0x4c),1);
      CGlobalUtils::SetNewParent
                ((CGlobalUtils *)&PTR_vftable_1020194c,(CObList *)(in_ECX + 0x20),
                 *(CWnd **)(in_ECX + 0x4c),1);
      local_1c = *(int *)(in_ECX + 8);
      while (local_1c != 0) {
        puVar3 = (undefined4 *)FUN_100972dc(&local_1c);
        pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_10201ba4,
                                    (CObject *)*puVar3);
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        GetWindowRect(*(HWND *)(pCVar4 + 0x20),&local_18);
        ptVar8 = &local_18;
        pHVar5 = GetParent(*(HWND *)(pCVar4 + 0x20));
        this_01 = CWnd::FromHandle(pHVar5);
        CWnd::ScreenToClient(this_01,ptVar8);
      }
      local_1c = *(int *)(in_ECX + 0x24);
      while (local_1c != 0) {
        piVar6 = (int *)FUN_100972dc(&local_1c);
        *(CPaneContainerManager **)(*piVar6 + 0x168) = in_ECX;
      }
      local_1c = *(int *)(in_ECX + 8);
      if (local_1c != 0) {
        do {
          puVar3 = (undefined4 *)FUN_100972dc(&local_1c);
          pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_10201ba4,
                                      (CObject *)*puVar3);
          CDockablePane::SetDefaultPaneDivider
                    ((CDockablePane *)pCVar4,*(HWND__ **)(*(int *)(in_ECX + 0x44) + 0x20));
          iVar2 = *(int *)pCVar4;
          pcVar1 = *(code **)(**(int **)(in_ECX + 0x44) + 0x194);
          guard_check_icall();
          uVar7 = (*pcVar1)();
          guard_check_icall(uVar7);
          (**(code **)(iVar2 + 0x1e0))();
          CDockingManager::AddPane(this,(CBasePane *)pCVar4,(uint)(param_2 == 0),0,param_2);
          pcVar1 = *(code **)(*(int *)pCVar4 + 0x1f0);
          guard_check_icall(1);
          (*pcVar1)();
        } while (local_1c != 0);
      }
      CPaneContainer::CheckPaneDividerVisibility(*(CPaneContainer **)(in_ECX + 0x3c));
      FUN_1012e026();
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1001d023();
}

