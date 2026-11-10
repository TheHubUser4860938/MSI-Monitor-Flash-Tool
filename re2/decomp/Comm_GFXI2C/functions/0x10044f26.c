// rea decompile_all
// name: AfxSetWindowText
// address: 0x10044f26
// body: available
// range: 0x10044f26-0x10044fbe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10044f48 to 0x10038e31 FUN_10038e31 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __stdcall AfxSetWindowText(struct HWND__ *,wchar_t const *)
   
   Library: Visual Studio 2008 Release */

void AfxSetWindowText(HWND__ *param_1,wchar_t *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  WCHAR local_208;
  undefined1 local_206 [510];
  uint local_8;
  
  local_8 = DAT_10064168 ^ (uint)&stack0xfffffffc;
  if ((param_1 == (HWND__ *)0x0) || (param_2 == (wchar_t *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_10038e31();
  }
  uVar1 = lstrlenW(param_2);
  local_208 = L'\0';
  _memset(local_206,0,0x1fe);
  if (uVar1 < 0x101) {
    uVar2 = GetWindowTextW(param_1,&local_208,0x100);
    if (uVar2 == uVar1) {
      iVar3 = lstrcmpW(&local_208,param_2);
      if (iVar3 == 0) goto LAB_10044fae;
    }
  }
  SetWindowTextW(param_1,param_2);
LAB_10044fae:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

