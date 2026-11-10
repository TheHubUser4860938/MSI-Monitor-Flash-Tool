// rea decompile_all
// name: FUN_101265df
// address: 0x101265df
// body: available
// range: 0x101265df-0x1012671c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10126718 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_101265df(CWnd *param_1,int param_2,int param_3,undefined4 param_4)

{
  HCURSOR pHVar1;
  ulong uVar2;
  CWnd *pCVar3;
  int iVar4;
  CWnd *in_ECX;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  if (param_1 != (CWnd *)0x0) {
    FUN_101232d7(2);
    uVar6 = 0;
    uVar5 = 0x10;
    pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
    uVar5 = AfxRegisterWndClass(0x800,pHVar1,uVar5,uVar6);
    FUN_100352a0(uVar5);
    *(undefined4 *)(in_ECX + 0xe78) = param_4;
    if ((param_2 == -1) && (param_3 == -1)) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetClientRect(*(HWND *)(param_1 + 0x20),&local_18);
      CWnd::ClientToScreen(param_1,&local_18);
      *(LONG *)(in_ECX + 0xe7c) = local_18.left + 5;
      *(LONG *)(in_ECX + 0xe80) = local_18.top + 5;
    }
    else {
      *(int *)(in_ECX + 0xe7c) = param_2;
      *(int *)(in_ECX + 0xe80) = param_3;
    }
    local_2c = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      uVar2 = CWnd::GetExStyle(param_1);
      if ((uVar2 & 0x400000) != 0) {
        local_2c = 0x400000;
      }
    }
    local_28 = param_2;
    local_24 = param_3;
    local_20 = param_2;
    local_1c = param_3;
    pCVar3 = CWnd::GetOwner(param_1);
    if (pCVar3 != (CWnd *)0x0) {
      param_1 = CWnd::GetOwner(param_1);
    }
    iVar4 = CreateEx(local_2c,DAT_10210638,*(undefined4 *)(in_ECX + 0xe88),0x80000000,&local_28,
                     param_1,0);
    if (iVar4 != 0) {
      CWnd::ShowWindow(in_ECX,4);
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1004886a();
}

