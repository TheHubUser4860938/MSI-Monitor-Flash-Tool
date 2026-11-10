// rea decompile_all
// name: FUN_004f00a5
// address: 0x4f00a5
// body: available
// range: 0x4f00a5-0x4f0263 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4f025f to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f00a5(CObject *param_1,int param_2,int param_3)

{
  code *pcVar1;
  CObject *pCVar2;
  __POSITION *p_Var3;
  undefined4 *puVar4;
  int iVar5;
  BOOL BVar6;
  int in_ECX;
  int dy;
  CObject *local_34;
  __POSITION *local_30;
  CObject *local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_34 = param_1;
  if (param_2 != 0) {
    if (param_1 == (CObject *)0x0) {
      if (param_3 == 0) {
        p_Var3 = *(__POSITION **)(in_ECX + 0x2c);
      }
      else {
        p_Var3 = *(__POSITION **)(in_ECX + 0x28);
      }
      if (p_Var3 == (__POSITION *)0x0) {
        local_30 = p_Var3;
                    /* WARNING: Subroutine does not return */
        FUN_00429127();
      }
      local_34 = *(CObject **)(p_Var3 + 8);
    }
    else {
      p_Var3 = CObList::Find((CObList *)(in_ECX + 0x24),param_1,(__POSITION *)0x0);
    }
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    local_30 = p_Var3;
    SetRectEmpty(&local_28);
    while (p_Var3 != (__POSITION *)0x0) {
      if (param_3 == 0) {
        puVar4 = (undefined4 *)FUN_00434304(&local_30);
      }
      else {
        puVar4 = (undefined4 *)FUN_004ead48(&local_30);
      }
      local_2c = (CObject *)*puVar4;
      pcVar1 = *(code **)(*(int *)local_2c + 0x17c);
      guard_check_icall();
      iVar5 = (*pcVar1)();
      pCVar2 = local_2c;
      if ((iVar5 != 0) || (p_Var3 = local_30, *(int *)(in_ECX + 4) != 0)) {
        local_18.left = 0;
        local_18.top = local_18.left;
        local_18.right = local_18.left;
        local_18.bottom = local_18.left;
        GetWindowRect(*(HWND *)(local_2c + 0x20),&local_18);
        if ((pCVar2 != local_34) && (BVar6 = IsRectEmpty(&local_28), BVar6 == 0)) {
          if ((*(uint *)(in_ECX + 0x40) & 0xa000) == 0) {
            if (param_3 == 0) {
              iVar5 = local_18.bottom - local_28.top;
            }
            else {
              iVar5 = local_18.top - local_28.bottom;
            }
          }
          else if (param_3 == 0) {
            iVar5 = local_18.right - local_28.left;
          }
          else {
            iVar5 = local_18.left - local_28.right;
          }
          param_2 = param_2 - iVar5;
        }
        if (((param_2 < 1) && (param_3 != 0)) || ((-1 < param_2 && (param_3 == 0)))) break;
        local_28.left = local_18.left;
        local_28.top = local_18.top;
        local_28.right = local_18.right;
        local_28.bottom = local_18.bottom;
        if ((*(uint *)(in_ECX + 0x40) & 0xa000) == 0) {
          iVar5 = 0;
          dy = param_2;
        }
        else {
          iVar5 = param_2;
          dy = 0;
        }
        OffsetRect(&local_18,iVar5,dy);
        CWnd::ScreenToClient(*(CWnd **)(in_ECX + 0x44),&local_18);
        pcVar1 = *(code **)(*(int *)local_2c + 0x238);
        guard_check_icall(0,local_18.left,local_18.top,local_18.right - local_18.left,
                          local_18.bottom - local_18.top,0x14,0);
        (*pcVar1)();
        p_Var3 = local_30;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

