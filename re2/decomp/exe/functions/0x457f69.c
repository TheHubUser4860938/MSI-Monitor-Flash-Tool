// rea decompile_all
// name: FUN_00457f69
// address: 0x457f69
// body: available
// range: 0x457f69-0x458010 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45800c to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00457f69(void)

{
  int *piVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int local_8;
  
  iVar3 = 0;
  iVar2 = 0;
  local_8 = in_ECX[0x310];
  do {
    if (local_8 == 0) {
LAB_00457ff2:
      pcVar4 = *(code **)(*in_ECX + 0x20c);
      guard_check_icall();
      (*pcVar4)();
      return;
    }
    piVar1 = (int *)FUN_004ead48(&local_8);
    if (iVar2 == in_ECX[0x2fd]) {
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00429127();
      }
      if ((*(byte *)(iVar3 + 0x24) & 1) == 0) {
        iVar3 = in_ECX[0x2fd];
        in_ECX[0x2fd] = iVar3 + 1;
        pcVar4 = *(code **)(*in_ECX + 0x348);
      }
      else {
        if (*(int *)(iVar3 + 0x50) == 0) goto LAB_00457ff2;
        iVar3 = in_ECX[0x2fd] + -1;
        pcVar4 = *(code **)(*in_ECX + 0x34c);
      }
      guard_check_icall(iVar3);
      (*pcVar4)();
      goto LAB_00457ff2;
    }
    iVar3 = *piVar1;
    iVar2 = iVar2 + 1;
  } while( true );
}

