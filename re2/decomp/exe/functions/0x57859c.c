// rea decompile_all
// name: type_case_c_tchar
// address: 0x57859c
// body: available
// range: 0x57859c-0x578633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_c_tchar(wchar_t)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_c_tchar(wchar_t)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_c_tchar(wchar_t)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_c_tchar(wchar_t)
     6 names - too many to list
   
   Library: Visual Studio 2015 Release */

undefined4 type_case_c_tchar(void)

{
  wchar_t wVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  __uint64 *in_ECX;
  wchar_t *pwVar5;
  undefined4 local_8;
  
  *(undefined1 *)((int)in_ECX + 0x3c) = 1;
  *(int *)((int)in_ECX + 0x14) = *(int *)((int)in_ECX + 0x14) + 4;
  wVar1 = *(wchar_t *)(*(int *)((int)in_ECX + 0x14) + -4);
  local_8 = in_ECX;
  bVar2 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                    (*in_ECX,*(wchar_t *)((int)in_ECX + 0x32),
                     *(length_modifier *)((int)in_ECX + 0x2c));
  pwVar5 = (wchar_t *)(in_ECX + 8);
  if (bVar2) {
    pwVar4 = *(wchar_t **)((int)in_ECX + 0x444);
    if (*(wchar_t **)((int)in_ECX + 0x444) == (wchar_t *)0x0) {
      pwVar4 = pwVar5;
    }
    *pwVar4 = wVar1;
  }
  else {
    local_8 = (__uint64 *)(CONCAT22(local_8._2_2_,wVar1) & 0xffff00ff);
    pwVar4 = *(wchar_t **)((int)in_ECX + 0x444);
    if (*(wchar_t **)((int)in_ECX + 0x444) == (wchar_t *)0x0) {
      pwVar4 = pwVar5;
    }
    iVar3 = __mbtowc_l(pwVar4,(char *)&local_8,(*(_locale_t *)(in_ECX + 1))->locinfo->lc_codepage,
                       *(_locale_t *)(in_ECX + 1));
    if (iVar3 < 0) {
      *(undefined1 *)(in_ECX + 6) = 1;
    }
  }
  pwVar4 = *(wchar_t **)((int)in_ECX + 0x444);
  if (pwVar4 != (wchar_t *)0x0) {
    pwVar5 = pwVar4;
  }
  *(wchar_t **)((int)in_ECX + 0x34) = pwVar5;
  *(undefined4 *)(in_ECX + 7) = 1;
  return CONCAT31((int3)((uint)pwVar4 >> 8),1);
}

