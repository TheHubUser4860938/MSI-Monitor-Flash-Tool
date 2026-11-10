// rea decompile_all
// name: FUN_00438092
// address: 0x438092
// body: available
// range: 0x438092-0x43817a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x438176 to 0x4d36dd FUN_004d36dd (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00438092(CSimpleStringT<wchar_t,0> *param_1)

{
  wchar_t *_Str;
  int iVar1;
  size_t sVar2;
  int iVar3;
  ulong *puVar4;
  undefined4 uVar5;
  int in_ECX;
  
  FUN_00415ad0(&PTR_005e8934);
  _Str = (wchar_t *)FUN_0040ed00(0x80);
  while( true ) {
    iVar1 = FUN_00584e48(_Str,0x81,*(undefined4 *)(in_ECX + 0x14));
    ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer(param_1,-1);
    if (iVar1 == 0) break;
    if (_Str == (wchar_t *)0x0) goto LAB_00438122;
    sVar2 = _wcslen(_Str);
    if (((int)sVar2 < 0x80) || (_Str[sVar2 - 1] == L'\n')) goto LAB_00438122;
    iVar1 = *(int *)(*(int *)param_1 + -0xc);
    iVar3 = FUN_0040ed00(iVar1 + 0x80);
    _Str = (wchar_t *)(iVar3 + iVar1 * 2);
  }
  iVar1 = _feof(*(FILE **)(in_ECX + 0x14));
  if (iVar1 == 0) {
    Afx_clearerr_s(*(_iobuf **)(in_ECX + 0x14));
    puVar4 = ___doserrno();
    uVar5 = FUN_0040ee70();
                    /* WARNING: Subroutine does not return */
    FUN_004d36dd(1,*puVar4,uVar5);
  }
LAB_00438122:
  iVar3 = FUN_0040ed00(0);
  iVar1 = *(int *)(*(int *)param_1 + -0xc);
  if ((iVar1 != 0) && (*(short *)(iVar3 + -2 + iVar1 * 2) == 10)) {
    ATL::CSimpleStringT<wchar_t,0>::GetBufferSetLength(param_1,iVar1 + -1);
  }
  return iVar1 != 0;
}

