// rea decompile_all
// name: FUN_100ac7e9
// address: 0x100ac7e9
// body: available
// range: 0x100ac7e9-0x100ac884 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100ac880 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100ac7e9(LPCWSTR param_1,LPITEMIDLIST *param_2)

{
  IShellFolderVtbl *pIVar1;
  _func_12949 *p_Var2;
  HRESULT HVar3;
  IShellFolder *This;
  HWND hwnd;
  IBindCtx *pbc;
  WCHAR *pszDisplayName;
  ULONG *pchEaten;
  ULONG *pdwAttributes;
  ULONG local_21c;
  ULONG local_218;
  IShellFolder *local_214;
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  if (param_1 != (LPCWSTR)0x0) {
    HVar3 = SHGetDesktopFolder(&local_214);
    if (-1 < HVar3) {
      lstrcpyW(local_210,param_1);
      pdwAttributes = &local_218;
      pchEaten = &local_21c;
      pIVar1 = local_214->lpVtbl;
      pszDisplayName = local_210;
      pbc = (IBindCtx *)0x0;
      hwnd = (HWND)0x0;
      This = local_214;
      guard_check_icall();
      (*pIVar1->ParseDisplayName)(This,hwnd,pbc,pszDisplayName,pchEaten,param_2,pdwAttributes);
      p_Var2 = local_214->lpVtbl->Release;
      guard_check_icall();
      (*p_Var2)(local_214);
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1004886a();
}

