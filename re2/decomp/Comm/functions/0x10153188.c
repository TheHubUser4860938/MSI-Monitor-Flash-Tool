// rea decompile_all
// name: type_case_integer
// address: 0x10153188
// body: available
// range: 0x10153188-0x101532d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_integer(unsigned int,bool)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_integer(unsigned int,bool)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_integer(unsigned int,bool)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_integer(unsigned int,bool)
     6 names - too many to list
   
   Library: Visual Studio 2015 Release */

uint type_case_integer(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int *piVar2;
  char *pcVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  uVar1 = __crt_stdio_output::to_integer_size(*(length_modifier *)(in_ECX + 0x2c));
  if (uVar1 == 1) {
    *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 4;
    if ((*(uint *)(in_ECX + 0x20) >> 4 & 1) == 0) {
      uVar4 = (uint)*(byte *)(*(int *)(in_ECX + 0x14) + -4);
    }
    else {
      uVar4 = (uint)*(char *)(*(int *)(in_ECX + 0x14) + -4);
    }
  }
  else if (uVar1 == 2) {
    *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 4;
    if ((*(uint *)(in_ECX + 0x20) >> 4 & 1) == 0) {
      uVar4 = (uint)*(ushort *)(*(int *)(in_ECX + 0x14) + -4);
    }
    else {
      uVar4 = (uint)*(short *)(*(int *)(in_ECX + 0x14) + -4);
    }
  }
  else {
    if (uVar1 != 4) {
      if (uVar1 != 8) {
        piVar2 = __errno();
        *piVar2 = 0x16;
        uVar1 = FUN_1014f4c6();
        return uVar1 & 0xffffff00;
      }
      *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 8;
      uVar4 = *(uint *)(*(int *)(in_ECX + 0x14) + -8);
      iVar5 = *(int *)(*(int *)(in_ECX + 0x14) + -4);
      goto LAB_10153239;
    }
    *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 4;
    if ((*(uint *)(in_ECX + 0x20) >> 4 & 1) == 0) {
      uVar4 = *(uint *)(*(int *)(in_ECX + 0x14) + -4);
      iVar5 = 0;
      goto LAB_10153239;
    }
    uVar4 = *(uint *)(*(int *)(in_ECX + 0x14) + -4);
  }
  iVar5 = (int)uVar4 >> 0x1f;
LAB_10153239:
  if ((((*(uint *)(in_ECX + 0x20) >> 4 & 1) != 0) && (iVar5 < 1)) && (iVar5 < 0)) {
    bVar6 = uVar4 != 0;
    uVar4 = -uVar4;
    iVar5 = -(iVar5 + (uint)bVar6);
    *(uint *)(in_ECX + 0x20) = *(uint *)(in_ECX + 0x20) | 0x40;
  }
  if (*(int *)(in_ECX + 0x28) < 0) {
    *(undefined4 *)(in_ECX + 0x28) = 1;
  }
  else {
    *(uint *)(in_ECX + 0x20) = *(uint *)(in_ECX + 0x20) & 0xfffffff7;
    if (0x200 < *(int *)(in_ECX + 0x28)) {
      *(undefined4 *)(in_ECX + 0x28) = 0x200;
    }
  }
  if (uVar4 == 0 && iVar5 == 0) {
    *(uint *)(in_ECX + 0x20) = *(uint *)(in_ECX + 0x20) & 0xffffffdf;
  }
  if (uVar1 == 8) {
    type_case_integer_parse_into_buffer<>(uVar4,iVar5,param_1,param_2);
  }
  else {
    type_case_integer_parse_into_buffer<>(uVar4,param_1,param_2);
  }
  pcVar3 = (char *)(*(uint *)(in_ECX + 0x20) >> 7);
  if ((((uint)pcVar3 & 1) != 0) &&
     ((*(int *)(in_ECX + 0x38) == 0 || (pcVar3 = *(char **)(in_ECX + 0x34), *pcVar3 != '0')))) {
    *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + -1;
    **(undefined1 **)(in_ECX + 0x34) = 0x30;
    *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  }
  return CONCAT31((int3)((uint)pcVar3 >> 8),1);
}

