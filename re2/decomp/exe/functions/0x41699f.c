// rea decompile_all
// name: AfxLoadLangResourceDLL
// address: 0x41699f
// body: available
// range: 0x41699f-0x416a82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    struct HINSTANCE__ * __stdcall AfxLoadLangResourceDLL(wchar_t const *,wchar_t const *)
   
   Library: Visual Studio 2015 Release */

HINSTANCE__ * AfxLoadLangResourceDLL(wchar_t *param_1,wchar_t *param_2)

{
  int iVar1;
  HINSTANCE__ *pHVar2;
  ulong local_118 [2];
  wchar_t *local_110;
  wchar_t *local_10c;
  wchar_t local_108 [128];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x108;
  local_8 = 0x4169ae;
  FUN_00415a10(param_1);
  local_8 = 0;
  FUN_00415a10(param_2);
  local_8 = CONCAT31(local_8._1_3_,1);
  _memset(local_108,0,0xf2);
  local_118[0] = 0;
  local_118[1] = 0x79;
  iVar1 = _AfxGetThreadPreferredUILanguages(0x38,local_118,local_108,local_118 + 1);
  if (((iVar1 == 0) ||
      (pHVar2 = _AfxLoadLangDLLFromList(local_110,local_10c,local_108), pHVar2 == (HINSTANCE__ *)0x0
      )) && (DAT_00612cac == 0)) {
    _AfxLoadLocDLL(local_110,local_10c);
  }
  FUN_0040efa0();
  FUN_0040efa0();
  pHVar2 = (HINSTANCE__ *)FUN_0055bae6();
  return pHVar2;
}

