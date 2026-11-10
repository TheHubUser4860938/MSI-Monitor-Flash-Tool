// rea decompile_all
// name: FUN_1017101f
// address: 0x1017101f
// body: available
// range: 0x1017101f-0x10171160 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1017115c to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1017101f(int param_1,int param_2,int *param_3)

{
  POINT pt;
  CNoTrackObject *this;
  CSize *pCVar1;
  ulong uVar2;
  LRESULT LVar3;
  LRESULT LVar4;
  int iVar5;
  WPARAM wParam;
  BOOL BVar6;
  CWnd *in_ECX;
  int extraout_EDX;
  int iVar7;
  int extraout_EDX_00;
  int extraout_EDX_01;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  *param_3 = 0;
  this = CProcessLocalObject::GetData
                   ((CProcessLocalObject *)&DAT_102110b0,(_func_CNoTrackObject_ptr *)&LAB_10171182);
  if (this == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
  }
  pCVar1 = _AFX_CHECKLIST_STATE::GetCheckBoxSize((_AFX_CHECKLIST_STATE *)this,in_ECX);
  iVar5 = *(int *)pCVar1;
  local_18.bottom = *(LONG *)(pCVar1 + 4);
  uVar2 = CWnd::GetExStyle(in_ECX);
  if ((uVar2 & 0x210) == 0x10) {
    LVar3 = SendMessageW(*(HWND *)(in_ECX + 0x20),0x1a1,0,0);
    LVar4 = SendMessageW(*(HWND *)(in_ECX + 0x20),0x18b,0,0);
    iVar7 = extraout_EDX;
    if (param_2 < LVar4 * LVar3) {
      local_18.bottom = SendMessageW(*(HWND *)(in_ECX + 0x20),0x18e,0,0);
      iVar7 = param_2 % LVar3;
      iVar5 = iVar5 + 2;
LAB_101710cf:
      if (param_1 < iVar5) {
        *param_3 = *param_3 + 1;
      }
    }
  }
  else {
    for (wParam = SendMessageW(*(HWND *)(in_ECX + 0x20),0x18e,0,0);
        LVar3 = SendMessageW(*(HWND *)(in_ECX + 0x20),0x18b,0,0), iVar7 = extraout_EDX_01,
        (int)wParam < LVar3; wParam = wParam + 1) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      SendMessageW(*(HWND *)(in_ECX + 0x20),0x198,wParam,(LPARAM)&local_18);
      pt.y = param_2;
      pt.x = param_1;
      BVar6 = PtInRect(&local_18,pt);
      if (BVar6 != 0) {
        iVar5 = local_18.left + 2 + iVar5;
        iVar7 = extraout_EDX_00;
        goto LAB_101710cf;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,iVar7);
  return;
}

