// rea decompile_all
// name: FUN_10141b2e
// address: 0x10141b2e
// body: available
// range: 0x10141b2e-0x10141b6d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10141b69 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10141b2e(void)

{
  int iVar1;
  CMDIFrameWnd *this;
  CMDIChildWnd *pCVar2;
  CMDIChildWnd *in_ECX;
  
  iVar1 = FUN_100509af();
  if ((iVar1 != 3) && (iVar1 != 4)) {
    this = CMDIChildWnd::GetMDIFrame(in_ECX);
    if (this == (CMDIFrameWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1004886a();
    }
    pCVar2 = CMDIFrameWnd::MDIGetActive(this,(int *)0x0);
    if (pCVar2 != in_ECX) {
      FUN_1014165a();
    }
  }
  return iVar1;
}

