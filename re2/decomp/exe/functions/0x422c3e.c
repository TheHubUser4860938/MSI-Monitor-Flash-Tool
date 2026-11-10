// rea decompile_all
// name: CMFCVisualManagerWindows::OnDrawTask
// address: 0x422c3e
// body: available
// range: 0x422c3e-0x422eff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x422c60 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerWindows::OnDrawTask(class CDC *,class
   CMFCTasksPaneTask *,class CImageList *,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerWindows::OnDrawTask
          (CMFCVisualManagerWindows *this,CDC *param_1,CMFCTasksPaneTask *param_2,
          CImageList *param_3,int param_4,int param_5)

{
  CMFCVisualManagerWindows *pCVar1;
  code *pcVar2;
  int iVar3;
  tagPOINT tVar4;
  CMFCTasksPaneTask *pCVar5;
  HDC hdc;
  COLORREF CVar6;
  AFX_GLOBAL_DATA *pAVar7;
  int iVar8;
  int local_4c [2];
  CMFCVisualManagerWindows *local_44;
  CImageList *local_40;
  HTHEME local_3c;
  CMFCTasksPaneTask *local_38;
  RECT local_34;
  LONG local_24;
  LONG local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_8 = 0x422c4a;
  local_40 = param_3;
  local_38 = param_2;
  local_44 = this;
  if ((param_2 == (CMFCTasksPaneTask *)0x0) || (param_3 == (CImageList *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  local_3c = *(HTHEME *)(this + 0x28);
  if (local_3c == (HTHEME)0x0) {
    CMFCVisualManagerOfficeXP::OnDrawTask
              ((CMFCVisualManagerOfficeXP *)this,param_1,param_2,param_3,param_4,param_5);
    goto LAB_00422ef8;
  }
  if (*(int *)(param_2 + 0x3c) != 0) {
    local_34.top = (*(int *)(param_2 + 0x18) + *(int *)(param_2 + 0x10)) / 2;
    local_34.left = *(LONG *)(param_2 + 0xc);
    local_34.right = *(LONG *)(param_2 + 0x14);
    local_34.bottom = local_34.top + 1;
    if (param_1 == (CDC *)0x0) {
      hdc = (HDC)0x0;
    }
    else {
      hdc = *(HDC *)(param_1 + 4);
    }
    DrawThemeBackground(local_3c,hdc,8,0,&local_34,(LPCRECT)0x0);
    goto LAB_00422ef8;
  }
  local_4c[0] = 0;
  local_4c[1] = 0;
  local_24 = *(LONG *)(param_2 + 0xc);
  local_20 = *(LONG *)(param_2 + 0x10);
  uStack_1c = *(undefined4 *)(param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 0x18);
  _IsolationAwareImageList_GetIconSize_12((short)*(undefined4 *)(param_3 + 4),local_4c,local_4c + 1)
  ;
  pCVar5 = local_38;
  if ((-1 < *(int *)(local_38 + 0x1c)) && (0 < local_4c[0])) {
    tVar4.y = local_20;
    tVar4.x = local_24;
    CImageList::Draw(local_40,param_1,*(int *)(local_38 + 0x1c),tVar4,1);
  }
  iVar8 = *(int *)(*(int *)(*(int *)(*(int *)(pCVar5 + 4) + 4) + 8) + 0x3c8);
  if (iVar8 == -1) {
    iVar8 = *(int *)(local_44 + 0x9c);
  }
  pCVar1 = *(CMFCVisualManagerWindows **)(pCVar5 + 0x24);
  local_24 = local_24 + local_4c[0] + iVar8;
  local_44 = pCVar1;
  CVar6 = GetTextColor(*(HDC *)(param_1 + 8));
  if (pCVar1 == (CMFCVisualManagerWindows *)0x0) {
    if (*(int *)(pCVar5 + 0x40) == 0) {
      pAVar7 = GetGlobalData();
      pAVar7 = pAVar7 + 0x11c;
    }
    else {
      pAVar7 = GetGlobalData();
      pAVar7 = pAVar7 + 300;
    }
    pcVar2 = *(code **)(*(int *)param_1 + 0x28);
    guard_check_icall(pAVar7);
    local_38 = (CMFCTasksPaneTask *)(*pcVar2)();
    iVar8 = *(int *)(pCVar5 + 0x44);
    if (iVar8 == -1) {
      pAVar7 = GetGlobalData();
      iVar8 = *(int *)(pAVar7 + 0x70);
    }
LAB_00422e19:
    pcVar2 = *(code **)(*(int *)param_1 + 0x30);
    guard_check_icall(iVar8);
    (*pcVar2)();
  }
  else {
    iVar8 = *(int *)param_1;
    if (*(int *)(pCVar5 + 0x38) != 0) {
      pAVar7 = GetGlobalData();
      if (param_4 == 0) {
        guard_check_icall(pAVar7 + 0x11c);
        local_38 = (CMFCTasksPaneTask *)(**(code **)(iVar8 + 0x28))();
        iVar8 = *(int *)(pCVar5 + 0x44);
      }
      else {
        guard_check_icall(pAVar7 + 0x13c);
        local_38 = (CMFCTasksPaneTask *)(**(code **)(iVar8 + 0x28))();
        iVar8 = *(int *)(pCVar5 + 0x48);
      }
      if (iVar8 == -1) {
        pAVar7 = GetGlobalData();
        iVar8 = *(int *)(pAVar7 + 0x3c);
      }
      goto LAB_00422e19;
    }
    pAVar7 = GetGlobalData();
    guard_check_icall(*(undefined4 *)(pAVar7 + 0x38));
    (**(code **)(iVar8 + 0x30))();
    iVar8 = *(int *)param_1;
    pAVar7 = GetGlobalData();
    guard_check_icall(pAVar7 + 0x11c);
    local_38 = (CMFCTasksPaneTask *)(**(code **)(iVar8 + 0x28))();
  }
  local_40 = (CImageList *)CDC::SetBkMode(param_1,1);
  iVar8 = *(int *)(*(int *)(*(int *)(pCVar5 + 4) + 4) + 8);
  if (local_44 == (CMFCVisualManagerWindows *)0x0) {
    iVar8 = *(int *)(iVar8 + 0x388);
  }
  else {
    iVar8 = *(int *)(iVar8 + 900);
  }
  iVar3 = *(int *)(pCVar5 + 8);
  if (iVar8 == 0) {
    iVar8 = FUN_00415ee0((short)(iVar3 + -0x10));
    local_3c = (HTHEME)(iVar8 + 0x10);
    local_8 = 0;
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3c,L'\n'
              );
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_3c,L'\r'
              );
    iVar8 = *(int *)param_1;
    guard_check_icall(local_3c,*(undefined4 *)((int)local_3c + -0xc),&local_24,0x8024);
    (**(code **)(iVar8 + 0x68))();
    local_8 = 0xffffffff;
    FUN_0040efa0();
  }
  else {
    iVar8 = *(int *)param_1;
    guard_check_icall(iVar3,*(undefined4 *)(iVar3 + -0xc),&local_24,0x10);
    (**(code **)(iVar8 + 0x68))();
  }
  CDC::SetBkMode(param_1,(int)local_40);
  pcVar2 = *(code **)(*(int *)param_1 + 0x28);
  guard_check_icall(local_38);
  (*pcVar2)();
  pcVar2 = *(code **)(*(int *)param_1 + 0x30);
  guard_check_icall(CVar6);
  (*pcVar2)();
LAB_00422ef8:
  FUN_0055bae6();
  return;
}

