// rea decompile_all
// name: type_case_s
// address: 0x10171809
// body: available
// range: 0x10171809-0x1017187c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_s(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_s(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_s(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_s(void)
     6 names - too many to list
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

undefined4 type_case_s(void)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  __uint64 *in_ECX;
  int iVar4;
  
  *(int *)((int)in_ECX + 0x14) = *(int *)((int)in_ECX + 0x14) + 4;
  iVar4 = (int)in_ECX[5];
  iVar1 = *(int *)(*(int *)((int)in_ECX + 0x14) + -4);
  *(int *)((int)in_ECX + 0x34) = iVar1;
  if (iVar4 == -1) {
    iVar4 = 0x7fffffff;
  }
  bVar2 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                    (*in_ECX,*(wchar_t *)((int)in_ECX + 0x32),
                     *(length_modifier *)((int)in_ECX + 0x2c));
  if (bVar2) {
    if (iVar1 == 0) {
      *(wchar_t **)((int)in_ECX + 0x34) = L"(null)";
    }
    *(undefined1 *)((int)in_ECX + 0x3c) = 1;
    uVar3 = FUN_10175aad(*(undefined4 *)((int)in_ECX + 0x34),iVar4);
  }
  else {
    if (iVar1 == 0) {
      *(char **)((int)in_ECX + 0x34) = "(null)";
    }
    uVar3 = type_case_s_compute_narrow_string_length(iVar4,0);
  }
  *(undefined4 *)(in_ECX + 7) = uVar3;
  return 1;
}

