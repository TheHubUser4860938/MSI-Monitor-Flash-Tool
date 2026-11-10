// rea decompile_all
// name: FUN_101ad891
// address: 0x101ad891
// body: available
// range: 0x101ad891-0x101ae36c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Instruction at (ram,0x101ae39e) overlaps instruction at (ram,0x101ae39c)
    */
/* WARNING (jumptable): Unable to track spacebase fully for stack */

uint FUN_101ad891(_locale_t param_1,ushort param_2,tm *param_3,wchar_t **param_4,uint *param_5,
                 __crt_lc_time_data *param_6,char param_7)

{
  byte *pbVar1;
  int *piVar2;
  char *pcVar3;
  undefined2 uVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  wchar_t wVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  undefined4 extraout_EAX;
  byte *pbVar12;
  uint extraout_EAX_00;
  int iVar13;
  byte bVar15;
  uint in_ECX;
  int extraout_ECX;
  byte bVar16;
  char cVar17;
  undefined4 extraout_EDX;
  undefined3 uVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  uint *puVar22;
  byte in_AF;
  bool bVar23;
  bool bVar24;
  wchar_t **in_stack_ffffffbc;
  uint *in_stack_ffffffc0;
  undefined4 uVar25;
  int iVar26;
  wchar_t *pwVar27;
  size_t local_c;
  uint local_8;
  undefined3 uVar14;
  
  puVar21 = &stack0xfffffffc;
  puVar19 = &stack0xfffffffc;
  puVar20 = &stack0xfffffffc;
  local_c = in_ECX;
  local_8 = in_ECX;
  if (0x5a < param_2) {
    while (param_2 < 0x6f) {
      if (param_2 == 0x6e) {
        pwVar27 = L"\n";
        goto LAB_101adb62;
      }
      if (param_2 < 0x66) {
        if (param_2 == 0x65) {
          iVar9 = param_3->tm_mday;
          if ((iVar9 < 1) || (0x1f < iVar9)) goto LAB_101adb90;
          bVar7 = (param_7 != '\0') - 1U & 0x20;
          goto LAB_101adbc2;
        }
        if (param_2 == 0x61) {
          iVar9 = param_3->tm_wday;
          if ((iVar9 < 0) || (6 < iVar9)) goto LAB_101adb90;
          pwVar27 = *(wchar_t **)(param_6 + iVar9 * 4 + 0xb4);
          goto LAB_101adb62;
        }
        if (param_2 == 0x62) {
          iVar9 = param_3->tm_mon;
          if ((iVar9 < 0) || (0xb < iVar9)) goto LAB_101adb90;
          pwVar27 = *(wchar_t **)(param_6 + iVar9 * 4 + 0xec);
          goto LAB_101adb62;
        }
        if (param_2 != 99) {
          if (param_2 != 100) {
            return 0;
          }
          if ((param_3->tm_mday < 1) || (0x1f < param_3->tm_mday)) goto LAB_101adb90;
          wVar8 = (wchar_t)(char)((param_7 != '\0') - 1U & 0x30);
          iVar26 = 2;
          iVar9 = param_3->tm_mday;
          goto LAB_101ad91a;
        }
        if ((param_6 != (__crt_lc_time_data *)&PTR_DAT_102064a0) || (param_7 != '\0')) {
          bVar6 = store_winword((__crt_locale_pointers *)param_1,(uint)(param_7 != '\0'),param_3,
                                param_4,param_5,param_6);
          if (!bVar6) goto LAB_101ada40;
          store_string(L" ",param_4,param_5);
          cVar5 = store_winword((__crt_locale_pointers *)param_1,2,param_3,param_4,param_5,param_6);
          goto LAB_101adae8;
        }
        cVar5 = FUN_101ad891(param_1);
        if (cVar5 == '\0') goto LAB_101ada40;
        store_string(L" ",param_4,param_5);
        cVar5 = FUN_101ad891(param_1,0x62,param_3,param_4);
        if (cVar5 == '\0') goto LAB_101ada40;
        store_string(L" ",param_4,param_5);
        cVar5 = FUN_101ad891(param_1,0x65,param_3,param_4);
        if (cVar5 == '\0') goto LAB_101ada40;
        store_string(L" ",param_4,param_5);
        cVar5 = FUN_101ad891(param_1,0x54,param_3,param_4);
        if (cVar5 == '\0') goto LAB_101ada40;
        store_string(L" ",param_4,param_5);
        uVar25 = 0x59;
        goto LAB_101adadd;
      }
      if (param_2 == 0x67) {
        if ((param_3->tm_year < -0x76c) || (0x1fa3 < param_3->tm_year)) goto LAB_101adb90;
        wVar8 = L'0';
        iVar26 = 2;
        iVar9 = compute_iso_year(param_3->tm_year,param_3->tm_wday,param_3->tm_yday);
        goto LAB_101ad999;
      }
      if (param_2 != 0x68) {
        if (param_2 == 0x6a) {
          iVar9 = param_3->tm_yday;
          if ((iVar9 < 0) || (0x16d < iVar9)) goto LAB_101adb90;
          iVar26 = 3;
        }
        else {
          if (param_2 != 0x6d) {
            return 0;
          }
          iVar9 = param_3->tm_mon;
          if ((iVar9 < 0) || (0xb < iVar9)) goto LAB_101adb90;
          iVar26 = 2;
        }
        wVar8 = (wchar_t)(char)((param_7 != '\0') - 1U & 0x30);
        iVar9 = iVar9 + 1;
        goto LAB_101ad91a;
      }
      param_2 = 0x62;
    }
    if (param_2 < 0x78) {
      if (param_2 != 0x77) {
        if (param_2 == 0x70) {
          iVar9 = param_3->tm_hour;
          if ((-1 < iVar9) && (iVar9 < 0x18)) {
            if (iVar9 < 0xc) {
              pwVar27 = *(wchar_t **)(param_6 + 0x14c);
            }
            else {
              pwVar27 = *(wchar_t **)(param_6 + 0x150);
            }
            goto LAB_101adb62;
          }
          goto LAB_101adb90;
        }
        if (param_2 == 0x72) {
          if (param_6 == (__crt_lc_time_data *)&PTR_DAT_102064a0) {
            cVar5 = FUN_101ad891(param_1);
            if (cVar5 == '\0') goto LAB_101ada40;
            store_string(L":",param_4,param_5);
            cVar5 = FUN_101ad891(param_1,0x4d,param_3,param_4);
            if (cVar5 == '\0') goto LAB_101ada40;
            store_string(L":",param_4,param_5);
            cVar5 = FUN_101ad891(param_1,0x53,param_3,param_4);
            if (cVar5 == '\0') goto LAB_101ada40;
            store_string(L" ",param_4,param_5);
            uVar25 = 0x70;
            goto LAB_101adadd;
          }
          cVar5 = FUN_101ad891(param_1);
          goto LAB_101adae8;
        }
        if (param_2 == 0x74) {
          pwVar27 = L"\t";
          goto LAB_101adb62;
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
        iVar26 = 1;
LAB_101adbd0:
        wVar8 = (wchar_t)(char)bVar7;
LAB_101ad91a:
        store_number(iVar9,iVar26,param_4,param_5,wVar8);
        return 1;
      }
      goto LAB_101adb90;
    }
    if (param_2 != 0x78) {
      if (param_2 == 0x79) {
        iVar9 = param_3->tm_year;
        if ((-0x76d < iVar9) && (iVar9 < 0x1fa4)) {
          wVar8 = (wchar_t)(char)((param_7 != '\0') - 1U & 0x30);
          iVar26 = 2;
LAB_101ad999:
          iVar9 = (iVar9 + 0x76c) % 100;
          goto LAB_101ad91a;
        }
      }
      else {
        if (param_2 != 0x7a) {
          return 0;
        }
        ___tzset();
        local_8 = 0;
        iVar9 = FUN_101b4a26();
        if (iVar9 == 0) {
          if (param_3->tm_isdst == 0) {
LAB_101addb3:
            iVar9 = (int)((local_8 ^ (int)local_8 >> 0x1f) - ((int)local_8 >> 0x1f)) / 0x3c;
            pwVar27 = L"+";
            if (-1 < (int)local_8) {
              pwVar27 = L"-";
            }
            store_string(pwVar27,param_4,param_5);
            store_number(iVar9 / 0x3c,2,param_4,param_5,L'0');
            store_number(iVar9 % 0x3c,2,param_4,param_5,L'0');
            return 1;
          }
          local_c = 0;
          iVar9 = FUN_101b49fa();
          if (iVar9 == 0) {
            local_8 = local_8 + local_c;
            goto LAB_101addb3;
          }
        }
      }
      goto LAB_101adb90;
    }
    uVar11 = (uint)(param_7 != '\0');
LAB_101ade60:
    cVar5 = store_winword((__crt_locale_pointers *)param_1,uVar11,param_3,param_4,param_5,param_6);
    goto LAB_101adae8;
  }
  if (param_2 == 0x5a) {
    ___tzset();
    local_c = 0;
    iVar9 = FUN_101b49c8();
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
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    bVar16 = (byte)extraout_EAX;
    uVar14 = (undefined3)((uint)extraout_EAX >> 8);
    bVar7 = 0x99 < bVar16 | bVar7;
    cVar5 = bVar16 + (9 < (bVar16 & 0xf) | in_AF) * -6 + bVar7 * -0x60;
    pbVar12 = (byte *)CONCAT31(uVar14,cVar5);
    if (extraout_ECX == 1 || cVar5 != '\0') {
      pbVar1 = (byte *)(extraout_ECX + -0x20);
      bVar15 = (byte)((uint)param_4 >> 8);
      bVar16 = *pbVar1 + bVar15;
      bVar6 = CARRY1(*pbVar1,bVar15) || CARRY1(bVar16,bVar7);
      *pbVar1 = bVar16 + bVar7;
      bVar7 = (byte)extraout_EDX - *pbVar12;
      bVar23 = (byte)extraout_EDX < *pbVar12 || bVar7 < bVar6;
      uVar18 = (undefined3)((uint)extraout_EDX >> 8);
      bVar7 = bVar7 - bVar6;
      bVar16 = bVar7 - *pbVar12;
      bVar6 = bVar7 < *pbVar12 || bVar16 < bVar23;
      bVar16 = bVar16 - bVar23;
      iVar9 = extraout_ECX + -2;
      if (iVar9 == 0 || bVar16 != 0) {
        pbVar1 = (byte *)(CONCAT31(uVar18,bVar16) + -0x1e);
        bVar15 = (byte)((uint)iVar9 >> 8);
        bVar7 = *pbVar1 + bVar15;
        bVar23 = CARRY1(*pbVar1,bVar15) || CARRY1(bVar7,bVar6);
        *pbVar1 = bVar7 + bVar6;
        bVar6 = bVar16 < *pbVar12 || (byte)(bVar16 - *pbVar12) < bVar23;
        cVar17 = (bVar16 - *pbVar12) - bVar23;
        if (iVar9 == 1 || cVar17 != '\0') {
          pcVar3 = (char *)(CONCAT31(uVar18,cVar17) + -0x1d50efe6);
          *pcVar3 = *pcVar3 + (char)param_4 + bVar6;
          puVar19 = &stack0xffffffd0;
          goto code_r0x101ae392;
        }
        cVar5 = cVar5 + -1 + bVar6;
        uVar11 = CONCAT31(uVar14,cVar5);
        puVar20 = &stack0xfffffffc;
        if (cVar5 == '\0') goto code_r0x101ae3a2;
      }
      else {
code_r0x101ae392:
        if (*(short *)(puVar19 + 0x18) == 0) {
          in_stack_ffffffc0 = *(uint **)(puVar19 + 0x14);
          in_stack_ffffffbc = *(wchar_t ***)(puVar19 + 0x10);
          puVar20 = puVar19;
          goto code_r0x101ae3a2;
        }
        uVar11 = *(uint *)(puVar19 + 0xc);
        puVar21 = puVar19;
      }
      puVar22 = *(uint **)(puVar21 + 0x14);
      if (uVar11 < *puVar22) {
        iVar9 = 0;
        piVar10 = *(int **)(puVar21 + 0x10);
        *(uint *)(puVar21 + -0xc) = uVar11;
        if (uVar11 != 0) {
          iVar26 = *(int *)(puVar21 + 8);
          iVar13 = (uVar11 - 1) * 2;
          uVar4 = *(undefined2 *)(puVar21 + 0x18);
          *(int *)(puVar21 + -4) = iVar13;
          *(int *)(puVar21 + -8) = iVar26;
          do {
            if (iVar26 == 0) {
              *(undefined2 *)(iVar13 + *piVar10) = uVar4;
            }
            else {
              *(short *)(*(int *)(puVar21 + -4) + *piVar10) = (short)(iVar26 % 10) + 0x30;
            }
            iVar26 = *(int *)(puVar21 + -8) / 10;
            iVar9 = iVar9 + 1;
            iVar13 = *(int *)(puVar21 + -4) + -2;
            *(int *)(puVar21 + -8) = iVar26;
            piVar2 = (int *)(puVar21 + -0xc);
            *piVar2 = *piVar2 + -1;
            *(int *)(puVar21 + -4) = iVar13;
          } while (*piVar2 != 0);
          puVar22 = *(uint **)(puVar21 + 0x14);
        }
        uVar11 = iVar9 * 2;
        *piVar10 = *piVar10 + uVar11;
        *puVar22 = *puVar22 - iVar9;
      }
      else {
        *puVar22 = 0;
      }
    }
    else {
      if (extraout_ECX == 2) {
        *(char *)((int)param_4 + -0x1374aa01) = *(char *)((int)param_4 + -0x1374aa01) + bVar7;
        puVar19 = &stack0xfffffffc;
        goto code_r0x101ae392;
      }
      *pbVar12 = *pbVar12 + cVar5;
code_r0x101ae3a2:
      store_number_without_lead_zeroes(*(int *)(puVar20 + 8),in_stack_ffffffbc,in_stack_ffffffc0);
      uVar11 = extraout_EAX_00;
    }
    return uVar11;
  }
  if (param_2 < 0x4e) {
    if (param_2 == 0x4d) {
      iVar9 = param_3->tm_min;
      if (-1 < iVar9) {
        bVar24 = SBORROW4(iVar9,0x3b);
        bVar23 = iVar9 + -0x3b < 0;
        bVar6 = iVar9 == 0x3b;
        goto LAB_101ae03f;
      }
      goto LAB_101adb90;
    }
    if (param_2 < 0x45) {
      if (param_2 != 0x44) {
        if (param_2 == 0x25) {
          pwVar27 = L"%";
LAB_101adb62:
          store_string(pwVar27,param_4,param_5);
          return 1;
        }
        if (param_2 == 0x41) {
          iVar9 = param_3->tm_wday;
          if ((-1 < iVar9) && (iVar9 < 7)) {
            pwVar27 = *(wchar_t **)(param_6 + iVar9 * 4 + 0xd0);
            goto LAB_101adb62;
          }
        }
        else if (param_2 == 0x42) {
          iVar9 = param_3->tm_mon;
          if ((-1 < iVar9) && (iVar9 < 0xc)) {
            pwVar27 = *(wchar_t **)(param_6 + iVar9 * 4 + 0x11c);
            goto LAB_101adb62;
          }
        }
        else {
          if (param_2 != 0x43) {
            return 0;
          }
          iVar9 = param_3->tm_year;
          if ((-0x76d < iVar9) && (iVar9 < 0x1fa4)) {
            wVar8 = (wchar_t)(char)((param_7 != '\0') - 1U & 0x30);
            iVar26 = 2;
            iVar9 = (iVar9 + 0x76c) / 100;
            goto LAB_101ad91a;
          }
        }
        goto LAB_101adb90;
      }
      cVar5 = FUN_101ad891(param_1);
      if (cVar5 == '\0') goto LAB_101ada40;
      store_string(L"/",param_4,param_5);
      cVar5 = FUN_101ad891(param_1,100,param_3,param_4);
      if (cVar5 == '\0') goto LAB_101ada40;
      store_string(L"/",param_4,param_5);
      uVar25 = 0x79;
    }
    else {
      if (param_2 != 0x46) {
        if (param_2 == 0x47) {
          if ((-0x76d < param_3->tm_year) && (param_3->tm_year < 0x1fa4)) {
            wVar8 = L'0';
            iVar26 = 4;
            iVar9 = compute_iso_year(param_3->tm_year,param_3->tm_wday,param_3->tm_yday);
            iVar9 = iVar9 + 0x76c;
            goto LAB_101ad91a;
          }
        }
        else if (param_2 == 0x48) {
          iVar9 = param_3->tm_hour;
          if (-1 < iVar9) {
            bVar24 = SBORROW4(iVar9,0x17);
            bVar23 = iVar9 + -0x17 < 0;
            bVar6 = iVar9 == 0x17;
            goto LAB_101ae03f;
          }
        }
        else {
          if (param_2 != 0x49) {
            return 0;
          }
          iVar26 = param_3->tm_hour;
          if ((-1 < iVar26) && (iVar26 < 0x18)) {
            iVar9 = iVar26 % 0xc;
            if (iVar26 % 0xc == 0) {
              iVar9 = 0xc;
            }
            wVar8 = (wchar_t)(char)((param_7 != '\0') - 1U & 0x30);
            iVar26 = 2;
            goto LAB_101ad91a;
          }
        }
        goto LAB_101adb90;
      }
      cVar5 = FUN_101ad891(param_1);
      if (cVar5 == '\0') goto LAB_101ada40;
      store_string(L"-",param_4,param_5);
      cVar5 = FUN_101ad891(param_1,0x6d,param_3,param_4);
      if (cVar5 == '\0') goto LAB_101ada40;
      store_string(L"-",param_4,param_5);
      uVar25 = 100;
    }
    goto LAB_101adadd;
  }
  switch(param_2) {
  case 0x52:
    cVar5 = FUN_101ad891(param_1);
    if (cVar5 == '\0') goto LAB_101ada40;
    store_string(L":",param_4,param_5);
    uVar25 = 0x4d;
    goto LAB_101adadd;
  case 0x53:
    iVar9 = param_3->tm_sec;
    if (-1 < iVar9) {
      bVar24 = SBORROW4(iVar9,0x3c);
      bVar23 = iVar9 + -0x3c < 0;
      bVar6 = iVar9 == 0x3c;
LAB_101ae03f:
      if (bVar6 || bVar24 != bVar23) {
        bVar7 = (param_7 != '\0') - 1U & 0x30;
LAB_101adbc2:
        iVar26 = 2;
        goto LAB_101adbd0;
      }
    }
    break;
  case 0x54:
    cVar5 = FUN_101ad891(param_1);
    if (cVar5 == '\0') goto LAB_101ada40;
    store_string(L":",param_4,param_5);
    cVar5 = FUN_101ad891(param_1,0x4d,param_3,param_4);
    if (cVar5 == '\0') goto LAB_101ada40;
    store_string(L":",param_4,param_5);
    uVar25 = 0x53;
LAB_101adadd:
    cVar5 = FUN_101ad891(param_1,uVar25,param_3,param_4);
LAB_101adae8:
    if (cVar5 != '\0') {
      return 1;
    }
LAB_101ada40:
    piVar10 = __errno();
    *piVar10 = 0x16;
    return 0;
  case 0x55:
  case 0x57:
    iVar26 = param_3->tm_wday;
    if ((-1 < iVar26) && (iVar26 < 7)) {
      if (param_2 == 0x57) {
        if (iVar26 == 0) {
          iVar26 = 6;
        }
        else {
          iVar26 = iVar26 + -1;
        }
      }
      iVar13 = param_3->tm_yday;
      if ((-1 < iVar13) && (iVar13 < 0x16e)) {
        iVar9 = 0;
        if ((iVar26 <= iVar13) && (iVar9 = iVar13 / 7, iVar26 <= iVar13 % 7)) {
          iVar9 = iVar9 + 1;
        }
        wVar8 = (wchar_t)(char)((param_7 != '\0') - 1U & 0x30);
        iVar26 = 2;
        goto LAB_101ad91a;
      }
    }
    break;
  case 0x56:
    wVar8 = (wchar_t)(char)((param_7 != '\0') - 1U & 0x30);
    iVar26 = 2;
    iVar9 = compute_iso_week(param_3->tm_year,param_3->tm_wday,param_3->tm_yday);
    goto LAB_101ad91a;
  case 0x58:
    uVar11 = 2;
    goto LAB_101ade60;
  case 0x59:
    iVar9 = param_3->tm_year;
    if ((-0x76d < iVar9) && (iVar9 < 0x1fa4)) {
      wVar8 = (wchar_t)(char)((param_7 != '\0') - 1U & 0x30);
      iVar9 = iVar9 + 0x76c;
      iVar26 = 4;
      goto LAB_101ad91a;
    }
    break;
  default:
    goto LAB_101ae35c;
  }
LAB_101adb90:
  piVar10 = __errno();
  *piVar10 = 0x16;
  FUN_1019ab61();
LAB_101ae35c:
  return 0;
}

