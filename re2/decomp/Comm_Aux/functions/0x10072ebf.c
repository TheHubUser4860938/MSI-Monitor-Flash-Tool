// rea decompile_all
// name: FUN_10072ebf
// address: 0x10072ebf
// body: available
// range: 0x10072ebf-0x10072fac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10072fa8 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10072ebf(int param_1,wchar_t *param_2,wchar_t *param_3)

{
  code *pcVar1;
  size_t sVar2;
  int iVar3;
  int *in_ECX;
  undefined4 local_34 [2];
  wchar_t *local_2c;
  int local_24;
  
  if ((param_2 != (wchar_t *)0x0) && (param_3 != (wchar_t *)0x0)) {
    if ((int *)in_ECX[0xf6] != (int *)0x0) {
      pcVar1 = *(code **)(*(int *)in_ECX[0xf6] + 0x38);
      guard_check_icall();
      (*pcVar1)();
    }
    in_ECX[0xbe] = param_1;
    if (param_1 != 0) {
      local_34[0] = 2;
      local_2c = param_2;
      sVar2 = _wcslen(param_2);
      local_24 = sVar2 + 1;
      pcVar1 = *(code **)(*in_ECX + 0x164);
      guard_check_icall();
      iVar3 = (*pcVar1)();
      SendMessageW(*(HWND *)(iVar3 + 0x20),0x120c,0,(LPARAM)local_34);
      local_2c = param_3;
      sVar2 = _wcslen(param_3);
      local_24 = sVar2 + 1;
      pcVar1 = *(code **)(*in_ECX + 0x164);
      guard_check_icall();
      iVar3 = (*pcVar1)();
      SendMessageW(*(HWND *)(iVar3 + 0x20),0x120c,1,(LPARAM)local_34);
    }
    pcVar1 = *(code **)(*in_ECX + 0x170);
    guard_check_icall();
    (*pcVar1)();
    RedrawWindow((HWND)in_ECX[8],(RECT *)0x0,(HRGN)0x0,0x105);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1004886a();
}

