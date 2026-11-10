// rea decompile_all
// name: _DllMain@12
// address: 0x10047da1
// body: available
// range: 0x10047da1-0x10047dde inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10047dda to 0x10047ddf _InternalDllMain@12 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _DllMain@12
   
   Library: Visual Studio 2015 Release */

undefined4 _DllMain_12(undefined4 param_1,int param_2,undefined4 param_3)

{
  AFX_MODULE_STATE *pAVar1;
  undefined4 uVar2;
  
  if (DAT_1020bd9c == 0) {
    uVar2 = _InternalDllMain_12();
    return uVar2;
  }
  if (param_2 == 1) {
    pAVar1 = AfxGetModuleState();
    *(undefined4 *)(pAVar1 + 8) = param_1;
  }
  else if (param_2 != 0) {
    uVar2 = _InternalDllMain_12(param_1,param_2,param_3);
    return uVar2;
  }
  return 1;
}

