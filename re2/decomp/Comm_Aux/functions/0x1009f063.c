// rea decompile_all
// name: InsertTab
// address: 0x1009f063
// body: available
// range: 0x1009f063-0x1009f28b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009f08e to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CMFCBaseTabCtrl::InsertTab(class CWnd *,char const
   *,int,unsigned int,int)
    public: virtual void __thiscall CMFCBaseTabCtrl::InsertTab(class CWnd *,wchar_t const
   *,int,unsigned int,int)
   
   Library: Visual Studio 2015 Release */

void InsertTab(undefined4 param_1,wchar_t *param_2,int param_3,uint param_4,uint param_5)

{
  code *pcVar1;
  CToolTipCtrl *this;
  CWnd *this_00;
  BOOL BVar2;
  CWnd *this_01;
  int iVar3;
  uint uVar4;
  CMFCTabInfo *this_02;
  undefined4 uVar5;
  CWnd *in_ECX;
  wchar_t *pwVar6;
  uint local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x1009f06f;
  local_28 = param_5;
  if (param_2 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
  }
  pcVar1 = *(code **)(*(int *)in_ECX + 0x2c4);
  pwVar6 = param_2;
  guard_check_icall(param_1,param_2,param_5);
  this_00 = (CWnd *)(*pcVar1)();
  BVar2 = IsWindowVisible(*(HWND *)(in_ECX + 0x20));
  if (BVar2 == 0) {
    CWnd::ShowWindow(in_ECX,5);
  }
  if ((param_3 < 0) || (*(int *)(in_ECX + 0xbc) < param_3)) {
    param_3 = *(int *)(in_ECX + 0xbc);
  }
  pcVar1 = *(code **)(*(int *)in_ECX + 0x210);
  guard_check_icall(param_1,pwVar6,param_5);
  this_01 = (CWnd *)(*pcVar1)();
  iVar3 = FUN_1004e58b(&PTR_s_CDockablePane_1020600c);
  uVar4 = -(uint)(iVar3 != 0) & local_28;
  this_02 = (CMFCTabInfo *)FUN_10047eb4(0x48);
  local_8 = 0;
  if (this_02 == (CMFCTabInfo *)0x0) {
    uVar5 = 0;
  }
  else {
    FUN_100352e0(param_2);
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar5 = CMFCTabInfo::CMFCTabInfo
                      (this_02,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *
                               )&local_28,param_4,this_00,*(int *)(in_ECX + 0x108),uVar4);
  }
  local_8 = 2;
  FUN_10067c9f(param_3,uVar5,1);
  local_8 = 0xffffffff;
  if (this_02 != (CMFCTabInfo *)0x0) {
    FUN_10034f00();
  }
  *(int *)(in_ECX + 0xbc) = *(int *)(in_ECX + 0xbc) + 1;
  this = *(CToolTipCtrl **)(in_ECX + 0xf8);
  if ((this != (CToolTipCtrl *)0x0) && (*(int *)(this + 0x20) != 0)) {
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    if (*(int *)(in_ECX + 0x100) != 0) {
      param_2 = (wchar_t *)0xffffffff;
    }
    CToolTipCtrl::AddTool(this,in_ECX,param_2,&local_24,*(uint *)(in_ECX + 0x108));
  }
  *(int *)(in_ECX + 0x108) = *(int *)(in_ECX + 0x108) + 1;
  FUN_1017250c(0,0xffffffff);
  pcVar1 = *(code **)(*(int *)in_ECX + 0x26c);
  guard_check_icall();
  (*pcVar1)();
  pcVar1 = *(code **)(*(int *)in_ECX + 0x184);
  guard_check_icall();
  (*pcVar1)();
  if (*(int *)(in_ECX + 0xbc) == 1) {
    pcVar1 = *(code **)(*(int *)in_ECX + 0x214);
    guard_check_icall(0);
    (*pcVar1)();
LAB_1009f265:
    if (*(int *)(in_ECX + 0x120) != 0) goto LAB_1009f284;
  }
  else {
    iVar3 = *(int *)(in_ECX + 0xc0);
    *(int *)(in_ECX + 0x1e4) = iVar3;
    if (iVar3 == param_3) {
      *(int *)(in_ECX + 0x1e4) = iVar3 + 1;
      if ((*(int *)(in_ECX + 0x120) != 0) && (this_01 != (CWnd *)0x0)) {
        CWnd::ShowWindow(this_01,0);
      }
      iVar3 = 1;
LAB_1009f25e:
      CWnd::ShowWindow(this_00,iVar3);
      goto LAB_1009f265;
    }
    if (*(int *)(in_ECX + 0x120) != 0) {
      if ((this_00 == (CWnd *)0x0) || (*(int *)(this_00 + 0x20) == 0)) goto LAB_1009f265;
      iVar3 = 0;
      goto LAB_1009f25e;
    }
  }
  if ((this_01 != (CWnd *)0x0) && (*(int *)(this_01 + 0x20) != 0)) {
    BringWindowToTop(*(HWND *)(this_01 + 0x20));
  }
LAB_1009f284:
  FUN_1017f5f4();
  return;
}

