// rea decompile_all
// name: FUN_1004b57e
// address: 0x1004b57e
// body: available
// range: 0x1004b57e-0x1004b83b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004b837 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004b57e(int param_1,int *param_2)

{
  code *pcVar1;
  POINT pt;
  POINT pt_00;
  CBasePane *pCVar2;
  CObject *pCVar3;
  BOOL BVar4;
  int iVar5;
  CPane *in_ECX;
  tagPOINT local_5c;
  int *local_54;
  undefined8 local_50;
  tagRECT local_48;
  RECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_50 = (double)CONCAT44(param_1,(undefined4)local_50);
  local_54 = param_2;
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10012a3f();
  }
  local_5c.x = 0;
  local_5c.y = 0;
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  local_48.left = 0;
  local_48.top = 0;
  local_48.right = 0;
  local_48.bottom = 0;
  local_38.left = 0;
  local_38.top = 0;
  local_38.right = 0;
  local_38.bottom = 0;
  GetCursorPos(&local_5c);
  GetWindowRect(*(HWND *)(in_ECX + 0x20),&local_28);
  CPane::GetVirtualRect(in_ECX,(CRect *)&local_38);
  pCVar2 = CBasePane::PaneFromPoint();
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockSite_101954d4,(CObject *)pCVar2);
  *param_2 = (int)pCVar3;
  if (*(int *)(in_ECX + 0xb8) == 0) {
    if (pCVar3 != (CObject *)0x0) {
      pcVar1 = *(code **)(*(int *)in_ECX + 0x188);
      guard_check_icall(pCVar3);
      iVar5 = (*pcVar1)();
      if (iVar5 != 0) {
        GetWindowRect(*(HWND *)(*local_54 + 0x20),&local_18);
        pt_00.y = local_5c.y;
        pt_00.x = local_5c.x;
        BVar4 = PtInRect(&local_18,pt_00);
        if (BVar4 == 0) {
          local_54 = (int *)0x0;
          if (local_5c.x < local_18.left) {
            local_54 = (int *)(local_18.left - local_5c.x);
          }
          else if (local_18.right < local_5c.x) {
            local_54 = (int *)(local_5c.x - local_18.right);
          }
          else if (local_5c.y < local_18.top) {
            local_54 = (int *)(local_18.top - local_5c.y);
          }
          else if (local_18.bottom < local_5c.y) {
            local_54 = (int *)(local_5c.y - local_18.bottom);
          }
          local_50 = (double)(int)local_54;
        }
      }
    }
    goto LAB_1004b6d3;
  }
  GetWindowRect(*(HWND *)(*(int *)(in_ECX + 0xb8) + 0x20),&local_18);
  BVar4 = IntersectRect(&local_48,&local_18,&local_38);
  if (BVar4 == 0) goto LAB_1004b6d3;
  pcVar1 = *(code **)(**(int **)(in_ECX + 0xb8) + 0x164);
  guard_check_icall();
  iVar5 = (*pcVar1)();
  if (iVar5 == 0) {
    if ((local_18.top <= local_38.top) || (local_18.top - local_38.top <= param_1 * 2)) {
      if (local_38.bottom <= local_18.bottom) goto LAB_1004b6d3;
      iVar5 = local_38.bottom - local_18.bottom;
      goto LAB_1004b6b6;
    }
  }
  else if ((local_18.left <= local_38.left) || (local_18.left - local_38.left <= param_1 * 2)) {
    if (local_38.right <= local_18.right) goto LAB_1004b6d3;
    iVar5 = local_38.right - local_18.right;
LAB_1004b6b6:
    if (iVar5 <= param_1 * 2) goto LAB_1004b6d3;
  }
  pt.y = local_5c.y;
  pt.x = local_5c.x;
  PtInRect(&local_18,pt);
LAB_1004b6d3:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

