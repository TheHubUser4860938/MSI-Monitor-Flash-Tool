// rea decompile_all
// name: FUN_0042b477
// address: 0x42b477
// body: available
// range: 0x42b477-0x42b506 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42b502 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0042b477(int *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  
  if ((in_ECX[1] == 0) || (*(short *)(in_ECX + 1) == -1)) {
    uVar3 = 1;
  }
  else {
    if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00429127();
    }
    in_ECX[6] = 0;
    pcVar1 = *(code **)(*param_1 + 0xc);
    guard_check_icall(in_ECX[1],0xffffffff);
    uVar3 = (*pcVar1)();
    if ((param_2 != 0) && (in_ECX[6] == 0)) {
      iVar2 = *param_1;
      guard_check_icall(in_ECX[1],0);
      uVar4 = (**(code **)(iVar2 + 0xc))();
      pcVar1 = *(code **)*in_ECX;
      guard_check_icall(uVar4);
      (*pcVar1)();
    }
  }
  return uVar3;
}

