// rea decompile_all
// name: FUN_00594f4f
// address: 0x594f4f
// body: available
// range: 0x594f4f-0x594fb1 inclusive
// range: 0x594fbe-0x594fc5 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x594fad to 0x58b751 _abort (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

int FUN_00594f4f(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0058c5ff();
  if (((*(uint *)(iVar1 + 0x350) & DAT_0060d2c8) == 0) ||
     (iVar2 = *(int *)(iVar1 + 0x4c), iVar2 == 0)) {
    ___acrt_lock(4);
    iVar2 = __updatetlocinfoEx_nolock(iVar1 + 0x4c,DAT_00619098);
    FUN_00594fb5();
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      _abort();
    }
  }
  return iVar2;
}

