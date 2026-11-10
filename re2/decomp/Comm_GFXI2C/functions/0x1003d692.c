// rea decompile_all
// name: FUN_1003d692
// address: 0x1003d692
// body: available
// range: 0x1003d692-0x1003d6f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003d6f4 to 0x10038e31 FUN_10038e31 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1003d692(uint param_1,undefined2 *param_2,int param_3)

{
  uint uVar1;
  AFX_MODULE_STATE *pAVar2;
  ushort *puVar3;
  uint uVar4;
  
  if ((param_2 != (undefined2 *)0x0) && (param_3 != 0)) {
    pAVar2 = AfxGetModuleState();
    puVar3 = (ushort *)FUN_10003ee0(*(HMODULE *)(pAVar2 + 0xc),param_1);
    if (puVar3 == (ushort *)0x0) {
      *param_2 = 0;
      uVar4 = 0;
    }
    else {
      uVar1 = param_3 - 1;
      uVar4 = (uint)*puVar3;
      if (uVar1 < *puVar3) {
        uVar4 = uVar1;
      }
      FUN_10038b3c(param_2,uVar1 * 2,puVar3 + 1,uVar4 * 2);
      param_2[uVar4] = 0;
    }
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10038e31();
}

