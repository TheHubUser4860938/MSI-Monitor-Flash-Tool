// rea decompile_all
// name: __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::process_string_specifier_tchar<wchar_t>
// address: 0x101a5110
// body: available
// range: 0x101a5110-0x101a527b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<wchar_t,class
   __crt_stdio_input::string_input_adapter<wchar_t> >::process_string_specifier_tchar<wchar_t>(enum
   __crt_stdio_input::conversion_mode,wchar_t)
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::
process_string_specifier_tchar<wchar_t>
          (input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_> *this,
          conversion_mode param_1,wchar_t param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  ushort uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  ushort *local_1c;
  int local_8;
  
  puVar8 = (ushort *)0x0;
  if (this[0x30] == (input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>)0x0)
  {
    *(int *)(this + 0x54) = *(int *)(this + 0x54) + 4;
    piVar5 = *(int **)(this + 0x54);
    puVar8 = (ushort *)piVar5[-1];
    if (puVar8 == (ushort *)0x0) {
      piVar5 = __errno();
      *piVar5 = 0x16;
      FUN_1019ab61();
      return false;
    }
    if ((*(uint *)this & 1) != 0) {
      *(int **)(this + 0x54) = piVar5 + 1;
      iVar9 = *piVar5;
      goto LAB_101a5161;
    }
  }
  iVar9 = -1;
LAB_101a5161:
  if (iVar9 == 0) {
    if ((*(uint *)this & 4) != 0) {
      string_input_adapter<wchar_t>::get((string_input_adapter<wchar_t> *)(this + 8));
LAB_101a5176:
      *puVar8 = 0;
    }
LAB_101a517b:
    piVar5 = __errno();
    *piVar5 = 0xc;
  }
  else {
    uVar1 = *(uint *)(this + 0x38);
    iVar2 = *(int *)(this + 0x3c);
    local_8 = iVar9;
    if ((param_1 != 0) && (iVar9 != -1)) {
      local_8 = iVar9 + -1;
    }
    uVar7 = 0;
    iVar6 = 0;
    local_1c = puVar8;
    while( true ) {
      if (((uVar1 != 0 || iVar2 != 0) && (uVar7 == uVar1)) && (iVar6 == iVar2)) goto LAB_101a5232;
      uVar4 = string_input_adapter<wchar_t>::get((string_input_adapter<wchar_t> *)(this + 8));
      bVar3 = is_character_allowed_in_string(this,param_1,uVar4);
      if (!bVar3) break;
      if (this[0x30] ==
          (input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>)0x0) {
        if (local_8 == 0) {
          if (iVar9 != -1) goto LAB_101a5176;
          goto LAB_101a517b;
        }
        *local_1c = uVar4;
        local_1c = local_1c + 1;
        local_8 = local_8 + -1;
      }
      bVar3 = 0xfffffffe < uVar7;
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + (uint)bVar3;
    }
    string_input_adapter<wchar_t>::unget((string_input_adapter<wchar_t> *)(this + 8),uVar4);
LAB_101a5232:
    if ((uVar7 != 0 || iVar6 != 0) &&
       (((param_1 != 0 || ((uVar7 == uVar1 && (iVar6 == iVar2)))) || ((*(uint *)this & 4) != 0)))) {
      if (this[0x30] ==
          (input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>)0x0) {
        if (param_1 != 0) {
          *local_1c = 0;
        }
        *(int *)(this + 0x58) = *(int *)(this + 0x58) + 1;
      }
      return true;
    }
  }
  return false;
}

