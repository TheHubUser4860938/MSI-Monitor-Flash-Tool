// rea decompile_all
// name: state_case_size
// address: 0x10152aba
// body: available
// range: 0x10152aba-0x10152c35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10152ad8 to 0x10152c36 __crt_stdio_output::output_processor<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>,__crt_stdio_output::format_validation_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_>_>::state_case_type (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::state_case_size(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::state_case_size(void)
   
   Library: Visual Studio 2015 Release */

bool state_case_size(void)

{
  ushort uVar1;
  short sVar2;
  short *psVar3;
  bool bVar4;
  int *piVar5;
  output_processor<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>,__crt_stdio_output::format_validation_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_>_>
  *in_ECX;
  
  uVar1 = *(ushort *)(in_ECX + 0x32);
  if (uVar1 == 0x46) {
    if ((*(uint *)in_ECX & 8) == 0) {
      *(undefined4 *)(in_ECX + 0x1c) = 7;
      bVar4 = __crt_stdio_output::
              output_processor<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>,__crt_stdio_output::format_validation_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_>_>
              ::state_case_type(in_ECX);
      return bVar4;
    }
  }
  else if (uVar1 == 0x4e) {
    if ((*(uint *)in_ECX & 8) == 0) {
      *(undefined4 *)(in_ECX + 0x1c) = 8;
LAB_10152af5:
      piVar5 = __errno();
      *piVar5 = 0x16;
      FUN_1014f4c6();
      return false;
    }
  }
  else {
    if (*(int *)(in_ECX + 0x2c) != 0) goto LAB_10152af5;
    if (uVar1 < 0x6b) {
      if (uVar1 == 0x6a) {
        *(undefined4 *)(in_ECX + 0x2c) = 5;
      }
      else if (uVar1 == 0x49) {
        psVar3 = *(short **)(in_ECX + 0x10);
        sVar2 = *psVar3;
        if ((sVar2 == 0x33) && (psVar3[1] == 0x32)) {
          *(undefined4 *)(in_ECX + 0x2c) = 10;
          *(short **)(in_ECX + 0x10) = psVar3 + 2;
        }
        else if ((sVar2 == 0x36) && (psVar3[1] == 0x34)) {
          *(undefined4 *)(in_ECX + 0x2c) = 0xb;
          *(short **)(in_ECX + 0x10) = psVar3 + 2;
        }
        else if ((((sVar2 == 100) || (sVar2 == 0x69)) || (sVar2 == 0x6f)) ||
                (((sVar2 == 0x75 || (sVar2 == 0x78)) || (sVar2 == 0x58)))) {
          *(undefined4 *)(in_ECX + 0x2c) = 9;
        }
      }
      else if (uVar1 == 0x4c) {
        *(undefined4 *)(in_ECX + 0x2c) = 8;
      }
      else if (uVar1 == 0x54) {
        *(undefined4 *)(in_ECX + 0x2c) = 0xd;
      }
      else if (uVar1 == 0x68) {
        if (**(short **)(in_ECX + 0x10) == 0x68) {
          *(undefined4 *)(in_ECX + 0x2c) = 1;
          *(short **)(in_ECX + 0x10) = *(short **)(in_ECX + 0x10) + 1;
        }
        else {
          *(undefined4 *)(in_ECX + 0x2c) = 2;
        }
      }
    }
    else if (uVar1 == 0x6c) {
      if (**(short **)(in_ECX + 0x10) == 0x6c) {
        *(undefined4 *)(in_ECX + 0x2c) = 4;
        *(short **)(in_ECX + 0x10) = *(short **)(in_ECX + 0x10) + 1;
      }
      else {
        *(undefined4 *)(in_ECX + 0x2c) = 3;
      }
    }
    else if (uVar1 == 0x74) {
      *(undefined4 *)(in_ECX + 0x2c) = 7;
    }
    else if (uVar1 == 0x77) {
      *(undefined4 *)(in_ECX + 0x2c) = 0xc;
    }
    else if (uVar1 == 0x7a) {
      *(undefined4 *)(in_ECX + 0x2c) = 6;
    }
  }
  return true;
}

