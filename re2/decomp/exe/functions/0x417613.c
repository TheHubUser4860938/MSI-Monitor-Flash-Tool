// rea decompile_all
// name: _AfxLoadLocDLL
// address: 0x417613
// body: available
// range: 0x417613-0x4176c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    struct HINSTANCE__ * __cdecl _AfxLoadLocDLL(wchar_t const *,wchar_t const *)
   
   Library: Visual Studio 2015 Release */

HINSTANCE__ * __cdecl _AfxLoadLocDLL(wchar_t *param_1,wchar_t *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  HMODULE pHVar4;
  HINSTANCE__ *pHVar5;
  wchar_t local_22c [274];
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  piVar2 = __errno();
  iVar1 = *piVar2;
  piVar2 = __errno();
  *piVar2 = 0;
  uVar3 = __snwprintf_s(local_22c,0x112,0x111,param_1,param_2,&DAT_005aded8);
  piVar2 = __errno();
  if (*piVar2 == 0) {
    piVar2 = __errno();
    *piVar2 = iVar1;
  }
  else {
    piVar2 = __errno();
    FUN_00416b48(*piVar2);
  }
  if (((uVar3 != 0xffffffff) && (uVar3 < 0x112)) &&
     (pHVar4 = LoadLibraryExW(local_22c,(HANDLE)0x0,0x60), pHVar4 == (HMODULE)0x0)) {
    LoadLibraryExW(local_22c,(HANDLE)0x0,2);
  }
  pHVar5 = (HINSTANCE__ *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pHVar5;
}

