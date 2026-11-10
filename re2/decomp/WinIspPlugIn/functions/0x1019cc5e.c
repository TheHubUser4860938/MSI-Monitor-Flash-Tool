// rea decompile_all
// name: parse_int_from_format_string
// address: 0x1019cc5e
// body: available
// range: 0x1019cc5e-0x1019ccbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::parse_int_from_format_string(int *
   const)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::parse_int_from_format_string(int *
   const)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::parse_int_from_format_string(int * const)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::parse_int_from_format_string(int * const)
     6 names - too many to list
   
   Library: Visual Studio 2015 Release */

undefined4 parse_int_from_format_string(long *param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  int in_ECX;
  wchar_t *local_8;
  
  piVar1 = *(int **)(in_ECX + 0xc);
  iVar2 = *piVar1;
  *piVar1 = 0;
  local_8 = (wchar_t *)0x0;
  lVar3 = _wcstol((wchar_t *)(*(int *)(in_ECX + 0x10) + -2),&local_8,10);
  *param_1 = lVar3;
  if ((**(int **)(in_ECX + 0xc) == 0x22) || (local_8 < *(wchar_t **)(in_ECX + 0x10))) {
    uVar4 = 0;
  }
  else {
    *(wchar_t **)(in_ECX + 0x10) = local_8;
    uVar4 = 1;
  }
  if ((*piVar1 == 0) && (iVar2 != 0)) {
    *piVar1 = iVar2;
  }
  return uVar4;
}

