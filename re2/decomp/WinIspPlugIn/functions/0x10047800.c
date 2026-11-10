// rea decompile_all
// name: FUN_10047800
// address: 0x10047800
// body: available
// range: 0x10047800-0x10047920 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10047912 to 0x10047680 FUN_10047680 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1004791c to 0x10047680 FUN_10047680 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_10047800(int *param_1,wchar_t *param_2,int *param_3)

{
  wchar_t *_Str;
  wchar_t *pwVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  int *piVar5;
  int iVar6;
  int *in_ECX;
  
  iVar6 = *param_3;
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10047680(0x80070057);
  }
  if ((param_2 == (wchar_t *)0x0) || (*param_2 == L'\0')) {
    if (iVar6 < *(int *)(*in_ECX + -0xc)) {
      piVar5 = *(int **)(*in_ECX + -0x10);
      if (piVar5 != (int *)0x0) {
        iVar6 = (**(code **)(*piVar5 + 0x10))();
        if (iVar6 != 0) goto LAB_100478ae;
      }
      piVar5 = (int *)FUN_10049868();
      iVar6 = (**(code **)(*piVar5 + 0x10))();
LAB_100478ae:
      FUN_10047930(*in_ECX + *param_3 * 2,iVar6);
      return param_1;
    }
  }
  else {
    iVar2 = *in_ECX;
    _Str = (wchar_t *)(iVar2 + iVar6 * 2);
    pwVar1 = (wchar_t *)(iVar2 + *(int *)(iVar2 + -0xc) * 2);
    if (_Str < pwVar1) {
      sVar3 = _wcsspn(_Str,param_2);
      if (_Str + sVar3 < pwVar1) {
        sVar4 = _wcscspn(_Str + sVar3,param_2);
        iVar6 = *param_3;
        *param_3 = iVar6 + sVar3 + 1 + sVar4;
        FUN_10046a60(param_1,iVar6 + sVar3,sVar4);
        return param_1;
      }
    }
  }
  *param_3 = -1;
  if (*(int **)(*in_ECX + -0x10) != (int *)0x0) {
    piVar5 = (int *)(**(code **)(**(int **)(*in_ECX + -0x10) + 0x10))();
    if (piVar5 != (int *)0x0) goto LAB_100478f7;
  }
  piVar5 = (int *)FUN_10049868();
  piVar5 = (int *)(**(code **)(*piVar5 + 0x10))();
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10047680(0x80004005);
  }
LAB_100478f7:
  iVar6 = (**(code **)(*piVar5 + 0xc))();
  *param_1 = iVar6 + 0x10;
  return param_1;
}

