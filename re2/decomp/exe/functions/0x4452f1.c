// rea decompile_all
// name: FUN_004452f1
// address: 0x4452f1
// body: available
// range: 0x4452f1-0x445383 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44537f to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004452f1(int param_1,RECT *param_2)

{
  int iVar1;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)(param_1 + -0xb0);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 0)) && (*(int *)(param_1 + -0x7c) != 0)) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(*(int *)(iVar1 + 0x20) + 0x20),&local_18);
    CopyRect(&local_28,param_2);
    *(LONG *)(param_1 + -0xa0) = local_28.left;
    *(LONG *)(param_1 + -0x9c) = local_28.top;
    *(LONG *)(param_1 + -0x98) = local_28.right;
    *(LONG *)(param_1 + -0x94) = local_28.bottom;
    iVar1 = **(int **)(param_1 + -0x7c);
    guard_check_icall(*(int **)(param_1 + -0x7c),(LONG *)(param_1 + -0xa0),&local_18);
    (**(code **)(iVar1 + 0x1c))();
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

