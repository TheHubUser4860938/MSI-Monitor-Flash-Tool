// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonCaption
// address: 0x41be44
// body: available
// range: 0x41be44-0x41c0ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41bf67 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawRibbonCaption(class CDC *,class
   CMFCRibbonBar *,class CRect,class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawRibbonCaption
          (undefined4 param_1_00,CDC *param_1,int param_2,int param_4,int param_5,undefined4 param_6
          ,int param_7,int param_8,undefined4 param_9,int param_10)

{
  code *pcVar1;
  HWND pHVar2;
  ulong uVar3;
  int iVar4;
  HDC hdc;
  int *piVar5;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_38 [4];
  HICON__ *local_34;
  int *local_30;
  int local_2c;
  int local_28;
  undefined1 *local_24;
  int local_20;
  int local_1c;
  CWnd *local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x41be50;
  pHVar2 = GetParent(*(HWND *)(param_2 + 0x20));
  local_18 = CWnd::FromHandle(pHVar2);
  local_24 = *(undefined1 **)(param_2 + 0x308);
  uVar3 = CWnd::GetExStyle(local_18);
  if ((*(byte *)(param_2 + 0x330) & 2) != 0) {
    local_34 = CGlobalUtils::GetWndIcon((CGlobalUtils *)&PTR_vftable_0060c45c,local_18);
    if (local_34 != (HICON__ *)0x0) {
      local_28 = GetSystemMetrics(0x32);
      local_2c = GetSystemMetrics(0x31);
      iVar4 = GetSystemMetrics(4);
      if (iVar4 < param_7 - param_5) {
        local_20 = GetSystemMetrics(4);
      }
      else {
        local_20 = param_7 - param_5;
      }
      local_20 = local_20 + param_4;
      local_1c = ((local_20 - local_2c) - param_4) / 2;
      if (local_1c < 0) {
        local_1c = 0;
      }
      local_1c = local_1c + param_4;
      iVar4 = ((param_7 - local_28) - param_5) / 2;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      if (param_1 == (CDC *)0x0) {
        hdc = (HDC)0x0;
      }
      else {
        hdc = *(HDC *)(param_1 + 4);
      }
      DrawIconEx(hdc,local_1c,param_5 + iVar4,local_34,local_2c,local_28,0,(HBRUSH)0x0,3);
      if (param_8 < local_20) {
        param_8 = local_20;
      }
    }
  }
  iVar4 = *(int *)param_1;
  GetGlobalData();
  guard_check_icall();
  local_1c = (**(code **)(iVar4 + 0x28))();
  if (local_1c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  local_20 = CDC::SetBkMode(param_1,1);
  FUN_004295fe();
  FUN_0040eb30();
  local_8 = 0;
  CWnd::GetWindowTextW
            (local_18,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14
            );
  local_18 = (CWnd *)((-(uint)((uVar3 & 0x400000) != 0) & 0x20002) + 0x8824);
  piVar5 = (int *)CDC::GetTextExtent(param_1,local_38);
  iVar4 = *piVar5;
  if (iVar4 < param_10 - param_8) {
    param_8 = param_8 + ((param_10 - param_8) - iVar4) / 2;
  }
  if (iVar4 + param_8 < param_10) {
    param_10 = iVar4 + param_8;
  }
  if (param_8 < param_10) {
    if (local_24 == (undefined1 *)0x0) {
      pcVar1 = *(code **)(*(int *)param_1 + 0x30);
      guard_check_icall();
      (*pcVar1)();
      iVar4 = *(int *)param_1;
      guard_check_icall();
      (**(code **)(iVar4 + 0x68))();
      pcVar1 = *(code **)(*(int *)param_1 + 0x30);
      guard_check_icall();
      (*pcVar1)();
    }
    else {
      local_24 = &stack0xffffff94;
      FUN_00415ee0(local_14[0] + -0x10);
      pcVar1 = *(code **)(*local_30 + 0x2cc);
      guard_check_icall(param_1);
      (*pcVar1)();
    }
  }
  CDC::SetBkMode(param_1,local_20);
  pcVar1 = *(code **)(*(int *)param_1 + 0x28);
  guard_check_icall();
  (*pcVar1)();
  FUN_0040efa0();
  return;
}

