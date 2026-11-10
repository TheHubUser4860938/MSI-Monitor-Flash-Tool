// rea decompile_all
// name: FUN_004fd84c
// address: 0x4fd84c
// body: available
// range: 0x4fd84c-0x4fda69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4fda65 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fd84c(int *param_1)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  CPaneContainer *in_ECX;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  CPaneContainer *local_c;
  int local_8;
  
  if (*(int *)(in_ECX + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  local_10 = 0;
  local_c = in_ECX;
  iVar2 = CPaneContainerManager::IsAutoHideMode(*(CPaneContainerManager **)(in_ECX + 0x1c));
  local_8 = iVar2;
  if ((*(CWnd **)(in_ECX + 4) != (CWnd *)0x0) &&
     ((uVar3 = CWnd::GetExStyle(*(CWnd **)(in_ECX + 4)), (uVar3 & 0x10000000) != 0 || (iVar2 != 0)))
     ) {
    pcVar1 = *(code **)(**(int **)(in_ECX + 4) + 0x270);
    guard_check_icall(&local_1c);
    (*pcVar1)();
    in_ECX = local_c;
    iVar2 = local_8;
  }
  if ((*(CWnd **)(in_ECX + 8) != (CWnd *)0x0) &&
     ((uVar3 = CWnd::GetExStyle(*(CWnd **)(in_ECX + 8)), (uVar3 & 0x10000000) != 0 || (iVar2 != 0)))
     ) {
    pcVar1 = *(code **)(**(int **)(in_ECX + 8) + 0x270);
    guard_check_icall(&local_14);
    (*pcVar1)();
    in_ECX = local_c;
  }
  local_24 = 0;
  local_20 = 0;
  if ((*(CPaneContainer **)(in_ECX + 0x10) != (CPaneContainer *)0x0) &&
     ((iVar2 = CPaneContainer::IsVisible(*(CPaneContainer **)(in_ECX + 0x10)), iVar2 != 0 ||
      (local_8 != 0)))) {
    pcVar1 = *(code **)(**(int **)(in_ECX + 0x10) + 0x10);
    guard_check_icall(&local_24);
    (*pcVar1)();
    in_ECX = local_c;
  }
  iVar2 = local_8;
  local_2c = 0;
  local_28 = 0;
  if ((*(CPaneContainer **)(in_ECX + 0x14) != (CPaneContainer *)0x0) &&
     ((iVar4 = CPaneContainer::IsVisible(*(CPaneContainer **)(in_ECX + 0x14)), iVar4 != 0 ||
      (iVar2 != 0)))) {
    pcVar1 = *(code **)(**(int **)(in_ECX + 0x14) + 0x10);
    guard_check_icall(&local_2c);
    (*pcVar1)();
    in_ECX = local_c;
  }
  if ((*(CWnd **)(in_ECX + 0xc) == (CWnd *)0x0) ||
     ((uVar3 = CWnd::GetExStyle(*(CWnd **)(in_ECX + 0xc)), (uVar3 & 0x10000000) == 0 &&
      (local_8 == 0)))) {
    iVar2 = local_1c;
    if (local_1c <= local_14) {
      iVar2 = local_14;
    }
    *param_1 = iVar2;
    iVar2 = local_18;
    if (local_18 <= local_10) {
      iVar2 = local_10;
    }
    param_1[1] = iVar2;
    if ((*(CPaneContainer **)(in_ECX + 0x10) != (CPaneContainer *)0x0) &&
       (iVar2 = CPaneContainer::IsVisible(*(CPaneContainer **)(in_ECX + 0x10)), iVar2 != 0)) {
      *param_1 = local_24;
      param_1[1] = local_20;
    }
    if (*(CPaneContainer **)(in_ECX + 0x14) == (CPaneContainer *)0x0) {
      return;
    }
    iVar2 = CPaneContainer::IsVisible(*(CPaneContainer **)(in_ECX + 0x14));
    if (iVar2 == 0) {
      return;
    }
    *param_1 = local_2c;
  }
  else {
    iVar2 = CPaneContainer::IsPaneDividerHorz(in_ECX);
    if (iVar2 == 0) {
      if (local_18 <= local_10) {
        local_18 = local_10;
      }
      param_1[1] = local_18;
      if (local_20 <= local_18) {
        local_20 = local_18;
      }
      param_1[1] = local_20;
      if (local_28 <= local_20) {
        local_28 = local_20;
      }
      param_1[1] = local_28;
      *param_1 = *(int *)(*(int *)(in_ECX + 0xc) + 0x118) + local_2c + local_24 + local_14 +
                 local_1c;
      return;
    }
    if (local_1c <= local_14) {
      local_1c = local_14;
    }
    *param_1 = local_1c;
    if (local_24 <= local_1c) {
      local_24 = local_1c;
    }
    *param_1 = local_24;
    if (local_2c <= local_24) {
      local_2c = local_24;
    }
    *param_1 = local_2c;
    local_28 = *(int *)(*(int *)(in_ECX + 0xc) + 0x118) + local_28 + local_20 + local_10 + local_18;
  }
  param_1[1] = local_28;
  return;
}

