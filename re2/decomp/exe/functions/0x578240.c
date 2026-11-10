// rea decompile_all
// name: type_case_a
// address: 0x578240
// body: available
// range: 0x578240-0x578399 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::console_output_adapter<char> > >::type_case_a(void)
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::console_output_adapter<char> >
   >::type_case_a(void)
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::stream_output_adapter<char> > >::type_case_a(void)
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::stream_output_adapter<char> >
   >::type_case_a(void)
     6 names - too many to list
   
   Library: Visual Studio 2015 Release */

undefined4 type_case_a(void)

{
  formatting_buffer *this;
  char *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  formatting_buffer *pfVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
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
    if ((*(char *)((int)in_ECX + 0x31) == 'a') || (*(char *)((int)in_ECX + 0x31) == 'A')) {
      in_ECX[10] = 0xd;
    }
    else {
      in_ECX[10] = 6;
    }
  }
  else if ((in_ECX[10] == 0) &&
          ((*(char *)((int)in_ECX + 0x31) == 'g' || (*(char *)((int)in_ECX + 0x31) == 'G')))) {
    in_ECX[10] = 1;
  }
  this = (formatting_buffer *)(in_ECX + 0x10);
  bVar3 = __crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>
                    (this,in_ECX[10] + 0x15d);
  if (!bVar3) {
    uVar4 = __crt_stdio_output::formatting_buffer::count<char>(this);
    in_ECX[10] = uVar4 - 0x15d;
  }
  pfVar5 = (formatting_buffer *)in_ECX[0x111];
  if ((formatting_buffer *)in_ECX[0x111] == (formatting_buffer *)0x0) {
    pfVar5 = this;
  }
  in_ECX[0xd] = pfVar5;
  in_ECX[5] = in_ECX[5] + 8;
  local_c = *(undefined4 *)(in_ECX[5] + -8);
  local_8 = *(undefined4 *)(in_ECX[5] + -4);
  uVar4 = __crt_stdio_output::formatting_buffer::count<char>(this);
  pfVar5 = (formatting_buffer *)in_ECX[0x111];
  if ((formatting_buffer *)in_ECX[0x111] == (formatting_buffer *)0x0) {
    pfVar5 = this;
  }
  uVar13 = in_ECX[2];
  iVar6 = (int)*(char *)((int)in_ECX + 0x31);
  uVar12 = in_ECX[1];
  uVar11 = *in_ECX;
  uVar10 = in_ECX[10];
  pcVar7 = __crt_stdio_output::formatting_buffer::scratch_data<char>(this);
  uVar8 = __crt_stdio_output::formatting_buffer::count<char>(this);
  ___acrt_fp_format(&local_c,pfVar5,uVar8,pcVar7,uVar4,iVar6,uVar10,uVar11,uVar12,uVar13);
  if ((((uint)in_ECX[8] >> 5 & 1) != 0) && (in_ECX[10] == 0)) {
    __crt_stdio_output::force_decimal_point((char *)in_ECX[0xd],(__crt_locale_pointers *)in_ECX[2]);
  }
  if (((*(char *)((int)in_ECX + 0x31) == 'g') || (*(char *)((int)in_ECX + 0x31) == 'G')) &&
     (((uint)in_ECX[8] >> 5 & 1) == 0)) {
    __crt_stdio_output::crop_zeroes((char *)in_ECX[0xd],(__crt_locale_pointers *)in_ECX[2]);
  }
  pcVar7 = (char *)in_ECX[0xd];
  if (*pcVar7 == '-') {
    in_ECX[8] = in_ECX[8] | 0x40;
    pcVar7 = pcVar7 + 1;
    in_ECX[0xd] = pcVar7;
  }
  pcVar9 = (char *)in_ECX[0xd];
  cVar2 = *pcVar9;
  if (((cVar2 == 'i') || (cVar2 == 'I')) || ((cVar2 == 'n' || (cVar2 == 'N')))) {
    *(undefined1 *)((int)in_ECX + 0x31) = 0x73;
  }
  pcVar1 = pcVar9 + 1;
  do {
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  in_ECX[0xe] = (int)pcVar9 - (int)pcVar1;
  return CONCAT31((int3)((uint)pcVar7 >> 8),1);
}

