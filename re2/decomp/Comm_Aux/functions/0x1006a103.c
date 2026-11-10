// rea decompile_all
// name: FUN_1006a103
// address: 0x1006a103
// body: available
// range: 0x1006a103-0x1006a199 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006a195 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a103(wchar_t *param_1)

{
  size_t sVar1;
  errno_t eVar2;
  HDC hdc;
  undefined4 local_68;
  tagLOGFONTW local_64;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_68 = 0;
  _memset(&local_64,0,0x5c);
  if (param_1 != (wchar_t *)0x0) {
    sVar1 = _wcslen(param_1);
    if (0x1f < sVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1004886a();
    }
  }
  eVar2 = _wcscpy_s(local_64.lfFaceName,0x20,param_1);
  FUN_10034d00(eVar2);
  local_64.lfCharSet = '\x01';
  local_68 = 0;
  hdc = GetDC((HWND)0x0);
  if (hdc != (HDC)0x0) {
    EnumFontFamiliesExW(hdc,&local_64,FUN_1006a0ed,(LPARAM)&local_68,0);
    ReleaseDC((HWND)0x0,hdc);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

