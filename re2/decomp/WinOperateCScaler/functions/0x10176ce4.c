// rea decompile_all
// name: parse_floating_point_from_source<>
// address: 0x10176ce4
// body: available
// range: 0x10176ce4-0x10177b11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    enum __crt_strtox::floating_point_parse_result __cdecl
   __crt_strtox::parse_floating_point_from_source<class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> > >(struct __crt_locale_pointers * const,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> > &,struct __crt_strtox::floating_point_string
   &)
    enum __crt_strtox::floating_point_parse_result __cdecl
   __crt_strtox::parse_floating_point_from_source<class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::stream_input_adapter<wchar_t> > >(struct __crt_locale_pointers * const,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::stream_input_adapter<wchar_t> > &,struct __crt_strtox::floating_point_string
   &)
    enum __crt_strtox::floating_point_parse_result __cdecl
   __crt_strtox::parse_floating_point_from_source<class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<wchar_t> > >(struct __crt_locale_pointers * const,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<wchar_t> > &,struct __crt_strtox::floating_point_string
   &)
   
   Library: Visual Studio 2015 Release */

uint parse_floating_point_from_source<>
               (int *param_1,
               input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>
               *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  wchar_t wVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  bool bVar11;
  int local_a4;
  int local_84;
  int local_24;
  int *local_1c;
  int local_18;
  wchar_t local_c [3];
  char local_5;
  
  cVar4 = validate();
  if (cVar4 == '\0') {
    return 7;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  local_c[0] = __crt_strtox::
               input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::
               get(param_2);
  while (iVar7 = _iswctype(local_c[0],8), iVar7 != 0) {
    local_c[0] = __crt_strtox::
                 input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::
                 get(param_2);
  }
  piVar10 = param_3 + 0xc2;
  *(bool *)piVar10 = local_c[0] == L'-';
  if ((local_c[0] == L'-') || (local_c[0] == L'+')) {
    local_c[0] = __crt_strtox::
                 input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::
                 get(param_2);
  }
  if ((local_c[0] == L'I') || (local_c[0] == L'i')) {
    uVar9 = parse_floating_point_possible_infinity<>(local_c,param_2,uVar1,uVar2);
    return uVar9;
  }
  if ((local_c[0] == L'N') || (local_c[0] == L'n')) {
    uVar9 = parse_floating_point_possible_nan<>(local_c,param_2,uVar1,uVar2);
    return uVar9;
  }
  local_18 = 0;
  local_5 = '\0';
  cVar4 = '\0';
  if (local_c[0] == L'0') {
    wVar6 = __crt_strtox::
            input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::get
                      (param_2);
    if ((wVar6 == L'x') || (wVar6 == L'X')) {
      local_5 = '\x01';
      local_c[0] = __crt_strtox::
                   input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>
                   ::get(param_2);
      cVar4 = local_5;
    }
    else {
      __crt_strtox::
      input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::unget
                (param_2,wVar6);
      cVar4 = '\0';
    }
  }
  bVar11 = false;
  local_24 = 0;
  local_1c = param_3 + 2;
  if (local_c[0] == L'0') {
    bVar11 = true;
    do {
      local_c[0] = __crt_strtox::
                   input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>
                   ::get(param_2);
    } while (local_c[0] == L'0');
  }
  local_a4 = 0x660;
  local_84 = 0x6f0;
  uVar9 = ((cVar4 == '\0') - 1 & 6) + 9;
  do {
    if ((ushort)local_c[0] < 0x30) goto LAB_101771b0;
    if ((ushort)local_c[0] < 0x3a) {
      uVar8 = (ushort)local_c[0] - 0x30;
LAB_101771ab:
      if (uVar8 == 0xffffffff) goto LAB_101771b0;
    }
    else {
      if (0xff0f < (ushort)local_c[0]) {
        if ((ushort)local_c[0] < 0xff1a) {
          uVar8 = (ushort)local_c[0] - 0xff10;
        }
        else {
          uVar8 = 0xffffffff;
        }
        goto LAB_101771ab;
      }
      if (0x65f < (ushort)local_c[0]) {
        if ((ushort)local_c[0] < 0x66a) {
          uVar8 = (ushort)local_c[0] - 0x660;
        }
        else {
          if ((ushort)local_c[0] < 0x6f0) goto LAB_101771b0;
          if ((ushort)local_c[0] < 0x6fa) {
            uVar8 = (ushort)local_c[0] - 0x6f0;
          }
          else {
            if ((ushort)local_c[0] < 0x966) goto LAB_101771b0;
            if ((ushort)local_c[0] < 0x970) {
              uVar8 = (ushort)local_c[0] - 0x966;
            }
            else {
              if ((ushort)local_c[0] < 0x9e6) goto LAB_101771b0;
              if ((ushort)local_c[0] < 0x9f0) {
                uVar8 = (ushort)local_c[0] - 0x9e6;
              }
              else {
                if ((ushort)local_c[0] < 0xa66) goto LAB_101771b0;
                if ((ushort)local_c[0] < 0xa70) {
                  uVar8 = (ushort)local_c[0] - 0xa66;
                }
                else {
                  if ((ushort)local_c[0] < 0xae6) goto LAB_101771b0;
                  if ((ushort)local_c[0] < 0xaf0) {
                    uVar8 = (ushort)local_c[0] - 0xae6;
                  }
                  else {
                    if ((ushort)local_c[0] < 0xb66) goto LAB_101771b0;
                    if ((ushort)local_c[0] < 0xb70) {
                      uVar8 = (ushort)local_c[0] - 0xb66;
                    }
                    else {
                      if ((ushort)local_c[0] < 0xc66) goto LAB_101771b0;
                      if ((ushort)local_c[0] < 0xc70) {
                        uVar8 = (ushort)local_c[0] - 0xc66;
                      }
                      else {
                        if ((ushort)local_c[0] < 0xce6) goto LAB_101771b0;
                        if ((ushort)local_c[0] < 0xcf0) {
                          uVar8 = (ushort)local_c[0] - 0xce6;
                        }
                        else {
                          if ((ushort)local_c[0] < 0xd66) goto LAB_101771b0;
                          if ((ushort)local_c[0] < 0xd70) {
                            uVar8 = (ushort)local_c[0] - 0xd66;
                          }
                          else {
                            if ((ushort)local_c[0] < 0xe50) goto LAB_101771b0;
                            if ((ushort)local_c[0] < 0xe5a) {
                              uVar8 = (ushort)local_c[0] - 0xe50;
                            }
                            else {
                              if ((ushort)local_c[0] < 0xed0) goto LAB_101771b0;
                              if ((ushort)local_c[0] < 0xeda) {
                                uVar8 = (ushort)local_c[0] - 0xed0;
                              }
                              else {
                                if ((ushort)local_c[0] < 0xf20) goto LAB_101771b0;
                                if ((ushort)local_c[0] < 0xf2a) {
                                  uVar8 = (ushort)local_c[0] - 0xf20;
                                }
                                else {
                                  if ((ushort)local_c[0] < 0x1040) goto LAB_101771b0;
                                  if ((ushort)local_c[0] < 0x104a) {
                                    uVar8 = (ushort)local_c[0] - 0x1040;
                                  }
                                  else {
                                    if ((ushort)local_c[0] < 0x17e0) goto LAB_101771b0;
                                    if ((ushort)local_c[0] < 0x17ea) {
                                      uVar8 = (ushort)local_c[0] - 0x17e0;
                                    }
                                    else {
                                      if (((ushort)local_c[0] < 0x1810) ||
                                         (0x1819 < (ushort)local_c[0])) goto LAB_101771b0;
                                      uVar8 = (ushort)local_c[0] - 0x1810;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_101771ab;
      }
LAB_101771b0:
      if ((((ushort)local_c[0] < 0x41) || (0x5a < (ushort)local_c[0])) &&
         (0x19 < (ushort)(local_c[0] + L'ﾟ'))) {
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = (uint)(ushort)local_c[0];
        if ((ushort)(local_c[0] + L'ﾟ') < 0x1a) {
          uVar8 = uVar8 - 0x20;
        }
        uVar8 = uVar8 - 0x37;
      }
    }
    if (uVar9 < uVar8) goto LAB_1017721c;
    bVar11 = true;
    if (local_1c != piVar10) {
      *(char *)local_1c = (char)uVar8;
      local_1c = (int *)((int)local_1c + 1);
    }
    local_24 = local_24 + 1;
    local_c[0] = __crt_strtox::
                 input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::
                 get(param_2);
  } while( true );
LAB_10177853:
  local_18 = 0x1451;
LAB_1017785a:
  do {
    if ((ushort)local_c[0] < 0x30) {
LAB_101779f4:
      if ((((ushort)local_c[0] < 0x41) || (0x5a < (ushort)local_c[0])) &&
         (0x19 < (ushort)(local_c[0] + L'ﾟ'))) {
        uVar9 = 0xffffffff;
      }
      else {
        uVar9 = (uint)(ushort)local_c[0];
        if ((ushort)(local_c[0] + L'ﾟ') < 0x1a) {
          uVar9 = uVar9 - 0x20;
        }
        uVar9 = uVar9 - 0x37;
      }
    }
    else {
      iVar7 = 0x30;
      if ((ushort)local_c[0] < 0x3a) {
LAB_1017786c:
        uVar9 = (uint)(ushort)local_c[0] - iVar7;
      }
      else {
        iVar7 = 0xff10;
        if ((ushort)local_c[0] < 0xff10) {
          if (((ushort)local_c[0] < 0x660) ||
             ((iVar7 = local_a4, 0x669 < (ushort)local_c[0] &&
              (((ushort)local_c[0] < 0x6f0 ||
               ((iVar7 = local_84, 0x6f9 < (ushort)local_c[0] &&
                ((iVar7 = 0x966, (ushort)local_c[0] < 0x966 ||
                 ((0x96f < (ushort)local_c[0] &&
                  ((iVar7 = 0x9e6, (ushort)local_c[0] < 0x9e6 ||
                   ((0x9ef < (ushort)local_c[0] &&
                    ((iVar7 = 0xa66, (ushort)local_c[0] < 0xa66 ||
                     ((0xa6f < (ushort)local_c[0] &&
                      ((iVar7 = 0xae6, (ushort)local_c[0] < 0xae6 ||
                       ((0xaef < (ushort)local_c[0] &&
                        ((iVar7 = 0xb66, (ushort)local_c[0] < 0xb66 ||
                         ((0xb6f < (ushort)local_c[0] &&
                          ((iVar7 = 0xc66, (ushort)local_c[0] < 0xc66 ||
                           ((0xc6f < (ushort)local_c[0] &&
                            ((iVar7 = 0xce6, (ushort)local_c[0] < 0xce6 ||
                             ((0xcef < (ushort)local_c[0] &&
                              ((iVar7 = 0xd66, (ushort)local_c[0] < 0xd66 ||
                               ((0xd6f < (ushort)local_c[0] &&
                                ((iVar7 = 0xe50, (ushort)local_c[0] < 0xe50 ||
                                 ((0xe59 < (ushort)local_c[0] &&
                                  ((iVar7 = 0xed0, (ushort)local_c[0] < 0xed0 ||
                                   ((0xed9 < (ushort)local_c[0] &&
                                    ((iVar7 = 0xf20, (ushort)local_c[0] < 0xf20 ||
                                     ((0xf29 < (ushort)local_c[0] &&
                                      ((iVar7 = 0x1040, (ushort)local_c[0] < 0x1040 ||
                                       ((0x1049 < (ushort)local_c[0] &&
                                        ((iVar7 = 0x17e0, (ushort)local_c[0] < 0x17e0 ||
                                         ((0x17e9 < (ushort)local_c[0] &&
                                          ((iVar7 = 0x1810, (ushort)local_c[0] < 0x1810 ||
                                           (0x1819 < (ushort)local_c[0])))))))))))))))))))))))))))))
                             ))))))))))))))))))))))))))))))))) goto LAB_101779f4;
          goto LAB_1017786c;
        }
        if ((ushort)local_c[0] < 0xff1a) goto LAB_1017786c;
        uVar9 = 0xffffffff;
      }
      if (uVar9 == 0xffffffff) goto LAB_101779f4;
    }
    if (9 < uVar9) break;
    local_c[0] = __crt_strtox::
                 input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::
                 get(param_2);
  } while( true );
  if (bVar11) {
    local_18 = -local_18;
  }
  iVar7 = local_18;
  if (!bVar3) {
    cVar4 = FID_conflict_operator__();
    if (cVar4 == '\0') {
      return 7;
    }
    local_c[0] = __crt_strtox::
                 input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::
                 get(param_2);
  }
  goto LAB_10177a72;
LAB_1017721c:
  if ((uint)(ushort)local_c[0] == (int)*(char *)**(undefined4 **)(*param_1 + 0x88)) {
    local_c[0] = __crt_strtox::
                 input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::
                 get(param_2);
    if ((local_1c == param_3 + 2) && (local_c[0] == L'0')) {
      bVar11 = true;
      local_c[0] = L'0';
      do {
        local_24 = local_24 + -1;
        local_c[0] = __crt_strtox::
                     input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>
                     ::get(param_2);
      } while (local_c[0] == L'0');
    }
    do {
      if ((ushort)local_c[0] < 0x30) goto LAB_1017749c;
      if ((ushort)local_c[0] < 0x3a) {
        uVar8 = (ushort)local_c[0] - 0x30;
LAB_10177497:
        if (uVar8 == 0xffffffff) goto LAB_1017749c;
      }
      else {
        if (0xff0f < (ushort)local_c[0]) {
          if ((ushort)local_c[0] < 0xff1a) {
            uVar8 = (ushort)local_c[0] - 0xff10;
          }
          else {
            uVar8 = 0xffffffff;
          }
          goto LAB_10177497;
        }
        if (0x65f < (ushort)local_c[0]) {
          if ((ushort)local_c[0] < 0x66a) {
            uVar8 = (ushort)local_c[0] - 0x660;
          }
          else {
            if ((ushort)local_c[0] < 0x6f0) goto LAB_1017749c;
            if ((ushort)local_c[0] < 0x6fa) {
              uVar8 = (ushort)local_c[0] - 0x6f0;
            }
            else {
              if ((ushort)local_c[0] < 0x966) goto LAB_1017749c;
              if ((ushort)local_c[0] < 0x970) {
                uVar8 = (ushort)local_c[0] - 0x966;
              }
              else {
                if ((ushort)local_c[0] < 0x9e6) goto LAB_1017749c;
                if ((ushort)local_c[0] < 0x9f0) {
                  uVar8 = (ushort)local_c[0] - 0x9e6;
                }
                else {
                  if ((ushort)local_c[0] < 0xa66) goto LAB_1017749c;
                  if ((ushort)local_c[0] < 0xa70) {
                    uVar8 = (ushort)local_c[0] - 0xa66;
                  }
                  else {
                    if ((ushort)local_c[0] < 0xae6) goto LAB_1017749c;
                    if ((ushort)local_c[0] < 0xaf0) {
                      uVar8 = (ushort)local_c[0] - 0xae6;
                    }
                    else {
                      if ((ushort)local_c[0] < 0xb66) goto LAB_1017749c;
                      if ((ushort)local_c[0] < 0xb70) {
                        uVar8 = (ushort)local_c[0] - 0xb66;
                      }
                      else {
                        if ((ushort)local_c[0] < 0xc66) goto LAB_1017749c;
                        if ((ushort)local_c[0] < 0xc70) {
                          uVar8 = (ushort)local_c[0] - 0xc66;
                        }
                        else {
                          if ((ushort)local_c[0] < 0xce6) goto LAB_1017749c;
                          if ((ushort)local_c[0] < 0xcf0) {
                            uVar8 = (ushort)local_c[0] - 0xce6;
                          }
                          else {
                            if ((ushort)local_c[0] < 0xd66) goto LAB_1017749c;
                            if ((ushort)local_c[0] < 0xd70) {
                              uVar8 = (ushort)local_c[0] - 0xd66;
                            }
                            else {
                              if ((ushort)local_c[0] < 0xe50) goto LAB_1017749c;
                              if ((ushort)local_c[0] < 0xe5a) {
                                uVar8 = (ushort)local_c[0] - 0xe50;
                              }
                              else {
                                if ((ushort)local_c[0] < 0xed0) goto LAB_1017749c;
                                if ((ushort)local_c[0] < 0xeda) {
                                  uVar8 = (ushort)local_c[0] - 0xed0;
                                }
                                else {
                                  if ((ushort)local_c[0] < 0xf20) goto LAB_1017749c;
                                  if ((ushort)local_c[0] < 0xf2a) {
                                    uVar8 = (ushort)local_c[0] - 0xf20;
                                  }
                                  else {
                                    if ((ushort)local_c[0] < 0x1040) goto LAB_1017749c;
                                    if ((ushort)local_c[0] < 0x104a) {
                                      uVar8 = (ushort)local_c[0] - 0x1040;
                                    }
                                    else {
                                      if ((ushort)local_c[0] < 0x17e0) goto LAB_1017749c;
                                      if ((ushort)local_c[0] < 0x17ea) {
                                        uVar8 = (ushort)local_c[0] - 0x17e0;
                                      }
                                      else {
                                        if (((ushort)local_c[0] < 0x1810) ||
                                           (0x1819 < (ushort)local_c[0])) goto LAB_1017749c;
                                        uVar8 = (ushort)local_c[0] - 0x1810;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_10177497;
        }
LAB_1017749c:
        if ((((ushort)local_c[0] < 0x41) || (0x5a < (ushort)local_c[0])) &&
           (0x19 < (ushort)(local_c[0] + L'ﾟ'))) {
          uVar8 = 0xffffffff;
        }
        else {
          uVar8 = (uint)(ushort)local_c[0];
          if ((ushort)(local_c[0] + L'ﾟ') < 0x1a) {
            uVar8 = uVar8 - 0x20;
          }
          uVar8 = uVar8 - 0x37;
        }
      }
      if (uVar9 < uVar8) break;
      bVar11 = true;
      if (local_1c != piVar10) {
        *(char *)local_1c = (char)uVar8;
        local_1c = (int *)((int)local_1c + 1);
      }
      local_c[0] = __crt_strtox::
                   input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>
                   ::get(param_2);
    } while( true );
  }
  if (!bVar11) {
    cVar5 = FID_conflict_operator__();
    if (cVar5 == '\0') {
      return 7;
    }
    return ((cVar4 == '\0') - 1 & 0xfffffffb) + 7;
  }
  __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::
  unget(param_2,local_c[0]);
  local_c[0] = __crt_strtox::
               input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::
               get(param_2);
  if (local_c[0] == L'E') {
LAB_1017756e:
    cVar4 = local_5 == '\0';
  }
  else if (local_c[0] == L'P') {
LAB_10177569:
    cVar4 = local_5;
  }
  else {
    if (local_c[0] == L'e') goto LAB_1017756e;
    cVar4 = '\0';
    if (local_c[0] == L'p') goto LAB_10177569;
  }
  iVar7 = 0;
  if (cVar4 != '\0') {
    local_c[0] = __crt_strtox::
                 input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::
                 get(param_2);
    bVar11 = local_c[0] == L'-';
    if ((local_c[0] == L'+') || (local_c[0] == L'-')) {
      local_c[0] = __crt_strtox::
                   input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>
                   ::get(param_2);
    }
    bVar3 = false;
    if (local_c[0] != L'0') goto LAB_101775dc;
    local_c[0] = L'0';
    do {
      local_c[0] = __crt_strtox::
                   input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>
                   ::get(param_2);
    } while (local_c[0] == L'0');
    do {
      bVar3 = true;
LAB_101775dc:
      if ((ushort)local_c[0] < 0x30) goto LAB_101777ed;
      if ((ushort)local_c[0] < 0x3a) {
        uVar9 = (ushort)local_c[0] - 0x30;
LAB_101777e8:
        if (uVar9 == 0xffffffff) goto LAB_101777ed;
      }
      else {
        if (0xff0f < (ushort)local_c[0]) {
          if ((ushort)local_c[0] < 0xff1a) {
            uVar9 = (ushort)local_c[0] - 0xff10;
          }
          else {
            uVar9 = 0xffffffff;
          }
          goto LAB_101777e8;
        }
        if (0x65f < (ushort)local_c[0]) {
          if ((ushort)local_c[0] < 0x66a) {
            uVar9 = (ushort)local_c[0] - 0x660;
          }
          else {
            if ((ushort)local_c[0] < 0x6f0) goto LAB_101777ed;
            if ((ushort)local_c[0] < 0x6fa) {
              uVar9 = (ushort)local_c[0] - 0x6f0;
            }
            else {
              if ((ushort)local_c[0] < 0x966) goto LAB_101777ed;
              if ((ushort)local_c[0] < 0x970) {
                uVar9 = (ushort)local_c[0] - 0x966;
              }
              else {
                if ((ushort)local_c[0] < 0x9e6) goto LAB_101777ed;
                if ((ushort)local_c[0] < 0x9f0) {
                  uVar9 = (ushort)local_c[0] - 0x9e6;
                }
                else {
                  if ((ushort)local_c[0] < 0xa66) goto LAB_101777ed;
                  if ((ushort)local_c[0] < 0xa70) {
                    uVar9 = (ushort)local_c[0] - 0xa66;
                  }
                  else {
                    if ((ushort)local_c[0] < 0xae6) goto LAB_101777ed;
                    if ((ushort)local_c[0] < 0xaf0) {
                      uVar9 = (ushort)local_c[0] - 0xae6;
                    }
                    else {
                      if ((ushort)local_c[0] < 0xb66) goto LAB_101777ed;
                      if ((ushort)local_c[0] < 0xb70) {
                        uVar9 = (ushort)local_c[0] - 0xb66;
                      }
                      else {
                        if ((ushort)local_c[0] < 0xc66) goto LAB_101777ed;
                        if ((ushort)local_c[0] < 0xc70) {
                          uVar9 = (ushort)local_c[0] - 0xc66;
                        }
                        else {
                          if ((ushort)local_c[0] < 0xce6) goto LAB_101777ed;
                          if ((ushort)local_c[0] < 0xcf0) {
                            uVar9 = (ushort)local_c[0] - 0xce6;
                          }
                          else {
                            if ((ushort)local_c[0] < 0xd66) goto LAB_101777ed;
                            if ((ushort)local_c[0] < 0xd70) {
                              uVar9 = (ushort)local_c[0] - 0xd66;
                            }
                            else {
                              if ((ushort)local_c[0] < 0xe50) goto LAB_101777ed;
                              if ((ushort)local_c[0] < 0xe5a) {
                                uVar9 = (ushort)local_c[0] - 0xe50;
                              }
                              else {
                                if ((ushort)local_c[0] < 0xed0) goto LAB_101777ed;
                                if ((ushort)local_c[0] < 0xeda) {
                                  uVar9 = (ushort)local_c[0] - 0xed0;
                                }
                                else {
                                  if ((ushort)local_c[0] < 0xf20) goto LAB_101777ed;
                                  if ((ushort)local_c[0] < 0xf2a) {
                                    uVar9 = (ushort)local_c[0] - 0xf20;
                                  }
                                  else {
                                    if ((ushort)local_c[0] < 0x1040) goto LAB_101777ed;
                                    if ((ushort)local_c[0] < 0x104a) {
                                      uVar9 = (ushort)local_c[0] - 0x1040;
                                    }
                                    else {
                                      if ((ushort)local_c[0] < 0x17e0) goto LAB_101777ed;
                                      if ((ushort)local_c[0] < 0x17ea) {
                                        uVar9 = (ushort)local_c[0] - 0x17e0;
                                      }
                                      else {
                                        if (((ushort)local_c[0] < 0x1810) ||
                                           (0x1819 < (ushort)local_c[0])) goto LAB_101777ed;
                                        uVar9 = (ushort)local_c[0] - 0x1810;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_101777e8;
        }
LAB_101777ed:
        if ((((ushort)local_c[0] < 0x41) || (0x5a < (ushort)local_c[0])) &&
           (0x19 < (ushort)(local_c[0] + L'ﾟ'))) {
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = (uint)(ushort)local_c[0];
          if ((ushort)(local_c[0] + L'ﾟ') < 0x1a) {
            uVar9 = uVar9 - 0x20;
          }
          uVar9 = uVar9 - 0x37;
        }
      }
      if (9 < uVar9) goto LAB_1017785a;
      bVar3 = true;
      local_18 = local_18 * 10 + uVar9;
      if (0x1450 < local_18) goto LAB_10177853;
      local_c[0] = __crt_strtox::
                   input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>
                   ::get(param_2);
    } while( true );
  }
LAB_10177a72:
  __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::
  unget(param_2,local_c[0]);
  piVar10 = param_3 + 2;
  if (local_1c != piVar10) {
    do {
      if (*(char *)((int)local_1c + -1) != '\0') break;
      local_1c = (int *)((int)local_1c + -1);
    } while (local_1c != piVar10);
    if (local_1c != piVar10) {
      if (0x1450 < iVar7) {
        return 9;
      }
      if (-0x1451 < iVar7) {
        iVar7 = iVar7 + (((local_5 == '\0') - 1 & 3) + 1) * local_24;
        if (0x1450 < iVar7) {
          return 9;
        }
        if (-0x1451 < iVar7) {
          *param_3 = iVar7;
          param_3[1] = (int)local_1c - (int)piVar10;
          return (uint)(local_5 != '\0');
        }
      }
      return 8;
    }
  }
  return 2;
}

