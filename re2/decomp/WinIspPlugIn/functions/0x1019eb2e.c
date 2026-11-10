// rea decompile_all
// name: write_stored_string_tchar
// address: 0x1019eb2e
// body: available
// range: 0x1019eb2e-0x1019ebb8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::write_stored_string_tchar(wchar_t)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::write_stored_string_tchar(wchar_t)
   
   Library: Visual Studio 2015 Release */

undefined4 write_stored_string_tchar(void)

{
  int iVar1;
  uint in_ECX;
  char *_SrcCh;
  int iVar2;
  uint local_8;
  
  if ((*(char *)(in_ECX + 0x3c) == '\0') && (0 < *(int *)(in_ECX + 0x38))) {
    _SrcCh = *(char **)(in_ECX + 0x34);
    iVar2 = 0;
    local_8 = in_ECX;
    if (*(int *)(in_ECX + 0x38) != 0) {
      do {
        local_8 = local_8 & 0xffff0000;
        iVar1 = __mbtowc_l((wchar_t *)&local_8,_SrcCh,
                           (*(_locale_t *)(in_ECX + 8))->locinfo->lc_codepage,
                           *(_locale_t *)(in_ECX + 8));
        if (iVar1 < 1) {
          *(undefined4 *)(in_ECX + 0x18) = 0xffffffff;
          return 1;
        }
        __crt_stdio_output::string_output_adapter<wchar_t>::write_character
                  ((string_output_adapter<wchar_t> *)(in_ECX + 0x448),(wchar_t)local_8,
                   (int *)(in_ECX + 0x18));
        _SrcCh = _SrcCh + iVar1;
        iVar2 = iVar2 + 1;
      } while (iVar2 != *(int *)(in_ECX + 0x38));
    }
  }
  else {
    __crt_stdio_output::string_output_adapter<wchar_t>::write_string
              ((string_output_adapter<wchar_t> *)(in_ECX + 0x448),*(wchar_t **)(in_ECX + 0x34),
               *(int *)(in_ECX + 0x38),(int *)(in_ECX + 0x18),*(int **)(in_ECX + 0xc));
  }
  return 1;
}

