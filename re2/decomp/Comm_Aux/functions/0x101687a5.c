// rea decompile_all
// name: FUN_101687a5
// address: 0x101687a5
// body: available
// range: 0x101687a5-0x101689a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101689a3 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_101687a5(int param_1,int *param_2,int param_3)

{
  HRESULT HVar1;
  int iVar2;
  CWnd *in_ECX;
  int local_54;
  SIZE local_50;
  tagRECT local_48;
  RECT local_38;
  undefined1 local_28 [12];
  int local_1c;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
  }
  if (*(int *)(in_ECX + 0xa8) != 0) {
    local_48.left = 0;
    local_48.top = 0;
    local_48.right = 0;
    local_48.bottom = 0;
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    if (param_3 != 0) {
      GetClientRect(*(HWND *)(in_ECX + 0x20),&local_48);
      local_28._0_4_ = 0;
      local_28._4_4_ = 0;
      local_28._8_4_ = 0;
      local_1c = 0;
      GetWindowRect(*(HWND *)(in_ECX + 0x20),(LPRECT)local_28);
      CWnd::ScreenToClient(in_ECX,(tagRECT *)local_28);
      OffsetRect(&local_48,-local_28._0_4_,-local_28._4_4_);
    }
    if ((*(uint *)(in_ECX + 0xb0) & 0xa000) == 0) {
      local_54 = 1;
      HVar1 = GetThemePartSize(*(HTHEME *)(in_ECX + 0xa8),*(HDC *)(param_1 + 4),1,0,(LPCRECT)0x0,
                               TS_TRUE,(SIZE *)(local_28 + 8));
      if (HVar1 < 0) goto LAB_10168991;
      if (param_3 == 0) {
        local_50.cy = param_2[1];
      }
      else {
        iVar2 = local_48.top - param_2[1];
        if (iVar2 < local_1c) {
          iVar2 = iVar2 + -1;
        }
        local_50.cy = (iVar2 - local_1c) / 2 + param_2[1];
      }
      local_38.left = *(int *)(in_ECX + 0x90) + *param_2;
      local_38.right =
           (((param_2[2] - *(int *)(in_ECX + 0x94)) - *(int *)(in_ECX + 0x90)) - *param_2) +
           local_38.left;
      local_38.bottom = local_50.cy + local_1c;
      local_18.top = param_2[1];
      local_18.bottom = local_48.top;
      local_38.top = local_50.cy;
      local_18.left = local_38.left;
      local_18.right = local_38.right;
    }
    else {
      local_54 = 2;
      HVar1 = GetThemePartSize(*(HTHEME *)(in_ECX + 0xa8),*(HDC *)(param_1 + 4),2,0,(LPCRECT)0x0,
                               TS_TRUE,&local_50);
      if (HVar1 < 0) goto LAB_10168991;
      if (param_3 == 0) {
        local_38.left = *param_2;
      }
      else {
        iVar2 = local_48.left - *param_2;
        if (iVar2 < local_50.cx) {
          iVar2 = iVar2 + -1;
        }
        local_38.left = (iVar2 - local_50.cx) / 2 + *param_2;
      }
      local_38.top = *(int *)(in_ECX + 0x90) + param_2[1];
      local_18.left = *param_2;
      local_38.right = local_38.left + local_50.cx;
      local_38.bottom =
           (((param_2[3] - *(int *)(in_ECX + 0x94)) - param_2[1]) - *(int *)(in_ECX + 0x90)) +
           local_38.top;
      local_18.right = local_48.left;
      local_18.bottom = local_38.bottom;
      local_18.top = local_38.top;
    }
    DrawThemeBackground(*(HTHEME *)(in_ECX + 0xa8),*(HDC *)(param_1 + 4),local_54,0,&local_38,
                        &local_18);
  }
LAB_10168991:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

