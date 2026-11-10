// rea decompile_all
// name: __crt_stdio_output::output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::string_output_adapter<char>_>_>::process
// address: 0x1019cf00
// body: available
// range: 0x1019cf00-0x1019cff8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::string_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::string_output_adapter<char> >
   >::process(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall
__crt_stdio_output::
output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
::process(output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
          *this)

{
  output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
  oVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  
  bVar2 = __crt_strtox::c_string_character_source<wchar_t>::validate
                    ((c_string_character_source<wchar_t> *)(this + 0x448));
  if (!bVar2) {
    return -1;
  }
  if (*(int *)(this + 0x10) == 0) {
LAB_1019cf25:
    piVar4 = __errno();
    *piVar4 = 0x16;
    FUN_1019ab61();
switchD_1019cf70_default:
    iVar5 = -1;
  }
  else {
LAB_1019cfe0:
    *(int *)(this + 0x450) = *(int *)(this + 0x450) + 1;
    if (*(int *)(this + 0x450) != 2) {
      *(undefined4 *)(this + 0x38) = 0;
      *(undefined4 *)(this + 0x1c) = 0;
LAB_1019cfcd:
      oVar1 = **(output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                 **)(this + 0x10);
      this[0x31] = oVar1;
      if (oVar1 != (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                    )0x0) {
        *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
        if (*(int *)(this + 0x18) < 0) goto LAB_1019cfe0;
        iVar5 = find_next_state(this[0x31],*(undefined4 *)(this + 0x1c));
        *(int *)(this + 0x1c) = iVar5;
        if (iVar5 == 8) goto LAB_1019cf25;
        switch(iVar5) {
        case 0:
          cVar3 = state_case_normal();
          break;
        case 1:
          *(undefined4 *)(this + 0x28) = 0xffffffff;
          *(undefined4 *)(this + 0x24) = 0;
          this[0x30] = (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                        )0x0;
          *(undefined4 *)(this + 0x20) = 0;
          *(undefined4 *)(this + 0x2c) = 0;
          this[0x3c] = (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                        )0x0;
          goto LAB_1019cfcd;
        case 2:
          cVar3 = state_case_flag();
          break;
        case 3:
          cVar3 = state_case_width();
          break;
        case 4:
          goto switchD_1019cf70_caseD_4;
        case 5:
          cVar3 = state_case_precision();
          break;
        case 6:
          cVar3 = state_case_size();
          break;
        case 7:
          cVar3 = output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                  ::state_case_type((output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                                     *)this);
          break;
        default:
          goto switchD_1019cf70_default;
        }
        if (cVar3 == '\0') goto switchD_1019cf70_default;
        goto LAB_1019cfcd;
      }
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
      goto LAB_1019cfe0;
    }
    iVar5 = *(int *)(this + 0x18);
  }
  return iVar5;
switchD_1019cf70_caseD_4:
  *(undefined4 *)(this + 0x28) = 0;
  goto LAB_1019cfcd;
}

