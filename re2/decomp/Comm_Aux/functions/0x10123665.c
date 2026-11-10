// rea decompile_all
// name: FUN_10123665
// address: 0x10123665
// body: available
// range: 0x10123665-0x10123834 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10123830 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10123665(void)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  CMFCToolBarComboBoxButton *this;
  uint uVar4;
  undefined4 *puVar5;
  uint dx;
  CMFCMenuBar *in_ECX;
  uint dy;
  int local_44;
  int local_40;
  int local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  this = CMFCMenuBar::GetHelpCombobox(in_ECX);
  if (this != (CMFCToolBarComboBoxButton *)0x0) {
    CMFCToolBarButton::Show((CMFCToolBarButton *)this,0);
  }
  CMFCToolBar::AdjustLocations((CMFCToolBar *)in_ECX);
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  GetClientRect(*(HWND *)(in_ECX + 0x20),&local_28);
  local_44 = local_28.right;
  pcVar1 = *(code **)(*(int *)in_ECX + 0x194);
  guard_check_icall();
  uVar4 = (*pcVar1)();
  uVar4 = uVar4 & 0xa000;
  if (*(int *)(in_ECX + 0xd70) != 0) {
    uVar2 = *(uint *)(in_ECX + 0xd7c);
    uVar3 = *(uint *)(in_ECX + 0xd80);
    local_18.left = local_28.left;
    local_2c = *(int *)(in_ECX + 0xc44);
    local_18.top = local_28.top;
    local_18.right = local_28.right;
    local_18.bottom = local_28.bottom;
    SetRectEmpty(&local_28);
    CPane::CalcInsideRect((CPane *)in_ECX,(CRect *)&local_28,(uint)(uVar4 != 0));
    if (uVar4 == 0) {
      local_18.bottom = local_18.bottom + (local_28.bottom - local_28.top);
    }
    local_18.left = local_18.right - uVar2;
    local_18.top = local_18.bottom - uVar3;
    if (*(int *)(in_ECX + 0xd14) != 0) {
      FUN_10069da3(&local_2c);
    }
    local_40 = 0;
    if (0 < *(int *)(in_ECX + 0xd64)) {
      do {
        if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1004886a();
        }
        puVar5 = (undefined4 *)FUN_10069da3(&local_2c);
        CMFCToolBarButton::SetRect
                  ((CMFCToolBarButton *)*puVar5,local_18.left,local_18.top,local_18.right,
                   local_18.bottom);
        local_44 = local_18.left;
        if (uVar4 == 0) {
          dy = ~uVar3;
          dx = 0;
        }
        else {
          dy = 0;
          dx = ~uVar2;
        }
        OffsetRect(&local_18,dx,dy);
        local_40 = local_40 + 1;
      } while (local_40 < *(int *)(in_ECX + 0xd64));
    }
  }
  if (this != (CMFCToolBarComboBoxButton *)0x0) {
    CMFCToolBarButton::Show((CMFCToolBarButton *)this,1);
    local_18.left = *(LONG *)(this + 0x54);
    local_18.top = *(LONG *)(this + 0x58);
    local_18.right = *(LONG *)(this + 0x5c);
    local_18.bottom = *(LONG *)(this + 0x60);
    if (uVar4 == 0) {
      SetRectEmpty(&local_18);
    }
    else {
      local_18.right = local_44;
      local_18.left = local_44 - *(int *)(in_ECX + 0xd6c);
    }
    CMFCToolBarButton::SetRect
              ((CMFCToolBarButton *)this,local_18.left,local_18.top,local_18.right,local_18.bottom);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

