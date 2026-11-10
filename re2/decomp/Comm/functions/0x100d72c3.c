// rea decompile_all
// name: FUN_100d72c3
// address: 0x100d72c3
// body: available
// range: 0x100d72c3-0x100d7328 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100d7324 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


CMFCRibbonPanel * FUN_100d72c3(void)

{
  code *pcVar1;
  int iVar2;
  CMFCRibbonPanel *pCVar3;
  int *in_ECX;
  
  if (in_ECX[0x159] == 0) {
    return (CMFCRibbonPanel *)0x0;
  }
  if (0 < in_ECX[0x14e]) {
    pcVar1 = *(code **)(*in_ECX + 0xe0);
    guard_check_icall(1,in_ECX[0x14e]);
    (*pcVar1)();
  }
  if (0 < in_ECX[0x159]) {
    pCVar3 = *(CMFCRibbonPanel **)in_ECX[0x158];
    iVar2 = CMFCRibbonPanel::IsCollapsed(pCVar3);
    if (iVar2 == 0) {
      pCVar3 = (CMFCRibbonPanel *)CMFCRibbonPanel::GetElement(pCVar3,0);
    }
    else {
      pCVar3 = pCVar3 + 0x2e0;
    }
    return pCVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10012a3f();
}

