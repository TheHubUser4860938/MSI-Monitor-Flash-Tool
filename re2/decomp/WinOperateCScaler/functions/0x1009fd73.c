// rea decompile_all
// name: FUN_1009fd73
// address: 0x1009fd73
// body: available
// range: 0x1009fd73-0x1009fdc0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009fdbc to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1009fd73(undefined4 param_1,int param_2)

{
  int iVar1;
  CMFCVisualManagerOffice2007 *in_ECX;
  
  iVar1 = CMFCVisualManagerOffice2007::CanDrawImage(in_ECX);
  if (iVar1 == 0) {
    iVar1 = FUN_1005fff8(param_1,param_2);
  }
  else {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001d023();
    }
    if ((*(uint *)(param_2 + 0x14) & 0x4000000) == 0) {
      iVar1 = *(int *)(param_2 + 0x24);
      if (iVar1 == -1) {
        iVar1 = *(int *)(in_ECX + 0x8fa8);
      }
    }
    else {
      iVar1 = *(int *)(in_ECX + 0x8fac);
    }
  }
  return iVar1;
}

