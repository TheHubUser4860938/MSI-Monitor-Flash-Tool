// rea decompile_all
// name: __crt_strtox::parse_integer<unsigned___int64,__crt_strtox::c_string_character_source<wchar_t>_>
// address: 0x101a069b
// body: available
// range: 0x101a069b-0x101a0c8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x101a0ba2) */
/* Library Function - Single Match
    unsigned __int64 __cdecl __crt_strtox::parse_integer<unsigned __int64,class
   __crt_strtox::c_string_character_source<wchar_t> >(struct __crt_locale_pointers * const,class
   __crt_strtox::c_string_character_source<wchar_t>,int,bool)
   
   Library: Visual Studio 2015 Release */

__uint64 __cdecl
__crt_strtox::parse_integer<unsigned___int64,__crt_strtox::c_string_character_source<wchar_t>_>
          (__crt_locale_pointers *param_1,wchar_t *param_2,undefined4 *param_3,uint param_4,
          char param_5)

{
  ulonglong uVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint extraout_ECX;
  int iVar6;
  wchar_t wVar7;
  uint uVar8;
  undefined4 unaff_EDI;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int local_3c [3];
  char local_30;
  wchar_t *local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  bVar2 = c_string_character_source<wchar_t>::validate
                    ((c_string_character_source<wchar_t> *)&param_2);
  uVar10 = param_4;
  if (bVar2) {
    if ((param_4 == 0) || ((1 < (int)param_4 && ((int)param_4 < 0x25)))) {
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_3c,param_1);
      local_c = 0;
      local_10 = 0;
      local_2c = param_2;
      do {
        wVar7 = *param_2;
        param_2 = param_2 + 1;
        iVar6 = _iswctype(wVar7,8);
      } while (iVar6 != 0);
      local_8 = (uint)(param_5 != '\0');
      if (wVar7 == L'-') {
        local_8 = local_8 | 2;
LAB_101a0744:
        wVar7 = *param_2;
        param_2 = param_2 + 1;
      }
      else if (wVar7 == L'+') goto LAB_101a0744;
      uVar8 = (uint)(ushort)wVar7;
      iVar6 = 0x30;
      if ((uVar10 != 0) && (uVar10 != 0x10)) goto LAB_101a098b;
      if ((ushort)wVar7 < 0x30) {
LAB_101a090e:
        if ((((ushort)wVar7 < 0x41) || (0x5a < (ushort)wVar7)) && (0x19 < (ushort)(wVar7 + L'ﾟ')))
        {
          iVar6 = -1;
        }
        else {
          uVar4 = uVar8;
          if ((ushort)(wVar7 + L'ﾟ') < 0x1a) {
            uVar4 = uVar8 - 0x20;
          }
          iVar6 = uVar4 - 0x37;
        }
      }
      else {
        if ((ushort)wVar7 < 0x3a) {
LAB_101a0775:
          iVar6 = uVar8 - iVar6;
        }
        else {
          iVar6 = 0xff10;
          if ((ushort)wVar7 < 0xff10) {
            iVar6 = 0x660;
            if (((ushort)wVar7 < 0x660) ||
               ((0x669 < (ushort)wVar7 &&
                ((iVar6 = 0x6f0, (ushort)wVar7 < 0x6f0 ||
                 ((0x6f9 < (ushort)wVar7 &&
                  ((iVar6 = 0x966, (ushort)wVar7 < 0x966 ||
                   ((0x96f < (ushort)wVar7 &&
                    ((iVar6 = 0x9e6, (ushort)wVar7 < 0x9e6 ||
                     ((0x9ef < (ushort)wVar7 &&
                      ((iVar6 = 0xa66, (ushort)wVar7 < 0xa66 ||
                       ((0xa6f < (ushort)wVar7 &&
                        ((iVar6 = 0xae6, (ushort)wVar7 < 0xae6 ||
                         ((0xaef < (ushort)wVar7 &&
                          ((iVar6 = 0xb66, (ushort)wVar7 < 0xb66 ||
                           ((0xb6f < (ushort)wVar7 &&
                            ((iVar6 = 0xc66, (ushort)wVar7 < 0xc66 ||
                             ((0xc6f < (ushort)wVar7 &&
                              ((iVar6 = 0xce6, (ushort)wVar7 < 0xce6 ||
                               ((0xcef < (ushort)wVar7 &&
                                ((iVar6 = 0xd66, (ushort)wVar7 < 0xd66 ||
                                 ((0xd6f < (ushort)wVar7 &&
                                  ((iVar6 = 0xe50, (ushort)wVar7 < 0xe50 ||
                                   ((0xe59 < (ushort)wVar7 &&
                                    ((iVar6 = 0xed0, (ushort)wVar7 < 0xed0 ||
                                     ((0xed9 < (ushort)wVar7 &&
                                      ((iVar6 = 0xf20, (ushort)wVar7 < 0xf20 ||
                                       ((0xf29 < (ushort)wVar7 &&
                                        ((iVar6 = 0x1040, (ushort)wVar7 < 0x1040 ||
                                         ((0x1049 < (ushort)wVar7 &&
                                          ((iVar6 = 0x17e0, (ushort)wVar7 < 0x17e0 ||
                                           ((0x17e9 < (ushort)wVar7 &&
                                            ((iVar6 = 0x1810, (ushort)wVar7 < 0x1810 ||
                                             (0x1819 < (ushort)wVar7))))))))))))))))))))))))))))))))
                             )))))))))))))))))))))))))))))) goto LAB_101a090e;
            goto LAB_101a0775;
          }
          if ((ushort)wVar7 < 0xff1a) goto LAB_101a0775;
          iVar6 = -1;
        }
        if (iVar6 == -1) goto LAB_101a090e;
      }
      if (iVar6 == 0) {
        wVar7 = *param_2;
        if ((wVar7 == L'x') || (wVar7 == L'X')) {
          if (uVar10 == 0) {
            uVar10 = 0x10;
            param_4 = uVar10;
          }
          uVar8 = (uint)(ushort)param_2[1];
          param_2 = param_2 + 2;
        }
        else {
          if (uVar10 == 0) {
            uVar10 = 8;
            param_4 = uVar10;
          }
          param_2 = param_2 + 1;
          c_string_character_source<wchar_t>::unget
                    ((c_string_character_source<wchar_t> *)&param_2,wVar7);
        }
      }
      else if (uVar10 == 0) {
        uVar10 = 10;
        param_4 = uVar10;
      }
LAB_101a098b:
      local_24 = (int)uVar10 >> 0x1f;
      local_28 = uVar10;
      uVar11 = __aulldvrm(0xffffffff,0xffffffff,uVar10,(short)((int)uVar10 >> 0x1f));
      uVar1 = CONCAT44(local_10,local_c);
      iVar6 = 0;
      local_20 = extraout_ECX;
      local_1c = uVar10;
      do {
        local_10 = (int)(uVar1 >> 0x20);
        local_c = (int)uVar1;
        local_18 = (undefined4)(uVar11 >> 0x20);
        local_14 = (undefined4)uVar11;
        iVar5 = 0x30;
        wVar7 = (wchar_t)uVar8;
        if ((ushort)wVar7 < 0x30) {
LAB_101a0b5e:
          if ((((ushort)wVar7 < 0x41) || (0x5a < (ushort)wVar7)) &&
             (0x19 < (ushort)(wVar7 + L'ﾟ'))) {
            uVar10 = 0xffffffff;
          }
          else {
            if ((ushort)(wVar7 + L'ﾟ') < 0x1a) {
              uVar8 = uVar8 - 0x20;
            }
            uVar10 = uVar8 - 0x37;
          }
        }
        else {
          if ((ushort)wVar7 < 0x3a) {
LAB_101a09c5:
            uVar10 = uVar8 - iVar5;
          }
          else {
            iVar5 = 0xff10;
            if ((ushort)wVar7 < 0xff10) {
              iVar5 = 0x660;
              if (((ushort)wVar7 < 0x660) ||
                 ((0x669 < (ushort)wVar7 &&
                  ((iVar5 = 0x6f0, (ushort)wVar7 < 0x6f0 ||
                   ((0x6f9 < (ushort)wVar7 &&
                    ((iVar5 = 0x966, (ushort)wVar7 < 0x966 ||
                     ((0x96f < (ushort)wVar7 &&
                      ((iVar5 = 0x9e6, (ushort)wVar7 < 0x9e6 ||
                       ((0x9ef < (ushort)wVar7 &&
                        ((iVar5 = 0xa66, (ushort)wVar7 < 0xa66 ||
                         ((0xa6f < (ushort)wVar7 &&
                          ((iVar5 = 0xae6, (ushort)wVar7 < 0xae6 ||
                           ((0xaef < (ushort)wVar7 &&
                            ((iVar5 = 0xb66, (ushort)wVar7 < 0xb66 ||
                             ((0xb6f < (ushort)wVar7 &&
                              ((iVar5 = 0xc66, (ushort)wVar7 < 0xc66 ||
                               ((0xc6f < (ushort)wVar7 &&
                                ((iVar5 = 0xce6, (ushort)wVar7 < 0xce6 ||
                                 ((0xcef < (ushort)wVar7 &&
                                  ((iVar5 = 0xd66, (ushort)wVar7 < 0xd66 ||
                                   ((0xd6f < (ushort)wVar7 &&
                                    ((iVar5 = 0xe50, (ushort)wVar7 < 0xe50 ||
                                     ((0xe59 < (ushort)wVar7 &&
                                      ((iVar5 = 0xed0, (ushort)wVar7 < 0xed0 ||
                                       ((0xed9 < (ushort)wVar7 &&
                                        ((iVar5 = 0xf20, (ushort)wVar7 < 0xf20 ||
                                         ((0xf29 < (ushort)wVar7 &&
                                          ((iVar5 = 0x1040, (ushort)wVar7 < 0x1040 ||
                                           ((0x1049 < (ushort)wVar7 &&
                                            ((iVar5 = 0x17e0, (ushort)wVar7 < 0x17e0 ||
                                             ((0x17e9 < (ushort)wVar7 &&
                                              ((iVar5 = 0x1810, (ushort)wVar7 < 0x1810 ||
                                               (0x1819 < (ushort)wVar7))))))))))))))))))))))))))))))
                                )))))))))))))))))))))))))))))))) goto LAB_101a0b5e;
              goto LAB_101a09c5;
            }
            if ((ushort)wVar7 < 0xff1a) goto LAB_101a09c5;
            uVar10 = 0xffffffff;
          }
          if (uVar10 == 0xffffffff) goto LAB_101a0b5e;
        }
        if ((uVar10 == 0xffffffff) || (param_4 <= uVar10)) goto LAB_101a0c08;
        if ((uVar1 < uVar11) || ((uVar11 == uVar1 && ((local_1c != 0 || (uVar10 <= local_20)))))) {
          local_8 = local_8 | 8;
          lVar12 = __allmul(local_28,local_24,local_c,(short)(uVar1 >> 0x20));
          uVar11 = CONCAT44(local_18,local_14);
          uVar1 = lVar12 + (ulonglong)uVar10;
        }
        else {
          local_8 = local_8 | 0xc;
        }
        uVar8 = (uint)(ushort)*param_2;
        param_2 = param_2 + 1;
      } while( true );
    }
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_1019ab61();
  }
  iVar9 = 0;
  iVar6 = 0;
LAB_101a06db:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_2;
  }
  return CONCAT44(iVar6,iVar9);
LAB_101a0c08:
  c_string_character_source<wchar_t>::unget((c_string_character_source<wchar_t> *)&param_2,wVar7);
  iVar9 = local_c;
  iVar5 = local_10;
  if ((local_8 & 8) == 0) {
    param_2 = local_2c;
    iVar9 = 0;
  }
  else {
    bVar2 = is_overflow_condition<unsigned___int64>(local_8,CONCAT44(unaff_EDI,local_10));
    if (bVar2) {
      piVar3 = __errno();
      *piVar3 = 0x22;
      if ((local_8 & 1) == 0) {
        iVar9 = -1;
        iVar6 = -1;
      }
      else if ((local_8 & 2) == 0) {
        iVar9 = -1;
        iVar6 = 0x7fffffff;
      }
      else {
        iVar9 = 0;
        iVar6 = -0x80000000;
      }
    }
    else {
      iVar6 = iVar5;
      if ((local_8 & 2) != 0) {
        bVar2 = iVar9 != 0;
        iVar9 = -iVar9;
        iVar6 = -(iVar5 + (uint)bVar2);
      }
    }
  }
  if (local_30 != '\0') {
    *(uint *)(local_3c[0] + 0x350) = *(uint *)(local_3c[0] + 0x350) & 0xfffffffd;
  }
  goto LAB_101a06db;
}

