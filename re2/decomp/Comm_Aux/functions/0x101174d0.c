// rea decompile_all
// name: FUN_101174d0
// address: 0x101174d0
// body: available
// range: 0x101174d0-0x1011766f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1011766b to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_101174d0(undefined4 param_1,int *param_2)

{
  code *pcVar1;
  BOOL BVar2;
  AFX_GLOBAL_DATA *this;
  int iVar3;
  ulong uVar4;
  CFrameImpl *in_ECX;
  int local_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
  }
  local_8 = 0;
  CGlobalUtils::GetSystemBorders((CGlobalUtils *)&PTR_vftable_10205db4,(CWnd *)&local_18);
  iVar3 = *(int *)(in_ECX + 0xfc);
  if ((((iVar3 != 0) && (*(int *)(iVar3 + 0x20) != 0)) &&
      ((BVar2 = IsWindowVisible(*(HWND *)(iVar3 + 0x20)), BVar2 != 0 ||
       ((*(int *)(in_ECX + 0xd0) != 0 ||
        (BVar2 = IsWindowVisible(*(HWND *)(*(int *)(in_ECX + 0xb0) + 0x20)), BVar2 == 0)))))) &&
     (*(int *)(*(int *)(in_ECX + 0xfc) + 0x328) != 0)) {
    local_8 = 1;
    this = GetGlobalData();
    iVar3 = AFX_GLOBAL_DATA::IsDwmCompositionEnabled(this);
    if (iVar3 != 0) {
      *param_2 = *param_2 + local_18;
      param_2[2] = param_2[2] - local_18;
      param_2[3] = param_2[3] - local_14;
      return 1;
    }
  }
  iVar3 = *(int *)(in_ECX + 0x100);
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0x20) != 0)) &&
     ((BVar2 = IsWindowVisible(*(HWND *)(iVar3 + 0x20)), BVar2 != 0 ||
      (BVar2 = IsWindowVisible(*(HWND *)(*(int *)(in_ECX + 0xb0) + 0x20)), BVar2 == 0)))) {
    local_c = *(int *)(*(int *)(in_ECX + 0x100) + 0x16f8);
    iVar3 = CFrameImpl::IsOwnerDrawCaption(in_ECX);
    if ((iVar3 == 0) || (BVar2 = IsZoomed(*(HWND *)(*(int *)(in_ECX + 0xb0) + 0x20)), BVar2 != 0)) {
      *(undefined4 *)(*(int *)(in_ECX + 0x100) + 0x16f8) = 0;
    }
    else {
      *(undefined4 *)(*(int *)(in_ECX + 0x100) + 0x16f8) = 1;
      param_2[3] = param_2[3] + local_14;
    }
    local_10 = *(int **)(in_ECX + 0x100);
    if (local_c != local_10[0x5be]) {
      pcVar1 = *(code **)(*local_10 + 0x210);
      guard_check_icall();
      (*pcVar1)();
    }
  }
  if ((local_8 == 0) && (iVar3 = CFrameImpl::IsOwnerDrawCaption(in_ECX), iVar3 != 0)) {
    iVar3 = GetSystemMetrics(4);
    param_2[1] = param_2[1] + iVar3;
  }
  uVar4 = CWnd::GetExStyle(*(CWnd **)(in_ECX + 0xb0));
  if ((uVar4 & 0x1000000) != 0) {
    if (local_8 != 0) {
      return 1;
    }
    iVar3 = CFrameImpl::IsOwnerDrawCaption(in_ECX);
    if (iVar3 != 0) {
      return 1;
    }
  }
  return 0;
}

