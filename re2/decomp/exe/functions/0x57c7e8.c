// rea decompile_all
// name: FUN_0057c7e8
// address: 0x57c7e8
// body: available
// range: 0x57c7e8-0x57d2c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


wchar_t **
FUN_0057c7e8(_locale_t param_1,ushort param_2,tm *param_3,wchar_t **param_4,wchar_t **param_5,
            __crt_lc_time_data *param_6,undefined4 param_7)

{
  wchar_t *pwVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  byte extraout_AL;
  wchar_t wVar5;
  int iVar6;
  int *piVar7;
  errno_t eVar8;
  wchar_t **extraout_EAX;
  int iVar9;
  byte extraout_CL;
  uint in_ECX;
  undefined4 extraout_EDX;
  bool bVar10;
  bool bVar11;
  wchar_t **ppwStack_50;
  undefined4 uVar12;
  short sVar13;
  uint uVar14;
  int iVar15;
  wchar_t *pwVar16;
  size_t local_c;
  uint local_8;
  
  local_c = in_ECX;
  local_8 = in_ECX;
  if (0x5a < param_2) {
    while (param_2 < 0x6f) {
      if (param_2 == 0x6e) {
        pwVar16 = L"\n";
        goto LAB_0057cab9;
      }
      if (param_2 < 0x66) {
        if (param_2 == 0x65) {
          iVar6 = param_3->tm_mday;
          if ((iVar6 < 1) || (0x1f < iVar6)) goto LAB_0057cae7;
          bVar4 = ((char)param_7 != '\0') - 1U & 0x20;
          goto LAB_0057cb19;
        }
        if (param_2 == 0x61) {
          iVar6 = param_3->tm_wday;
          if ((iVar6 < 0) || (6 < iVar6)) goto LAB_0057cae7;
          pwVar16 = *(wchar_t **)(param_6 + iVar6 * 4 + 0xb4);
          goto LAB_0057cab9;
        }
        if (param_2 == 0x62) {
          iVar6 = param_3->tm_mon;
          if ((iVar6 < 0) || (0xb < iVar6)) goto LAB_0057cae7;
          pwVar16 = *(wchar_t **)(param_6 + iVar6 * 4 + 0xec);
          goto LAB_0057cab9;
        }
        if (param_2 != 99) {
          if (param_2 != 100) {
            return (wchar_t **)0x0;
          }
          if ((param_3->tm_mday < 1) || (0x1f < param_3->tm_mday)) goto LAB_0057cae7;
          wVar5 = (wchar_t)(char)(((char)param_7 != '\0') - 1U & 0x30);
          iVar15 = 2;
          iVar6 = param_3->tm_mday;
          goto LAB_0057c871;
        }
        if ((param_6 != (__crt_lc_time_data *)&PTR_DAT_005e1138) || ((char)param_7 != '\0')) {
          bVar3 = store_winword((__crt_locale_pointers *)param_1,(uint)((char)param_7 != '\0'),
                                param_3,param_4,(uint *)param_5,param_6);
          if (!bVar3) goto LAB_0057c997;
          store_string(L" ",param_4,(uint *)param_5);
          cVar2 = store_winword((__crt_locale_pointers *)param_1,2,param_3,param_4,(uint *)param_5,
                                param_6);
          goto LAB_0057ca3f;
        }
        cVar2 = FUN_0057c7e8(param_1,0x61,param_3,param_4,param_5,&PTR_DAT_005e1138,0);
        if (cVar2 == '\0') goto LAB_0057c997;
        store_string(L" ",param_4,(uint *)param_5);
        cVar2 = FUN_0057c7e8(param_1,0x62,param_3,param_4,param_5,&PTR_DAT_005e1138,0);
        if (cVar2 == '\0') goto LAB_0057c997;
        store_string(L" ",param_4,(uint *)param_5);
        cVar2 = FUN_0057c7e8(param_1,0x65,param_3,param_4,param_5,&PTR_DAT_005e1138,0);
        if (cVar2 == '\0') goto LAB_0057c997;
        store_string(L" ",param_4,(uint *)param_5);
        cVar2 = FUN_0057c7e8(param_1,0x54,param_3,param_4,param_5,&PTR_DAT_005e1138,0);
        if (cVar2 == '\0') goto LAB_0057c997;
        store_string(L" ",param_4,(uint *)param_5);
        param_7 = 0;
        uVar12 = 0x59;
        goto LAB_0057ca34;
      }
      if (param_2 == 0x67) {
        if ((param_3->tm_year < -0x76c) || (0x1fa3 < param_3->tm_year)) goto LAB_0057cae7;
        wVar5 = L'0';
        iVar15 = 2;
        iVar6 = compute_iso_year(param_3->tm_year,param_3->tm_wday,param_3->tm_yday);
        goto LAB_0057c8f0;
      }
      if (param_2 != 0x68) {
        if (param_2 == 0x6a) {
          iVar6 = param_3->tm_yday;
          if ((iVar6 < 0) || (0x16d < iVar6)) goto LAB_0057cae7;
          iVar15 = 3;
        }
        else {
          if (param_2 != 0x6d) {
            return (wchar_t **)0x0;
          }
          iVar6 = param_3->tm_mon;
          if ((iVar6 < 0) || (0xb < iVar6)) goto LAB_0057cae7;
          iVar15 = 2;
        }
        wVar5 = (wchar_t)(char)(((char)param_7 != '\0') - 1U & 0x30);
        iVar6 = iVar6 + 1;
        goto LAB_0057c871;
      }
      param_2 = 0x62;
    }
    if (param_2 < 0x78) {
      if (param_2 != 0x77) {
        if (param_2 == 0x70) {
          iVar6 = param_3->tm_hour;
          if ((-1 < iVar6) && (iVar6 < 0x18)) {
            if (iVar6 < 0xc) {
              pwVar16 = *(wchar_t **)(param_6 + 0x14c);
            }
            else {
              pwVar16 = *(wchar_t **)(param_6 + 0x150);
            }
            goto LAB_0057cab9;
          }
          goto LAB_0057cae7;
        }
        if (param_2 == 0x72) {
          if (param_6 == (__crt_lc_time_data *)&PTR_DAT_005e1138) {
            cVar2 = FUN_0057c7e8(param_1,0x49,param_3,param_4,param_5,&PTR_DAT_005e1138,param_7);
            if (cVar2 == '\0') goto LAB_0057c997;
            store_string(L":",param_4,(uint *)param_5);
            cVar2 = FUN_0057c7e8(param_1,0x4d,param_3,param_4,param_5,&PTR_DAT_005e1138,param_7);
            if (cVar2 == '\0') goto LAB_0057c997;
            store_string(L":",param_4,(uint *)param_5);
            cVar2 = FUN_0057c7e8(param_1,0x53,param_3,param_4,param_5,&PTR_DAT_005e1138,param_7);
            if (cVar2 == '\0') goto LAB_0057c997;
            store_string(L" ",param_4,(uint *)param_5);
            uVar12 = 0x70;
            goto LAB_0057ca34;
          }
          cVar2 = FUN_0057c7e8(param_1,0x58,param_3,param_4,param_5,param_6,param_7);
          goto LAB_0057ca3f;
        }
        if (param_2 == 0x74) {
          pwVar16 = L"\t";
          goto LAB_0057cab9;
        }
        if (param_2 != 0x75) {
          return (wchar_t **)0x0;
        }
      }
      iVar6 = param_3->tm_wday;
      if ((-1 < iVar6) && (iVar6 < 7)) {
        if ((iVar6 == 0) && (param_2 == 0x75)) {
          iVar6 = 7;
        }
        bVar4 = ((char)param_7 != '\0') - 1U & 0x30;
        iVar15 = 1;
LAB_0057cb27:
        wVar5 = (wchar_t)(char)bVar4;
LAB_0057c871:
        store_number(iVar6,iVar15,param_4,(uint *)param_5,wVar5);
        return (wchar_t **)0x1;
      }
    }
    else {
      if (param_2 == 0x78) {
        uVar14 = (uint)((char)param_7 != '\0');
        goto LAB_0057cdb7;
      }
      if (param_2 == 0x79) {
        iVar6 = param_3->tm_year;
        if ((-0x76d < iVar6) && (iVar6 < 0x1fa4)) {
          wVar5 = (wchar_t)(char)(((char)param_7 != '\0') - 1U & 0x30);
          iVar15 = 2;
LAB_0057c8f0:
          iVar6 = (iVar6 + 0x76c) % 100;
          goto LAB_0057c871;
        }
      }
      else {
        if (param_2 != 0x7a) {
          return (wchar_t **)0x0;
        }
        ___tzset();
        local_8 = 0;
        iVar6 = FUN_0058fc78(&local_8);
        if (iVar6 == 0) {
          if (param_3->tm_isdst == 0) {
LAB_0057cd0a:
            iVar6 = (int)((local_8 ^ (int)local_8 >> 0x1f) - ((int)local_8 >> 0x1f)) / 0x3c;
            pwVar16 = L"+";
            if (-1 < (int)local_8) {
              pwVar16 = L"-";
            }
            store_string(pwVar16,param_4,(uint *)param_5);
            store_number(iVar6 / 0x3c,2,param_4,(uint *)param_5,L'0');
            store_number(iVar6 % 0x3c,2,param_4,(uint *)param_5,L'0');
            return (wchar_t **)0x1;
          }
          local_c = 0;
          iVar6 = FUN_0058fc4c(&local_c);
          if (iVar6 == 0) {
            local_8 = local_8 + local_c;
            goto LAB_0057cd0a;
          }
        }
      }
    }
    goto LAB_0057cae7;
  }
  if (param_2 == 0x5a) {
    ___tzset();
    local_c = 0;
    iVar6 = FUN_0058fc1a();
    eVar8 = __mbstowcs_s_l(&local_c,*param_4,(size_t)*param_5,
                           *(char **)(iVar6 + (uint)(param_3->tm_isdst != 0) * 4),0xffffffff,param_1
                          );
    if ((eVar8 != 0) && ((eVar8 == 0x16 || (eVar8 == 0x22)))) {
      sVar13 = 0;
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      iVar6 = CONCAT31((int3)((uint)extraout_EDX >> 8),extraout_AL);
      *(char *)param_5 = *(char *)param_5 << 1 | CARRY1((byte)extraout_EDX,extraout_AL);
      uVar12 = in(0xd0);
      *(char *)(iVar6 + -0x2f) = *(char *)(iVar6 + -0x2f) + extraout_AL;
      pwVar16 = *param_5;
      *param_5 = (wchar_t *)((int)*param_5 << 1 | (uint)CARRY1(extraout_CL,(byte)uVar12));
      pwVar1 = *param_5;
      *param_5 = (wchar_t *)((int)*param_5 << 1 | (uint)((int)pwVar16 < 0));
      pwVar16 = *param_5;
      *param_5 = (wchar_t *)((int)*param_5 << 1 | (uint)((int)pwVar1 < 0));
      bVar4 = (extraout_CL + (byte)uVar12 & 0x1f) % 9;
      *(byte *)param_5 =
           *(char *)param_5 << bVar4 |
           (byte)(CONCAT11((int)pwVar16 < 0,*(char *)param_5) >> 9 - bVar4);
      if (sVar13 == 0) {
        store_number_without_lead_zeroes(iVar6,param_5,(uint *)param_5);
        param_5 = extraout_EAX;
      }
      else if (param_5 < *param_5) {
        iVar15 = 0;
        ppwStack_50 = param_5;
        if (param_5 != (wchar_t **)0x0) {
          iVar9 = ((int)param_5 + -1) * 2;
          do {
            if (iVar6 == 0) {
              *(short *)(iVar9 + (int)*param_5) = sVar13;
            }
            else {
              *(short *)(iVar9 + (int)*param_5) = (short)(iVar6 % 10) + 0x30;
            }
            iVar6 = iVar6 / 10;
            iVar15 = iVar15 + 1;
            iVar9 = iVar9 + -2;
            ppwStack_50 = (wchar_t **)((int)ppwStack_50 + -1);
          } while (ppwStack_50 != (wchar_t **)0x0);
        }
        *param_5 = *param_5 + iVar15;
        *param_5 = (wchar_t *)((int)*param_5 - iVar15);
        param_5 = (wchar_t **)(iVar15 * 2);
      }
      else {
        *param_5 = (wchar_t *)0x0;
      }
      return param_5;
    }
    if (eVar8 == 0x50) {
      *param_4 = *param_4 + (int)*param_5;
      *param_5 = (wchar_t *)0x0;
      return (wchar_t **)0x1;
    }
    *param_5 = (wchar_t *)((int)*param_5 + (1 - local_c));
    *param_4 = *param_4 + (local_c - 1);
    return (wchar_t **)0x1;
  }
  if (param_2 < 0x4e) {
    if (param_2 == 0x4d) {
      iVar6 = param_3->tm_min;
      if (-1 < iVar6) {
        bVar11 = SBORROW4(iVar6,0x3b);
        bVar10 = iVar6 + -0x3b < 0;
        bVar3 = iVar6 == 0x3b;
        goto LAB_0057cf96;
      }
      goto LAB_0057cae7;
    }
    if (param_2 < 0x45) {
      if (param_2 != 0x44) {
        if (param_2 == 0x25) {
          pwVar16 = L"%";
LAB_0057cab9:
          store_string(pwVar16,param_4,(uint *)param_5);
          return (wchar_t **)0x1;
        }
        if (param_2 == 0x41) {
          iVar6 = param_3->tm_wday;
          if ((-1 < iVar6) && (iVar6 < 7)) {
            pwVar16 = *(wchar_t **)(param_6 + iVar6 * 4 + 0xd0);
            goto LAB_0057cab9;
          }
        }
        else if (param_2 == 0x42) {
          iVar6 = param_3->tm_mon;
          if ((-1 < iVar6) && (iVar6 < 0xc)) {
            pwVar16 = *(wchar_t **)(param_6 + iVar6 * 4 + 0x11c);
            goto LAB_0057cab9;
          }
        }
        else {
          if (param_2 != 0x43) {
            return (wchar_t **)0x0;
          }
          iVar6 = param_3->tm_year;
          if ((-0x76d < iVar6) && (iVar6 < 0x1fa4)) {
            wVar5 = (wchar_t)(char)(((char)param_7 != '\0') - 1U & 0x30);
            iVar15 = 2;
            iVar6 = (iVar6 + 0x76c) / 100;
            goto LAB_0057c871;
          }
        }
        goto LAB_0057cae7;
      }
      cVar2 = FUN_0057c7e8(param_1,0x6d,param_3,param_4,param_5,param_6,param_7);
      if (cVar2 == '\0') goto LAB_0057c997;
      store_string(L"/",param_4,(uint *)param_5);
      cVar2 = FUN_0057c7e8(param_1,100,param_3,param_4,param_5,param_6,param_7);
      if (cVar2 == '\0') goto LAB_0057c997;
      store_string(L"/",param_4,(uint *)param_5);
      uVar12 = 0x79;
    }
    else {
      if (param_2 != 0x46) {
        if (param_2 == 0x47) {
          if ((-0x76d < param_3->tm_year) && (param_3->tm_year < 0x1fa4)) {
            wVar5 = L'0';
            iVar15 = 4;
            iVar6 = compute_iso_year(param_3->tm_year,param_3->tm_wday,param_3->tm_yday);
            iVar6 = iVar6 + 0x76c;
            goto LAB_0057c871;
          }
        }
        else if (param_2 == 0x48) {
          iVar6 = param_3->tm_hour;
          if (-1 < iVar6) {
            bVar11 = SBORROW4(iVar6,0x17);
            bVar10 = iVar6 + -0x17 < 0;
            bVar3 = iVar6 == 0x17;
            goto LAB_0057cf96;
          }
        }
        else {
          if (param_2 != 0x49) {
            return (wchar_t **)0x0;
          }
          iVar15 = param_3->tm_hour;
          if ((-1 < iVar15) && (iVar15 < 0x18)) {
            iVar6 = iVar15 % 0xc;
            if (iVar15 % 0xc == 0) {
              iVar6 = 0xc;
            }
            wVar5 = (wchar_t)(char)(((char)param_7 != '\0') - 1U & 0x30);
            iVar15 = 2;
            goto LAB_0057c871;
          }
        }
        goto LAB_0057cae7;
      }
      cVar2 = FUN_0057c7e8(param_1,0x59,param_3,param_4,param_5,param_6,param_7);
      if (cVar2 == '\0') goto LAB_0057c997;
      store_string(L"-",param_4,(uint *)param_5);
      cVar2 = FUN_0057c7e8(param_1,0x6d,param_3,param_4,param_5,param_6,param_7);
      if (cVar2 == '\0') goto LAB_0057c997;
      store_string(L"-",param_4,(uint *)param_5);
      uVar12 = 100;
    }
    goto LAB_0057ca34;
  }
  switch(param_2) {
  case 0x52:
    cVar2 = FUN_0057c7e8(param_1,0x48,param_3,param_4,param_5,param_6,param_7);
    if (cVar2 == '\0') goto LAB_0057c997;
    store_string(L":",param_4,(uint *)param_5);
    uVar12 = 0x4d;
    goto LAB_0057ca34;
  case 0x53:
    iVar6 = param_3->tm_sec;
    if (-1 < iVar6) {
      bVar11 = SBORROW4(iVar6,0x3c);
      bVar10 = iVar6 + -0x3c < 0;
      bVar3 = iVar6 == 0x3c;
LAB_0057cf96:
      if (bVar3 || bVar11 != bVar10) {
        bVar4 = ((char)param_7 != '\0') - 1U & 0x30;
LAB_0057cb19:
        iVar15 = 2;
        goto LAB_0057cb27;
      }
    }
    break;
  case 0x54:
    cVar2 = FUN_0057c7e8(param_1,0x48,param_3,param_4,param_5,param_6,param_7);
    if (cVar2 == '\0') goto LAB_0057c997;
    store_string(L":",param_4,(uint *)param_5);
    cVar2 = FUN_0057c7e8(param_1,0x4d,param_3,param_4,param_5,param_6,param_7);
    if (cVar2 == '\0') goto LAB_0057c997;
    store_string(L":",param_4,(uint *)param_5);
    uVar12 = 0x53;
LAB_0057ca34:
    cVar2 = FUN_0057c7e8(param_1,uVar12,param_3,param_4,param_5,param_6,param_7);
LAB_0057ca3f:
    if (cVar2 != '\0') {
      return (wchar_t **)0x1;
    }
LAB_0057c997:
    piVar7 = __errno();
    *piVar7 = 0x16;
    return (wchar_t **)0x0;
  case 0x55:
  case 0x57:
    iVar15 = param_3->tm_wday;
    if ((-1 < iVar15) && (iVar15 < 7)) {
      if (param_2 == 0x57) {
        if (iVar15 == 0) {
          iVar15 = 6;
        }
        else {
          iVar15 = iVar15 + -1;
        }
      }
      iVar9 = param_3->tm_yday;
      if ((-1 < iVar9) && (iVar9 < 0x16e)) {
        iVar6 = 0;
        if ((iVar15 <= iVar9) && (iVar6 = iVar9 / 7, iVar15 <= iVar9 % 7)) {
          iVar6 = iVar6 + 1;
        }
        wVar5 = (wchar_t)(char)(((char)param_7 != '\0') - 1U & 0x30);
        iVar15 = 2;
        goto LAB_0057c871;
      }
    }
    break;
  case 0x56:
    wVar5 = (wchar_t)(char)(((char)param_7 != '\0') - 1U & 0x30);
    iVar15 = 2;
    iVar6 = compute_iso_week(param_3->tm_year,param_3->tm_wday,param_3->tm_yday);
    goto LAB_0057c871;
  case 0x58:
    uVar14 = 2;
LAB_0057cdb7:
    cVar2 = store_winword((__crt_locale_pointers *)param_1,uVar14,param_3,param_4,(uint *)param_5,
                          param_6);
    goto LAB_0057ca3f;
  case 0x59:
    iVar6 = param_3->tm_year;
    if ((-0x76d < iVar6) && (iVar6 < 0x1fa4)) {
      wVar5 = (wchar_t)(char)(((char)param_7 != '\0') - 1U & 0x30);
      iVar6 = iVar6 + 0x76c;
      iVar15 = 4;
      goto LAB_0057c871;
    }
    break;
  default:
    goto LAB_0057d2b3;
  }
LAB_0057cae7:
  piVar7 = __errno();
  *piVar7 = 0x16;
  FUN_0057662d();
LAB_0057d2b3:
  return (wchar_t **)0x0;
}

