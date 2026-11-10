// rea decompile_all
// name: __crt_strtox::parse_floating_point_write_result<float>
// address: 0x1018cab4
// body: available
// range: 0x1018cab4-0x1018cb98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point_write_result<float>(enum
   __crt_strtox::floating_point_parse_result,struct __crt_strtox::floating_point_string const
   &,float * const)
   
   Library: Visual Studio 2015 Release */

SLD_STATUS __cdecl
__crt_strtox::parse_floating_point_write_result<float>
          (floating_point_parse_result param_1,floating_point_string *param_2,float *param_3)

{
  float fVar1;
  SLD_STATUS SVar2;
  
  switch(param_1) {
  case 0:
    SVar2 = convert_decimal_string_to_floating_type<float>(param_2,param_3);
    return SVar2;
  case 1:
    SVar2 = convert_hexadecimal_string_to_floating_type<float>(param_2,param_3);
    return SVar2;
  case 2:
    fVar1 = (float)((uint)(param_2[0x308] != (floating_point_string)0x0) << 0x1f);
    break;
  case 3:
    fVar1 = (float)((uint)(param_2[0x308] != (floating_point_string)0x0) << 0x1f | 0x7f800000);
    break;
  case 4:
    fVar1 = (float)((uint)(param_2[0x308] != (floating_point_string)0x0) << 0x1f | 0x7fffffff);
    break;
  case 5:
    fVar1 = (float)((uint)(param_2[0x308] != (floating_point_string)0x0) << 0x1f | 0x7f800001);
    break;
  case 6:
    *param_3 = -NAN;
    return 0;
  case 7:
    *param_3 = 0.0;
    return 1;
  case 8:
    SVar2 = 2;
    fVar1 = (float)((uint)(param_2[0x308] != (floating_point_string)0x0) << 0x1f);
    goto LAB_1018cb76;
  case 9:
    SVar2 = 3;
    fVar1 = (float)((uint)(param_2[0x308] != (floating_point_string)0x0) << 0x1f | 0x7f800000);
LAB_1018cb76:
    *param_3 = fVar1;
    return SVar2;
  default:
    return 1;
  }
  *param_3 = fVar1;
  return 0;
}

