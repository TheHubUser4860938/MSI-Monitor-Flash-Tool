// rea decompile_all
// name: CMFCToolBarsCustomizeDialog::AddButton
// address: 0x4ea048
// body: available
// range: 0x4ea048-0x4ea3d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4ea320 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CMFCToolBarsCustomizeDialog::AddButton(wchar_t const *,class
   CMFCToolBarButton const &,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarsCustomizeDialog::AddButton
          (CMFCToolBarsCustomizeDialog *this,wchar_t *param_1,CMFCToolBarButton *param_2,int param_3
          )

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  CUserTool *pCVar5;
  undefined4 uVar6;
  int iVar7;
  CObList *pCVar8;
  int *piVar9;
  CObject *pCVar10;
  __POSITION *p_Var11;
  CMFCToolBarsCustomizeDialog *pCVar12;
  CMFCToolBarsCustomizeDialog *local_20;
  CMFCToolBarsCustomizeDialog *local_1c;
  CObList *local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x4ea054;
  uVar1 = *(uint *)(param_2 + 0x20);
  if ((*(uint *)(this + 0x910) != 0) && (uVar1 == *(uint *)(this + 0x910))) {
    return;
  }
  pcVar2 = *(code **)(*(int *)param_2 + 0x60);
  local_1c = this;
  guard_check_icall();
  iVar4 = (*pcVar2)();
  if (iVar4 == 0) {
    return;
  }
  iVar4 = CMFCToolBar::IsCommandPermitted(*(uint *)(param_2 + 0x20));
  if (iVar4 == 0) {
    return;
  }
  local_14[0] = FUN_00415ee0(*(int *)(param_2 + 0x2c) + -0x10);
  local_14[0] = local_14[0] + 0x10;
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  FUN_00414ce0();
  FUN_00414d90();
  bVar3 = false;
  if (((DAT_00616ad0 != (CUserToolsManager *)0x0) && (*(uint *)(DAT_00616ad0 + 0x24) <= uVar1)) &&
     (uVar1 <= *(uint *)(DAT_00616ad0 + 0x28))) {
    pCVar5 = CUserToolsManager::FindTool(DAT_00616ad0,uVar1);
    if (pCVar5 == (CUserTool *)0x0) goto LAB_004ea3cd;
    FUN_00415f50(pCVar5 + 4);
    bVar3 = true;
  }
  iVar4 = local_14[0];
  pCVar12 = local_1c;
  if (*(int *)(local_14[0] + -0xc) == 0) {
    uVar6 = FUN_004295fe();
    FUN_0040eb30(uVar6);
    uVar6 = *(undefined4 *)(param_2 + 0x20);
    local_8._0_1_ = 1;
    iVar7 = FUN_00435fce(uVar6);
    if (((iVar7 != 0) && (iVar7 = FUN_004160f0(iVar7,uVar6), iVar7 != 0)) &&
       (iVar7 = FUN_004148c0(10,0), iVar7 != -1)) {
      uVar6 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_18,(int)&local_20);
      local_8._0_1_ = 2;
      FUN_00415f50(uVar6);
      local_8._0_1_ = 1;
      FUN_0040efa0();
      iVar4 = local_14[0];
    }
    pCVar12 = local_1c;
    if ((*(int *)(iVar4 + -0xc) == 0) && (iVar7 = FUN_0042cb39(param_1), iVar7 == 0)) {
      FUN_0040efa0();
      goto LAB_004ea3cd;
    }
    local_8._0_1_ = 0;
    FUN_0040efa0();
  }
  else {
    if (*(int *)(local_1c + 0x160) == 0) {
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
                ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14,L'&'
                );
    }
    iVar4 = local_14[0];
    iVar7 = FUN_004148c0(9,0);
    if (iVar7 != -1) {
      uVar6 = FUN_004147d0(&local_20,iVar7);
      local_8._0_1_ = 3;
      FUN_00415f50(uVar6);
      local_8._0_1_ = 0;
      FUN_0040efa0();
      iVar4 = local_14[0];
    }
  }
  if (*(int *)(iVar4 + -0xc) != 0) {
    local_20 = pCVar12 + 0xe0;
    iVar4 = Lookup(param_1,&local_18);
    if (iVar4 == 0) {
      pCVar8 = (CObList *)FUN_00416408(0x1c);
      local_8._0_1_ = 4;
      if (pCVar8 == (CObList *)0x0) {
        pCVar8 = (CObList *)0x0;
      }
      else {
        pCVar8 = (CObList *)CObList::CObList(pCVar8,10);
      }
      local_8._0_1_ = 0;
      local_18 = pCVar8;
      piVar9 = (int *)FUN_0054980b(param_1);
      *piVar9 = (int)pCVar8;
      iVar4 = FUN_0042cb39(param_1);
      if (iVar4 != 0) {
        AddTail(param_1);
      }
LAB_004ea291:
      pcVar2 = (code *)**(undefined4 **)param_2;
      guard_check_icall();
      iVar4 = (*pcVar2)();
      if ((iVar4 == 0) || (pCVar10 = (CObject *)FUN_00439696(), pCVar10 == (CObject *)0x0)) {
LAB_004ea320:
                    /* WARNING: Subroutine does not return */
        FUN_00429127();
      }
      pcVar2 = *(code **)(*(int *)pCVar10 + 0x14);
      guard_check_icall(param_2);
      (*pcVar2)();
      FUN_00415f50(local_14);
      if (bVar3) {
        pcVar2 = *(code **)(*(int *)pCVar10 + 0xc0);
        guard_check_icall(0);
        (*pcVar2)();
      }
      pCVar8 = local_18;
      if ((param_3 == -1) ||
         (p_Var11 = CObList::FindIndex(local_18,param_3), p_Var11 == (__POSITION *)0x0)) {
        CObList::AddTail(pCVar8,pCVar10);
      }
      else {
        CObList::InsertBefore(pCVar8,p_Var11,pCVar10);
      }
      pCVar12 = local_1c;
      iVar4 = FUN_0042cb39(param_1);
      if (iVar4 != 0) {
        AddButton(pCVar12,*(wchar_t **)(pCVar12 + 0x150),param_2,-1);
      }
      pcVar2 = *(code **)(*(int *)pCVar10 + 0x44);
      guard_check_icall();
      (*pcVar2)();
    }
    else {
      if (local_18 == (CObList *)0x0) goto LAB_004ea320;
      local_20 = *(CMFCToolBarsCustomizeDialog **)(local_18 + 4);
      do {
        if (local_20 == (CMFCToolBarsCustomizeDialog *)0x0) goto LAB_004ea291;
        piVar9 = (int *)FUN_004ead48(&local_20);
        iVar4 = *piVar9;
        if (iVar4 == 0) goto LAB_004ea320;
        iVar7 = *(int *)(iVar4 + 0x20);
      } while (((iVar7 != *(int *)(param_2 + 0x20)) || (iVar7 == -1)) &&
              ((iVar7 != -1 || (iVar7 = FUN_0042cb39(*(undefined4 *)(param_2 + 0x2c)), iVar7 != 0)))
              );
      if (*(int *)(*(int *)(iVar4 + 0x2c) + -0xc) == 0) {
        FUN_00415f50(param_2 + 0x2c);
      }
    }
  }
LAB_004ea3cd:
  FUN_0040efa0();
  return;
}

