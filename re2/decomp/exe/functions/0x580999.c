// rea decompile_all
// name: parse_integer<>
// address: 0x580999
// body: available
// range: 0x580999-0x580f97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00580e96) */
/* Library Function - Multiple Matches With Same Base Name
    unsigned __int64 __cdecl __crt_strtox::parse_integer<unsigned __int64,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> > >(struct __crt_locale_pointers * const,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,int,bool)
    unsigned __int64 __cdecl __crt_strtox::parse_integer<unsigned __int64,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::stream_input_adapter<wchar_t> > >(struct __crt_locale_pointers * const,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::stream_input_adapter<wchar_t> >,int,bool)
    unsigned __int64 __cdecl __crt_strtox::parse_integer<unsigned __int64,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<wchar_t> > >(struct __crt_locale_pointers * const,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<wchar_t> >,int,bool)
   
   Library: Visual Studio 2015 Release */

undefined8 parse_integer<>(__crt_locale_pointers *param_1)

{
  ulonglong uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  wchar_t wVar5;
  int *piVar6;
  uint uVar7;
  uint extraout_ECX;
  int iVar8;
  undefined4 unaff_ESI;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int in_stack_00000018;
  int in_stack_0000001c;
  undefined1 *in_stack_00000020;
  uint in_stack_00000028;
  char in_stack_0000002c;
  int local_44 [3];
  char local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  cVar3 = validate();
  uVar10 = in_stack_00000028;
  if (cVar3 != '\0') {
    if ((in_stack_00000028 == 0) ||
       ((1 < (int)in_stack_00000028 && ((int)in_stack_00000028 < 0x25)))) {
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_44,param_1);
      local_c = 0;
      local_14 = 0;
      local_34 = in_stack_00000018;
      local_30 = in_stack_0000001c;
      do {
        wVar5 = __crt_strtox::
                input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::
                get((input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>
                     *)&stack0x00000008);
        iVar8 = _iswctype(wVar5,8);
      } while (iVar8 != 0);
      local_8 = (uint)(in_stack_0000002c != '\0');
      if (wVar5 == L'-') {
        local_8 = local_8 | 2;
LAB_00580a32:
        wVar5 = __crt_strtox::
                input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::
                get((input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>
                     *)&stack0x00000008);
      }
      else if (wVar5 == L'+') goto LAB_00580a32;
      uVar9 = (uint)(ushort)wVar5;
      iVar8 = 0x30;
      local_1c = 0x3a;
      local_18 = -1;
      if ((uVar10 != 0) && (uVar10 != 0x10)) goto LAB_00580c82;
      if ((ushort)wVar5 < 0x30) {
LAB_00580c06:
        if ((((ushort)wVar5 < 0x41) || (0x5a < (ushort)wVar5)) && (0x19 < (ushort)(wVar5 + L'ﾟ')))
        {
          iVar8 = -1;
        }
        else {
          uVar7 = uVar9;
          if ((ushort)(wVar5 + L'ﾟ') < 0x1a) {
            uVar7 = uVar9 - 0x20;
          }
          iVar8 = uVar7 - 0x37;
        }
      }
      else {
        if ((ushort)wVar5 < 0x3a) {
LAB_00580a72:
          iVar8 = uVar9 - iVar8;
        }
        else {
          if ((ushort)wVar5 < 0xff10) {
            iVar8 = 0x660;
            if (((ushort)wVar5 < 0x660) ||
               ((0x669 < (ushort)wVar5 &&
                ((iVar8 = 0x6f0, (ushort)wVar5 < 0x6f0 ||
                 ((0x6f9 < (ushort)wVar5 &&
                  ((iVar8 = 0x966, (ushort)wVar5 < 0x966 ||
                   ((0x96f < (ushort)wVar5 &&
                    ((iVar8 = 0x9e6, (ushort)wVar5 < 0x9e6 ||
                     ((0x9ef < (ushort)wVar5 &&
                      ((iVar8 = 0xa66, (ushort)wVar5 < 0xa66 ||
                       ((0xa6f < (ushort)wVar5 &&
                        ((iVar8 = 0xae6, (ushort)wVar5 < 0xae6 ||
                         ((0xaef < (ushort)wVar5 &&
                          ((iVar8 = 0xb66, (ushort)wVar5 < 0xb66 ||
                           ((0xb6f < (ushort)wVar5 &&
                            ((iVar8 = 0xc66, (ushort)wVar5 < 0xc66 ||
                             ((0xc6f < (ushort)wVar5 &&
                              ((iVar8 = 0xce6, (ushort)wVar5 < 0xce6 ||
                               ((0xcef < (ushort)wVar5 &&
                                ((iVar8 = 0xd66, (ushort)wVar5 < 0xd66 ||
                                 ((0xd6f < (ushort)wVar5 &&
                                  ((iVar8 = 0xe50, (ushort)wVar5 < 0xe50 ||
                                   ((0xe59 < (ushort)wVar5 &&
                                    ((iVar8 = 0xed0, (ushort)wVar5 < 0xed0 ||
                                     ((0xed9 < (ushort)wVar5 &&
                                      ((iVar8 = 0xf20, (ushort)wVar5 < 0xf20 ||
                                       ((0xf29 < (ushort)wVar5 &&
                                        ((iVar8 = 0x1040, (ushort)wVar5 < 0x1040 ||
                                         ((0x1049 < (ushort)wVar5 &&
                                          ((iVar8 = 0x17e0, (ushort)wVar5 < 0x17e0 ||
                                           ((0x17e9 < (ushort)wVar5 &&
                                            ((iVar8 = 0x1810, (ushort)wVar5 < 0x1810 ||
                                             (0x1819 < (ushort)wVar5))))))))))))))))))))))))))))))))
                             )))))))))))))))))))))))))))))) goto LAB_00580c06;
            goto LAB_00580a72;
          }
          if ((ushort)wVar5 < 0xff1a) {
            iVar8 = uVar9 - 0xff10;
          }
          else {
            iVar8 = -1;
          }
        }
        if (iVar8 == -1) goto LAB_00580c06;
      }
      if (iVar8 == 0) {
        wVar5 = __crt_strtox::
                input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::
                get((input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>
                     *)&stack0x00000008);
        if ((wVar5 == L'x') || (wVar5 == L'X')) {
          if (uVar10 == 0) {
            uVar10 = 0x10;
            in_stack_00000028 = 0x10;
          }
          wVar5 = __crt_strtox::
                  input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>
                  ::get((input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>
                         *)&stack0x00000008);
          uVar9 = (uint)(ushort)wVar5;
        }
        else {
          if (uVar10 == 0) {
            uVar10 = 8;
            in_stack_00000028 = 8;
          }
          __crt_strtox::
          input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::unget
                    ((input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>
                      *)&stack0x00000008,wVar5);
        }
      }
      else if (uVar10 == 0) {
        uVar10 = 10;
        in_stack_00000028 = 10;
      }
LAB_00580c82:
      local_28 = (int)uVar10 >> 0x1f;
      local_2c = uVar10;
      uVar11 = __aulldvrm(0xffffffff,0xffffffff,uVar10,local_28);
      local_24 = extraout_ECX;
      local_20 = uVar10;
      do {
        uVar1 = CONCAT44(local_14,local_c);
        local_10 = (undefined4)(uVar11 >> 0x20);
        local_1c = (undefined4)uVar11;
        uVar10 = 0xffffffff;
        iVar8 = 0x30;
        wVar5 = (wchar_t)uVar9;
        if ((ushort)wVar5 < 0x30) {
LAB_00580e3e:
          uVar10 = 0xffffffff;
          if (((0x40 < (ushort)wVar5) && ((ushort)wVar5 < 0x5b)) ||
             ((ushort)(wVar5 + L'ﾟ') < 0x1a)) {
            if ((ushort)(wVar5 + L'ﾟ') < 0x1a) {
              uVar9 = uVar9 - 0x20;
            }
            uVar10 = uVar9 - 0x37;
          }
          if (uVar10 == 0xffffffff) goto LAB_00580eeb;
        }
        else {
          if ((ushort)wVar5 < 0x3a) {
LAB_00580e30:
            uVar10 = uVar9 - iVar8;
          }
          else {
            iVar8 = 0xff10;
            if ((ushort)wVar5 < 0xff10) {
              iVar8 = 0x660;
              if (((ushort)wVar5 < 0x660) ||
                 ((0x669 < (ushort)wVar5 &&
                  ((iVar8 = 0x6f0, (ushort)wVar5 < 0x6f0 ||
                   ((0x6f9 < (ushort)wVar5 &&
                    ((iVar8 = 0x966, (ushort)wVar5 < 0x966 ||
                     ((0x96f < (ushort)wVar5 &&
                      ((iVar8 = 0x9e6, (ushort)wVar5 < 0x9e6 ||
                       ((0x9ef < (ushort)wVar5 &&
                        ((iVar8 = 0xa66, (ushort)wVar5 < 0xa66 ||
                         ((0xa6f < (ushort)wVar5 &&
                          ((iVar8 = 0xae6, (ushort)wVar5 < 0xae6 ||
                           ((0xaef < (ushort)wVar5 &&
                            ((iVar8 = 0xb66, (ushort)wVar5 < 0xb66 ||
                             ((0xb6f < (ushort)wVar5 &&
                              ((iVar8 = 0xc66, (ushort)wVar5 < 0xc66 ||
                               ((0xc6f < (ushort)wVar5 &&
                                ((iVar8 = 0xce6, (ushort)wVar5 < 0xce6 ||
                                 ((0xcef < (ushort)wVar5 &&
                                  ((iVar8 = 0xd66, (ushort)wVar5 < 0xd66 ||
                                   ((0xd6f < (ushort)wVar5 &&
                                    ((iVar8 = 0xe50, (ushort)wVar5 < 0xe50 ||
                                     ((0xe59 < (ushort)wVar5 &&
                                      ((iVar8 = 0xed0, (ushort)wVar5 < 0xed0 ||
                                       ((0xed9 < (ushort)wVar5 &&
                                        ((iVar8 = 0xf20, (ushort)wVar5 < 0xf20 ||
                                         ((0xf29 < (ushort)wVar5 &&
                                          ((iVar8 = 0x1040, (ushort)wVar5 < 0x1040 ||
                                           ((0x1049 < (ushort)wVar5 &&
                                            ((iVar8 = 0x17e0, (ushort)wVar5 < 0x17e0 ||
                                             ((0x17e9 < (ushort)wVar5 &&
                                              ((iVar8 = 0x1810, (ushort)wVar5 < 0x1810 ||
                                               (0x1819 < (ushort)wVar5))))))))))))))))))))))))))))))
                                )))))))))))))))))))))))))))))))) goto LAB_00580e3e;
              goto LAB_00580e30;
            }
            if ((ushort)wVar5 < 0xff1a) goto LAB_00580e30;
          }
          if (uVar10 == 0xffffffff) goto LAB_00580e3e;
        }
        if (in_stack_00000028 <= uVar10) goto LAB_00580eeb;
        if ((uVar1 < uVar11) || ((uVar11 == uVar1 && ((local_20 != 0 || (uVar10 <= local_24)))))) {
          local_8 = local_8 | 8;
          lVar12 = __allmul(local_2c,local_28,local_c,local_14);
          uVar11 = CONCAT44(local_10,local_1c);
          uVar1 = lVar12 + (ulonglong)uVar10;
        }
        else {
          local_8 = local_8 | 0xc;
        }
        local_14 = (int)(uVar1 >> 0x20);
        local_c = (int)uVar1;
        local_10 = (undefined4)(uVar11 >> 0x20);
        local_1c = (undefined4)uVar11;
        wVar5 = __crt_strtox::
                input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::
                get((input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>
                     *)&stack0x00000008);
        uVar11 = CONCAT44(local_10,local_1c);
        uVar9 = (uint)(ushort)wVar5;
      } while( true );
    }
    piVar6 = __errno();
    *piVar6 = 0x16;
    FUN_0057662d();
  }
  local_18 = 0;
  iVar8 = 0;
LAB_00580f7d:
  if ((in_stack_00000020 != (undefined1 *)0x0) && (in_stack_00000018 == 0 && in_stack_0000001c == 0)
     ) {
    *in_stack_00000020 = 0;
  }
  return CONCAT44(iVar8,local_18);
LAB_00580eeb:
  __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::
  unget((input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_> *)
        &stack0x00000008,wVar5);
  iVar2 = local_c;
  iVar8 = local_14;
  if ((local_8 & 8) == 0) {
    restore_state(local_34,(short)local_30);
    local_18 = 0;
    iVar8 = 0;
  }
  else {
    bVar4 = __crt_strtox::is_overflow_condition<unsigned___int64>
                      (local_8,CONCAT44(unaff_ESI,local_14));
    if (bVar4) {
      piVar6 = __errno();
      *piVar6 = 0x22;
      if ((local_8 & 1) == 0) {
        iVar8 = -1;
        local_18 = -1;
      }
      else if ((local_8 & 2) == 0) {
        iVar8 = 0x7fffffff;
      }
      else {
        local_18 = 0;
        iVar8 = -0x80000000;
      }
    }
    else {
      local_18 = iVar2;
      if ((local_8 & 2) != 0) {
        local_18 = -iVar2;
        iVar8 = -(iVar8 + (uint)(iVar2 != 0));
      }
    }
  }
  if (local_38 != '\0') {
    *(uint *)(local_44[0] + 0x350) = *(uint *)(local_44[0] + 0x350) & 0xfffffffd;
  }
  goto LAB_00580f7d;
}

