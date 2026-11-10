// rea decompile_all
// name: write_stored_string_tchar
// address: 0x1019e9e0
// body: available
// range: 0x1019e9e0-0x1019ea86 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::stream_output_adapter<char> > >::write_stored_string_tchar(char)
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::stream_output_adapter<char> >
   >::write_stored_string_tchar(char)
   
   Library: Visual Studio 2015 Release */

void write_stored_string_tchar(void)

{
  wchar_t _WCh;
  errno_t eVar1;
  int in_ECX;
  int iVar2;
  wchar_t *pwVar3;
  int local_14;
  char local_10 [8];
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  if ((*(char *)(in_ECX + 0x3c) == '\0') || (*(int *)(in_ECX + 0x38) < 1)) {
    __crt_stdio_output::stream_output_adapter<char>::write_string
              ((stream_output_adapter<char> *)(in_ECX + 0x448),*(char **)(in_ECX + 0x34),
               *(int *)(in_ECX + 0x38),(int *)(in_ECX + 0x18),*(int **)(in_ECX + 0xc));
  }
  else {
    pwVar3 = *(wchar_t **)(in_ECX + 0x34);
    iVar2 = 0;
    if (*(int *)(in_ECX + 0x38) != 0) {
      do {
        _WCh = *pwVar3;
        pwVar3 = pwVar3 + 1;
        local_14 = 0;
        eVar1 = _wctomb_s(&local_14,local_10,6,_WCh);
        if ((eVar1 != 0) || (local_14 == 0)) {
          *(undefined4 *)(in_ECX + 0x18) = 0xffffffff;
          break;
        }
        __crt_stdio_output::stream_output_adapter<char>::write_string
                  ((stream_output_adapter<char> *)(in_ECX + 0x448),local_10,local_14,
                   (int *)(in_ECX + 0x18),*(int **)(in_ECX + 0xc));
        iVar2 = iVar2 + 1;
      } while (iVar2 != *(int *)(in_ECX + 0x38));
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

