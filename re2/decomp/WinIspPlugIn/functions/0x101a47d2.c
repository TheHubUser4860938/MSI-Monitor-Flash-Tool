// rea decompile_all
// name: __crt_strtox::parse_floating_point_write_result<double>
// address: 0x101a47d2
// body: available
// range: 0x101a47d2-0x101a48ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point_write_result<double>(enum
   __crt_strtox::floating_point_parse_result,struct __crt_strtox::floating_point_string const
   &,double * const)
   
   Library: Visual Studio 2015 Release */

SLD_STATUS __cdecl
__crt_strtox::parse_floating_point_write_result<double>
          (floating_point_parse_result param_1,floating_point_string *param_2,double *param_3)

{
  SLD_STATUS SVar1;
  
  switch(param_1) {
  case 0:
    SVar1 = convert_decimal_string_to_floating_type<double>(param_2,param_3);
    return SVar1;
  case 1:
    SVar1 = convert_hexadecimal_string_to_floating_type<double>(param_2,param_3);
    return SVar1;
  case 2:
    assemble_floating_point_zero<double>((bool)param_2[0x308],param_3);
    break;
  case 3:
    assemble_floating_point_infinity<double>((bool)param_2[0x308],param_3);
    break;
  case 4:
    assemble_floating_point_qnan<double>((bool)param_2[0x308],param_3);
    break;
  case 5:
    assemble_floating_point_snan<double>((bool)param_2[0x308],param_3);
    break;
  case 6:
    assemble_floating_point_ind<double>(param_3);
    break;
  case 7:
    assemble_floating_point_zero<double>(false,param_3);
    return 1;
  case 8:
    assemble_floating_point_zero<double>((bool)param_2[0x308],param_3);
    return 2;
  case 9:
    assemble_floating_point_infinity<double>((bool)param_2[0x308],param_3);
    return 3;
  default:
    return 1;
  }
  return 0;
}

