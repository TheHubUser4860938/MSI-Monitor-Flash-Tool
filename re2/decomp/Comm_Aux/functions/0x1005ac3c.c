// rea decompile_all
// name: FUN_1005ac3c
// address: 0x1005ac3c
// body: available
// range: 0x1005ac3c-0x1005acfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005acf7 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1005ac3c(undefined4 param_1,wchar_t *param_2,int *param_3)

{
  wchar_t *_Str;
  wchar_t *pwVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  undefined4 uVar6;
  int *in_ECX;
  
  iVar2 = *param_3;
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_100351a0(0x80070057);
  }
  if ((param_2 == (wchar_t *)0x0) || (*param_2 == L'\0')) {
    iVar3 = *in_ECX;
    if (iVar2 < *(int *)(iVar3 + -0xc)) {
      uVar6 = FUN_100343f0();
      CStringT<>(iVar3 + *param_3 * 2,uVar6);
      return param_1;
    }
  }
  else {
    iVar3 = *in_ECX;
    _Str = (wchar_t *)(iVar3 + iVar2 * 2);
    pwVar1 = (wchar_t *)(iVar3 + *(int *)(iVar3 + -0xc) * 2);
    if (_Str < pwVar1) {
      sVar4 = _wcsspn(_Str,param_2);
      if (_Str + sVar4 < pwVar1) {
        sVar5 = _wcscspn(_Str + sVar4,param_2);
        iVar2 = *param_3;
        *param_3 = iVar2 + sVar4 + 1 + sVar5;
        FUN_10033f00(param_1,iVar2 + sVar4,sVar5);
        return param_1;
      }
    }
  }
  *param_3 = -1;
  uVar6 = FUN_100343f0();
  FUN_10034c30(uVar6);
  return param_1;
}

