// rea decompile_all
// name: __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::process_string_specifier_tchar<char>
// address: 0x1018d397
// body: available
// range: 0x1018d397-0x1018d501 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<wchar_t,class
   __crt_stdio_input::string_input_adapter<wchar_t> >::process_string_specifier_tchar<char>(enum
   __crt_stdio_input::conversion_mode,char)
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::
process_string_specifier_tchar<char>
          (input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_> *this,
          conversion_mode param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  int *piVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  puVar5 = (undefined1 *)0x0;
  if (this[0x30] == (input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>)0x0)
  {
    *(int *)(this + 0x54) = *(int *)(this + 0x54) + 4;
    piVar4 = *(int **)(this + 0x54);
    puVar5 = (undefined1 *)piVar4[-1];
    if (puVar5 == (undefined1 *)0x0) {
      piVar4 = __errno();
      *piVar4 = 0x16;
      FUN_10184721();
      return false;
    }
    if ((*(uint *)this & 1) != 0) {
      *(int **)(this + 0x54) = piVar4 + 1;
      iVar6 = *piVar4;
      goto LAB_1018d3e8;
    }
  }
  iVar6 = -1;
LAB_1018d3e8:
  if (iVar6 == 0) {
    if ((*(uint *)this & 4) != 0) {
      string_input_adapter<wchar_t>::get((string_input_adapter<wchar_t> *)(this + 8));
LAB_1018d3fd:
      *puVar5 = 0;
    }
LAB_1018d400:
    piVar4 = __errno();
    *piVar4 = 0xc;
  }
  else {
    local_14 = *(uint *)(this + 0x38);
    local_18 = *(int *)(this + 0x3c);
    local_10 = iVar6;
    if ((param_1 != 0) && (iVar6 != -1)) {
      local_10 = iVar6 + -1;
    }
    local_c = 0;
    local_8 = 0;
    local_20 = puVar5;
    while( true ) {
      if (((local_14 != 0 || local_18 != 0) && (local_c == local_14)) && (local_8 == local_18))
      goto LAB_1018d4ba;
      uVar3 = string_input_adapter<wchar_t>::get((string_input_adapter<wchar_t> *)(this + 8));
      local_1c = (uint)uVar3;
      bVar1 = is_character_allowed_in_string(this,param_1,uVar3);
      if (!bVar1) break;
      if (this[0x30] ==
          (input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>)0x0) {
        if (local_10 == 0) {
          if (iVar6 != -1) goto LAB_1018d3fd;
          goto LAB_1018d400;
        }
        cVar2 = FUN_10190e26(puVar5,iVar6,&local_20,&local_10,local_1c);
        if (cVar2 == '\0') goto LAB_1018d4ba;
      }
      bVar1 = 0xfffffffe < local_c;
      local_c = local_c + 1;
      local_8 = local_8 + (uint)bVar1;
    }
    string_input_adapter<wchar_t>::unget
              ((string_input_adapter<wchar_t> *)(this + 8),(ushort)local_1c);
LAB_1018d4ba:
    if ((local_c != 0 || local_8 != 0) &&
       (((param_1 != 0 || ((local_c == local_14 && (local_8 == local_18)))) ||
        ((*(uint *)this & 4) != 0)))) {
      if (this[0x30] ==
          (input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>)0x0) {
        if (param_1 != 0) {
          *local_20 = 0;
        }
        *(int *)(this + 0x58) = *(int *)(this + 0x58) + 1;
      }
      return true;
    }
  }
  return false;
}

