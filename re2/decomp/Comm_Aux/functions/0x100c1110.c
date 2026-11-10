// rea decompile_all
// name: FUN_100c1110
// address: 0x100c1110
// body: available
// range: 0x100c1110-0x100c11a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c119f to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


CPalette * FUN_100c1110(CDC *param_1)

{
  AFX_GLOBAL_DATA *pAVar1;
  void *ho;
  CPalette *pCVar2;
  int in_ECX;
  
  pAVar1 = GetGlobalData();
  if (*(int *)(pAVar1 + 0x1ac) == 8) {
    if (((*(int *)(in_ECX + 0xe5c) == 0) ||
        (pCVar2 = *(CPalette **)(*(int *)(in_ECX + 0xe5c) + 0x800), pCVar2 == (CPalette *)0x0)) &&
       ((pCVar2 = (CPalette *)(in_ECX + 0xe40), pCVar2 == (CPalette *)0x0 ||
        (*(int *)(in_ECX + 0xe44) == 0)))) {
      FUN_100bf787(in_ECX + 0xe08,pCVar2);
    }
    pCVar2 = CDC::SelectPalette(param_1,pCVar2,0);
    if (pCVar2 == (CPalette *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1004886a();
    }
    RealizePalette(*(HDC *)(param_1 + 4));
  }
  else {
    if (((CGdiObject *)(in_ECX + 0xe40) != (CGdiObject *)0x0) && (*(int *)(in_ECX + 0xe44) != 0)) {
      ho = CGdiObject::Detach((CGdiObject *)(in_ECX + 0xe40));
      DeleteObject(ho);
    }
    pCVar2 = (CPalette *)0x0;
  }
  return pCVar2;
}

