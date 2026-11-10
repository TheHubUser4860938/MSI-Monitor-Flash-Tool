// rea decompile_all
// name: FUN_101815a5
// address: 0x101815a5
// body: available
// range: 0x101815a5-0x10182080 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Instruction at (ram,0x101820b2) overlaps instruction at (ram,0x101820b0)
    */
/* WARNING (jumptable): Unable to track spacebase fully for stack */

uint FUN_101815a5(_locale_t param_1,ushort param_2,tm *param_3,wchar_t **param_4,uint *param_5,
                 __crt_lc_time_data *param_6,char param_7)

{
  int *piVar1;
  byte *pbVar2;
  undefined2 uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  wchar_t wVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  byte *extraout_EAX;
  uint extraout_EAX_00;
  int iVar12;
  uint in_ECX;
  byte bVar13;
  undefined2 extraout_DX;
  byte bVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  short unaff_SI;
  uint *puVar17;
  uint *unaff_EDI;
  bool bVar18;
  bool bVar19;
  wchar_t **in_stack_ffffffc0;
  uint *in_stack_ffffffc4;
  undefined4 uVar20;
  int iVar21;
  wchar_t *pwVar22;
  wchar_t **ppwVar23;
  size_t local_c;
  uint local_8;
  
  local_c = in_ECX;
  local_8 = in_ECX;
  if (0x5a < param_2) {
    while (param_2 < 0x6f) {
      if (param_2 == 0x6e) {
        pwVar22 = L"\n";
        goto LAB_10181876;
      }
      if (param_2 < 0x66) {
        if (param_2 == 0x65) {
          iVar9 = param_3->tm_mday;
          if ((iVar9 < 1) || (0x1f < iVar9)) goto LAB_101818a4;
          bVar7 = (param_7 != '\0') - 1U & 0x20;
          goto LAB_101818d6;
        }
        if (param_2 == 0x61) {
          iVar9 = param_3->tm_wday;
          if ((iVar9 < 0) || (6 < iVar9)) goto LAB_101818a4;
          pwVar22 = *(wchar_t **)(param_6 + iVar9 * 4 + 0xb4);
          goto LAB_10181876;
        }
        if (param_2 == 0x62) {
          iVar9 = param_3->tm_mon;
          if ((iVar9 < 0) || (0xb < iVar9)) goto LAB_101818a4;
          pwVar22 = *(wchar_t **)(param_6 + iVar9 * 4 + 0xec);
          goto LAB_10181876;
        }
        if (param_2 != 99) {
          if (param_2 != 100) {
            return 0;
          }
          if ((param_3->tm_mday < 1) || (0x1f < param_3->tm_mday)) goto LAB_101818a4;
          wVar8 = (wchar_t)(char)((param_7 != '\0') - 1U & 0x30);
          iVar21 = 2;
          iVar9 = param_3->tm_mday;
          goto LAB_1018162e;
        }
        if ((param_6 != (__crt_lc_time_data *)&PTR_DAT_101d9f78) || (param_7 != '\0')) {
          bVar6 = store_winword((__crt_locale_pointers *)param_1,(uint)(param_7 != '\0'),param_3,
                                param_4,param_5,param_6);
          if (!bVar6) goto LAB_10181754;
          store_string(L" ",param_4,param_5);
          cVar5 = store_winword((__crt_locale_pointers *)param_1,2,param_3,param_4,param_5,param_6);
          goto LAB_101817fc;
        }
        cVar5 = FUN_101815a5(param_1,0x61);
        if (cVar5 == '\0') goto LAB_10181754;
        store_string(L" ",param_4,param_5);
        cVar5 = FUN_101815a5(param_1,0x62,param_3,param_4,param_5);
        if (cVar5 == '\0') goto LAB_10181754;
        store_string(L" ",param_4,param_5);
        cVar5 = FUN_101815a5(param_1,0x65,param_3,param_4,param_5);
        if (cVar5 == '\0') goto LAB_10181754;
        store_string(L" ",param_4,param_5);
        cVar5 = FUN_101815a5(param_1,0x54,param_3,param_4,param_5);
        if (cVar5 == '\0') goto LAB_10181754;
        store_string(L" ",param_4,param_5);
        uVar20 = 0x59;
        goto LAB_101817f1;
      }
      if (param_2 == 0x67) {
        if ((param_3->tm_year < -0x76c) || (0x1fa3 < param_3->tm_year)) goto LAB_101818a4;
        wVar8 = L'0';
        iVar21 = 2;
        iVar9 = compute_iso_year(param_3->tm_year,param_3->tm_wday,param_3->tm_yday);
        goto LAB_101816ad;
      }
      if (param_2 != 0x68) {
        if (param_2 == 0x6a) {
          iVar9 = param_3->tm_yday;
          if ((iVar9 < 0) || (0x16d < iVar9)) goto LAB_101818a4;
          iVar21 = 3;
        }
        else {
          if (param_2 != 0x6d) {
            return 0;
          }
          iVar9 = param_3->tm_mon;
          if ((iVar9 < 0) || (0xb < iVar9)) goto LAB_101818a4;
          iVar21 = 2;
        }
        wVar8 = (wchar_t)(char)((param_7 != '\0') - 1U & 0x30);
        iVar9 = iVar9 + 1;
        goto LAB_1018162e;
      }
      param_2 = 0x62;
    }
    if (param_2 < 0x78) {
      if (param_2 != 0x77) {
        if (param_2 == 0x70) {
          iVar9 = param_3->tm_hour;
          if ((-1 < iVar9) && (iVar9 < 0x18)) {
            if (iVar9 < 0xc) {
              pwVar22 = *(wchar_t **)(param_6 + 0x14c);
            }
            else {
              pwVar22 = *(wchar_t **)(param_6 + 0x150);
            }
            goto LAB_10181876;
          }
          goto LAB_101818a4;
        }
        if (param_2 == 0x72) {
          if (param_6 == (__crt_lc_time_data *)&PTR_DAT_101d9f78) {
            cVar5 = FUN_101815a5(param_1,0x49);
            if (cVar5 == '\0') goto LAB_10181754;
            store_string(L":",param_4,param_5);
            cVar5 = FUN_101815a5(param_1,0x4d,param_3,param_4,param_5);
            if (cVar5 == '\0') goto LAB_10181754;
            store_string(L":",param_4,param_5);
            cVar5 = FUN_101815a5(param_1,0x53,param_3,param_4,param_5);
            if (cVar5 == '\0') goto LAB_10181754;
            store_string(L" ",param_4,param_5);
            uVar20 = 0x70;
            goto LAB_101817f1;
          }
          cVar5 = FUN_101815a5(param_1,0x58);
          goto LAB_101817fc;
        }
        if (param_2 == 0x74) {
          pwVar22 = L"\t";
          goto LAB_10181876;
        }
        if (param_2 != 0x75) {
          return 0;
        }
      }
      iVar9 = param_3->tm_wday;
      if ((-1 < iVar9) && (iVar9 < 7)) {
        if ((iVar9 == 0) && (param_2 == 0x75)) {
          iVar9 = 7;
        }
        bVar7 = (param_7 != '\0') - 1U & 0x30;
        iVar21 = 1;
LAB_101818e4:
        wVar8 = (wchar_t)(char)bVar7;
LAB_1018162e:
        store_number(iVar9,iVar21,param_4,param_5,wVar8);
        return 1;
      }
      goto LAB_101818a4;
    }
    if (param_2 != 0x78) {
      if (param_2 == 0x79) {
        iVar9 = param_3->tm_year;
        if ((-0x76d < iVar9) && (iVar9 < 0x1fa4)) {
          wVar8 = (wchar_t)(char)((param_7 != '\0') - 1U & 0x30);
          iVar21 = 2;
LAB_101816ad:
          iVar9 = (iVar9 + 0x76c) % 100;
          goto LAB_1018162e;
        }
      }
      else {
        if (param_2 != 0x7a) {
          return 0;
        }
        ___tzset();
        local_8 = 0;
        iVar9 = FUN_1018951e();
        if (iVar9 == 0) {
          if (param_3->tm_isdst == 0) {
LAB_10181ac7:
            iVar9 = (int)((local_8 ^ (int)local_8 >> 0x1f) - ((int)local_8 >> 0x1f)) / 0x3c;
            pwVar22 = L"+";
            if (-1 < (int)local_8) {
              pwVar22 = L"-";
            }
            store_string(pwVar22,param_4,param_5);
            store_number(iVar9 / 0x3c,2,param_4,param_5,L'0');
            store_number(iVar9 % 0x3c,2,param_4,param_5,L'0');
            return 1;
          }
          local_c = 0;
          iVar9 = FUN_101894f2();
          if (iVar9 == 0) {
            local_8 = local_8 + local_c;
            goto LAB_10181ac7;
          }
        }
      }
      goto LAB_101818a4;
    }
    uVar11 = (uint)(param_7 != '\0');
LAB_10181b74:
    cVar5 = store_winword((__crt_locale_pointers *)param_1,uVar11,param_3,param_4,param_5,param_6);
    goto LAB_101817fc;
  }
  if (param_2 == 0x5a) {
    ___tzset();
    local_c = 0;
    iVar9 = FUN_101894c0();
    uVar11 = __mbstowcs_s_l(&local_c,*param_4,*param_5,
                            *(char **)(iVar9 + (uint)(param_3->tm_isdst != 0) * 4),0xffffffff,
                            param_1);
    if ((uVar11 == 0) ||
       ((bVar7 = uVar11 < 0x16, uVar11 != 0x16 && (bVar7 = uVar11 < 0x22, uVar11 != 0x22)))) {
      if (uVar11 == 0x50) {
        *param_4 = *param_4 + *param_5;
        *param_5 = 0;
        return 1;
      }
      *param_5 = *param_5 + (1 - local_c);
      *param_4 = *param_4 + (local_c - 1);
      return 1;
    }
    ppwVar23 = (wchar_t **)0x0;
    uVar11 = 0;
    puVar15 = &stack0xffffffd4;
    puVar16 = &stack0xffffffd4;
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    bVar13 = (byte)extraout_DX;
    bVar6 = *extraout_EAX < bVar13 || (byte)(*extraout_EAX - bVar13) < bVar7;
    *extraout_EAX = (*extraout_EAX - bVar13) - bVar7;
    bVar18 = *extraout_EAX < bVar13 || (byte)(*extraout_EAX - bVar13) < bVar6;
    *extraout_EAX = (*extraout_EAX - bVar13) - bVar6;
    bVar7 = *extraout_EAX;
    bVar4 = *extraout_EAX - bVar13;
    bVar6 = *extraout_EAX < bVar13 || bVar4 < bVar18;
    cRam0f10181e = (char)extraout_EAX;
    *extraout_EAX = bVar4 - bVar18;
    if (*extraout_EAX == 0 ||
        (SBORROW1(bVar7,bVar13) != SBORROW1(bVar4,bVar18)) != (char)*extraout_EAX < '\0') {
      cVar5 = (char)extraout_EAX + -1 + bVar6;
      uVar11 = CONCAT31((int3)((uint)extraout_EAX >> 8),cVar5);
      puVar16 = &stack0xfffffffc;
      puVar15 = &stack0xfffffffc;
      ppwVar23 = in_stack_ffffffc0;
      unaff_EDI = in_stack_ffffffc4;
      if (cVar5 != '\0') goto code_r0x101820c6;
    }
    else {
      bVar18 = *extraout_EAX < bVar13 || (byte)(*extraout_EAX - bVar13) < bVar6;
      *extraout_EAX = (*extraout_EAX - bVar13) - bVar6;
      pbVar2 = extraout_EAX + -0x3cefe7e1;
      bVar7 = *pbVar2;
      bVar14 = (byte)((ushort)extraout_DX >> 8);
      bVar4 = *pbVar2 + bVar14;
      *pbVar2 = bVar4 + bVar18;
      *extraout_EAX = (*extraout_EAX - bVar13) - (CARRY1(bVar7,bVar14) || CARRY1(bVar4,bVar18));
      if (unaff_SI != 0) {
code_r0x101820c6:
        puVar17 = *(uint **)(puVar16 + 0x14);
        if (*puVar17 <= uVar11) {
          *puVar17 = 0;
          return uVar11;
        }
        iVar9 = 0;
        piVar10 = *(int **)(puVar16 + 0x10);
        *(uint *)(puVar16 + -0xc) = uVar11;
        if (uVar11 != 0) {
          iVar21 = *(int *)(puVar16 + 8);
          iVar12 = (uVar11 - 1) * 2;
          uVar3 = *(undefined2 *)(puVar16 + 0x18);
          *(int *)(puVar16 + -4) = iVar12;
          *(int *)(puVar16 + -8) = iVar21;
          do {
            if (iVar21 == 0) {
              *(undefined2 *)(iVar12 + *piVar10) = uVar3;
            }
            else {
              *(short *)(*(int *)(puVar16 + -4) + *piVar10) = (short)(iVar21 % 10) + 0x30;
            }
            iVar21 = *(int *)(puVar16 + -8) / 10;
            iVar9 = iVar9 + 1;
            iVar12 = *(int *)(puVar16 + -4) + -2;
            *(int *)(puVar16 + -8) = iVar21;
            piVar1 = (int *)(puVar16 + -0xc);
            *piVar1 = *piVar1 + -1;
            *(int *)(puVar16 + -4) = iVar12;
          } while (*piVar1 != 0);
          puVar17 = *(uint **)(puVar16 + 0x14);
        }
        *piVar10 = *piVar10 + iVar9 * 2;
        *puVar17 = *puVar17 - iVar9;
        return iVar9 * 2;
      }
    }
    store_number_without_lead_zeroes(*(int *)(puVar15 + 8),ppwVar23,unaff_EDI);
    return extraout_EAX_00;
  }
  if (param_2 < 0x4e) {
    if (param_2 == 0x4d) {
      iVar9 = param_3->tm_min;
      if (-1 < iVar9) {
        bVar19 = SBORROW4(iVar9,0x3b);
        bVar18 = iVar9 + -0x3b < 0;
        bVar6 = iVar9 == 0x3b;
        goto LAB_10181d53;
      }
      goto LAB_101818a4;
    }
    if (param_2 < 0x45) {
      if (param_2 != 0x44) {
        if (param_2 == 0x25) {
          pwVar22 = L"%";
LAB_10181876:
          store_string(pwVar22,param_4,param_5);
          return 1;
        }
        if (param_2 == 0x41) {
          iVar9 = param_3->tm_wday;
          if ((-1 < iVar9) && (iVar9 < 7)) {
            pwVar22 = *(wchar_t **)(param_6 + iVar9 * 4 + 0xd0);
            goto LAB_10181876;
          }
        }
        else if (param_2 == 0x42) {
          iVar9 = param_3->tm_mon;
          if ((-1 < iVar9) && (iVar9 < 0xc)) {
            pwVar22 = *(wchar_t **)(param_6 + iVar9 * 4 + 0x11c);
            goto LAB_10181876;
          }
        }
        else {
          if (param_2 != 0x43) {
            return 0;
          }
          iVar9 = param_3->tm_year;
          if ((-0x76d < iVar9) && (iVar9 < 0x1fa4)) {
            wVar8 = (wchar_t)(char)((param_7 != '\0') - 1U & 0x30);
            iVar21 = 2;
            iVar9 = (iVar9 + 0x76c) / 100;
            goto LAB_1018162e;
          }
        }
        goto LAB_101818a4;
      }
      cVar5 = FUN_101815a5(param_1,0x6d);
      if (cVar5 == '\0') goto LAB_10181754;
      store_string(L"/",param_4,param_5);
      cVar5 = FUN_101815a5(param_1,100,param_3,param_4,param_5);
      if (cVar5 == '\0') goto LAB_10181754;
      store_string(L"/",param_4,param_5);
      uVar20 = 0x79;
    }
    else {
      if (param_2 != 0x46) {
        if (param_2 == 0x47) {
          if ((-0x76d < param_3->tm_year) && (param_3->tm_year < 0x1fa4)) {
            wVar8 = L'0';
            iVar21 = 4;
            iVar9 = compute_iso_year(param_3->tm_year,param_3->tm_wday,param_3->tm_yday);
            iVar9 = iVar9 + 0x76c;
            goto LAB_1018162e;
          }
        }
        else if (param_2 == 0x48) {
          iVar9 = param_3->tm_hour;
          if (-1 < iVar9) {
            bVar19 = SBORROW4(iVar9,0x17);
            bVar18 = iVar9 + -0x17 < 0;
            bVar6 = iVar9 == 0x17;
            goto LAB_10181d53;
          }
        }
        else {
          if (param_2 != 0x49) {
            return 0;
          }
          iVar21 = param_3->tm_hour;
          if ((-1 < iVar21) && (iVar21 < 0x18)) {
            iVar9 = iVar21 % 0xc;
            if (iVar21 % 0xc == 0) {
              iVar9 = 0xc;
            }
            wVar8 = (wchar_t)(char)((param_7 != '\0') - 1U & 0x30);
            iVar21 = 2;
            goto LAB_1018162e;
          }
        }
        goto LAB_101818a4;
      }
      cVar5 = FUN_101815a5(param_1,0x59);
      if (cVar5 == '\0') goto LAB_10181754;
      store_string(L"-",param_4,param_5);
      cVar5 = FUN_101815a5(param_1,0x6d,param_3,param_4,param_5);
      if (cVar5 == '\0') goto LAB_10181754;
      store_string(L"-",param_4,param_5);
      uVar20 = 100;
    }
    goto LAB_101817f1;
  }
  switch(param_2) {
  case 0x52:
    cVar5 = FUN_101815a5(param_1,0x48);
    if (cVar5 == '\0') goto LAB_10181754;
    store_string(L":",param_4,param_5);
    uVar20 = 0x4d;
    goto LAB_101817f1;
  case 0x53:
    iVar9 = param_3->tm_sec;
    if (-1 < iVar9) {
      bVar19 = SBORROW4(iVar9,0x3c);
      bVar18 = iVar9 + -0x3c < 0;
      bVar6 = iVar9 == 0x3c;
LAB_10181d53:
      if (bVar6 || bVar19 != bVar18) {
        bVar7 = (param_7 != '\0') - 1U & 0x30;
LAB_101818d6:
        iVar21 = 2;
        goto LAB_101818e4;
      }
    }
    break;
  case 0x54:
    cVar5 = FUN_101815a5(param_1,0x48);
    if (cVar5 == '\0') goto LAB_10181754;
    store_string(L":",param_4,param_5);
    cVar5 = FUN_101815a5(param_1,0x4d,param_3,param_4,param_5);
    if (cVar5 == '\0') goto LAB_10181754;
    store_string(L":",param_4,param_5);
    uVar20 = 0x53;
LAB_101817f1:
    cVar5 = FUN_101815a5(param_1,uVar20,param_3,param_4,param_5);
LAB_101817fc:
    if (cVar5 != '\0') {
      return 1;
    }
LAB_10181754:
    piVar10 = __errno();
    *piVar10 = 0x16;
    return 0;
  case 0x55:
  case 0x57:
    iVar21 = param_3->tm_wday;
    if ((-1 < iVar21) && (iVar21 < 7)) {
      if (param_2 == 0x57) {
        if (iVar21 == 0) {
          iVar21 = 6;
        }
        else {
          iVar21 = iVar21 + -1;
        }
      }
      iVar12 = param_3->tm_yday;
      if ((-1 < iVar12) && (iVar12 < 0x16e)) {
        iVar9 = 0;
        if ((iVar21 <= iVar12) && (iVar9 = iVar12 / 7, iVar21 <= iVar12 % 7)) {
          iVar9 = iVar9 + 1;
        }
        wVar8 = (wchar_t)(char)((param_7 != '\0') - 1U & 0x30);
        iVar21 = 2;
        goto LAB_1018162e;
      }
    }
    break;
  case 0x56:
    wVar8 = (wchar_t)(char)((param_7 != '\0') - 1U & 0x30);
    iVar21 = 2;
    iVar9 = compute_iso_week(param_3->tm_year,param_3->tm_wday,param_3->tm_yday);
    goto LAB_1018162e;
  case 0x58:
    uVar11 = 2;
    goto LAB_10181b74;
  case 0x59:
    iVar9 = param_3->tm_year;
    if ((-0x76d < iVar9) && (iVar9 < 0x1fa4)) {
      wVar8 = (wchar_t)(char)((param_7 != '\0') - 1U & 0x30);
      iVar9 = iVar9 + 0x76c;
      iVar21 = 4;
      goto LAB_1018162e;
    }
    break;
  default:
    goto switchD_10181e3c_default;
  }
LAB_101818a4:
  piVar10 = __errno();
  *piVar10 = 0x16;
  FUN_1016ec41();
switchD_10181e3c_default:
  return 0;
}

