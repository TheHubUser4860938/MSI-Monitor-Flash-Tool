// rea decompile_all
// name: CMFCVisualManager::OnDrawTask
// address: 0x1006553a
// body: available
// range: 0x1006553a-0x100657d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006555c to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawTask(class CDC *,class
   CMFCTasksPaneTask *,class CImageList *,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawTask
          (CMFCVisualManager *this,CDC *param_1,CMFCTasksPaneTask *param_2,CImageList *param_3,
          int param_4,int param_5)

{
  CMFCVisualManager *pCVar1;
  code *pcVar2;
  int iVar3;
  tagPOINT tVar4;
  CMFCTasksPaneTask *pCVar5;
  AFX_GLOBAL_DATA *pAVar6;
  CPen *pCVar7;
  int iVar8;
  undefined1 local_44 [4];
  COLORREF local_40;
  int local_3c;
  int local_38 [2];
  CMFCVisualManager *local_30;
  CMFCTasksPaneTask *local_2c;
  CImageList *local_28;
  LONG local_24;
  LONG local_20;
  int local_1c;
  int local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  local_8 = 0x10065546;
  local_28 = param_3;
  local_2c = param_2;
  local_30 = this;
  if ((param_2 == (CMFCTasksPaneTask *)0x0) || (param_3 == (CImageList *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_1001d023();
  }
  local_24 = *(LONG *)(param_2 + 0xc);
  local_20 = *(LONG *)(param_2 + 0x10);
  local_1c = *(int *)(param_2 + 0x14);
  local_18 = *(int *)(param_2 + 0x18);
  if (*(int *)(param_2 + 0x3c) != 0) {
    pAVar6 = GetGlobalData();
    pCVar7 = CDC::SelectObject(param_1,(CPen *)(pAVar6 + 0xe0));
    CDC::MoveTo(param_1,(int)local_44,local_24);
    CDC::LineTo(param_1,local_1c,(local_20 + local_18) / 2);
    CDC::SelectObject(param_1,pCVar7);
    goto LAB_100657cf;
  }
  local_38[0] = 0;
  local_38[1] = 0;
  _IsolationAwareImageList_GetIconSize_12((short)*(undefined4 *)(param_3 + 4),local_38,local_38 + 1)
  ;
  if ((-1 < *(int *)(param_2 + 0x1c)) && (0 < local_38[0])) {
    tVar4.y = local_20;
    tVar4.x = local_24;
    CImageList::Draw(local_28,param_1,*(int *)(param_2 + 0x1c),tVar4,1);
  }
  iVar8 = *(int *)(*(int *)(*(int *)(*(int *)(param_2 + 4) + 4) + 8) + 0x3c8);
  if (iVar8 == -1) {
    iVar8 = *(int *)(local_30 + 0x9c);
  }
  pCVar1 = *(CMFCVisualManager **)(param_2 + 0x24);
  local_24 = local_24 + local_38[0] + iVar8;
  local_30 = pCVar1;
  local_40 = GetTextColor(*(HDC *)(param_1 + 8));
  if (pCVar1 == (CMFCVisualManager *)0x0) {
    if (*(int *)(param_2 + 0x40) == 0) {
      pAVar6 = GetGlobalData();
      pAVar6 = pAVar6 + 0x11c;
    }
    else {
      pAVar6 = GetGlobalData();
      pAVar6 = pAVar6 + 300;
    }
    pcVar2 = *(code **)(*(int *)param_1 + 0x28);
    guard_check_icall(pAVar6);
    local_28 = (CImageList *)(*pcVar2)();
LAB_100656dd:
    iVar8 = *(int *)(param_2 + 0x44);
LAB_100656e0:
    if (iVar8 == -1) {
      pAVar6 = GetGlobalData();
      iVar8 = *(int *)(pAVar6 + 0x70);
    }
    pcVar2 = *(code **)(*(int *)param_1 + 0x30);
    guard_check_icall(iVar8);
    (*pcVar2)();
  }
  else {
    iVar8 = *(int *)param_1;
    if (*(int *)(param_2 + 0x38) != 0) {
      pAVar6 = GetGlobalData();
      if (param_4 == 0) {
        guard_check_icall(pAVar6 + 0x11c);
        local_28 = (CImageList *)(**(code **)(iVar8 + 0x28))();
        goto LAB_100656dd;
      }
      guard_check_icall(pAVar6 + 0x13c);
      local_28 = (CImageList *)(**(code **)(iVar8 + 0x28))();
      iVar8 = *(int *)(param_2 + 0x48);
      goto LAB_100656e0;
    }
    pAVar6 = GetGlobalData();
    guard_check_icall(*(undefined4 *)(pAVar6 + 0x38));
    (**(code **)(iVar8 + 0x30))();
    iVar8 = *(int *)param_1;
    pAVar6 = GetGlobalData();
    guard_check_icall(pAVar6 + 0x11c);
    local_28 = (CImageList *)(**(code **)(iVar8 + 0x28))();
  }
  local_3c = CDC::SetBkMode(param_1,1);
  iVar8 = *(int *)(*(int *)(*(int *)(param_2 + 4) + 4) + 8);
  if (local_30 == (CMFCVisualManager *)0x0) {
    iVar8 = *(int *)(iVar8 + 0x388);
  }
  else {
    iVar8 = *(int *)(iVar8 + 900);
  }
  iVar3 = *(int *)(param_2 + 8);
  if (iVar8 == 0) {
    iVar8 = FUN_100187a0((short)(iVar3 + -0x10));
    local_2c = (CMFCTasksPaneTask *)(iVar8 + 0x10);
    local_8 = 0;
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_2c,L'\n'
              );
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_2c,L'\r'
              );
    pCVar5 = local_2c;
    iVar8 = *(int *)param_1;
    guard_check_icall(local_2c,*(undefined4 *)(local_2c + -0xc),&local_24,0x8024);
    (**(code **)(iVar8 + 0x68))();
    local_8 = 0xffffffff;
    ATL::CStringData::Release((CStringData *)(pCVar5 + -0x10));
  }
  else {
    iVar8 = *(int *)param_1;
    guard_check_icall(iVar3,*(undefined4 *)(iVar3 + -0xc),&local_24,0x10);
    (**(code **)(iVar8 + 0x68))();
  }
  CDC::SetBkMode(param_1,local_3c);
  pcVar2 = *(code **)(*(int *)param_1 + 0x28);
  guard_check_icall(local_28);
  (*pcVar2)();
  pcVar2 = *(code **)(*(int *)param_1 + 0x30);
  guard_check_icall(local_40);
  (*pcVar2)();
LAB_100657cf:
  FUN_10154478();
  return;
}

