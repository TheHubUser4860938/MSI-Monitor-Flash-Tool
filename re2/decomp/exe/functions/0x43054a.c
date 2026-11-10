// rea decompile_all
// name: FUN_0043054a
// address: 0x43054a
// body: available
// range: 0x43054a-0x4305d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4305d0 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0043054a(undefined4 param_1,undefined4 *param_2,long *param_3)

{
  HWND hWnd;
  CNoTrackObject *pCVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  long *local_14;
  undefined4 *local_10;
  int local_c;
  uint local_8;
  
  hWnd = (HWND)*param_2;
  local_c = GetDlgCtrlID(hWnd);
  local_8 = param_2[2];
  pCVar1 = CThreadLocalObject::GetData
                     ((CThreadLocalObject *)&DAT_00614cc4,(_func_CNoTrackObject_ptr *)&LAB_00429175)
  ;
  if (pCVar1 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  if ((*(int *)(pCVar1 + 0x13c) != in_ECX[8]) &&
     (iVar2 = CWnd::ReflectLastMsg(hWnd,param_3), iVar2 == 0)) {
    local_14 = param_3;
    local_10 = param_2;
    iVar2 = *in_ECX;
    guard_check_icall(local_c,local_8 & 0xffff | 0x4e0000,&local_14,0);
    uVar3 = (**(code **)(iVar2 + 0xc))();
    return uVar3;
  }
  return 1;
}

