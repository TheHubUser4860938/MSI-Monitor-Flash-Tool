// rea decompile_all
// name: CDockablePane::DrawCaption
// address: 0x1012a929
// body: available
// range: 0x1012a929-0x1012ab7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1012aad5 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CDockablePane::DrawCaption(class CDC *,class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDockablePane::DrawCaption
          (CDockablePane *this,CDC *param_1,LONG param_3,int param_4,LONG param_5,LONG param_6)

{
  code *pcVar1;
  int iVar2;
  CDC *this_00;
  CDockablePane *this_01;
  int *piVar3;
  LONG *pLVar4;
  undefined4 *puVar5;
  CMFCVisualManager *pCVar6;
  AFX_GLOBAL_DATA *pAVar7;
  undefined4 uVar8;
  int iVar9;
  LONG local_58;
  LONG local_54;
  LONG local_50;
  LONG local_4c;
  LONG local_48;
  int local_40;
  CDC *local_3c;
  CDockablePane *local_38;
  undefined1 local_34 [16];
  undefined4 local_24;
  undefined4 uStack_20;
  LONG local_1c;
  undefined4 uStack_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x4c;
  local_8 = 0x1012a935;
  iVar9 = *(int *)(this + 0x33c);
  local_48 = param_5;
  local_54 = param_5;
  local_58 = param_6;
  local_50 = param_6;
  local_38 = this;
  local_3c = param_1;
  do {
    iVar9 = iVar9 + -1;
    if (iVar9 < 0) goto LAB_1012a9ba;
    piVar3 = (int *)FUN_10151a1d(iVar9);
  } while ((*(int *)(*piVar3 + 0x18) != 0) ||
          (piVar3 = (int *)FUN_10151a1d(iVar9), *(int *)(*piVar3 + 0xc) != 0));
  puVar5 = (undefined4 *)FUN_10151a1d(iVar9);
  pcVar1 = *(code **)(*(int *)*puVar5 + 0xc);
  guard_check_icall(&local_24);
  pLVar4 = (LONG *)(*pcVar1)();
  local_48 = *pLVar4;
  local_58 = pLVar4[1];
  local_54 = pLVar4[2];
  local_50 = pLVar4[3];
LAB_1012a9ba:
  iVar9 = *(int *)(this + 0x33c);
  local_4c = param_3;
  local_1c = param_3;
  do {
    iVar9 = iVar9 + -1;
    if (iVar9 < 0) goto LAB_1012aa28;
    piVar3 = (int *)FUN_10151a1d(iVar9);
  } while ((*(int *)(*piVar3 + 0x18) == 0) ||
          (piVar3 = (int *)FUN_10151a1d(iVar9), *(int *)(*piVar3 + 0xc) != 0));
  puVar5 = (undefined4 *)FUN_10151a1d(iVar9);
  pcVar1 = *(code **)(*(int *)*puVar5 + 0xc);
  guard_check_icall(local_34);
  puVar5 = (undefined4 *)(*pcVar1)();
  local_24 = *puVar5;
  uStack_20 = puVar5[1];
  local_4c = puVar5[2];
  uStack_18 = puVar5[3];
  local_1c = local_4c;
LAB_1012aa28:
  pCVar6 = CMFCVisualManager::GetInstance();
  this_01 = local_38;
  iVar9 = *(int *)pCVar6;
  guard_check_icall(local_3c,local_38,*(undefined4 *)(local_38 + 0x2dc),param_3,param_4,param_5,
                    param_6,local_48,local_58,local_54,local_50);
  local_38 = (CDockablePane *)(**(code **)(iVar9 + 0x50))();
  iVar9 = 0;
  if (0 < *(int *)(this_01 + 0x33c)) {
    do {
      piVar3 = (int *)FUN_10151a1d(iVar9);
      iVar9 = iVar9 + 1;
      *(CDockablePane **)(*piVar3 + 0x20) = local_38;
    } while (iVar9 < *(int *)(this_01 + 0x33c));
  }
  this_00 = local_3c;
  local_3c = (CDC *)CDC::SetBkMode(local_3c,1);
  pcVar1 = *(code **)(*(int *)this_00 + 0x30);
  guard_check_icall(local_38);
  local_38 = (CDockablePane *)(*pcVar1)();
  iVar9 = *(int *)this_00;
  pAVar7 = GetGlobalData();
  guard_check_icall(pAVar7 + 0x11c);
  iVar9 = (**(code **)(iVar9 + 0x28))();
  if (iVar9 != 0) {
    uVar8 = FUN_10048e90();
    FUN_10034c30(uVar8);
    local_8 = 0;
    CWnd::GetWindowTextW
              ((CWnd *)this_01,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_40);
    param_4 = param_4 + 1;
    param_5 = local_48;
    param_3 = local_4c;
    InflateRect((LPRECT)&param_3,DAT_10205ffc * -2,0);
    iVar2 = *(int *)this_00;
    guard_check_icall(local_40,*(undefined4 *)(local_40 + -0xc),&param_3,0x8024);
    (**(code **)(iVar2 + 0x68))();
    pcVar1 = *(code **)(*(int *)this_00 + 0x28);
    guard_check_icall(iVar9);
    (*pcVar1)();
    CDC::SetBkMode(this_00,(int)local_3c);
    pcVar1 = *(code **)(*(int *)this_00 + 0x30);
    guard_check_icall(local_38);
    (*pcVar1)();
    FUN_10034f00();
    FUN_1017f5f4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1004886a();
}

