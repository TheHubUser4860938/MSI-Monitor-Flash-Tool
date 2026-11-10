// rea decompile_all
// name: FUN_00415dc0
// address: 0x415dc0
// body: available
// range: 0x415dc0-0x415e24 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x415de0 to 0x57662d FUN_0057662d (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x415df7 to 0x57662d FUN_0057662d (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x415e11 to 0x57662d FUN_0057662d (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00415dc0(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = param_4 * 2;
  if (uVar1 != 0) {
    if (param_1 == 0) {
      piVar2 = __errno();
      *piVar2 = 0x16;
      FUN_0057662d();
      return;
    }
    if (param_3 == 0) {
      piVar2 = __errno();
      *piVar2 = 0x16;
      FUN_0057662d();
      return;
    }
    if ((uint)(param_2 * 2) < uVar1) {
      piVar2 = __errno();
      *piVar2 = 0x22;
      FUN_0057662d();
      return;
    }
    FUN_00572d00(param_1,param_3,uVar1);
  }
  return;
}

