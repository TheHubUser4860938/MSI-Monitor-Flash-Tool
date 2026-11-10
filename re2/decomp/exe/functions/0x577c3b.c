// rea decompile_all
// name: __crt_stdio_output::output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>::state_case_type
// address: 0x577c3b
// body: available
// range: 0x577c3b-0x577e69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::string_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::string_output_adapter<char> > >::state_case_type(void)
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_output::
output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
::state_case_type(output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                  *this)

{
  output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
  *poVar1;
  output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
  oVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_8;
  
  iVar6 = 1;
  oVar2 = this[0x31];
  local_8 = this;
  if ((char)oVar2 < 'e') {
    if (oVar2 == (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                  )0x64) {
LAB_00577cec:
      *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 0x10;
      goto LAB_00577cf0;
    }
    if ('X' < (char)oVar2) {
      if (oVar2 == (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                    )0x5a) {
        cVar5 = type_case_Z();
        goto LAB_00577c88;
      }
      if (oVar2 != (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                    )0x61) {
        if (oVar2 != (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                      )0x63) {
          return false;
        }
LAB_00577cac:
        cVar5 = type_case_c_tchar(0);
        goto LAB_00577c88;
      }
LAB_00577cfc:
      cVar5 = type_case_a();
      goto LAB_00577c88;
    }
    if (oVar2 != (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                  )0x58) {
      if (oVar2 != (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                    )0x41) {
        if (oVar2 == (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                      )0x43) goto LAB_00577cac;
        if ((char)oVar2 < 'E') {
          return false;
        }
        if ('G' < (char)oVar2) {
          if (oVar2 != (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                        )0x53) {
            return false;
          }
          goto LAB_00577c81;
        }
      }
      goto LAB_00577cfc;
    }
    uVar9 = 1;
LAB_00577c98:
    uVar8 = 0x10;
  }
  else {
    if ((char)oVar2 < 'q') {
      if (oVar2 == (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                    )0x70) {
        cVar5 = type_case_p();
        goto LAB_00577c88;
      }
      if ((char)oVar2 < 'h') goto LAB_00577cfc;
      if (oVar2 != (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                    )0x69) {
        if (oVar2 == (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                      )0x6e) {
          cVar5 = type_case_n();
        }
        else {
          if (oVar2 != (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                        )0x6f) {
            return false;
          }
          cVar5 = type_case_o();
        }
        goto LAB_00577c88;
      }
      goto LAB_00577cec;
    }
    if (oVar2 == (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                  )0x73) {
LAB_00577c81:
      cVar5 = type_case_s();
      goto LAB_00577c88;
    }
    if (oVar2 != (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                  )0x75) {
      if (oVar2 != (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                    )0x78) {
        return false;
      }
      uVar9 = 0;
      goto LAB_00577c98;
    }
LAB_00577cf0:
    uVar9 = 0;
    uVar8 = 10;
  }
  cVar5 = type_case_integer(uVar8,uVar9);
LAB_00577c88:
  if (cVar5 == '\0') {
    return false;
  }
  if (this[0x30] !=
      (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
       )0x0) {
    return true;
  }
  uVar3 = *(uint *)(this + 0x20);
  local_8 = (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
             *)((uint)local_8 & 0xff000000);
  iVar7 = 0;
  if ((uVar3 >> 4 & 1) != 0) {
    iVar7 = iVar6;
    if ((uVar3 >> 6 & 1) == 0) {
      if ((uVar3 & 1) == 0) {
        iVar7 = 0;
        if ((uVar3 >> 1 & 1) != 0) {
          local_8 = (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                     *)CONCAT31(local_8._1_3_,0x20);
          iVar7 = iVar6;
        }
      }
      else {
        local_8 = (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                   *)CONCAT31(local_8._1_3_,0x2b);
      }
    }
    else {
      local_8 = (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                 *)CONCAT31(local_8._1_3_,0x2d);
    }
  }
  oVar2 = this[0x31];
  if (((oVar2 != (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                  )0x78) &&
      (oVar2 != (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                 )0x58)) || ((uVar3 >> 5 & 1) == 0)) {
    iVar6 = 0;
  }
  if ((oVar2 == (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                 )0x61) ||
     (oVar2 == (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                )0x41)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (((char)iVar6 != '\0') || (bVar4)) {
    *(undefined1 *)((int)&local_8 + iVar7) = 0x30;
    if ((oVar2 == (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                   )0x58) ||
       (oVar2 == (output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                  )0x41)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    *(byte *)((int)&local_8 + iVar7 + 1) = (!bVar4 - 1U & 0xe0) + 0x78;
    iVar7 = iVar7 + 2;
  }
  iVar6 = (*(int *)(this + 0x24) - *(int *)(this + 0x38)) - iVar7;
  if ((uVar3 & 0xc) == 0) {
    write_multiple_characters<__crt_stdio_output::string_output_adapter<char>,char>
              ((string_output_adapter<char> *)(this + 0x448),' ',iVar6,(int *)(this + 0x18));
  }
  string_output_adapter<char>::write_string
            ((string_output_adapter<char> *)(this + 0x448),(char *)&local_8,iVar7,
             (int *)(this + 0x18),*(int **)(this + 0xc));
  poVar1 = this + 0x18;
  if (((*(uint *)(this + 0x20) >> 3 & 1) != 0) && ((*(uint *)(this + 0x20) >> 2 & 1) == 0)) {
    write_multiple_characters<__crt_stdio_output::string_output_adapter<char>,char>
              ((string_output_adapter<char> *)(this + 0x448),'0',iVar6,(int *)poVar1);
  }
  write_stored_string_tchar(0);
  if ((-1 < *(int *)poVar1) && ((*(uint *)(this + 0x20) >> 2 & 1) != 0)) {
    write_multiple_characters<__crt_stdio_output::string_output_adapter<char>,char>
              ((string_output_adapter<char> *)(this + 0x448),' ',iVar6,(int *)poVar1);
  }
  return true;
}

