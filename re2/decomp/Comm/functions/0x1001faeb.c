// rea decompile_all
// name: FUN_1001faeb
// address: 0x1001faeb
// body: available
// range: 0x1001faeb-0x1001fbf8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001fba3 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1001faeb(int param_1,undefined4 param_2)

{
  FARPROC pFVar1;
  FARPROC pFVar2;
  int iVar3;
  int in_ECX;
  
  iVar3 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  *(undefined4 *)(in_ECX + 0x38) = 0;
  if (*(int *)(iVar3 + 4) < DAT_101da544) {
    FUN_10148cb4(&DAT_101da544);
    if (DAT_101da544 == -1) {
      DAT_101da540 = GetModuleHandleW(L"user32.dll");
      FUN_10148c75(&DAT_101da544);
    }
  }
  if (DAT_101da540 != (HMODULE)0x0) {
    if (*(int *)(iVar3 + 4) < DAT_101da54c) {
      FUN_10148cb4(&DAT_101da54c);
      if (DAT_101da54c == -1) {
        DAT_101da548 = GetProcAddress(DAT_101da540,"RegisterTouchWindow");
        DAT_101da550 = GetProcAddress(DAT_101da540,"UnregisterTouchWindow");
        FUN_10148c75(&DAT_101da54c);
      }
    }
    pFVar2 = DAT_101da550;
    pFVar1 = DAT_101da548;
    if ((DAT_101da548 == (FARPROC)0x0) || (DAT_101da550 == (FARPROC)0x0)) {
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
  FUN_10012a3f();
}

