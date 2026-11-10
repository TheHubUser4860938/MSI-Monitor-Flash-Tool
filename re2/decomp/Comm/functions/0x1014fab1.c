// rea decompile_all
// name: __crt_strtox::parse_integer<unsigned_long,__crt_strtox::c_string_character_source<wchar_t>_>
// address: 0x1014fab1
// body: available
// range: 0x1014fab1-0x10150195 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    unsigned long __cdecl __crt_strtox::parse_integer<unsigned long,class
   __crt_strtox::c_string_character_source<wchar_t> >(struct __crt_locale_pointers * const,class
   __crt_strtox::c_string_character_source<wchar_t>,int,bool)
   
   Library: Visual Studio 2015 Release */

ulong __cdecl
__crt_strtox::parse_integer<unsigned_long,__crt_strtox::c_string_character_source<wchar_t>_>
          (__crt_locale_pointers *param_1,wchar_t *param_2,undefined4 *param_3,uint param_4,
          char param_5)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  wchar_t wVar9;
  int local_20 [3];
  char local_14;
  wchar_t *local_10;
  uint local_c;
  undefined4 local_8;
  
  bVar1 = c_string_character_source<wchar_t>::validate
                    ((c_string_character_source<wchar_t> *)&param_2);
  if (bVar1) {
    if ((param_4 == 0) || ((1 < (int)param_4 && ((int)param_4 < 0x25)))) {
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_20,param_1);
      local_c = 0;
      local_10 = param_2;
      do {
        wVar9 = *param_2;
        param_2 = param_2 + 1;
        iVar3 = _iswctype(wVar9,8);
      } while (iVar3 != 0);
      uVar7 = (uint)(param_5 != '\0');
      if (wVar9 == L'-') {
        uVar7 = uVar7 | 2;
LAB_1014fb4a:
        wVar9 = *param_2;
        param_2 = param_2 + 1;
      }
      else if (wVar9 == L'+') goto LAB_1014fb4a;
      uVar6 = (uint)(ushort)wVar9;
      local_8 = 0x19;
      if ((param_4 != 0) && (param_4 != 0x10)) goto LAB_1014fe52;
      if ((ushort)wVar9 < 0x30) goto LAB_1014fdd5;
      if ((ushort)wVar9 < 0x3a) {
        iVar3 = uVar6 - 0x30;
LAB_1014fdd0:
        if (iVar3 == -1) goto LAB_1014fdd5;
      }
      else {
        if (0xff0f < (ushort)wVar9) {
          if ((ushort)wVar9 < 0xff1a) {
            iVar3 = uVar6 - 0xff10;
          }
          else {
            iVar3 = -1;
          }
          goto LAB_1014fdd0;
        }
        if (0x65f < (ushort)wVar9) {
          if ((ushort)wVar9 < 0x66a) {
            iVar3 = uVar6 - 0x660;
          }
          else {
            if ((ushort)wVar9 < 0x6f0) goto LAB_1014fdd5;
            if ((ushort)wVar9 < 0x6fa) {
              iVar3 = uVar6 - 0x6f0;
            }
            else {
              if ((ushort)wVar9 < 0x966) goto LAB_1014fdd5;
              if ((ushort)wVar9 < 0x970) {
                iVar3 = uVar6 - 0x966;
              }
              else {
                if ((ushort)wVar9 < 0x9e6) goto LAB_1014fdd5;
                if ((ushort)wVar9 < 0x9f0) {
                  iVar3 = uVar6 - 0x9e6;
                }
                else {
                  if ((ushort)wVar9 < 0xa66) goto LAB_1014fdd5;
                  if ((ushort)wVar9 < 0xa70) {
                    iVar3 = uVar6 - 0xa66;
                  }
                  else {
                    if ((ushort)wVar9 < 0xae6) goto LAB_1014fdd5;
                    if ((ushort)wVar9 < 0xaf0) {
                      iVar3 = uVar6 - 0xae6;
                    }
                    else {
                      if ((ushort)wVar9 < 0xb66) goto LAB_1014fdd5;
                      if ((ushort)wVar9 < 0xb70) {
                        iVar3 = uVar6 - 0xb66;
                      }
                      else {
                        if ((ushort)wVar9 < 0xc66) goto LAB_1014fdd5;
                        if ((ushort)wVar9 < 0xc70) {
                          iVar3 = uVar6 - 0xc66;
                        }
                        else {
                          if ((ushort)wVar9 < 0xce6) goto LAB_1014fdd5;
                          if ((ushort)wVar9 < 0xcf0) {
                            iVar3 = uVar6 - 0xce6;
                          }
                          else {
                            if ((ushort)wVar9 < 0xd66) goto LAB_1014fdd5;
                            if ((ushort)wVar9 < 0xd70) {
                              iVar3 = uVar6 - 0xd66;
                            }
                            else {
                              if ((ushort)wVar9 < 0xe50) goto LAB_1014fdd5;
                              if ((ushort)wVar9 < 0xe5a) {
                                iVar3 = uVar6 - 0xe50;
                              }
                              else {
                                if ((ushort)wVar9 < 0xed0) goto LAB_1014fdd5;
                                if ((ushort)wVar9 < 0xeda) {
                                  iVar3 = uVar6 - 0xed0;
                                }
                                else {
                                  if ((ushort)wVar9 < 0xf20) goto LAB_1014fdd5;
                                  if ((ushort)wVar9 < 0xf2a) {
                                    iVar3 = uVar6 - 0xf20;
                                  }
                                  else {
                                    if ((ushort)wVar9 < 0x1040) goto LAB_1014fdd5;
                                    if ((ushort)wVar9 < 0x104a) {
                                      iVar3 = uVar6 - 0x1040;
                                    }
                                    else {
                                      if ((ushort)wVar9 < 0x17e0) goto LAB_1014fdd5;
                                      if ((ushort)wVar9 < 0x17ea) {
                                        iVar3 = uVar6 - 0x17e0;
                                      }
                                      else {
                                        if (((ushort)wVar9 < 0x1810) || (0x1819 < (ushort)wVar9))
                                        goto LAB_1014fdd5;
                                        iVar3 = uVar6 - 0x1810;
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
          goto LAB_1014fdd0;
        }
LAB_1014fdd5:
        if ((((ushort)wVar9 < 0x41) || (0x5a < (ushort)wVar9)) && (0x19 < (ushort)(wVar9 + L'ﾟ')))
        {
          iVar3 = -1;
        }
        else {
          uVar4 = uVar6;
          if ((ushort)(wVar9 + L'ﾟ') < 0x1a) {
            uVar4 = uVar6 - 0x20;
          }
          iVar3 = uVar4 - 0x37;
        }
      }
      if (iVar3 == 0) {
        wVar9 = *param_2;
        if ((wVar9 == L'x') || (wVar9 == L'X')) {
          if (param_4 == 0) {
            param_4 = 0x10;
          }
          uVar6 = (uint)(ushort)param_2[1];
          param_2 = param_2 + 2;
        }
        else {
          if (param_4 == 0) {
            param_4 = 8;
          }
          param_2 = param_2 + 1;
          c_string_character_source<wchar_t>::unget
                    ((c_string_character_source<wchar_t> *)&param_2,wVar9);
        }
      }
      else if (param_4 == 0) {
        param_4 = 10;
      }
LAB_1014fe52:
      uVar4 = (uint)(0xffffffff / (ulonglong)param_4);
      do {
        wVar9 = (wchar_t)uVar6;
        if ((ushort)wVar9 < 0x30) goto LAB_101500bd;
        if ((ushort)wVar9 < 0x3a) {
          uVar5 = uVar6 - 0x30;
LAB_101500b8:
          if (uVar5 == 0xffffffff) goto LAB_101500bd;
        }
        else {
          if (0xff0f < (ushort)wVar9) {
            if ((ushort)wVar9 < 0xff1a) {
              uVar5 = uVar6 - 0xff10;
            }
            else {
              uVar5 = 0xffffffff;
            }
            goto LAB_101500b8;
          }
          if (0x65f < (ushort)wVar9) {
            if ((ushort)wVar9 < 0x66a) {
              uVar5 = uVar6 - 0x660;
            }
            else {
              if ((ushort)wVar9 < 0x6f0) goto LAB_101500bd;
              if ((ushort)wVar9 < 0x6fa) {
                uVar5 = uVar6 - 0x6f0;
              }
              else {
                if ((ushort)wVar9 < 0x966) goto LAB_101500bd;
                if ((ushort)wVar9 < 0x970) {
                  uVar5 = uVar6 - 0x966;
                }
                else {
                  if ((ushort)wVar9 < 0x9e6) goto LAB_101500bd;
                  if ((ushort)wVar9 < 0x9f0) {
                    uVar5 = uVar6 - 0x9e6;
                  }
                  else {
                    if ((ushort)wVar9 < 0xa66) goto LAB_101500bd;
                    if ((ushort)wVar9 < 0xa70) {
                      uVar5 = uVar6 - 0xa66;
                    }
                    else {
                      if ((ushort)wVar9 < 0xae6) goto LAB_101500bd;
                      if ((ushort)wVar9 < 0xaf0) {
                        uVar5 = uVar6 - 0xae6;
                      }
                      else {
                        if ((ushort)wVar9 < 0xb66) goto LAB_101500bd;
                        if ((ushort)wVar9 < 0xb70) {
                          uVar5 = uVar6 - 0xb66;
                        }
                        else {
                          if ((ushort)wVar9 < 0xc66) goto LAB_101500bd;
                          if ((ushort)wVar9 < 0xc70) {
                            uVar5 = uVar6 - 0xc66;
                          }
                          else {
                            if ((ushort)wVar9 < 0xce6) goto LAB_101500bd;
                            if ((ushort)wVar9 < 0xcf0) {
                              uVar5 = uVar6 - 0xce6;
                            }
                            else {
                              if ((ushort)wVar9 < 0xd66) goto LAB_101500bd;
                              if ((ushort)wVar9 < 0xd70) {
                                uVar5 = uVar6 - 0xd66;
                              }
                              else {
                                if ((ushort)wVar9 < 0xe50) goto LAB_101500bd;
                                if ((ushort)wVar9 < 0xe5a) {
                                  uVar5 = uVar6 - 0xe50;
                                }
                                else {
                                  if ((ushort)wVar9 < 0xed0) goto LAB_101500bd;
                                  if ((ushort)wVar9 < 0xeda) {
                                    uVar5 = uVar6 - 0xed0;
                                  }
                                  else {
                                    if ((ushort)wVar9 < 0xf20) goto LAB_101500bd;
                                    if ((ushort)wVar9 < 0xf2a) {
                                      uVar5 = uVar6 - 0xf20;
                                    }
                                    else {
                                      if ((ushort)wVar9 < 0x1040) goto LAB_101500bd;
                                      if ((ushort)wVar9 < 0x104a) {
                                        uVar5 = uVar6 - 0x1040;
                                      }
                                      else {
                                        if ((ushort)wVar9 < 0x17e0) goto LAB_101500bd;
                                        if ((ushort)wVar9 < 0x17ea) {
                                          uVar5 = uVar6 - 0x17e0;
                                        }
                                        else {
                                          if (((ushort)wVar9 < 0x1810) || (0x1819 < (ushort)wVar9))
                                          goto LAB_101500bd;
                                          uVar5 = uVar6 - 0x1810;
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
            goto LAB_101500b8;
          }
LAB_101500bd:
          if ((((ushort)wVar9 < 0x41) || (0x5a < (ushort)wVar9)) &&
             ((ushort)local_8 < (ushort)(wVar9 + L'ﾟ'))) {
            uVar5 = 0xffffffff;
          }
          else {
            if ((ushort)(wVar9 + L'ﾟ') <= (ushort)local_8) {
              uVar6 = uVar6 - 0x20;
            }
            uVar5 = uVar6 - 0x37;
          }
        }
        if ((uVar5 == 0xffffffff) || (param_4 <= uVar5)) goto LAB_10150123;
        uVar8 = uVar7 | 8;
        if ((local_c < uVar4) ||
           ((local_c == uVar4 && (uVar5 <= (uint)(0xffffffff % (ulonglong)param_4))))) {
          local_c = local_c * param_4 + uVar5;
        }
        else {
          uVar8 = uVar7 | 0xc;
        }
        uVar6 = (uint)(ushort)*param_2;
        param_2 = param_2 + 1;
        uVar7 = uVar8;
      } while( true );
    }
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_1014f4c6();
  }
  uVar6 = 0;
LAB_1014faec:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_2;
  }
  return uVar6;
LAB_10150123:
  c_string_character_source<wchar_t>::unget((c_string_character_source<wchar_t> *)&param_2,wVar9);
  uVar6 = local_c;
  if ((uVar7 & 8) == 0) {
    uVar6 = 0;
    param_2 = local_10;
  }
  else {
    bVar1 = is_overflow_condition<unsigned_long>(uVar7,local_c);
    if (bVar1) {
      piVar2 = __errno();
      *piVar2 = 0x22;
      if ((uVar7 & 1) == 0) {
        uVar6 = 0xffffffff;
      }
      else if ((uVar7 & 2) == 0) {
        uVar6 = 0x7fffffff;
      }
      else {
        uVar6 = 0x80000000;
      }
    }
    else if ((uVar7 & 2) != 0) {
      uVar6 = -uVar6;
    }
  }
  if (local_14 != '\0') {
    *(uint *)(local_20[0] + 0x350) = *(uint *)(local_20[0] + 0x350) & 0xfffffffd;
  }
  goto LAB_1014faec;
}

