// rea decompile_all
// name: FUN_100035f0
// address: 0x100035f0
// body: available
// range: 0x100035f0-0x10003654 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10003610 to 0x1014f4c6 FUN_1014f4c6 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10003627 to 0x1014f4c6 FUN_1014f4c6 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10003641 to 0x1014f4c6 FUN_1014f4c6 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100035f0(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = param_4 * 2;
  if (uVar1 != 0) {
    if (param_1 == 0) {
      piVar2 = __errno();
      *piVar2 = 0x16;
      FUN_1014f4c6();
      return;
    }
    if (param_3 == 0) {
      piVar2 = __errno();
      *piVar2 = 0x16;
      FUN_1014f4c6();
      return;
    }
    if ((uint)(param_2 * 2) < uVar1) {
      piVar2 = __errno();
      *piVar2 = 0x22;
      FUN_1014f4c6();
      return;
    }
    FUN_1014ad80(param_1,param_3,uVar1);
  }
  return;
}

