// rea decompile_all
// name: FUN_1001978e
// address: 0x1001978e
// body: available
// range: 0x1001978e-0x1001984d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10019849 to 0x10003680 FUN_10003680 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1001978e(undefined4 param_1,wchar_t *param_2,int *param_3)

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
    FUN_10003680(0x80070057);
  }
  if ((param_2 == (wchar_t *)0x0) || (*param_2 == L'\0')) {
    iVar3 = *in_ECX;
    if (iVar2 < *(int *)(iVar3 + -0xc)) {
      uVar6 = FUN_10002eb0();
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
        FUN_10010e70(param_1,iVar2 + sVar4,sVar5);
        return param_1;
      }
    }
  }
  *param_3 = -1;
  uVar6 = FUN_10002eb0();
  FUN_10003190(uVar6);
  return param_1;
}

