// rea decompile_all
// name: state_case_size
// address: 0x1017052b
// body: available
// range: 0x1017052b-0x10170693 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10170547 to 0x10170979 __crt_stdio_output::output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>::state_case_type (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::stream_output_adapter<char> >
   >::state_case_size(void)
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::string_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::string_output_adapter<char> >
   >::state_case_size(void)
   
   Library: Visual Studio 2015 Release */

bool state_case_size(void)

{
  output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
  oVar1;
  char cVar2;
  char *pcVar3;
  bool bVar4;
  int *piVar5;
  output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
  *in_ECX;
  
  oVar1 = in_ECX[0x31];
  if (oVar1 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                )0x46) {
    if ((*(uint *)in_ECX & 8) == 0) {
      *(undefined4 *)(in_ECX + 0x1c) = 7;
      bVar4 = __crt_stdio_output::
              output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
              ::state_case_type(in_ECX);
      return bVar4;
    }
  }
  else if (oVar1 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                     )0x4e) {
    if ((*(uint *)in_ECX & 8) == 0) {
      *(undefined4 *)(in_ECX + 0x1c) = 8;
LAB_10170563:
      piVar5 = __errno();
      *piVar5 = 0x16;
      FUN_1016ec41();
      return false;
    }
  }
  else {
    if (*(int *)(in_ECX + 0x2c) != 0) goto LAB_10170563;
    if ((char)oVar1 < 'k') {
      if (oVar1 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                    )0x6a) {
        *(undefined4 *)(in_ECX + 0x2c) = 5;
      }
      else if (oVar1 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                         )0x49) {
        pcVar3 = *(char **)(in_ECX + 0x10);
        cVar2 = *pcVar3;
        if ((cVar2 == '3') && (pcVar3[1] == '2')) {
          *(undefined4 *)(in_ECX + 0x2c) = 10;
          *(char **)(in_ECX + 0x10) = pcVar3 + 2;
        }
        else if ((cVar2 == '6') && (pcVar3[1] == '4')) {
          *(undefined4 *)(in_ECX + 0x2c) = 0xb;
          *(char **)(in_ECX + 0x10) = pcVar3 + 2;
        }
        else if ((((cVar2 == 'd') || (cVar2 == 'i')) || (cVar2 == 'o')) ||
                (((cVar2 == 'u' || (cVar2 == 'x')) || (cVar2 == 'X')))) {
          *(undefined4 *)(in_ECX + 0x2c) = 9;
        }
      }
      else if (oVar1 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                         )0x4c) {
        *(undefined4 *)(in_ECX + 0x2c) = 8;
      }
      else if (oVar1 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                         )0x54) {
        *(undefined4 *)(in_ECX + 0x2c) = 0xd;
      }
      else if (oVar1 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                         )0x68) {
        if (**(char **)(in_ECX + 0x10) == 'h') {
          *(undefined4 *)(in_ECX + 0x2c) = 1;
          *(char **)(in_ECX + 0x10) = *(char **)(in_ECX + 0x10) + 1;
        }
        else {
          *(undefined4 *)(in_ECX + 0x2c) = 2;
        }
      }
    }
    else if (oVar1 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                       )0x6c) {
      if (**(char **)(in_ECX + 0x10) == 'l') {
        *(undefined4 *)(in_ECX + 0x2c) = 4;
        *(char **)(in_ECX + 0x10) = *(char **)(in_ECX + 0x10) + 1;
      }
      else {
        *(undefined4 *)(in_ECX + 0x2c) = 3;
      }
    }
    else if (oVar1 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                       )0x74) {
      *(undefined4 *)(in_ECX + 0x2c) = 7;
    }
    else if (oVar1 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                       )0x77) {
      *(undefined4 *)(in_ECX + 0x2c) = 0xc;
    }
    else if (oVar1 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                       )0x7a) {
      *(undefined4 *)(in_ECX + 0x2c) = 6;
    }
  }
  return true;
}

