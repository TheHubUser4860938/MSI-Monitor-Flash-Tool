// rea decompile_all
// name: FUN_1016b0e4
// address: 0x1016b0e4
// body: available
// range: 0x1016b0e4-0x1016b2c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1016b2bf to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1016b0e4(int param_1)

{
  int iVar1;
  LPARAM lParam;
  int *piVar2;
  BOOL BVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  uint uVar6;
  CMFCToolBarButtonsListButton *in_ECX;
  int iVar7;
  int iVar8;
  int local_4c;
  tagRECT local_48;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  iVar8 = *(int *)(in_ECX + 0x128);
  if (iVar8 == param_1) {
    CMFCToolBarButtonsListButton::RedrawSelection(in_ECX);
  }
  else {
    *(int *)(in_ECX + 0x128) = param_1;
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    GetClientRect(*(HWND *)(in_ECX + 0x20),&local_28);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    SetRectEmpty(&local_18);
    local_4c = *(int *)(in_ECX + 0x84);
joined_r0x1016b157:
    if (local_4c != 0) {
      piVar2 = (int *)FUN_10034920(&local_4c);
      iVar1 = *piVar2;
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1004886a();
      }
      local_48.left = *(LONG *)(iVar1 + 0x54);
      local_48.top = *(int *)(iVar1 + 0x58);
      local_48.right = *(LONG *)(iVar1 + 0x5c);
      local_48.bottom = *(int *)(iVar1 + 0x60);
      OffsetRect(&local_48,0,-*(int *)(in_ECX + 300));
      if (iVar1 != *(int *)(in_ECX + 0x128)) goto LAB_1016b1b8;
      local_18.left = local_48.left;
      local_18.top = local_48.top;
      local_18.right = local_48.right;
      local_18.bottom = local_48.bottom;
      if (iVar1 != *(int *)(in_ECX + 0x128)) goto LAB_1016b1b8;
      goto LAB_1016b1bd;
    }
    BVar3 = IsRectEmpty(&local_18);
    if ((BVar3 == 0) && ((local_28.bottom <= local_18.top || (local_18.bottom <= local_28.top)))) {
      iVar8 = ((local_28.top - *(int *)(in_ECX + 300)) - local_28.bottom) + local_18.bottom;
      iVar1 = *(int *)(in_ECX + 0x130);
      iVar7 = iVar8;
      if (iVar1 <= iVar8) {
        iVar7 = iVar1;
      }
      if (iVar7 < 0) {
        iVar8 = 0;
      }
      else if (iVar1 <= iVar8) {
        iVar8 = iVar1;
      }
      CWnd::SetScrollPos((CWnd *)in_ECX,1,iVar8,1);
      *(int *)(in_ECX + 300) = iVar8;
      InvalidateRect(*(HWND *)(in_ECX + 0x20),(RECT *)0x0,1);
    }
    UpdateWindow(*(HWND *)(in_ECX + 0x20));
    pHVar4 = GetParent(*(HWND *)(in_ECX + 0x20));
    pCVar5 = CWnd::FromHandle(pHVar4);
    if (pCVar5 != (CWnd *)0x0) {
      lParam = *(LPARAM *)(in_ECX + 0x20);
      uVar6 = CWnd::GetDlgCtrlID((CWnd *)in_ECX);
      SendMessageW(*(HWND *)(pCVar5 + 0x20),0x111,uVar6 & 0xffff,lParam);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
LAB_1016b1b8:
  if (iVar1 == iVar8) {
LAB_1016b1bd:
    InflateRect(&local_48,2,2);
    local_38.left = 0;
    local_38.top = 0;
    local_38.right = 0;
    local_38.bottom = 0;
    BVar3 = IntersectRect(&local_38,&local_28,&local_48);
    if (BVar3 != 0) {
      InvalidateRect(*(HWND *)(in_ECX + 0x20),&local_38,1);
    }
  }
  goto joined_r0x1016b157;
}

