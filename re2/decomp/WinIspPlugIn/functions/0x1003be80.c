// rea decompile_all
// name: FUN_1003be80
// address: 0x1003be80
// body: available
// range: 0x1003be80-0x1003bf18 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003bf14 to 0x10180c39 FUN_10180c39 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003be80(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  iVar2 = param_1[1];
  iVar3 = *param_1;
  *in_ECX = 0;
  uVar1 = (iVar2 - iVar3) / 0x18;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  if (uVar1 != 0) {
    if (0xaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_10180c39("vector<T> too long");
    }
    iVar2 = FUN_1002cf40(uVar1);
    *in_ECX = iVar2;
    in_ECX[1] = iVar2;
    in_ECX[2] = *in_ECX + uVar1 * 0x18;
    iVar2 = *in_ECX;
    iVar3 = param_1[1] - *param_1;
    FUN_101971c0(iVar2,*param_1,iVar3);
    in_ECX[1] = iVar3 + iVar2;
  }
  return;
}

