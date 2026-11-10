// rea decompile_all
// name: FUN_1002044a
// address: 0x1002044a
// body: available
// range: 0x1002044a-0x100204a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100204a2 to 0x100204b0 FUN_100204b0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void FUN_1002044a(undefined4 param_1)

{
  code *pcVar1;
  int *in_ECX;
  undefined4 local_34 [2];
  undefined4 local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  _AFX_THREAD_STATE *local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x10020456;
  local_34[0] = param_1;
  local_2c = 0;
  local_18 = AfxGetThreadState();
  local_1c = 0;
  local_8 = 0;
  local_20 = *(undefined4 *)(local_18 + 0x13c);
  *(int *)(local_18 + 0x13c) = in_ECX[8];
  pcVar1 = *(code **)(*in_ECX + 0x100);
  guard_check_icall(local_34);
  (*pcVar1)();
  FUN_100204b0();
  return;
}

