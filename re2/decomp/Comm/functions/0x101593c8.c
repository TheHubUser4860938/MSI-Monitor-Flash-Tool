// rea decompile_all
// name: FUN_101593c8
// address: 0x101593c8
// body: available
// range: 0x101593c8-0x10159413 inclusive
// range: 0x1015943c-0x1015946b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1015940c to 0x101593ac __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::process_character_count_specifier (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1015945f to 0x10156308 __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::process_floating_point_specifier_t<double> (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10159467 to 0x101562a0 __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::process_floating_point_specifier_t<float> (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_101593c8(void)

{
  bool bVar1;
  uint uVar2;
  input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_> *in_ECX;
  conversion_mode cVar3;
  
  switch(*(undefined4 *)(in_ECX + 0x48)) {
  case 0:
    cVar3 = 0;
    goto LAB_101593d9;
  case 1:
    cVar3 = 1;
    goto LAB_101593d9;
  case 2:
    bVar1 = true;
    uVar2 = 0;
    break;
  case 3:
    bVar1 = true;
    goto LAB_101593f3;
  case 4:
    bVar1 = false;
    uVar2 = 8;
    break;
  case 5:
    bVar1 = false;
LAB_101593f3:
    uVar2 = 10;
    break;
  case 6:
    bVar1 = false;
    uVar2 = 0x10;
    break;
  case 7:
    __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::
    process_whitespace(in_ECX);
    uVar2 = __crt_stdio_input::format_string_parser<wchar_t>::length
                      ((format_string_parser<wchar_t> *)(in_ECX + 0x18));
    if (uVar2 == 4) {
      bVar1 = __crt_stdio_input::
              input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::
              process_floating_point_specifier_t<float>(in_ECX);
      return bVar1;
    }
    if (uVar2 == 8) {
      bVar1 = __crt_stdio_input::
              input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::
              process_floating_point_specifier_t<double>(in_ECX);
      return bVar1;
    }
    return false;
  case 8:
    cVar3 = 8;
LAB_101593d9:
    bVar1 = __crt_stdio_input::
            input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::
            process_string_specifier(in_ECX,cVar3);
    return bVar1;
  case 9:
    bVar1 = __crt_stdio_input::
            input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::
            process_character_count_specifier(in_ECX);
    return bVar1;
  default:
    return false;
  }
  bVar1 = __crt_stdio_input::
          input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::
          process_integer_specifier(in_ECX,uVar2,bVar1);
  return bVar1;
}

