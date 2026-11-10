// rea decompile_all
// name: FUN_1003e4e9
// address: 0x1003e4e9
// body: available
// range: 0x1003e4e9-0x1003e58a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003e586 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1003e4e9(int param_1)

{
  code *pcVar1;
  _func_12949 *p_Var2;
  int iVar3;
  int *in_ECX;
  IShellFolder *local_14;
  undefined4 local_10;
  undefined4 local_c;
  IShellFolder *local_8;
  
  if (DAT_1020a990 == 0) {
    iVar3 = -0x7fffbffb;
  }
  else {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001d023();
    }
    local_14 = (IShellFolder *)0x0;
    local_10 = 0;
    local_c = 0;
    iVar3 = FUN_1008178b(param_1,&local_c);
    if (-1 < iVar3) {
      iVar3 = SHGetDesktopFolder(&local_8);
      if (-1 < iVar3) {
        local_14 = local_8;
        local_10 = local_c;
        pcVar1 = *(code **)(*in_ECX + 0x188);
        guard_check_icall(&local_14);
        iVar3 = (*pcVar1)();
        p_Var2 = local_8->lpVtbl->Release;
        guard_check_icall();
        (*p_Var2)(local_8);
      }
      FUN_10081655(local_10);
    }
  }
  return iVar3;
}

