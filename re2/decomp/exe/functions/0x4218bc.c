// rea decompile_all
// name: CMFCVisualManagerWindows::OnDrawBarGripper
// address: 0x4218bc
// body: available
// range: 0x4218bc-0x421b89 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerWindows::OnDrawBarGripper(class CDC *,class
   CRect,int,class CBasePane *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerWindows::OnDrawBarGripper
          (CMFCVisualManagerWindows *this,CDC *param_1,int param_3,int param_4,int param_5,
          int param_6,uint param_7,CWnd *param_8)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  AFX_GLOBAL_DATA *pAVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  CFont *pCVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  CWnd *local_80;
  CMFCVisualManagerWindows *local_7c;
  uint local_78;
  uint local_74;
  tagTEXTMETRICW local_70;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  tagRECT local_24;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x80;
  local_8 = 0x4218cb;
  local_78 = param_7;
  local_80 = param_8;
  local_7c = this;
  if (((*(int *)(this + 0xc) == 0) || (param_8 == (CWnd *)0x0)) || (*(int *)(param_8 + 0x20) == 0))
  {
    CMFCVisualManagerOfficeXP::OnDrawBarGripper
              ((CMFCVisualManagerOfficeXP *)this,param_1,param_3,param_4,param_5,param_6,param_7,
               param_8);
  }
  else {
    iVar3 = FUN_0043970d(&PTR_s_CDockablePane_0060c780);
    if (iVar3 != 0) {
      local_78 = (uint)(param_7 == 0);
    }
    local_74 = (uint)(iVar3 != 0);
    iVar3 = *(int *)param_1;
    pAVar4 = GetGlobalData();
    guard_check_icall(*(undefined4 *)(pAVar4 + 0x20));
    uVar5 = (**(code **)(iVar3 + 0x30))();
    iVar3 = *(int *)param_1;
    pAVar4 = GetGlobalData();
    guard_check_icall(*(undefined4 *)(pAVar4 + 0x1c));
    uVar6 = (**(code **)(iVar3 + 0x2c))();
    uVar2 = local_78;
    local_24.left = param_3;
    local_24.top = param_4;
    local_24.right = param_5;
    local_24.bottom = param_6;
    if (local_78 == 0) {
      InflateRect(&local_24,-2,0);
      OffsetRect(&local_24,0,2);
      local_24.bottom = local_24.top + 6;
    }
    else {
      InflateRect(&local_24,0,-2);
      OffsetRect(&local_24,2,0);
      local_24.right = local_24.left + 6;
    }
    DrawThemeBackground(*(HTHEME *)(local_7c + 0xc),*(HDC *)(param_1 + 4),(uVar2 == 0) + 1,0,
                        &local_24,(LPCRECT)0x0);
    if (local_74 != 0) {
      iVar7 = CDC::SetBkMode(param_1,2);
      iVar3 = *(int *)param_1;
      pAVar4 = GetGlobalData();
      guard_check_icall(*(undefined4 *)(pAVar4 + 0x28));
      (**(code **)(iVar3 + 0x30))();
      pCVar8 = CMFCMenuBar::GetMenuFont(uVar2);
      pcVar1 = *(code **)(*(int *)param_1 + 0x28);
      guard_check_icall(pCVar8);
      uVar9 = (*pcVar1)();
      uVar10 = FUN_004295fe();
      FUN_0040eb30(uVar10);
      local_8 = 0;
      CWnd::GetWindowTextW
                (local_80,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                          &local_74);
      uVar10 = FUN_00415460(&local_7c,&DAT_005aed6c,&local_74);
      local_8._0_1_ = 1;
      uVar10 = FUN_00415c80(&local_80,uVar10,&DAT_005aed6c);
      local_8._0_1_ = 2;
      FUN_00415f50(uVar10);
      FUN_0040efa0();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_0040efa0();
      local_34 = param_3;
      local_30 = param_4;
      local_2c = param_5;
      local_28 = param_6;
      GetTextMetricsW(*(HDC *)(param_1 + 8),&local_70);
      if (local_78 == 0) {
        local_34 = local_2c - (((param_5 - param_3) - local_70.tmHeight) + 1) / 2;
        local_30 = param_4;
        uVar10 = 0x100;
        local_28 = param_4;
      }
      else {
        local_30 = local_30 + (((param_6 - param_4) - local_70.tmHeight) + -1) / 2;
        uVar10 = 0;
      }
      iVar3 = *(int *)param_1;
      guard_check_icall(local_74,*(undefined4 *)(local_74 - 0xc),&local_34,uVar10);
      (**(code **)(iVar3 + 0x68))();
      pcVar1 = *(code **)(*(int *)param_1 + 0x28);
      guard_check_icall(uVar9);
      (*pcVar1)();
      CDC::SetBkMode(param_1,iVar7);
      local_8 = 0xffffffff;
      FUN_0040efa0();
    }
    pcVar1 = *(code **)(*(int *)param_1 + 0x30);
    guard_check_icall(uVar5);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)param_1 + 0x2c);
    guard_check_icall(uVar6);
    (*pcVar1)();
  }
  FUN_0055bae6();
  return;
}

