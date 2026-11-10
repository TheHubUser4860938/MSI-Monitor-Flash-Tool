// rea decompile_all
// name: FUN_00433ee2
// address: 0x433ee2
// body: available
// range: 0x433ee2-0x433f70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x433f6c to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00433ee2(void)

{
  HWND pHVar1;
  int iVar2;
  int *piVar3;
  HWND pHVar4;
  int in_ECX;
  int local_10;
  int *local_c;
  int local_8;
  
  if (*(int *)(in_ECX + 0x70) != 0) {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x70) + 0x44);
    local_8 = in_ECX;
    while (iVar2 != 0) {
      local_10 = iVar2;
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00429127();
      }
      piVar3 = *(int **)(iVar2 + 8);
      local_c = piVar3 + 1;
      if (*local_c != 0) {
        piVar3 = (int *)(*local_c + 0x24);
      }
      pHVar1 = (HWND)*piVar3;
      if ((pHVar1 != (HWND)0x0) && (pHVar4 = GetFocus(), pHVar1 == pHVar4)) {
        return iVar2;
      }
      if ((*local_c != 0) && (*local_c == *(int *)(*(int *)(local_8 + 0x70) + 0x70))) {
        return iVar2;
      }
      FUN_0043410a(&local_10);
      iVar2 = local_10;
    }
  }
  return 0;
}

