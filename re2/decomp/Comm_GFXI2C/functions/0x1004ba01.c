// rea decompile_all
// name: __woutput_l
// address: 0x1004ba01
// body: available
// range: 0x1004ba01-0x1004c575 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __woutput_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __woutput_l(FILE *_File,wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  wchar_t wVar1;
  wchar_t wVar2;
  short *psVar3;
  wchar_t *pwVar4;
  int *piVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  int extraout_ECX;
  uint uVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  bool bVar13;
  longlong lVar14;
  uint *puVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  localeinfo_struct *plVar18;
  uint local_470;
  uint local_46c;
  uint local_468;
  undefined4 local_464;
  int local_460;
  localeinfo_struct local_45c;
  int local_454;
  char local_450;
  int local_44c;
  wchar_t *local_448;
  wchar_t *local_444;
  int local_440;
  undefined2 local_43c;
  short local_43a;
  char local_438;
  undefined1 local_437;
  FILE *local_434;
  uint local_430;
  int local_42c;
  int local_428;
  int local_424;
  wchar_t *local_420;
  uint local_41c;
  uint local_418;
  wchar_t *local_414;
  uint local_410;
  uint local_40c;
  wchar_t local_408 [255];
  undefined2 local_209;
  uint local_8;
  
  local_8 = DAT_10064168 ^ (uint)&stack0xfffffffc;
  local_434 = _File;
  local_420 = (wchar_t *)_ArgList;
  local_44c = 0;
  local_40c = 0;
  local_430 = 0;
  local_410 = 0;
  local_428 = 0;
  local_440 = 0;
  local_42c = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_45c,_Locale);
  if ((local_434 == (FILE *)0x0) || (_Format == (wchar_t *)0x0)) {
    piVar5 = __errno();
    *piVar5 = 0x16;
LAB_1004ba80:
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_450 != '\0') {
      *(uint *)(local_454 + 0x70) = *(uint *)(local_454 + 0x70) & 0xfffffffd;
    }
  }
  else {
    wVar1 = *_Format;
    local_424 = 0;
    local_418 = 0;
    local_448 = (wchar_t *)0x0;
    iVar9 = 0;
    while (local_41c = (uint)(ushort)wVar1, wVar1 != L'\0') {
      local_444 = _Format + 1;
      if (local_424 < 0) break;
      if ((ushort)(wVar1 + L'￠') < 0x59) {
        uVar6 = (int)"bad exception"[local_41c + 8] & 0xf;
      }
      else {
        uVar6 = 0;
      }
      local_460 = (int)(char)(&DAT_1005c2b0)[uVar6 * 8 + iVar9] >> 4;
      switch(local_460) {
      case 0:
switchD_1004bb1b_caseD_0:
        local_42c = 1;
        write_char(wVar1);
        break;
      case 1:
        local_410 = 0xffffffff;
        local_464 = 0;
        local_440 = 0;
        local_430 = 0;
        local_428 = 0;
        local_40c = 0;
        local_42c = 0;
        break;
      case 2:
        if (local_41c == 0x20) {
          local_40c = local_40c | 2;
        }
        else if (local_41c == 0x23) {
          local_40c = local_40c | 0x80;
        }
        else if (local_41c == 0x2b) {
          local_40c = local_40c | 1;
        }
        else if (local_41c == 0x2d) {
          local_40c = local_40c | 4;
        }
        else if (local_41c == 0x30) {
          local_40c = local_40c | 8;
        }
        break;
      case 3:
        if (wVar1 == L'*') {
          local_420 = (wchar_t *)((int)_ArgList + 4);
          local_430 = *(uint *)_ArgList;
          if ((int)local_430 < 0) {
            local_40c = local_40c | 4;
            local_430 = -local_430;
          }
        }
        else {
          local_430 = local_41c + local_430 * 10 + -0x30;
        }
        break;
      case 4:
        local_410 = 0;
        break;
      case 5:
        if (wVar1 == L'*') {
          local_420 = (wchar_t *)((int)_ArgList + 4);
          local_410 = *(uint *)_ArgList;
          if ((int)local_410 < 0) {
            local_410 = 0xffffffff;
          }
        }
        else {
          local_410 = local_41c + local_410 * 10 + -0x30;
        }
        break;
      case 6:
        if (local_41c == 0x49) {
          wVar2 = *local_444;
          if ((wVar2 == L'6') && (_Format[2] == L'4')) {
            local_444 = _Format + 3;
            local_40c = local_40c | 0x8000;
          }
          else if ((wVar2 == L'3') && (_Format[2] == L'2')) {
            local_444 = _Format + 3;
            local_40c = local_40c & 0xffff7fff;
          }
          else if (((((wVar2 != L'd') && (wVar2 != L'i')) && (wVar2 != L'o')) &&
                   ((wVar2 != L'u' && (wVar2 != L'x')))) && (wVar2 != L'X')) {
            local_460 = 0;
            goto switchD_1004bb1b_caseD_0;
          }
        }
        else if (local_41c == 0x68) {
          local_40c = local_40c | 0x20;
        }
        else if (local_41c == 0x6c) {
          if (*local_444 == L'l') {
            local_444 = _Format + 2;
            local_40c = local_40c | 0x1000;
          }
          else {
            local_40c = local_40c | 0x10;
          }
        }
        else if (local_41c == 0x77) {
          local_40c = local_40c | 0x800;
        }
        break;
      case 7:
        if (local_41c < 0x65) {
          if (local_41c == 100) {
LAB_1004c033:
            local_40c = local_40c | 0x40;
LAB_1004c03a:
            local_41c = 10;
LAB_1004c044:
            if (((local_40c & 0x8000) == 0) && ((local_40c & 0x1000) == 0)) {
              local_420 = (wchar_t *)((int)_ArgList + 4);
              if ((local_40c & 0x20) == 0) {
                uVar6 = *(uint *)_ArgList;
                if ((local_40c & 0x40) == 0) {
                  uVar10 = 0;
                }
                else {
                  uVar10 = (int)uVar6 >> 0x1f;
                }
              }
              else {
                if ((local_40c & 0x40) == 0) {
                  uVar6 = (uint)(ushort)*(wchar_t *)_ArgList;
                }
                else {
                  uVar6 = (uint)*(wchar_t *)_ArgList;
                }
                uVar10 = (int)uVar6 >> 0x1f;
              }
            }
            else {
              uVar6 = *(uint *)_ArgList;
              uVar10 = *(uint *)((int)_ArgList + 4);
              local_420 = (wchar_t *)((int)_ArgList + 8);
            }
            if ((((local_40c & 0x40) != 0) && ((int)uVar10 < 1)) && ((int)uVar10 < 0)) {
              bVar13 = uVar6 != 0;
              uVar6 = -uVar6;
              uVar10 = -(uVar10 + bVar13);
              local_40c = local_40c | 0x100;
            }
            if ((local_40c & 0x9000) == 0) {
              uVar10 = 0;
            }
            lVar14 = CONCAT44(uVar10,uVar6);
            if ((int)local_410 < 0) {
              local_410 = 1;
            }
            else {
              local_40c = local_40c & 0xfffffff7;
              if (0x200 < (int)local_410) {
                local_410 = 0x200;
              }
            }
            if (uVar6 == 0 && uVar10 == 0) {
              local_428 = 0;
            }
            pwVar12 = &local_209;
            while( true ) {
              uVar6 = local_410 - 1;
              if (((int)local_410 < 1) && (lVar14 == 0)) break;
              local_410 = uVar6;
              lVar14 = __aulldvrm((uint)lVar14,(uint)((ulonglong)lVar14 >> 0x20),local_41c,
                                  (int)local_41c >> 0x1f);
              iVar9 = extraout_ECX + 0x30;
              if (0x39 < iVar9) {
                iVar9 = iVar9 + local_44c;
              }
              *(byte *)pwVar12 = (byte)iVar9;
              pwVar12 = (wchar_t *)((int)pwVar12 + -1);
            }
            local_418 = (int)&local_209 + -(int)pwVar12;
            local_414 = (wchar_t *)((int)pwVar12 + 1);
            local_410 = uVar6;
            if (((local_40c & 0x200) != 0) && ((local_418 == 0 || (*(byte *)local_414 != 0x30)))) {
              *(byte *)pwVar12 = 0x30;
              local_418 = (int)&local_209 + -(int)pwVar12 + 1;
              local_414 = pwVar12;
            }
          }
          else if (local_41c < 0x54) {
            if (local_41c == 0x53) {
              if ((local_40c & 0x830) == 0) {
                local_40c = local_40c | 0x20;
              }
              goto LAB_1004be0f;
            }
            if (local_41c != 0x41) {
              if (local_41c == 0x43) {
                if ((local_40c & 0x830) == 0) {
                  local_40c = local_40c | 0x20;
                }
LAB_1004beb8:
                wVar1 = *(wchar_t *)_ArgList;
                local_468 = (uint)(ushort)wVar1;
                local_420 = (wchar_t *)((int)_ArgList + 4);
                local_42c = 1;
                if ((local_40c & 0x20) == 0) {
                  local_408[0] = wVar1;
                }
                else {
                  local_438 = (char)wVar1;
                  local_437 = 0;
                  iVar9 = __mbtowc_l(local_408,&local_438,
                                     (size_t)(local_45c.locinfo)->locale_name[3],&local_45c);
                  if (iVar9 < 0) {
                    local_440 = 1;
                  }
                }
                local_418 = 1;
                local_414 = local_408;
                goto LAB_1004c382;
              }
              if ((local_41c != 0x45) && (local_41c != 0x47)) goto LAB_1004c382;
            }
            local_41c = local_41c + 0x20;
            local_464 = 1;
LAB_1004bda6:
            local_40c = local_40c | 0x40;
            local_418 = 0x200;
            pwVar11 = local_408;
            uVar6 = local_418;
            pwVar12 = local_408;
            if ((int)local_410 < 0) {
              local_410 = 6;
            }
            else if (local_410 == 0) {
              if ((short)local_41c == 0x67) {
                local_410 = 1;
              }
            }
            else {
              if (0x200 < (int)local_410) {
                local_410 = 0x200;
              }
              if (0xa3 < (int)local_410) {
                uVar6 = local_410 + 0x15d;
                local_414 = local_408;
                local_448 = __malloc_crt(uVar6);
                pwVar11 = local_448;
                pwVar12 = local_448;
                if (local_448 == (wchar_t *)0x0) {
                  local_410 = 0xa3;
                  pwVar11 = local_408;
                  uVar6 = local_418;
                  pwVar12 = local_414;
                }
              }
            }
            local_414 = pwVar12;
            local_418 = uVar6;
            local_470 = *(uint *)_ArgList;
            local_420 = (wchar_t *)((int)_ArgList + 8);
            local_46c = *(uint *)((int)_ArgList + 4);
            plVar18 = &local_45c;
            uVar16 = CONCAT44(local_410,(int)(char)local_41c);
            puVar15 = &local_470;
            pwVar12 = pwVar11;
            uVar6 = local_418;
            uVar17 = local_464;
            pcVar7 = (code *)__decode_pointer((int)PTR_LAB_10064cd8);
            (*pcVar7)(puVar15,pwVar12,uVar6,uVar16,uVar17,plVar18);
            uVar6 = local_40c & 0x80;
            if ((uVar6 != 0) && (local_410 == 0)) {
              plVar18 = &local_45c;
              pwVar12 = pwVar11;
              pcVar7 = (code *)__decode_pointer((int)PTR_LAB_10064ce4);
              (*pcVar7)(pwVar12,plVar18);
            }
            if (((short)local_41c == 0x67) && (uVar6 == 0)) {
              plVar18 = &local_45c;
              pwVar12 = pwVar11;
              pcVar7 = (code *)__decode_pointer((int)PTR_LAB_10064ce0);
              (*pcVar7)(pwVar12,plVar18);
            }
            pwVar12 = pwVar11;
            pwVar4 = local_414;
            if ((byte)*pwVar11 == 0x2d) {
              local_40c = local_40c | 0x100;
              pwVar12 = (wchar_t *)((int)pwVar11 + 1);
              pwVar4 = (wchar_t *)((int)pwVar11 + 1);
            }
LAB_1004bf91:
            local_414 = pwVar4;
            local_418 = _strlen((char *)pwVar12);
          }
          else {
            if (local_41c == 0x58) goto LAB_1004c197;
            if (local_41c == 0x5a) {
              psVar3 = *(short **)_ArgList;
              local_420 = (wchar_t *)((int)_ArgList + 4);
              pwVar12 = (wchar_t *)PTR_DAT_10065128;
              pwVar4 = (wchar_t *)PTR_DAT_10065128;
              if ((psVar3 == (short *)0x0) ||
                 (local_414 = *(wchar_t **)(psVar3 + 2), pwVar4 = (wchar_t *)PTR_DAT_10065128,
                 local_414 == (wchar_t *)0x0)) goto LAB_1004bf91;
              local_418 = (uint)*psVar3;
              if ((local_40c & 0x800) != 0) {
                iVar9 = local_418 - ((int)local_418 >> 0x1f);
                goto LAB_1004c37a;
              }
              local_42c = 0;
            }
            else {
              if (local_41c == 0x61) goto LAB_1004bda6;
              if (local_41c == 99) goto LAB_1004beb8;
            }
          }
LAB_1004c382:
          uVar6 = local_418;
          if (local_440 == 0) {
            if ((local_40c & 0x40) != 0) {
              if ((local_40c & 0x100) == 0) {
                if ((local_40c & 1) == 0) {
                  if ((local_40c & 2) == 0) goto LAB_1004c3c4;
                  local_43c = 0x20;
                }
                else {
                  local_43c = 0x2b;
                }
              }
              else {
                local_43c = 0x2d;
              }
              local_428 = 1;
            }
LAB_1004c3c4:
            iVar9 = local_430 + (-local_428 - local_418);
            if ((local_40c & 0xc) == 0) {
              write_multi_char(L' ',iVar9);
            }
            write_string(local_428);
            if (((local_40c & 8) != 0) && ((local_40c & 4) == 0)) {
              write_multi_char(L'0',iVar9);
            }
            if ((local_42c == 0) && (0 < (int)uVar6)) {
              local_41c = uVar6;
              pwVar12 = local_414;
              do {
                local_41c = local_41c - 1;
                iVar8 = __mbtowc_l((wchar_t *)&local_468,(char *)pwVar12,
                                   (size_t)(local_45c.locinfo)->locale_name[3],&local_45c);
                if (iVar8 < 1) {
                  local_424 = -1;
                  break;
                }
                write_char((wchar_t)local_468);
                pwVar12 = (wchar_t *)((int)pwVar12 + iVar8);
              } while (0 < (int)local_41c);
            }
            else {
              write_string(uVar6);
            }
            if ((-1 < local_424) && ((local_40c & 4) != 0)) {
              write_multi_char(L' ',iVar9);
            }
          }
        }
        else {
          if (0x70 < local_41c) {
            if (local_41c == 0x73) {
LAB_1004be0f:
              uVar6 = local_410;
              if (local_410 == 0xffffffff) {
                uVar6 = 0x7fffffff;
              }
              local_420 = (wchar_t *)((int)_ArgList + 4);
              local_414 = *(wchar_t **)_ArgList;
              if ((local_40c & 0x20) == 0) {
                pwVar12 = local_414;
                if (local_414 == (wchar_t *)0x0) {
                  pwVar12 = (wchar_t *)PTR_u__null__1006512c;
                  local_414 = (wchar_t *)PTR_u__null__1006512c;
                }
                for (; (uVar6 != 0 && (uVar6 = uVar6 - 1, *pwVar12 != L'\0')); pwVar12 = pwVar12 + 1
                    ) {
                }
                iVar9 = (int)pwVar12 - (int)local_414;
LAB_1004c37a:
                local_420 = (wchar_t *)((int)_ArgList + 4);
                local_42c = 1;
                local_418 = iVar9 >> 1;
              }
              else {
                if (local_414 == (wchar_t *)0x0) {
                  local_414 = (wchar_t *)PTR_DAT_10065128;
                }
                local_418 = 0;
                pwVar12 = local_414;
                if (0 < (int)uVar6) {
                  do {
                    if ((byte)*pwVar12 == 0) break;
                    iVar9 = __isleadbyte_l((uint)(byte)*pwVar12,&local_45c);
                    if (iVar9 != 0) {
                      pwVar12 = (wchar_t *)((int)pwVar12 + 1);
                    }
                    pwVar12 = (wchar_t *)((int)pwVar12 + 1);
                    local_418 = local_418 + 1;
                  } while ((int)local_418 < (int)uVar6);
                }
              }
              goto LAB_1004c382;
            }
            if (local_41c == 0x75) goto LAB_1004c03a;
            if (local_41c != 0x78) goto LAB_1004c382;
            local_44c = 0x27;
LAB_1004c1c3:
            local_41c = 0x10;
            if ((local_40c & 0x80) != 0) {
              local_43c = 0x30;
              local_43a = (short)local_44c + 0x51;
              local_428 = 2;
            }
            goto LAB_1004c044;
          }
          if (local_41c == 0x70) {
            local_410 = 8;
LAB_1004c197:
            local_44c = 7;
            goto LAB_1004c1c3;
          }
          if (local_41c < 0x65) goto LAB_1004c382;
          if (local_41c < 0x68) goto LAB_1004bda6;
          if (local_41c == 0x69) goto LAB_1004c033;
          if (local_41c != 0x6e) {
            if (local_41c != 0x6f) goto LAB_1004c382;
            local_41c = 8;
            if ((local_40c & 0x80) != 0) {
              local_40c = local_40c | 0x200;
            }
            goto LAB_1004c044;
          }
          piVar5 = *(int **)_ArgList;
          local_420 = (wchar_t *)((int)_ArgList + 4);
          iVar9 = __get_printf_count_output();
          if (iVar9 == 0) {
            piVar5 = __errno();
            *piVar5 = 0x16;
            goto LAB_1004ba80;
          }
          if ((local_40c & 0x20) == 0) {
            *piVar5 = local_424;
          }
          else {
            *(undefined2 *)piVar5 = (undefined2)local_424;
          }
          local_440 = 1;
        }
        if (local_448 != (wchar_t *)0x0) {
          _free(local_448);
          local_448 = (wchar_t *)0x0;
        }
      }
      iVar9 = local_460;
      _Format = local_444;
      _ArgList = (va_list)local_420;
      wVar1 = *local_444;
    }
    if (local_450 != '\0') {
      *(uint *)(local_454 + 0x70) = *(uint *)(local_454 + 0x70) & 0xfffffffd;
    }
  }
  iVar9 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar9;
}

