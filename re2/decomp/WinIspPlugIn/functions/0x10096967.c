// rea decompile_all
// name: FUN_10096967
// address: 0x10096967
// body: available
// range: 0x10096967-0x100969d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100969ce to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10096967(LONG param_1,LONG param_2)

{
  int iVar1;
  POINT pt;
  int *piVar2;
  BOOL BVar3;
  int in_ECX;
  int iVar4;
  int local_8;
  
  local_8 = *(int *)(in_ECX + 0xc40);
  iVar4 = 0;
  while( true ) {
    if (local_8 == 0) {
      return -1;
    }
    piVar2 = (int *)FUN_100c321b(&local_8);
    iVar1 = *piVar2;
    if (iVar1 == 0) break;
    pt.y = param_2;
    pt.x = param_1;
    BVar3 = PtInRect((RECT *)(iVar1 + 0x54),pt);
    if ((BVar3 != 0) && (*(int *)(iVar1 + 0x40) == 0)) {
      if ((*(byte *)(iVar1 + 0x24) & 1) == 0) {
        return iVar4;
      }
      return -1;
    }
    iVar4 = iVar4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1004a383();
}

