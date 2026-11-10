// rea decompile_all
// name: __crt_stdio_output::output_processor<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>,__crt_stdio_output::format_validation_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_>_>::state_case_type
// address: 0x10170dd7
// body: available
// range: 0x10170dd7-0x10171033 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::state_case_type(void)
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_output::
output_processor<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>,__crt_stdio_output::format_validation_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_>_>
::state_case_type(output_processor<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>,__crt_stdio_output::format_validation_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_>_>
                  *this)

{
  output_processor<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>,__crt_stdio_output::format_validation_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_>_>
  *poVar1;
  short sVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  ushort uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 local_10;
  undefined2 local_c;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  iVar8 = 0;
  uVar9 = *(ushort *)(this + 0x32);
  if (uVar9 < 0x65) {
    if (uVar9 == 100) {
LAB_10170e96:
      *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 0x10;
LAB_10170e9a:
      uVar12 = 0;
      uVar11 = 10;
LAB_10170e9d:
      cVar6 = type_case_integer(uVar11,uVar12);
    }
    else if (uVar9 < 0x59) {
      if (uVar9 == 0x58) {
        uVar12 = 1;
LAB_10170e42:
        uVar11 = 0x10;
        goto LAB_10170e9d;
      }
      if (uVar9 != 0x41) {
        if (uVar9 == 0x43) goto LAB_10170e56;
        if (uVar9 < 0x45) goto LAB_10171024;
        if (0x47 < uVar9) {
          if (uVar9 != 0x53) goto LAB_10171024;
          goto LAB_10170e2a;
        }
      }
LAB_10170ea6:
      cVar6 = type_case_a();
    }
    else if (uVar9 == 0x5a) {
      cVar6 = type_case_Z();
    }
    else {
      if (uVar9 == 0x61) goto LAB_10170ea6;
      if (uVar9 != 99) goto LAB_10171024;
LAB_10170e56:
      cVar6 = type_case_c_tchar(0);
    }
  }
  else if (uVar9 < 0x71) {
    if (uVar9 == 0x70) {
      cVar6 = type_case_p();
    }
    else {
      if (uVar9 < 0x68) goto LAB_10170ea6;
      if (uVar9 == 0x69) goto LAB_10170e96;
      if (uVar9 == 0x6e) {
        cVar6 = type_case_n();
      }
      else {
        if (uVar9 != 0x6f) goto LAB_10171024;
        cVar6 = type_case_o();
      }
    }
  }
  else {
    if (uVar9 != 0x73) {
      if (uVar9 != 0x75) {
        if (uVar9 != 0x78) goto LAB_10171024;
        uVar12 = 0;
        goto LAB_10170e42;
      }
      goto LAB_10170e9a;
    }
LAB_10170e2a:
    cVar6 = type_case_s();
  }
  if ((cVar6 == '\0') ||
     (this[0x30] !=
      (output_processor<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>,__crt_stdio_output::format_validation_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_>_>
       )0x0)) goto LAB_10171024;
  uVar3 = *(uint *)(this + 0x20);
  local_10 = 0;
  local_c = 0;
  if ((uVar3 >> 4 & 1) != 0) {
    if ((uVar3 >> 6 & 1) == 0) {
      if ((uVar3 & 1) == 0) {
        if ((uVar3 >> 1 & 1) == 0) goto LAB_10170f24;
        uVar9 = 0x20;
      }
      else {
        uVar9 = 0x2b;
      }
    }
    else {
      uVar9 = 0x2d;
    }
    local_10 = (uint)uVar9;
    iVar8 = 1;
  }
LAB_10170f24:
  sVar2 = *(short *)(this + 0x32);
  if (((sVar2 == 0x78) || (sVar2 == 0x58)) && ((uVar3 >> 5 & 1) != 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((sVar2 == 0x61) || (sVar2 == 0x41)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((bVar4) || (bVar5)) {
    *(undefined2 *)((int)&local_10 + iVar8 * 2) = 0x30;
    if ((sVar2 == 0x58) || (sVar2 == 0x41)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    *(short *)((int)&local_10 + iVar8 * 2 + 2) = (short)(char)((!bVar4 - 1U & 0xe0) + 0x78);
    iVar8 = iVar8 + 2;
  }
  iVar10 = (*(int *)(this + 0x24) - *(int *)(this + 0x38)) - iVar8;
  if ((uVar3 & 0xc) == 0) {
    write_multiple_characters<__crt_stdio_output::string_output_adapter<wchar_t>,char>
              ((string_output_adapter<wchar_t> *)(this + 0x448),' ',iVar10,(int *)(this + 0x18));
  }
  string_output_adapter<wchar_t>::write_string
            ((string_output_adapter<wchar_t> *)(this + 0x448),(wchar_t *)&local_10,iVar8,
             (int *)(this + 0x18),*(int **)(this + 0xc));
  poVar1 = this + 0x18;
  if (((*(uint *)(this + 0x20) >> 3 & 1) != 0) && ((*(uint *)(this + 0x20) >> 2 & 1) == 0)) {
    write_multiple_characters<__crt_stdio_output::string_output_adapter<wchar_t>,char>
              ((string_output_adapter<wchar_t> *)(this + 0x448),'0',iVar10,(int *)poVar1);
  }
  write_stored_string_tchar(0);
  if ((-1 < *(int *)poVar1) && ((*(uint *)(this + 0x20) >> 2 & 1) != 0)) {
    write_multiple_characters<__crt_stdio_output::string_output_adapter<wchar_t>,char>
              ((string_output_adapter<wchar_t> *)(this + 0x448),' ',iVar10,(int *)poVar1);
  }
LAB_10171024:
  uVar7 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar7;
}

