// rea decompile_all
// name: FUN_10015b4d
// address: 0x10015b4d
// body: available
// range: 0x10015b4d-0x10015ba6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10015ba2 to 0x10003680 FUN_10003680 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10015b4d(wchar_t *param_1,char *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined4 uVar3;
  
  if (param_1 == (wchar_t *)0x0) {
    uVar3 = 0x80070057;
  }
  else {
    iVar1 = ATL::ChTraitsCRT<wchar_t>::GetFormattedLength(param_1,param_2);
    if (-1 < iVar1) {
      pwVar2 = (wchar_t *)FUN_100035b0(iVar1);
      ATL::ChTraitsCRT<wchar_t>::Format(pwVar2,iVar1 + 1,param_1,param_2);
      FUN_100036a0(iVar1);
      return;
    }
    uVar3 = 0x80004005;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10003680(uVar3);
}

