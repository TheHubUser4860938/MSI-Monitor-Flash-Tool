// rea decompile_all
// name: FUN_10046ce0
// address: 0x10046ce0
// body: available
// range: 0x10046ce0-0x10046d80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10046d7c to 0x10047680 FUN_10047680 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10046ce0(void)

{
  wint_t *pwVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  wint_t *pwVar4;
  int iVar5;
  
  pwVar4 = (wint_t *)*in_ECX;
  iVar2 = _iswspace(*pwVar4);
  while (iVar2 != 0) {
    pwVar1 = pwVar4 + 1;
    pwVar4 = pwVar4 + 1;
    iVar2 = _iswspace(*pwVar1);
  }
  pwVar1 = (wint_t *)*in_ECX;
  if (pwVar4 != pwVar1) {
    iVar2 = *(int *)(pwVar1 + -6);
    iVar5 = (int)pwVar4 - (int)pwVar1 >> 1;
    if (-1 < iVar2) {
      if ((int)(1U - *(int *)(pwVar1 + -2) | *(int *)(pwVar1 + -4) - iVar2) < 0) {
        FUN_10047360(iVar2);
      }
      iVar2 = *in_ECX;
      iVar3 = *(int *)(iVar2 + -0xc) - iVar5;
      FUN_10046eb0(iVar2,*(int *)(iVar2 + -0xc) * 2 + 2,iVar2 + iVar5 * 2,iVar3 * 2 + 2);
      if ((-1 < iVar3) && (iVar3 <= *(int *)(*in_ECX + -8))) {
        *(int *)(*in_ECX + -0xc) = iVar3;
        *(undefined2 *)(*in_ECX + iVar3 * 2) = 0;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_10047680(0x80070057);
  }
  return;
}

