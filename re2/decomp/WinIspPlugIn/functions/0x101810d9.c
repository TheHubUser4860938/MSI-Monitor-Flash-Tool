// rea decompile_all
// name: __Getctype
// address: 0x101810d9
// body: available
// range: 0x101810d9-0x10181143 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __Getctype
   
   Library: Visual Studio 2015 Release */

_Ctypevec * __cdecl __Getctype(_Ctypevec *__return_storage_ptr__)

{
  UINT UVar1;
  short *psVar2;
  ushort *puVar3;
  wchar_t **ppwVar4;
  wchar_t *pwVar5;
  int iVar6;
  
  UVar1 = ____lc_codepage_func();
  __return_storage_ptr__->_Page = UVar1;
  psVar2 = (short *)__calloc_base(0x100,2);
  __return_storage_ptr__->_Table = psVar2;
  if (psVar2 == (short *)0x0) {
    puVar3 = ___pctype_func();
    __return_storage_ptr__->_Delfl = 0;
    __return_storage_ptr__->_Table = (short *)puVar3;
  }
  else {
    puVar3 = ___pctype_func();
    __return_storage_ptr__->_Delfl = 1;
    psVar2 = __return_storage_ptr__->_Table;
    for (iVar6 = 0x80; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)psVar2 = *(undefined4 *)puVar3;
      puVar3 = puVar3 + 2;
      psVar2 = psVar2 + 2;
    }
  }
  ppwVar4 = ____lc_locale_name_func();
  pwVar5 = ppwVar4[1];
  __return_storage_ptr__->_LocaleName = pwVar5;
  if (pwVar5 != (wchar_t *)0x0) {
    pwVar5 = (wchar_t *)FUN_101a2b46(pwVar5);
    __return_storage_ptr__->_LocaleName = pwVar5;
  }
  return __return_storage_ptr__;
}

