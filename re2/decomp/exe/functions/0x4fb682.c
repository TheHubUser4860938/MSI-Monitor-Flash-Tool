// rea decompile_all
// name: FUN_004fb682
// address: 0x4fb682
// body: available
// range: 0x4fb682-0x4fb78e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4fb78a to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fb682(CObject *param_1)

{
  code *pcVar1;
  CObject *pCVar2;
  int iVar3;
  int *in_ECX;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_0060c780,param_1);
  if (pCVar2 != (CObject *)0x0) {
    if (PTR_PTR_0060c9dc == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00429127();
    }
    pCVar2 = (CObject *)FUN_00439696();
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCAutoHideButton_005ba6d0,pCVar2);
    if (pCVar2 != (CObject *)0x0) {
      pcVar1 = *(code **)(*(int *)pCVar2 + 0xc);
      guard_check_icall();
      iVar3 = (*pcVar1)();
      if (iVar3 == 0) {
        pcVar1 = *(code **)(*(int *)pCVar2 + 4);
        guard_check_icall(1);
        (*pcVar1)();
      }
      else {
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        GetWindowRect((HWND)in_ECX[8],&local_18);
        CMFCAutoHideButton::GetSize((CMFCAutoHideButton *)pCVar2);
        if (in_ECX[0xb1] == 0) {
          local_18.right = local_18.right + local_20;
          local_18.bottom = local_18.bottom + local_1c;
        }
        pcVar1 = *(code **)(*in_ECX + 0x238);
        guard_check_icall(0,0,0,local_18.right - local_18.left,local_18.bottom - local_18.top,6,0);
        (*pcVar1)();
        CObList::AddTail((CObList *)(in_ECX + 0xae),pCVar2);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

