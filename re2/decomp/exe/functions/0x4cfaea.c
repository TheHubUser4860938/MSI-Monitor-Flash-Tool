// rea decompile_all
// name: FUN_004cfaea
// address: 0x4cfaea
// body: available
// range: 0x4cfaea-0x4cfb5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4cfb58 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004cfaea(uint param_1)

{
  if (param_1 < 0x11) {
    if (DAT_00616b58 == 0) {
      FUN_004cfa81();
    }
    if ((&DAT_00616d10)[param_1] == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00616cf8);
      if ((&DAT_00616d10)[param_1] == 0) {
        InitializeCriticalSection((LPCRITICAL_SECTION)(&DAT_00616b60 + param_1 * 0x18));
        (&DAT_00616d10)[param_1] = (&DAT_00616d10)[param_1] + 1;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00616cf8);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_00616b60 + param_1 * 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

