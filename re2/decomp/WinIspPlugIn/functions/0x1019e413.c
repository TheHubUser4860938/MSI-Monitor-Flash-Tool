// rea decompile_all
// name: type_case_c_tchar
// address: 0x1019e413
// body: available
// range: 0x1019e413-0x1019e4a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::console_output_adapter<char> > >::type_case_c_tchar(char)
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::console_output_adapter<char> >
   >::type_case_c_tchar(char)
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::stream_output_adapter<char> > >::type_case_c_tchar(char)
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::stream_output_adapter<char> >
   >::type_case_c_tchar(char)
     6 names - too many to list
   
   Library: Visual Studio 2015 Release */

undefined4 type_case_c_tchar(void)

{
  bool bVar1;
  uint _SizeInBytes;
  errno_t eVar2;
  __uint64 *in_ECX;
  formatting_buffer *pfVar3;
  formatting_buffer *this;
  wchar_t _WCh;
  
  bVar1 = __crt_stdio_output::is_wide_character_specifier<char>
                    (*in_ECX,*(char *)((int)in_ECX + 0x31),*(length_modifier *)((int)in_ECX + 0x2c))
  ;
  this = (formatting_buffer *)(in_ECX + 8);
  if (bVar1) {
    *(int *)((int)in_ECX + 0x14) = *(int *)((int)in_ECX + 0x14) + 4;
    _WCh = *(wchar_t *)(*(int *)((int)in_ECX + 0x14) + -4);
    pfVar3 = *(formatting_buffer **)((int)in_ECX + 0x444);
    if (*(formatting_buffer **)((int)in_ECX + 0x444) == (formatting_buffer *)0x0) {
      pfVar3 = this;
    }
    _SizeInBytes = __crt_stdio_output::formatting_buffer::count<char>(this);
    eVar2 = _wctomb_s((int *)(in_ECX + 7),(char *)pfVar3,_SizeInBytes,_WCh);
    if (eVar2 != 0) {
      *(undefined1 *)(in_ECX + 6) = 1;
    }
  }
  else {
    pfVar3 = *(formatting_buffer **)((int)in_ECX + 0x444);
    if (*(formatting_buffer **)((int)in_ECX + 0x444) == (formatting_buffer *)0x0) {
      pfVar3 = this;
    }
    *(int *)((int)in_ECX + 0x14) = *(int *)((int)in_ECX + 0x14) + 4;
    *pfVar3 = *(formatting_buffer *)(*(int *)((int)in_ECX + 0x14) + -4);
    *(undefined4 *)(in_ECX + 7) = 1;
  }
  pfVar3 = *(formatting_buffer **)((int)in_ECX + 0x444);
  if (pfVar3 != (formatting_buffer *)0x0) {
    this = pfVar3;
  }
  *(formatting_buffer **)((int)in_ECX + 0x34) = this;
  return CONCAT31((int3)((uint)pfVar3 >> 8),1);
}

