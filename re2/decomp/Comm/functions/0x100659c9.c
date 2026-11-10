// rea decompile_all
// name: FUN_100659c9
// address: 0x100659c9
// body: available
// range: 0x100659c9-0x10065a4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10065a48 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100659c9(int param_1)

{
  undefined4 *puVar1;
  DWORD dwThreadId;
  CWnd *pCVar2;
  
  if (param_1 == 0) {
    if (DAT_101daf88 != (HHOOK)0x0) {
      UnhookWindowsHookEx(DAT_101daf88);
      DAT_101daf88 = (HHOOK)0x0;
      DAT_101daf8c = 0;
      for (puVar1 = DAT_101daff4; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
        if (puVar1[2] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_10012a3f();
        }
        pCVar2 = CWnd::FromHandlePermanent(*(HWND__ **)(puVar1[2] + 0x20));
        if (pCVar2 != (CWnd *)0x0) {
          FUN_100609b4();
        }
      }
    }
  }
  else if (DAT_101daf88 == (HHOOK)0x0) {
    dwThreadId = GetCurrentThreadId();
    DAT_101daf88 = SetWindowsHookExW(7,FUN_10066cfc,(HINSTANCE)0x0,dwThreadId);
  }
  return;
}

