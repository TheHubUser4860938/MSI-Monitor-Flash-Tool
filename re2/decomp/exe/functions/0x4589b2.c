// rea decompile_all
// name: FUN_004589b2
// address: 0x4589b2
// body: available
// range: 0x4589b2-0x458a24 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x458a20 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004589b2(int param_1)

{
  int *piVar1;
  __POSITION *p_Var2;
  int in_ECX;
  int iVar3;
  int local_8;
  
  iVar3 = 0;
  local_8 = *(int *)(in_ECX + 0xc78);
  if (local_8 != 0) {
    do {
      piVar1 = (int *)FUN_004ead48(&local_8);
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00429127();
      }
      if ((-1 < iVar3) && (*(int *)(*piVar1 + 0x20) == param_1)) {
        if (*(int *)(in_ECX + 0xc80) <= iVar3) {
          return 0;
        }
        p_Var2 = CObList::FindIndex((CObList *)(in_ECX + 0xc74),iVar3);
        if (p_Var2 == (__POSITION *)0x0) {
          return 0;
        }
        FUN_004d2617(p_Var2);
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (local_8 != 0);
  }
  return 0;
}

