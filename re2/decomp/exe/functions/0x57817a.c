// rea decompile_all
// name: type_case_Z
// address: 0x57817a
// body: available
// range: 0x57817a-0x5781dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::console_output_adapter<char> > >::type_case_Z(void)
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::console_output_adapter<char> >
   >::type_case_Z(void)
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::stream_output_adapter<char> > >::type_case_Z(void)
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::stream_output_adapter<char> >
   >::type_case_Z(void)
     6 names - too many to list
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

undefined4 type_case_Z(void)

{
  ushort *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  __uint64 *in_ECX;
  
  *(int *)((int)in_ECX + 0x14) = *(int *)((int)in_ECX + 0x14) + 4;
  uVar4 = *(uint *)((int)in_ECX + 0x14);
  puVar1 = *(ushort **)(uVar4 - 4);
  if ((puVar1 == (ushort *)0x0) || (iVar2 = *(int *)(puVar1 + 2), iVar2 == 0)) {
    *(char **)((int)in_ECX + 0x34) = "(null)";
    *(undefined4 *)(in_ECX + 7) = 6;
  }
  else {
    bVar3 = __crt_stdio_output::is_wide_character_specifier<char>
                      (*in_ECX,*(char *)((int)in_ECX + 0x31),
                       *(length_modifier *)((int)in_ECX + 0x2c));
    *(int *)((int)in_ECX + 0x34) = iVar2;
    uVar4 = (uint)*puVar1;
    if (bVar3) {
      uVar4 = (uint)(*puVar1 >> 1);
      *(uint *)(in_ECX + 7) = uVar4;
      *(undefined1 *)((int)in_ECX + 0x3c) = 1;
      goto LAB_005781d7;
    }
    *(uint *)(in_ECX + 7) = uVar4;
  }
  *(undefined1 *)((int)in_ECX + 0x3c) = 0;
LAB_005781d7:
  return CONCAT31((int3)(uVar4 >> 8),1);
}

