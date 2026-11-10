// rea decompile_all
// name: FUN_100f4a16
// address: 0x100f4a16
// body: available
// range: 0x100f4a16-0x100f4b9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f4b9a to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100f4a16(CObject *param_1,int param_2,int param_3)

{
  CObject *pCVar1;
  code *pcVar2;
  __POSITION *p_Var3;
  int *piVar4;
  int iVar5;
  BOOL BVar6;
  int in_ECX;
  int dy;
  CObject *local_38;
  __POSITION *local_30;
  int local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_38 = param_1;
  if (param_2 != 0) {
    local_2c = in_ECX;
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
        FUN_1004886a();
      }
      local_38 = *(CObject **)(p_Var3 + 8);
    }
    else {
      p_Var3 = CObList::Find((CObList *)(in_ECX + 0x24),param_1,(__POSITION *)0x0);
    }
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    local_30 = p_Var3;
    SetRectEmpty(&local_18);
    while (p_Var3 != (__POSITION *)0x0) {
      if (param_3 == 0) {
        piVar4 = (int *)FUN_10069da3(&local_30);
      }
      else {
        piVar4 = (int *)FUN_10034920(&local_30);
      }
      pCVar1 = (CObject *)*piVar4;
      pcVar2 = *(code **)(*(int *)pCVar1 + 0x17c);
      guard_check_icall();
      iVar5 = (*pcVar2)();
      if ((iVar5 != 0) || (p_Var3 = local_30, *(int *)(in_ECX + 4) != 0)) {
        local_28.left = *(LONG *)(pCVar1 + 0xa8);
        local_28.top = *(LONG *)(pCVar1 + 0xac);
        local_28.right = *(LONG *)(pCVar1 + 0xb0);
        local_28.bottom = *(LONG *)(pCVar1 + 0xb4);
        if ((pCVar1 != local_38) && (BVar6 = IsRectEmpty(&local_18), BVar6 == 0)) {
          if ((*(uint *)(local_2c + 0x40) & 0xa000) == 0) {
            if (param_3 == 0) {
              iVar5 = local_28.bottom - local_18.top;
            }
            else {
              iVar5 = local_28.top - local_18.bottom;
            }
          }
          else if (param_3 == 0) {
            iVar5 = local_28.right - local_18.left;
          }
          else {
            iVar5 = local_28.left - local_18.right;
          }
          param_2 = param_2 - iVar5;
        }
        if (((param_2 < 1) && (param_3 != 0)) || ((-1 < param_2 && (param_3 == 0)))) break;
        local_18.left = local_28.left;
        local_18.top = local_28.top;
        local_18.right = local_28.right;
        local_18.bottom = local_28.bottom;
        if ((*(uint *)(local_2c + 0x40) & 0xa000) == 0) {
          iVar5 = 0;
          dy = param_2;
        }
        else {
          iVar5 = param_2;
          dy = 0;
        }
        OffsetRect(&local_28,iVar5,dy);
        *(LONG *)(pCVar1 + 0xa8) = local_28.left;
        *(LONG *)(pCVar1 + 0xac) = local_28.top;
        *(LONG *)(pCVar1 + 0xb0) = local_28.right;
        *(LONG *)(pCVar1 + 0xb4) = local_28.bottom;
        in_ECX = local_2c;
        p_Var3 = local_30;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

