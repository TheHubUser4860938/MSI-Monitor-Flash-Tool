// rea decompile_all
// name: FUN_0054f851
// address: 0x54f851
// body: available
// range: 0x54f851-0x54f8b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x54f8b4 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054f851(void)

{
  int iVar1;
  int *piVar2;
  __POSITION *p_Var3;
  int in_ECX;
  int iVar4;
  
  FUN_004d811d();
  iVar1 = *(int *)(in_ECX + 0x38c);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      piVar2 = (int *)FUN_004ab4cd((*(int *)(in_ECX + 0x38c) - iVar4) + -1);
      p_Var3 = CObList::FindIndex((CObList *)(in_ECX + 0x464),*piVar2);
      if (p_Var3 == (__POSITION *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00429127();
      }
      AddTail(*(int *)(p_Var3 + 8) + 4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return;
}

