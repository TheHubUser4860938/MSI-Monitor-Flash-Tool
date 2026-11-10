// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnDrawBarGripper
// address: 0x10142a61
// body: available
// range: 0x10142a61-0x10142d9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCVisualManagerOfficeXP::OnDrawBarGripper(class CDC *,class
   CRect,int,class CBasePane *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOfficeXP::OnDrawBarGripper
          (CMFCVisualManagerOfficeXP *this,CDC *param_1,int param_3,int param_4,int param_5,
          int param_6,uint param_7,CWnd *param_8)

{
  CMFCVisualManagerOfficeXP *pCVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  HBRUSH hbr;
  AFX_GLOBAL_DATA *pAVar6;
  CFont *pCVar7;
  undefined4 uVar8;
  int iVar9;
  CWnd *local_84;
  int local_80;
  CMFCVisualManagerOfficeXP *local_7c;
  uint local_78;
  int local_74;
  tagTEXTMETRICW local_70;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  tagRECT local_24;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x80;
  local_8 = 0x10142a70;
  local_78 = param_7;
  local_84 = param_8;
  local_7c = this;
  if ((param_8 == (CWnd *)0x0) || (*(int *)(param_8 + 0x8c) == 0)) {
    if ((this == (CMFCVisualManagerOfficeXP *)0xffffff14) || (*(int *)(this + 0xf0) == 0)) {
      pcVar2 = *(code **)(*(int *)this + 0x308);
      guard_check_icall();
      (*pcVar2)();
    }
    if ((param_8 == (CWnd *)0x0) ||
       (iVar3 = FUN_1004e58b(&PTR_s_CDockablePane_1020600c), iVar3 == 0)) {
      local_74 = 0;
    }
    else {
      local_74 = 1;
    }
    if ((param_8 == (CWnd *)0x0) || (iVar3 = FUN_1004e58b(&PTR_s_CMFCMenuBar_10205f48), iVar3 == 0))
    {
      local_80 = 0;
    }
    else {
      local_80 = 1;
    }
    local_24.left = param_3;
    local_24.top = param_4;
    local_24.right = param_5;
    local_24.bottom = param_6;
    if (local_74 == 0) {
      if (local_78 == 0) {
        local_24.bottom = (param_6 + param_4) / 2;
        iVar9 = 0;
        iVar3 = -5;
        local_24.top = local_24.bottom + -1;
        local_24.bottom = local_24.bottom + 2;
      }
      else {
        local_24.right = (param_5 + param_3) / 2;
        iVar9 = -5;
        iVar3 = 0;
        local_24.left = local_24.right + -1;
        local_24.right = local_24.right + 2;
      }
      InflateRect(&local_24,iVar3,iVar9);
    }
    else {
      InflateRect(&local_24,-4,0);
      local_78 = (uint)(local_78 == 0);
    }
    pCVar1 = local_7c;
    pcVar2 = *(code **)(*(int *)param_1 + 0x30);
    guard_check_icall(*(undefined4 *)(local_7c + 0xd8));
    uVar4 = (*pcVar2)();
    if ((local_74 == 0) && (local_80 == 0)) {
      uVar5 = *(undefined4 *)(pCVar1 + 0xb8);
    }
    else {
      pAVar6 = GetGlobalData();
      uVar5 = *(undefined4 *)(pAVar6 + 0x54);
    }
    pcVar2 = *(code **)(*(int *)param_1 + 0x2c);
    guard_check_icall(uVar5);
    uVar5 = (*pcVar2)();
    pCVar1 = pCVar1 + (uint)(local_78 == 0) * 8 + 0xec;
    hbr = (HBRUSH)0x0;
    if (pCVar1 != (CMFCVisualManagerOfficeXP *)0x0) {
      hbr = *(HBRUSH *)(pCVar1 + 4);
    }
    FillRect(*(HDC *)(param_1 + 4),&local_24,hbr);
    if (local_74 != 0) {
      iVar9 = CDC::SetBkMode(param_1,2);
      iVar3 = *(int *)param_1;
      pAVar6 = GetGlobalData();
      guard_check_icall(*(undefined4 *)(pAVar6 + 0x68));
      (**(code **)(iVar3 + 0x30))();
      pCVar7 = CMFCMenuBar::GetMenuFont(local_78);
      pcVar2 = *(code **)(*(int *)param_1 + 0x28);
      guard_check_icall(pCVar7);
      local_7c = (CMFCVisualManagerOfficeXP *)(*pcVar2)();
      uVar8 = FUN_10048e90();
      FUN_10034c30(uVar8);
      local_8 = 0;
      CWnd::GetWindowTextW
                (local_84,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                          &local_74);
      uVar8 = FUN_10039650(&local_80,&DAT_101be434,&local_74);
      local_8._0_1_ = 1;
      uVar8 = FUN_10033c90(&local_84,uVar8,&DAT_101be434);
      local_8._0_1_ = 2;
      FUN_10034940(uVar8);
      FUN_10034f00();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_10034f00();
      local_34 = param_3;
      local_30 = param_4;
      local_2c = param_5;
      local_28 = param_6;
      GetTextMetricsW(*(HDC *)(param_1 + 8),&local_70);
      if (local_78 == 0) {
        local_34 = local_2c - (((param_5 - param_3) - local_70.tmHeight) + 1) / 2;
        local_30 = param_4;
        uVar8 = 0x100;
        local_28 = param_4;
      }
      else {
        local_30 = local_30 + (((param_6 - param_4) - local_70.tmHeight) + -1) / 2;
        uVar8 = 0;
      }
      iVar3 = *(int *)param_1;
      guard_check_icall(local_74,*(undefined4 *)(local_74 + -0xc),&local_34,uVar8);
      (**(code **)(iVar3 + 0x68))();
      pcVar2 = *(code **)(*(int *)param_1 + 0x28);
      guard_check_icall(local_7c);
      (*pcVar2)();
      CDC::SetBkMode(param_1,iVar9);
      local_8 = 0xffffffff;
      FUN_10034f00();
    }
    pcVar2 = *(code **)(*(int *)param_1 + 0x30);
    guard_check_icall(uVar4);
    (*pcVar2)();
    pcVar2 = *(code **)(*(int *)param_1 + 0x2c);
    guard_check_icall(uVar5);
    (*pcVar2)();
  }
  else {
    CMFCVisualManager::OnDrawBarGripper
              ((CMFCVisualManager *)this,param_1,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  FUN_1017f5f4();
  return;
}

