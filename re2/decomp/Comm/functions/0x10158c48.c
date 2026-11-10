// rea decompile_all
// name: __crt_strtox::convert_hexadecimal_string_to_floating_type_common
// address: 0x10158c48
// body: available
// range: 0x10158c48-0x10158cf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10158c93) */
/* Library Function - Single Match
    enum SLD_STATUS __cdecl __crt_strtox::convert_hexadecimal_string_to_floating_type_common(struct
   __crt_strtox::floating_point_string const &,class __crt_strtox::floating_point_value const &)
   
   Library: Visual Studio 2015 Release */

SLD_STATUS __cdecl
__crt_strtox::convert_hexadecimal_string_to_floating_type_common
          (floating_point_string *param_1,floating_point_value *param_2)

{
  floating_point_string fVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  SLD_STATUS SVar6;
  int iVar7;
  floating_point_string *pfVar8;
  uint uVar9;
  uint uVar10;
  __uint64 _Var11;
  
  uVar9 = 0;
  pfVar8 = param_1 + 8;
  iVar5 = *(int *)param_1 + ((param_2[4] == (floating_point_value)0x0) - 1 & 0x1d) + 0x17;
  iVar2 = *(int *)(param_1 + 4);
  for (iVar7 = 0;
      (pfVar8 != param_1 + iVar2 + 8 &&
      (_Var11 = floating_point_value::normal_mantissa_mask(param_2), CONCAT44(iVar7,uVar9) <= _Var11
      )); iVar7 = (iVar7 << 4 | uVar3) + (uint)CARRY4(uVar10,(uint)(byte)fVar1)) {
    fVar1 = *pfVar8;
    uVar3 = uVar9 >> 0x1c;
    uVar10 = uVar9 * 0x10;
    uVar9 = uVar10 + (byte)fVar1;
    iVar5 = iVar5 + -4;
    pfVar8 = pfVar8 + 1;
  }
  do {
    bVar4 = true;
    while( true ) {
      if ((pfVar8 == param_1 + iVar2 + 8) || (bVar4 == false)) {
        SVar6 = assemble_floating_point_value
                          (CONCAT44(iVar7,uVar9),iVar5,(bool)param_1[0x308],bVar4,param_2);
        return SVar6;
      }
      fVar1 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      if (fVar1 == (floating_point_string)0x0) break;
      bVar4 = false;
    }
  } while( true );
}

