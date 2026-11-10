// rea decompile_all
// name: type_case_n
// address: 0x1019e685
// body: available
// range: 0x1019e685-0x1019e6f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_n(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_n(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_n(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_n(void)
     6 names - too many to list
   
   Library: Visual Studio 2015 Release */

uint type_case_n(void)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int in_ECX;
  
  *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 4;
  puVar1 = *(uint **)(*(int *)(in_ECX + 0x14) + -4);
  iVar2 = __get_printf_count_output();
  if (iVar2 == 0) {
LAB_1019e69e:
    piVar3 = __errno();
    *piVar3 = 0x16;
    uVar4 = FUN_1019ab61();
    uVar4 = uVar4 & 0xffffff00;
  }
  else {
    uVar4 = __crt_stdio_output::to_integer_size(*(length_modifier *)(in_ECX + 0x2c));
    if (uVar4 == 1) {
      uVar4 = 0;
      *(undefined1 *)puVar1 = *(undefined1 *)(in_ECX + 0x18);
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)*(ushort *)(in_ECX + 0x18);
      *(ushort *)puVar1 = *(ushort *)(in_ECX + 0x18);
    }
    else if (uVar4 == 4) {
      uVar4 = *(uint *)(in_ECX + 0x18);
      *puVar1 = uVar4;
    }
    else {
      if (uVar4 != 8) goto LAB_1019e69e;
      uVar4 = *(uint *)(in_ECX + 0x18);
      *puVar1 = uVar4;
      puVar1[1] = (int)uVar4 >> 0x1f;
    }
    *(undefined1 *)(in_ECX + 0x30) = 1;
    uVar4 = CONCAT31((int3)(uVar4 >> 8),1);
  }
  return uVar4;
}

