// rea decompile_all
// name: FUN_1004c599
// address: 0x1004c599
// body: available
// range: 0x1004c599-0x1004d116 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_1004c599(int param_1,ushort *param_2,localeinfo_struct *param_3,wchar_t *param_4)

{
  ushort uVar1;
  wchar_t wVar2;
  short *psVar3;
  int *piVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  int extraout_ECX;
  uint uVar8;
  int iVar9;
  wchar_t *pwVar10;
  size_t sVar11;
  ushort *puVar12;
  bool bVar13;
  longlong lVar14;
  uint *puVar15;
  wchar_t *pwVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  localeinfo_struct *plVar19;
  uint local_470;
  uint local_46c;
  uint local_468;
  ushort *local_464;
  undefined4 local_460;
  wchar_t *local_45c;
  int local_458;
  int local_454;
  localeinfo_struct local_450;
  int local_448;
  char local_444;
  int local_440;
  char local_43c [4];
  uint local_438;
  undefined2 local_434;
  short local_432;
  uint local_430;
  int local_42c;
  int local_428;
  int local_424;
  uint local_420;
  wchar_t *local_41c;
  size_t local_418;
  wchar_t *local_414;
  uint local_410;
  uint local_40c;
  wchar_t local_408 [255];
  undefined2 local_209;
  uint local_8;
  
  local_8 = DAT_10064168 ^ (uint)&stack0xfffffffc;
  local_440 = param_1;
  local_41c = param_4;
  local_458 = 0;
  local_40c = 0;
  local_430 = 0;
  local_410 = 0;
  local_428 = 0;
  local_454 = 0;
  local_42c = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_450,param_3);
  if (param_1 == 0) {
LAB_1004c604:
    piVar4 = __errno();
    *piVar4 = 0x16;
  }
  else {
    if (param_2 != (ushort *)0x0) {
      local_420 = (uint)*param_2;
      local_424 = 0;
      local_418 = 0;
      local_438 = 0;
      local_45c = (wchar_t *)0x0;
      if (*param_2 != 0) {
        do {
          puVar12 = param_2 + 1;
          local_464 = puVar12;
          if (local_424 < 0) break;
          wVar2 = (wchar_t)local_420;
          if ((ushort)(wVar2 + L'￠') < 0x59) {
            uVar5 = (byte)(&DAT_1005c2f0)[local_420] & 0xf;
          }
          else {
            uVar5 = 0;
          }
          local_438 = (uint)((byte)(&DAT_1005c310)[local_438 + uVar5 * 9] >> 4);
          if (local_438 == 8) goto LAB_1004c604;
          pwVar10 = local_41c;
          switch(local_438) {
          case 0:
switchD_1004c6da_caseD_0:
            local_42c = 1;
            write_char(wVar2);
            pwVar10 = param_4;
            break;
          case 1:
            local_410 = 0xffffffff;
            local_460 = 0;
            local_454 = 0;
            local_430 = 0;
            local_428 = 0;
            local_40c = 0;
            local_42c = 0;
            pwVar10 = param_4;
            break;
          case 2:
            if (local_420 == 0x20) {
              local_40c = local_40c | 2;
              pwVar10 = param_4;
            }
            else if (local_420 == 0x23) {
              local_40c = local_40c | 0x80;
              pwVar10 = param_4;
            }
            else if (local_420 == 0x2b) {
              local_40c = local_40c | 1;
              pwVar10 = param_4;
            }
            else if (local_420 == 0x2d) {
              local_40c = local_40c | 4;
              pwVar10 = param_4;
            }
            else if (local_420 == 0x30) {
              local_40c = local_40c | 8;
              pwVar10 = param_4;
            }
            break;
          case 3:
            if (wVar2 == L'*') {
              local_430 = *(uint *)param_4;
              local_41c = param_4 + 2;
              pwVar10 = local_41c;
              if ((int)local_430 < 0) {
                local_40c = local_40c | 4;
                local_430 = -local_430;
              }
            }
            else {
              local_430 = local_420 + local_430 * 10 + -0x30;
              pwVar10 = param_4;
            }
            break;
          case 4:
            local_410 = 0;
            pwVar10 = param_4;
            break;
          case 5:
            if (wVar2 == L'*') {
              local_410 = *(uint *)param_4;
              local_41c = param_4 + 2;
              pwVar10 = local_41c;
              if ((int)local_410 < 0) {
                local_410 = 0xffffffff;
              }
            }
            else {
              local_410 = local_420 + local_410 * 10 + -0x30;
              pwVar10 = param_4;
            }
            break;
          case 6:
            if (local_420 == 0x49) {
              uVar1 = *puVar12;
              if ((uVar1 == 0x36) && (param_2[2] == 0x34)) {
                local_40c = local_40c | 0x8000;
                pwVar10 = param_4;
                puVar12 = param_2 + 3;
              }
              else if ((uVar1 == 0x33) && (param_2[2] == 0x32)) {
                local_40c = local_40c & 0xffff7fff;
                pwVar10 = param_4;
                puVar12 = param_2 + 3;
              }
              else {
                pwVar10 = param_4;
                if (((((uVar1 != 100) && (uVar1 != 0x69)) && (uVar1 != 0x6f)) &&
                    ((uVar1 != 0x75 && (uVar1 != 0x78)))) && (uVar1 != 0x58)) {
                  local_438 = 0;
                  goto switchD_1004c6da_caseD_0;
                }
              }
            }
            else if (local_420 == 0x68) {
              local_40c = local_40c | 0x20;
              pwVar10 = param_4;
            }
            else if (local_420 == 0x6c) {
              if (*puVar12 == 0x6c) {
                local_40c = local_40c | 0x1000;
                pwVar10 = param_4;
                puVar12 = param_2 + 2;
              }
              else {
                local_40c = local_40c | 0x10;
                pwVar10 = param_4;
              }
            }
            else {
              pwVar10 = param_4;
              if (local_420 == 0x77) {
                local_40c = local_40c | 0x800;
              }
            }
            break;
          case 7:
            if (local_420 < 0x65) {
              if (local_420 == 100) {
LAB_1004cbda:
                local_40c = local_40c | 0x40;
LAB_1004cbe1:
                local_420 = 10;
LAB_1004cbeb:
                if (((local_40c & 0x8000) == 0) && ((local_40c & 0x1000) == 0)) {
                  local_41c = param_4 + 2;
                  if ((local_40c & 0x20) == 0) {
                    uVar5 = *(uint *)param_4;
                    if ((local_40c & 0x40) == 0) {
                      uVar8 = 0;
                    }
                    else {
                      uVar8 = (int)uVar5 >> 0x1f;
                    }
                  }
                  else {
                    if ((local_40c & 0x40) == 0) {
                      uVar5 = (uint)(ushort)*param_4;
                    }
                    else {
                      uVar5 = (uint)*param_4;
                    }
                    uVar8 = (int)uVar5 >> 0x1f;
                  }
                }
                else {
                  local_41c = param_4 + 4;
                  uVar5 = *(uint *)param_4;
                  uVar8 = *(uint *)(param_4 + 2);
                }
                if ((((local_40c & 0x40) != 0) && ((int)uVar8 < 1)) && ((int)uVar8 < 0)) {
                  bVar13 = uVar5 != 0;
                  uVar5 = -uVar5;
                  uVar8 = -(uVar8 + bVar13);
                  local_40c = local_40c | 0x100;
                }
                if ((local_40c & 0x9000) == 0) {
                  uVar8 = 0;
                }
                lVar14 = CONCAT44(uVar8,uVar5);
                if ((int)local_410 < 0) {
                  local_410 = 1;
                }
                else {
                  local_40c = local_40c & 0xfffffff7;
                  if (0x200 < (int)local_410) {
                    local_410 = 0x200;
                  }
                }
                if (uVar5 == 0 && uVar8 == 0) {
                  local_428 = 0;
                }
                pwVar10 = &local_209;
                while( true ) {
                  uVar5 = local_410 - 1;
                  if (((int)local_410 < 1) && (lVar14 == 0)) break;
                  local_410 = uVar5;
                  lVar14 = __aulldvrm((uint)lVar14,(uint)((ulonglong)lVar14 >> 0x20),local_420,
                                      (int)local_420 >> 0x1f);
                  iVar9 = extraout_ECX + 0x30;
                  if (0x39 < iVar9) {
                    iVar9 = iVar9 + local_458;
                  }
                  *(byte *)pwVar10 = (byte)iVar9;
                  pwVar10 = (wchar_t *)((int)pwVar10 + -1);
                }
                local_418 = (int)&local_209 + -(int)pwVar10;
                local_414 = (wchar_t *)((int)pwVar10 + 1);
                local_410 = uVar5;
                if (((local_40c & 0x200) != 0) && ((local_418 == 0 || (*(byte *)local_414 != 0x30)))
                   ) {
                  *(byte *)pwVar10 = 0x30;
                  local_418 = (int)&local_209 + -(int)pwVar10 + 1;
                  local_414 = pwVar10;
                }
              }
              else if (local_420 < 0x54) {
                if (local_420 == 0x53) {
                  if ((local_40c & 0x830) == 0) {
                    local_40c = local_40c | 0x20;
                  }
                  goto LAB_1004c9b9;
                }
                if (local_420 != 0x41) {
                  if (local_420 == 0x43) {
                    if ((local_40c & 0x830) == 0) {
                      local_40c = local_40c | 0x20;
                    }
LAB_1004ca63:
                    wVar2 = *param_4;
                    local_468 = (uint)(ushort)wVar2;
                    local_41c = param_4 + 2;
                    local_42c = 1;
                    if ((local_40c & 0x20) == 0) {
                      local_408[0] = wVar2;
                    }
                    else {
                      local_43c[0] = (char)wVar2;
                      local_43c[1] = 0;
                      iVar9 = __mbtowc_l(local_408,local_43c,
                                         (size_t)(local_450.locinfo)->locale_name[3],&local_450);
                      if (iVar9 < 0) {
                        local_454 = 1;
                      }
                    }
                    local_418 = 1;
                    local_414 = local_408;
                    goto LAB_1004cf29;
                  }
                  if ((local_420 != 0x45) && (local_420 != 0x47)) goto LAB_1004cf29;
                }
                local_420 = local_420 + 0x20;
                local_460 = 1;
LAB_1004c950:
                local_40c = local_40c | 0x40;
                local_418 = 0x200;
                pwVar10 = local_408;
                sVar11 = local_418;
                pwVar16 = local_408;
                if ((int)local_410 < 0) {
                  local_410 = 6;
                }
                else if (local_410 == 0) {
                  if ((short)local_420 == 0x67) {
                    local_410 = 1;
                  }
                }
                else {
                  if (0x200 < (int)local_410) {
                    local_410 = 0x200;
                  }
                  if (0xa3 < (int)local_410) {
                    sVar11 = local_410 + 0x15d;
                    local_414 = local_408;
                    local_45c = __malloc_crt(sVar11);
                    pwVar10 = local_45c;
                    pwVar16 = local_45c;
                    if (local_45c == (wchar_t *)0x0) {
                      local_410 = 0xa3;
                      pwVar10 = local_408;
                      sVar11 = local_418;
                      pwVar16 = local_414;
                    }
                  }
                }
                local_414 = pwVar16;
                local_418 = sVar11;
                local_470 = *(uint *)param_4;
                local_41c = param_4 + 4;
                local_46c = *(uint *)(param_4 + 2);
                plVar19 = &local_450;
                uVar17 = CONCAT44(local_410,(int)(char)local_420);
                puVar15 = &local_470;
                pwVar16 = pwVar10;
                sVar11 = local_418;
                uVar18 = local_460;
                pcVar6 = (code *)__decode_pointer((int)PTR_LAB_10064cd8);
                (*pcVar6)(puVar15,pwVar16,sVar11,uVar17,uVar18,plVar19);
                uVar5 = local_40c & 0x80;
                if ((uVar5 != 0) && (local_410 == 0)) {
                  plVar19 = &local_450;
                  pwVar16 = pwVar10;
                  pcVar6 = (code *)__decode_pointer((int)PTR_LAB_10064ce4);
                  (*pcVar6)(pwVar16,plVar19);
                }
                if (((short)local_420 == 0x67) && (uVar5 == 0)) {
                  plVar19 = &local_450;
                  pwVar16 = pwVar10;
                  pcVar6 = (code *)__decode_pointer((int)PTR_LAB_10064ce0);
                  (*pcVar6)(pwVar16,plVar19);
                }
                if ((byte)*pwVar10 == 0x2d) {
                  local_40c = local_40c | 0x100;
                  pwVar10 = (wchar_t *)((int)pwVar10 + 1);
                  local_414 = pwVar10;
                }
LAB_1004cb3c:
                local_418 = _strlen((char *)pwVar10);
              }
              else {
                if (local_420 == 0x58) goto LAB_1004cd3a;
                if (local_420 == 0x5a) {
                  psVar3 = *(short **)param_4;
                  local_41c = param_4 + 2;
                  if ((psVar3 == (short *)0x0) ||
                     (local_414 = *(wchar_t **)(psVar3 + 2), local_414 == (wchar_t *)0x0)) {
                    local_414 = (wchar_t *)PTR_DAT_10065128;
                    pwVar10 = (wchar_t *)PTR_DAT_10065128;
                    goto LAB_1004cb3c;
                  }
                  local_418 = (size_t)*psVar3;
                  if ((local_40c & 0x800) != 0) {
                    iVar9 = local_418 - ((int)local_418 >> 0x1f);
                    goto LAB_1004cf21;
                  }
                  local_42c = 0;
                }
                else {
                  if (local_420 == 0x61) goto LAB_1004c950;
                  if (local_420 == 99) goto LAB_1004ca63;
                }
              }
LAB_1004cf29:
              sVar11 = local_418;
              if (local_454 == 0) {
                if ((local_40c & 0x40) != 0) {
                  if ((local_40c & 0x100) == 0) {
                    if ((local_40c & 1) == 0) {
                      if ((local_40c & 2) == 0) goto LAB_1004cf6b;
                      local_434 = 0x20;
                    }
                    else {
                      local_434 = 0x2b;
                    }
                  }
                  else {
                    local_434 = 0x2d;
                  }
                  local_428 = 1;
                }
LAB_1004cf6b:
                iVar9 = local_430 + (-local_428 - local_418);
                if ((local_40c & 0xc) == 0) {
                  write_multi_char(L' ',iVar9);
                }
                write_string(local_428);
                if (((local_40c & 8) != 0) && ((local_40c & 4) == 0)) {
                  write_multi_char(L'0',iVar9);
                }
                if ((local_42c == 0) && (0 < (int)sVar11)) {
                  local_420 = sVar11;
                  pwVar10 = local_414;
                  do {
                    local_420 = local_420 - 1;
                    iVar7 = __mbtowc_l((wchar_t *)&local_468,(char *)pwVar10,
                                       (size_t)(local_450.locinfo)->locale_name[3],&local_450);
                    if (iVar7 < 1) {
                      local_424 = -1;
                      break;
                    }
                    write_char((wchar_t)local_468);
                    pwVar10 = (wchar_t *)((int)pwVar10 + iVar7);
                  } while (0 < (int)local_420);
                }
                else {
                  write_string(sVar11);
                }
                if ((-1 < local_424) && ((local_40c & 4) != 0)) {
                  write_multi_char(L' ',iVar9);
                }
              }
            }
            else {
              if (0x70 < local_420) {
                if (local_420 == 0x73) {
LAB_1004c9b9:
                  uVar5 = local_410;
                  if (local_410 == 0xffffffff) {
                    uVar5 = 0x7fffffff;
                  }
                  local_41c = param_4 + 2;
                  local_414 = *(wchar_t **)param_4;
                  if ((local_40c & 0x20) == 0) {
                    pwVar10 = local_414;
                    if (local_414 == (wchar_t *)0x0) {
                      local_414 = (wchar_t *)PTR_u__null__1006512c;
                      pwVar10 = (wchar_t *)PTR_u__null__1006512c;
                    }
                    for (; (uVar5 != 0 && (uVar5 = uVar5 - 1, *pwVar10 != L'\0'));
                        pwVar10 = pwVar10 + 1) {
                    }
                    iVar9 = (int)pwVar10 - (int)local_414;
LAB_1004cf21:
                    local_41c = param_4 + 2;
                    local_42c = 1;
                    local_418 = iVar9 >> 1;
                  }
                  else {
                    if (local_414 == (wchar_t *)0x0) {
                      local_414 = (wchar_t *)PTR_DAT_10065128;
                    }
                    local_418 = 0;
                    pwVar10 = local_414;
                    if (0 < (int)uVar5) {
                      do {
                        if ((byte)*pwVar10 == 0) break;
                        iVar9 = __isleadbyte_l((uint)(byte)*pwVar10,&local_450);
                        if (iVar9 != 0) {
                          pwVar10 = (wchar_t *)((int)pwVar10 + 1);
                        }
                        pwVar10 = (wchar_t *)((int)pwVar10 + 1);
                        local_418 = local_418 + 1;
                      } while ((int)local_418 < (int)uVar5);
                    }
                  }
                  goto LAB_1004cf29;
                }
                if (local_420 == 0x75) goto LAB_1004cbe1;
                if (local_420 != 0x78) goto LAB_1004cf29;
                local_458 = 0x27;
LAB_1004cd6a:
                local_420 = 0x10;
                if ((local_40c & 0x80) != 0) {
                  local_434 = 0x30;
                  local_432 = (short)local_458 + 0x51;
                  local_428 = 2;
                }
                goto LAB_1004cbeb;
              }
              if (local_420 == 0x70) {
                local_410 = 8;
LAB_1004cd3a:
                local_458 = 7;
                goto LAB_1004cd6a;
              }
              if (local_420 < 0x65) goto LAB_1004cf29;
              if (local_420 < 0x68) goto LAB_1004c950;
              if (local_420 == 0x69) goto LAB_1004cbda;
              if (local_420 != 0x6e) {
                if (local_420 != 0x6f) goto LAB_1004cf29;
                local_420 = 8;
                if ((local_40c & 0x80) != 0) {
                  local_40c = local_40c | 0x200;
                }
                goto LAB_1004cbeb;
              }
              piVar4 = *(int **)param_4;
              local_41c = param_4 + 2;
              iVar9 = __get_printf_count_output();
              if (iVar9 == 0) goto LAB_1004c604;
              if ((local_40c & 0x20) == 0) {
                *piVar4 = local_424;
              }
              else {
                *(undefined2 *)piVar4 = (undefined2)local_424;
              }
              local_454 = 1;
            }
            pwVar10 = local_41c;
            puVar12 = local_464;
            if (local_45c != (wchar_t *)0x0) {
              _free(local_45c);
              local_45c = (wchar_t *)0x0;
              pwVar10 = local_41c;
              puVar12 = local_464;
            }
          }
          local_420 = (uint)*puVar12;
          param_4 = pwVar10;
          param_2 = puVar12;
        } while (*puVar12 != 0);
        if ((local_438 != 0) && (local_438 != 7)) goto LAB_1004c63f;
      }
      if (local_444 != '\0') {
        *(uint *)(local_448 + 0x70) = *(uint *)(local_448 + 0x70) & 0xfffffffd;
      }
      goto LAB_1004d108;
    }
LAB_1004c63f:
    piVar4 = __errno();
    *piVar4 = 0x16;
  }
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  if (local_444 != '\0') {
    *(uint *)(local_448 + 0x70) = *(uint *)(local_448 + 0x70) & 0xfffffffd;
  }
LAB_1004d108:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

