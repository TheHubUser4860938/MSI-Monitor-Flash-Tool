// rea decompile_all
// name: common_configure_argv<wchar_t>
// address: 0x5885e5
// body: available
// range: 0x5885e5-0x588703 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    int __cdecl common_configure_argv<wchar_t>(enum _crt_argv_mode)
   
   Library: Visual Studio 2015 Release */

int __cdecl common_configure_argv<wchar_t>(_crt_argv_mode param_1)

{
  int *piVar1;
  wchar_t **ppwVar2;
  wchar_t *pwVar3;
  wchar_t **ppwVar4;
  int iVar5;
  uint local_10;
  wchar_t **local_c;
  uint local_8;
  
  if ((param_1 == 2) || (param_1 == 1)) {
    iVar5 = 0;
    GetModuleFileNameW((HMODULE)0x0,(LPWSTR)&DAT_00618d00,0x104);
    _DAT_00618ce0 = &DAT_00618d00;
    if ((DAT_00618cdc == (wchar_t *)0x0) || (pwVar3 = DAT_00618cdc, *DAT_00618cdc == L'\0')) {
      pwVar3 = (wchar_t *)&DAT_00618d00;
    }
    local_8 = 0;
    local_10 = 0;
    parse_command_line<wchar_t>(pwVar3,(wchar_t **)0x0,(wchar_t *)0x0,&local_8,&local_10);
    ppwVar2 = (wchar_t **)___acrt_allocate_buffer_for_argv(local_8,local_10,2);
    ppwVar4 = ppwVar2;
    if (ppwVar2 == (wchar_t **)0x0) {
      piVar1 = __errno();
      iVar5 = 0xc;
      *piVar1 = 0xc;
    }
    else {
      parse_command_line<wchar_t>(pwVar3,ppwVar2,(wchar_t *)(ppwVar2 + local_8),&local_8,&local_10);
      if (param_1 == 1) {
        _DAT_00618ccc = local_8 - 1;
        ppwVar4 = (wchar_t **)0x0;
        DAT_00618cd4 = ppwVar2;
      }
      else {
        local_c = (wchar_t **)0x0;
        iVar5 = FUN_00593422(ppwVar2,&local_c);
        ppwVar2 = local_c;
        if (iVar5 == 0) {
          _DAT_00618ccc = 0;
          pwVar3 = *local_c;
          while (pwVar3 != (wchar_t *)0x0) {
            local_c = local_c + 1;
            _DAT_00618ccc = _DAT_00618ccc + 1;
            pwVar3 = *local_c;
          }
          local_c = (wchar_t **)0x0;
          iVar5 = 0;
          DAT_00618cd4 = ppwVar2;
        }
        FID_conflict__free(local_c);
        local_c = (wchar_t **)0x0;
      }
    }
    FID_conflict__free(ppwVar4);
  }
  else {
    piVar1 = __errno();
    iVar5 = 0x16;
    *piVar1 = 0x16;
    FUN_0057662d();
  }
  return iVar5;
}

