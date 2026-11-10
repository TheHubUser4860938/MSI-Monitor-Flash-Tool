// rea decompile_all
// name: __wsetlocale
// address: 0x589a5b
// body: available
// range: 0x589a5b-0x589ada inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __wsetlocale
   
   Library: Visual Studio 2015 Release */

wchar_t * __cdecl __wsetlocale(int _Category,wchar_t *_Locale)

{
  int *piVar1;
  undefined4 *local_2c;
  int *local_28;
  wchar_t **local_24;
  int *local_20;
  wchar_t **local_1c;
  int *local_18;
  undefined4 local_14;
  wchar_t *local_10;
  int local_c;
  __crt_seh_guarded_call<void> local_5;
  
  local_10 = (wchar_t *)0x0;
  local_14 = 0;
  if ((uint)_Category < 6) {
    local_c = FUN_0058c5ff();
    FUN_00594f4f();
    *(uint *)(local_c + 0x350) = *(uint *)(local_c + 0x350) | 0x10;
    local_18 = &local_c;
    local_2c = &local_14;
    local_28 = &local_c;
    local_24 = &local_10;
    local_20 = &_Category;
    local_1c = &_Locale;
    __crt_seh_guarded_call<void>::
    operator()<<lambda_70818de7b02deff9841e8b0962a60ed9>,<lambda_2af78c5f5901b1372d98f9ab3177dfa6>&,<lambda_f51fe5fd7c79a33db34fc9310f277369>&>
              (&local_5,(<lambda_70818de7b02deff9841e8b0962a60ed9> *)&local_5,
               (<lambda_2af78c5f5901b1372d98f9ab3177dfa6> *)&local_2c,
               (<lambda_f51fe5fd7c79a33db34fc9310f277369> *)&local_18);
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_0057662d();
    local_10 = (wchar_t *)0x0;
  }
  return local_10;
}

