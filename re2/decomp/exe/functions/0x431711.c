// rea decompile_all
// name: FUN_00431711
// address: 0x431711
// body: available
// range: 0x431711-0x43181e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4317c9 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00431711(int param_1,undefined4 param_2)

{
  FARPROC pFVar1;
  FARPROC pFVar2;
  int iVar3;
  int in_ECX;
  
  iVar3 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  *(undefined4 *)(in_ECX + 0x38) = 0;
  if (*(int *)(iVar3 + 4) < DAT_00614c88) {
    FUN_0055b543(&DAT_00614c88);
    if (DAT_00614c88 == -1) {
      DAT_00614c84 = GetModuleHandleW(L"user32.dll");
      FUN_0055b504(&DAT_00614c88);
    }
  }
  if (DAT_00614c84 != (HMODULE)0x0) {
    if (*(int *)(iVar3 + 4) < DAT_00614c90) {
      FUN_0055b543(&DAT_00614c90);
      if (DAT_00614c90 == -1) {
        DAT_00614c8c = GetProcAddress(DAT_00614c84,"RegisterTouchWindow");
        DAT_00614c94 = GetProcAddress(DAT_00614c84,"UnregisterTouchWindow");
        FUN_0055b504(&DAT_00614c90);
      }
    }
    pFVar2 = DAT_00614c94;
    pFVar1 = DAT_00614c8c;
    if ((DAT_00614c8c == (FARPROC)0x0) || (DAT_00614c94 == (FARPROC)0x0)) {
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
  FUN_00429127();
}

