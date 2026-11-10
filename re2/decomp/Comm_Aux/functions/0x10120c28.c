// rea decompile_all
// name: AddButton
// address: 0x10120c28
// body: available
// range: 0x10120c28-0x10120fb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10120f00 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall CMFCToolBarsCustomizeDialog::AddButton(char const *,class
   CMFCToolBarButton const &,int)
    public: void __thiscall CMFCToolBarsCustomizeDialog::AddButton(wchar_t const *,class
   CMFCToolBarButton const &,int)
   
   Library: Visual Studio 2015 Release */

void AddButton(undefined4 param_1,int *param_2,int param_3)

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
  int iVar12;
  int in_ECX;
  int local_20;
  int local_1c;
  CObList *local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x10120c34;
  uVar1 = param_2[8];
  if ((*(uint *)(in_ECX + 0x910) != 0) && (uVar1 == *(uint *)(in_ECX + 0x910))) {
    return;
  }
  pcVar2 = *(code **)(*param_2 + 0x60);
  local_1c = in_ECX;
  guard_check_icall();
  iVar4 = (*pcVar2)();
  if (iVar4 == 0) {
    return;
  }
  iVar4 = CMFCToolBar::IsCommandPermitted(param_2[8]);
  if (iVar4 == 0) {
    return;
  }
  local_14[0] = FUN_100349e0(param_2[0xb] + -0x10);
  local_14[0] = local_14[0] + 0x10;
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  FUN_100342c0();
  FUN_10034370();
  bVar3 = false;
  if (((DAT_1020fed8 != (CUserToolsManager *)0x0) && (*(uint *)(DAT_1020fed8 + 0x24) <= uVar1)) &&
     (uVar1 <= *(uint *)(DAT_1020fed8 + 0x28))) {
    pCVar5 = CUserToolsManager::FindTool(DAT_1020fed8,uVar1);
    if (pCVar5 == (CUserTool *)0x0) goto LAB_10120fad;
    FUN_10034940(pCVar5 + 4);
    bVar3 = true;
  }
  iVar12 = local_14[0];
  iVar4 = local_1c;
  if (*(int *)(local_14[0] + -0xc) == 0) {
    uVar6 = FUN_10048e90();
    FUN_10034c30(uVar6);
    iVar4 = param_2[8];
    local_8._0_1_ = 1;
    iVar7 = FUN_10048ace(iVar4);
    if (((iVar7 != 0) && (iVar4 = FUN_10034d90(iVar7,iVar4), iVar4 != 0)) &&
       (iVar4 = FUN_10034010(10,0), iVar4 != -1)) {
      uVar6 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_18,(int)&local_20);
      local_8._0_1_ = 2;
      FUN_10034940(uVar6);
      local_8._0_1_ = 1;
      FUN_10034f00();
      iVar12 = local_14[0];
    }
    iVar4 = local_1c;
    if ((*(int *)(iVar12 + -0xc) == 0) && (iVar7 = FUN_1004a623(param_1), iVar7 == 0)) {
      FUN_10034f00();
      goto LAB_10120fad;
    }
    local_8._0_1_ = 0;
    FUN_10034f00();
  }
  else {
    if (*(int *)(local_1c + 0x160) == 0) {
      FUN_10037b90(0x26);
    }
    iVar12 = local_14[0];
    iVar7 = FUN_10034010(9,0);
    if (iVar7 != -1) {
      uVar6 = FUN_10033e10(&local_20,iVar7);
      local_8._0_1_ = 3;
      FUN_10034940(uVar6);
      local_8._0_1_ = 0;
      FUN_10034f00();
      iVar12 = local_14[0];
    }
  }
  if (*(int *)(iVar12 + -0xc) != 0) {
    local_20 = iVar4 + 0xe0;
    iVar4 = Lookup(param_1,&local_18);
    if (iVar4 == 0) {
      pCVar8 = (CObList *)FUN_10047eb4(0x1c);
      local_8._0_1_ = 4;
      if (pCVar8 == (CObList *)0x0) {
        pCVar8 = (CObList *)0x0;
      }
      else {
        pCVar8 = (CObList *)CObList::CObList(pCVar8,10);
      }
      local_8._0_1_ = 0;
      local_18 = pCVar8;
      piVar9 = (int *)FUN_1006527e(param_1);
      *piVar9 = (int)pCVar8;
      iVar4 = FUN_1004a623(param_1);
      if (iVar4 != 0) {
        AddTail(param_1);
      }
LAB_10120e71:
      pcVar2 = *(code **)*param_2;
      guard_check_icall();
      iVar4 = (*pcVar2)();
      if ((iVar4 == 0) || (pCVar10 = (CObject *)FUN_1004e514(), pCVar10 == (CObject *)0x0)) {
LAB_10120f00:
                    /* WARNING: Subroutine does not return */
        FUN_1004886a();
      }
      pcVar2 = *(code **)(*(int *)pCVar10 + 0x14);
      guard_check_icall(param_2);
      (*pcVar2)();
      FUN_10034940(local_14);
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
      iVar4 = FUN_1004a623(param_1);
      if (iVar4 != 0) {
        AddButton(*(undefined4 *)(local_1c + 0x150),param_2,0xffffffff);
      }
      pcVar2 = *(code **)(*(int *)pCVar10 + 0x44);
      guard_check_icall();
      (*pcVar2)();
    }
    else {
      if (local_18 == (CObList *)0x0) goto LAB_10120f00;
      local_20 = *(int *)(local_18 + 4);
      do {
        if (local_20 == 0) goto LAB_10120e71;
        piVar9 = (int *)FUN_10034920(&local_20);
        iVar4 = *piVar9;
        if (iVar4 == 0) goto LAB_10120f00;
        iVar12 = *(int *)(iVar4 + 0x20);
      } while (((iVar12 != param_2[8]) || (iVar12 == -1)) &&
              ((iVar12 != -1 || (iVar12 = FUN_1004a623(param_2[0xb]), iVar12 != 0))));
      if (*(int *)(*(int *)(iVar4 + 0x2c) + -0xc) == 0) {
        FUN_10034940(param_2 + 0xb);
      }
    }
  }
LAB_10120fad:
  FUN_10034f00();
  return;
}

