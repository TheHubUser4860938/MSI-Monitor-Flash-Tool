// rea decompile_all
// name: FUN_1002ae70
// address: 0x1002ae70
// body: available
// range: 0x1002ae70-0x1002af7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002af28 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1002ae70(int param_1,undefined4 param_2)

{
  FARPROC pFVar1;
  FARPROC pFVar2;
  int iVar3;
  int in_ECX;
  
  iVar3 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  *(undefined4 *)(in_ECX + 0x38) = 0;
  if (*(int *)(iVar3 + 4) < DAT_102092a4) {
    FUN_10153ede(&DAT_102092a4);
    if (DAT_102092a4 == -1) {
      DAT_102092a0 = GetModuleHandleW(L"user32.dll");
      FUN_10153e9f(&DAT_102092a4);
    }
  }
  if (DAT_102092a0 != (HMODULE)0x0) {
    if (*(int *)(iVar3 + 4) < DAT_102092ac) {
      FUN_10153ede(&DAT_102092ac);
      if (DAT_102092ac == -1) {
        DAT_102092a8 = GetProcAddress(DAT_102092a0,"RegisterTouchWindow");
        DAT_102092b0 = GetProcAddress(DAT_102092a0,"UnregisterTouchWindow");
        FUN_10153e9f(&DAT_102092ac);
      }
    }
    pFVar2 = DAT_102092b0;
    pFVar1 = DAT_102092a8;
    if ((DAT_102092a8 == (FARPROC)0x0) || (DAT_102092b0 == (FARPROC)0x0)) {
      iVar3 = 0;
    }
    else if (param_1 == 0) {
      guard_check_icall(*(undefined4 *)(in_ECX + 0x20));
      iVar3 = (*pFVar2)();
    }
    else {
      guard_check_icall(*(undefined4 *)(in_ECX + 0x20),param_2);
      iVar3 = (*pFVar1)();
      *(int *)(in_ECX + 0x38) = iVar3;
    }
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1001d023();
}

