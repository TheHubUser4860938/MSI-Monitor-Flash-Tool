// rea decompile_all
// name: __crt_strtox::parse_integer<unsigned_long,__crt_strtox::c_string_character_source<char>_>
// address: 0x1014f889
// body: available
// range: 0x1014f889-0x1014fab0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    unsigned long __cdecl __crt_strtox::parse_integer<unsigned long,class
   __crt_strtox::c_string_character_source<char> >(struct __crt_locale_pointers * const,class
   __crt_strtox::c_string_character_source<char>,int,bool)
   
   Library: Visual Studio 2015 Release */

ulong __cdecl
__crt_strtox::parse_integer<unsigned_long,__crt_strtox::c_string_character_source<char>_>
          (__crt_locale_pointers *param_1,char *param_2,undefined4 *param_3,uint param_4,
          char param_5)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  int local_2c;
  undefined1 local_28 [8];
  char local_20;
  char *local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  char local_8;
  undefined3 uStack_7;
  
  bVar2 = c_string_character_source<wchar_t>::validate
                    ((c_string_character_source<wchar_t> *)&param_2);
  uVar8 = param_4;
  if (bVar2) {
    if ((param_4 == 0) || ((1 < (int)param_4 && ((int)param_4 < 0x25)))) {
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_2c,param_1);
      local_10 = 0;
      local_1c = param_2;
      do {
        cVar7 = *param_2;
        param_2 = param_2 + 1;
        _local_8 = CONCAT31(uStack_7,cVar7);
        iVar4 = __ischartype_l(cVar7,8,local_28);
      } while (iVar4 != 0);
      local_c = (uint)(param_5 != '\0');
      if (cVar7 == '-') {
        local_c = local_c | 2;
LAB_1014f92c:
        cVar7 = *param_2;
        param_2 = param_2 + 1;
        _local_8 = CONCAT31(uStack_7,cVar7);
      }
      else if (cVar7 == '+') goto LAB_1014f92c;
      if ((uVar8 == 0) || (uVar8 == 0x10)) {
        if ((byte)(cVar7 - 0x30U) < 10) {
          iVar4 = cVar7 + -0x30;
        }
        else if ((byte)(cVar7 + 0x9fU) < 0x1a) {
          iVar4 = cVar7 + -0x57;
        }
        else if ((byte)(cVar7 + 0xbfU) < 0x1a) {
          iVar4 = cVar7 + -0x37;
        }
        else {
          iVar4 = -1;
        }
        if (iVar4 == 0) {
          cVar1 = *param_2;
          local_14 = CONCAT31(local_14._1_3_,cVar1);
          if ((cVar1 == 'x') || (cVar1 == 'X')) {
            if (uVar8 == 0) {
              uVar8 = 0x10;
            }
            cVar7 = param_2[1];
            param_2 = param_2 + 2;
            _local_8 = CONCAT31(uStack_7,cVar7);
          }
          else {
            if (uVar8 == 0) {
              uVar8 = 8;
            }
            param_2 = param_2 + 1;
            c_string_character_source<char>::unget
                      ((c_string_character_source<char> *)&param_2,cVar1);
          }
        }
        else if (uVar8 == 0) {
          uVar8 = 10;
        }
      }
      local_14 = (uint)(0xffffffff / (ulonglong)uVar8);
      local_18 = (uint)(0xffffffff % (ulonglong)uVar8);
      while( true ) {
        if ((byte)(cVar7 - 0x30U) < 10) {
          uVar5 = (int)cVar7 - 0x30;
        }
        else if ((byte)(cVar7 + 0x9fU) < 0x1a) {
          uVar5 = (int)cVar7 - 0x57;
        }
        else if ((byte)(cVar7 + 0xbfU) < 0x1a) {
          uVar5 = (int)cVar7 - 0x37;
        }
        else {
          uVar5 = 0xffffffff;
        }
        if ((uVar5 == 0xffffffff) || (uVar8 <= uVar5)) break;
        uVar6 = local_c | 8;
        if ((local_10 < local_14) || ((local_10 == local_14 && (uVar5 <= local_18)))) {
          local_10 = local_10 * uVar8 + uVar5;
        }
        else {
          uVar6 = local_c | 0xc;
        }
        cVar7 = *param_2;
        param_2 = param_2 + 1;
        _local_8 = CONCAT31(uStack_7,cVar7);
        local_c = uVar6;
      }
      c_string_character_source<char>::unget
                ((c_string_character_source<char> *)&param_2,(char)_local_8);
      uVar5 = local_c;
      uVar8 = local_10;
      if ((local_c & 8) == 0) {
        uVar8 = 0;
        param_2 = local_1c;
      }
      else {
        bVar2 = is_overflow_condition<unsigned_long>(local_c,local_10);
        if (bVar2) {
          piVar3 = __errno();
          *piVar3 = 0x22;
          if ((uVar5 & 1) == 0) {
            uVar8 = 0xffffffff;
          }
          else if ((uVar5 & 2) == 0) {
            uVar8 = 0x7fffffff;
          }
          else {
            uVar8 = 0x80000000;
          }
        }
        else if ((uVar5 & 2) != 0) {
          uVar8 = -uVar8;
        }
      }
      if (local_20 != '\0') {
        *(uint *)(local_2c + 0x350) = *(uint *)(local_2c + 0x350) & 0xfffffffd;
      }
      goto LAB_1014f8c2;
    }
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_1014f4c6();
  }
  uVar8 = 0;
LAB_1014f8c2:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_2;
  }
  return uVar8;
}

