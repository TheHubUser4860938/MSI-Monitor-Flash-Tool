// rea decompile_all
// name: FUN_1003fc00
// address: 0x1003fc00
// body: available
// range: 0x1003fc00-0x1003fccf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003fc00(void)

{
  wchar_t *_Source;
  FILE *pFVar1;
  int in_ECX;
  int in_EDX;
  wchar_t local_214 [262];
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  _memset(local_214,0,0x208);
  if (DAT_10249d1c != (code *)0x0) {
    _Source = (wchar_t *)(in_ECX + 4);
    if (7 < *(uint *)(in_ECX + 0x18)) {
      _Source = *(wchar_t **)_Source;
    }
    _wcsncpy(local_214,_Source,0x104);
    (*DAT_10249d1c)(local_214);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  pFVar1 = (FILE *)___acrt_iob_func(1);
  _fflush(pFVar1);
  FUN_1003c280();
  if (in_EDX == 1) {
    FUN_1003c7c0(&DAT_102491f0);
  }
  pFVar1 = (FILE *)___acrt_iob_func(1);
  _fflush(pFVar1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

