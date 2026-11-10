// rea decompile_all
// name: FUN_10019070
// address: 0x10019070
// body: available
// range: 0x10019070-0x100190ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100190e9 to 0x10018780 FUN_10018780 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019070(void)

{
  wint_t _C;
  int iVar1;
  int *in_ECX;
  wint_t *pwVar2;
  int iVar3;
  wint_t *pwVar4;
  
  pwVar2 = (wint_t *)0x0;
  pwVar4 = (wint_t *)*in_ECX;
  _C = *pwVar4;
  if (_C != 0) {
    do {
      iVar1 = _iswspace(_C);
      if (iVar1 == 0) {
        pwVar2 = (wint_t *)0x0;
      }
      else if (pwVar2 == (wint_t *)0x0) {
        pwVar2 = pwVar4;
      }
      _C = pwVar4[1];
      pwVar4 = pwVar4 + 1;
    } while (_C != 0);
    if (pwVar2 != (wint_t *)0x0) {
      iVar1 = *in_ECX;
      iVar3 = (int)pwVar2 - iVar1 >> 1;
      if (-1 < iVar3) {
        if ((int)(1U - *(int *)(iVar1 + -4) | *(int *)(iVar1 + -8) - iVar3) < 0) {
          FUN_10018d80(iVar3);
        }
        if (iVar3 <= *(int *)(*in_ECX + -8)) {
          *(int *)(*in_ECX + -0xc) = iVar3;
          *(undefined2 *)(*in_ECX + iVar3 * 2) = 0;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_10018780(0x80070057);
    }
  }
  return;
}

