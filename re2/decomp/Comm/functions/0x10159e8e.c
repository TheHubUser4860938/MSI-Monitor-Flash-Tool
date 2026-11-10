// rea decompile_all
// name: __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::write_integer
// address: 0x10159e8e
// body: available
// range: 0x10159e8e-0x10159f04 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<wchar_t,class
   __crt_stdio_input::string_input_adapter<wchar_t> >::write_integer(unsigned __int64,bool)
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::
write_integer(input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_> *this,
             __uint64 param_1,bool param_2)

{
  __uint64 *p_Var1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  
  *(int *)(this + 0x54) = *(int *)(this + 0x54) + 4;
  p_Var1 = *(__uint64 **)(*(int *)(this + 0x54) + -4);
  if (p_Var1 == (__uint64 *)0x0) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_1014f4c6();
LAB_10159eb2:
    bVar2 = false;
  }
  else {
    if (param_2) {
      *(int *)(this + 0x58) = *(int *)(this + 0x58) + 1;
    }
    uVar4 = format_string_parser<wchar_t>::length((format_string_parser<wchar_t> *)(this + 0x18));
    if (uVar4 == 1) {
      *(undefined1 *)p_Var1 = (undefined1)param_1;
    }
    else if (uVar4 == 2) {
      *(short *)p_Var1 = (short)param_1;
    }
    else if (uVar4 == 4) {
      *(int *)p_Var1 = (int)param_1;
    }
    else {
      if (uVar4 != 8) goto LAB_10159eb2;
      *p_Var1 = param_1;
    }
    bVar2 = true;
  }
  return bVar2;
}

