// rea decompile_all
// name: FUN_004c8768
// address: 0x4c8768
// body: available
// range: 0x4c8768-0x4c87b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4c8786 to 0x4c87d1 FUN_004c87d1 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4c87b8 to 0x4c87d1 FUN_004c87d1 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void FUN_004c8768(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 *param_5)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  piVar1 = *(int **)(*(CArchive **)(param_1 + 4) + 0x24);
  if (piVar1 == (int *)0x0) {
    FUN_004c87d1();
    return;
  }
  CArchive::Flush(*(CArchive **)(param_1 + 4));
  pcVar2 = *(code **)(*piVar1 + 0x2c);
  guard_check_icall(param_2,param_3,param_4);
  uVar3 = (*pcVar2)();
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = uVar3;
  }
  FUN_004c87d1(param_3,param_4);
  return;
}

