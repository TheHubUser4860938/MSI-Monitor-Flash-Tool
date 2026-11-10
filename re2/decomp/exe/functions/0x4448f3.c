// rea decompile_all
// name: FUN_004448f3
// address: 0x4448f3
// body: available
// range: 0x4448f3-0x444959 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x444955 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004448f3(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined4 in_stack_0000001c;
  
  FUN_00434a7a(*(undefined4 *)(param_1 + -0xbc));
  if ((*(int *)(param_1 + -0xb8) != 0) &&
     (piVar1 = *(int **)(*(int *)(param_1 + -0xb8) + 0x20), piVar1 != (int *)0x0)) {
    pcVar2 = *(code **)(*piVar1 + 0x110);
    guard_check_icall(param_1 + -0xd8,param_2,in_stack_0000001c);
    iVar3 = (*pcVar2)();
    guard_check_icall();
    return (-(uint)(iVar3 != 0) & 0x7ffdfffd) + 0x80020003;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

