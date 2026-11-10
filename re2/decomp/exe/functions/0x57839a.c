// rea decompile_all
// name: type_case_a
// address: 0x57839a
// body: available
// range: 0x57839a-0x57850b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_a(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_a(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_a(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_a(void)
     6 names - too many to list
   
   Library: Visual Studio 2015 Release */

undefined4 type_case_a(void)

{
  formatting_buffer *this;
  char cVar1;
  bool bVar2;
  uint uVar3;
  formatting_buffer *pfVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  undefined3 uVar8;
  undefined4 *in_ECX;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_c;
  undefined4 local_8;
  
  in_ECX[8] = in_ECX[8] | 0x10;
  if ((int)in_ECX[10] < 0) {
    if ((*(short *)((int)in_ECX + 0x32) == 0x61) || (*(short *)((int)in_ECX + 0x32) == 0x41)) {
      in_ECX[10] = 0xd;
    }
    else {
      in_ECX[10] = 6;
    }
  }
  else if ((in_ECX[10] == 0) &&
          ((*(short *)((int)in_ECX + 0x32) == 0x67 || (*(short *)((int)in_ECX + 0x32) == 0x47)))) {
    in_ECX[10] = 1;
  }
  this = (formatting_buffer *)(in_ECX + 0x10);
  bVar2 = __crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>
                    (this,in_ECX[10] + 0x15d);
  if (!bVar2) {
    uVar3 = __crt_stdio_output::formatting_buffer::count<char>(this);
    in_ECX[10] = uVar3 - 0x15d;
  }
  pfVar4 = (formatting_buffer *)in_ECX[0x111];
  if ((formatting_buffer *)in_ECX[0x111] == (formatting_buffer *)0x0) {
    pfVar4 = this;
  }
  in_ECX[0xd] = pfVar4;
  in_ECX[5] = in_ECX[5] + 8;
  local_c = *(undefined4 *)(in_ECX[5] + -8);
  local_8 = *(undefined4 *)(in_ECX[5] + -4);
  uVar3 = __crt_stdio_output::formatting_buffer::count<char>(this);
  pfVar4 = (formatting_buffer *)in_ECX[0x111];
  if ((formatting_buffer *)in_ECX[0x111] == (formatting_buffer *)0x0) {
    pfVar4 = this;
  }
  uVar13 = in_ECX[2];
  iVar5 = (int)*(char *)((int)in_ECX + 0x32);
  uVar12 = in_ECX[1];
  uVar11 = *in_ECX;
  uVar10 = in_ECX[10];
  pcVar6 = __crt_stdio_output::formatting_buffer::scratch_data<char>(this);
  uVar7 = __crt_stdio_output::formatting_buffer::count<char>(this);
  ___acrt_fp_format(&local_c,pfVar4,uVar7,pcVar6,uVar3,iVar5,uVar10,uVar11,uVar12,uVar13);
  if ((((uint)in_ECX[8] >> 5 & 1) != 0) && (in_ECX[10] == 0)) {
    __crt_stdio_output::force_decimal_point((char *)in_ECX[0xd],(__crt_locale_pointers *)in_ECX[2]);
  }
  if (((*(short *)((int)in_ECX + 0x32) == 0x67) || (*(short *)((int)in_ECX + 0x32) == 0x47)) &&
     (((uint)in_ECX[8] >> 5 & 1) == 0)) {
    __crt_stdio_output::crop_zeroes((char *)in_ECX[0xd],(__crt_locale_pointers *)in_ECX[2]);
  }
  pcVar6 = (char *)in_ECX[0xd];
  if (*pcVar6 == '-') {
    in_ECX[8] = in_ECX[8] | 0x40;
    pcVar6 = pcVar6 + 1;
    in_ECX[0xd] = pcVar6;
  }
  pcVar9 = (char *)in_ECX[0xd];
  cVar1 = *pcVar9;
  uVar8 = (undefined3)((uint)pcVar6 >> 8);
  if (((cVar1 == 'i') || (cVar1 == 'I')) || ((cVar1 == 'n' || (cVar1 == 'N')))) {
    uVar8 = 0;
    *(undefined2 *)((int)in_ECX + 0x32) = 0x73;
  }
  pcVar6 = pcVar9 + 1;
  do {
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  in_ECX[0xe] = (int)pcVar9 - (int)pcVar6;
  return CONCAT31(uVar8,1);
}

