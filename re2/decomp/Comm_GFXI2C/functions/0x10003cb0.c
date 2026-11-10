// rea decompile_all
// name: FUN_10003cb0
// address: 0x10003cb0
// body: available
// range: 0x10003cb0-0x10003d72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10003cd1 to 0x10002610 FUN_10002610 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10003d02 to 0x10002610 FUN_10002610 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10003d6e to 0x10002610 FUN_10002610 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_10003cb0(void *this,wchar_t *param_1,size_t param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  wchar_t *_Src;
  
  uVar2 = *(uint *)(*(int *)this + -0xc);
  uVar3 = (int)param_1 - *(int *)this >> 1;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10002610((undefined4 *)0x80070057);
  }
  if (param_1 == (wchar_t *)0x0) {
    param_2 = 0;
  }
  else {
    param_2 = _wcsnlen(param_1,param_2);
  }
  if ((int)(0x7fffffff - param_2) < (int)uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_10002610((undefined4 *)0x80070057);
  }
  iVar1 = param_2 + uVar2;
  if ((int)(1U - *(int *)(*(int *)this + -4) | *(int *)(*(int *)this + -8) - iVar1) < 0) {
    ATL::CSimpleStringT<char,0>::PrepareWrite2(this,iVar1);
  }
  _Src = (wchar_t *)(*(int *)this + uVar3 * 2);
  if (uVar2 < uVar3) {
    _Src = param_1;
  }
  _memcpy_s((void *)(*(int *)this + uVar2 * 2),param_2 * 2,_Src,param_2 * 2);
  if ((-1 < iVar1) && (iVar1 <= *(int *)(*(int *)this + -8))) {
    *(int *)(*(int *)this + -0xc) = iVar1;
    *(undefined2 *)(*(int *)this + iVar1 * 2) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10002610((undefined4 *)0x80070057);
}

