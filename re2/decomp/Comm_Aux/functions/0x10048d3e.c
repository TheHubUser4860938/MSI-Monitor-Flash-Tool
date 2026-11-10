// rea decompile_all
// name: FUN_10048d3e
// address: 0x10048d3e
// body: available
// range: 0x10048d3e-0x10048d9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10048d9b to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10048d3e(wchar_t *param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = AfxIsValidString(param_1,-1);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
  }
  uVar4 = 0x811c9dc5;
  uVar5 = 0;
  sVar3 = _wcslen(param_1);
  if (sVar3 != 0) {
    do {
      pwVar1 = param_1 + uVar5;
      uVar5 = uVar5 + sVar3 / 10 + 1;
      uVar4 = uVar4 * 0x1000193 ^ (uint)(ushort)*pwVar1;
    } while (uVar5 < sVar3);
  }
  return uVar4;
}

