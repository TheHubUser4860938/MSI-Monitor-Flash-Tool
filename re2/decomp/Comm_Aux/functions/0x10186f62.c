// rea decompile_all
// name: store_winword
// address: 0x10186f62
// body: available
// range: 0x10186f62-0x101873d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    bool __cdecl store_winword(struct __crt_locale_pointers * const,int,struct tm const *
   const,wchar_t * * const,unsigned int * const,struct __crt_lc_time_data const * const)
   
   Library: Visual Studio 2015 Release */

bool __cdecl
store_winword(__crt_locale_pointers *param_1,int param_2,tm *param_3,wchar_t **param_4,uint *param_5
             ,__crt_lc_time_data *param_6)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  uint *puVar3;
  uint *puVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  bool bVar14;
  undefined4 uVar15;
  uint *local_20;
  wchar_t *local_1c;
  short local_18;
  short local_16;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_20 = param_5;
  if (param_2 == 0) {
    pwVar13 = *(wchar_t **)(param_6 + 0x154);
  }
  else if (param_2 == 1) {
    pwVar13 = *(wchar_t **)(param_6 + 0x158);
  }
  else {
    pwVar13 = *(wchar_t **)(param_6 + 0x15c);
  }
  if (*(int *)(param_6 + 0xac) != 1) {
    local_18 = (short)param_3->tm_year + 0x76c;
    local_16 = (short)param_3->tm_mon + 1;
    local_12 = (undefined2)param_3->tm_mday;
    local_10 = (undefined2)param_3->tm_hour;
    local_e = (undefined2)param_3->tm_min;
    local_c = (undefined2)param_3->tm_sec;
    local_a = 0;
    if (param_2 != 2) {
      iVar7 = ___acrt_GetDateFormatEx_28(*(undefined4 *)(param_6 + 0x160),0,&local_18,pwVar13,0,0,0)
      ;
    }
    else {
      iVar7 = ___acrt_GetTimeFormatEx_24(*(undefined4 *)(param_6 + 0x160),0,&local_18,pwVar13,0,0);
    }
    if (iVar7 != 0) {
      uVar11 = iVar7 * 2;
      if ((uVar11 + 8 & -(uint)(uVar11 < uVar11 + 8)) == 0) {
        pwVar12 = (wchar_t *)0x0;
LAB_101870ab:
        if (pwVar12 != (wchar_t *)0x0) {
          pwVar2 = pwVar12;
          if (param_2 != 2) {
            iVar7 = ___acrt_GetDateFormatEx_28
                              (*(undefined4 *)(param_6 + 0x160),0,&local_18,pwVar13,pwVar12,iVar7,0)
            ;
          }
          else {
            iVar7 = ___acrt_GetTimeFormatEx_24
                              (*(undefined4 *)(param_6 + 0x160),0,&local_18,pwVar13,pwVar12,iVar7);
          }
          while ((iVar7 = iVar7 + -1, 0 < iVar7 && (*param_5 != 0))) {
            **param_4 = *pwVar2;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 - 1;
            pwVar2 = pwVar2 + 1;
          }
          __freea_crt(pwVar12);
          goto LAB_1018711c;
        }
      }
      else if ((-(uint)(uVar11 < uVar11 + 8) & uVar11 + 8) < 0x401) {
        puVar8 = (undefined4 *)&stack0xffffffc0;
        if (&stack0x00000000 != (undefined1 *)0x40) {
LAB_10187082:
          pwVar12 = (wchar_t *)(puVar8 + 2);
          goto LAB_101870ab;
        }
      }
      else {
        puVar8 = (undefined4 *)__malloc_base(-(uint)(uVar11 < uVar11 + 8) & uVar11 + 8);
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = 0xdddd;
          goto LAB_10187082;
        }
      }
      __freea_crt(0);
    }
  }
LAB_101873ae:
  do {
    puVar4 = local_20;
    wVar1 = *pwVar13;
    if ((wVar1 == L'\0') || (*param_5 == 0)) goto LAB_1018711c;
    local_20 = (uint *)((uint)local_20 & 0xffffff00);
    puVar3 = local_20;
    uVar11 = 0;
    local_1c = pwVar13;
    do {
      uVar9 = uVar11;
      local_1c = local_1c + 1;
      uVar11 = uVar9 + 1;
    } while (*local_1c == wVar1);
    local_20._1_3_ = SUB43(puVar4,1);
    local_20 = puVar3;
    if ((ushort)wVar1 < 0x65) {
      if (wVar1 == L'd') {
        if (uVar9 == 0) {
          local_20 = (uint *)CONCAT31(local_20._1_3_,1);
        }
        else if (uVar9 != 1) {
          if (uVar9 == 2) {
            uVar15 = 0x61;
          }
          else {
            if (uVar9 != 3) goto LAB_10187377;
            uVar15 = 0x41;
          }
          goto LAB_1018738f;
        }
        uVar15 = 100;
        goto LAB_1018738f;
      }
      if (wVar1 == L'\'') {
        uVar9 = uVar11 & 0x80000001;
        bVar14 = uVar9 == 0;
        if ((int)uVar9 < 0) {
          bVar14 = (uVar9 - 1 | 0xfffffffe) == 0xffffffff;
        }
        pwVar13 = pwVar13 + uVar11;
        if (bVar14) {
          wVar1 = *pwVar13;
          if (wVar1 == L'\0') goto LAB_1018711c;
          do {
            if ((*param_5 == 0) || (pwVar13 = pwVar13 + 1, wVar1 == L'\'')) break;
            **param_4 = wVar1;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 - 1;
            wVar1 = *pwVar13;
          } while (wVar1 != L'\0');
        }
        goto LAB_101873ae;
      }
      if (wVar1 != L'A') {
        if (wVar1 == L'H') {
          if (uVar9 == 0) {
            local_20 = (uint *)CONCAT31(local_20._1_3_,1);
          }
          else if (uVar11 != 2) goto LAB_10187377;
          uVar15 = 0x48;
          goto LAB_1018738f;
        }
        if (wVar1 == L'M') {
          if (uVar9 == 0) {
            local_20 = (uint *)CONCAT31(local_20._1_3_,1);
          }
          else if (uVar9 != 1) {
            if (uVar9 == 2) {
              uVar15 = 0x62;
            }
            else {
              if (uVar9 != 3) goto LAB_10187377;
              uVar15 = 0x42;
            }
            goto LAB_1018738f;
          }
          uVar15 = 0x6d;
          goto LAB_1018738f;
        }
        if (wVar1 != L'a') goto LAB_10187377;
      }
      iVar7 = __wcsicmp(pwVar13,L"am/pm");
      if (iVar7 == 0) {
        local_1c = pwVar13 + 5;
      }
      else {
        iVar7 = __wcsicmp(pwVar13,L"a/p");
        if (iVar7 == 0) {
          local_1c = pwVar13 + 3;
        }
      }
      uVar15 = 0x70;
    }
    else if (wVar1 == L'h') {
      if (uVar9 == 0) {
        local_20 = (uint *)CONCAT31(local_20._1_3_,1);
      }
      else if (uVar11 != 2) goto LAB_10187377;
      uVar15 = 0x49;
    }
    else if (wVar1 == L'm') {
      if (uVar9 == 0) {
        local_20 = (uint *)CONCAT31(local_20._1_3_,1);
      }
      else if (uVar11 != 2) goto LAB_10187377;
      uVar15 = 0x4d;
    }
    else if (wVar1 == L's') {
      if (uVar9 == 0) {
        local_20 = (uint *)CONCAT31(local_20._1_3_,1);
      }
      else if (uVar11 != 2) goto LAB_10187377;
      uVar15 = 0x53;
    }
    else {
      if (wVar1 == L't') {
        if (param_3->tm_hour < 0xc) {
          pwVar12 = *(wchar_t **)(param_6 + 0x14c);
        }
        else {
          pwVar12 = *(wchar_t **)(param_6 + 0x150);
        }
        pwVar13 = local_1c;
        if ((uVar11 == 1) && (*param_5 != 0)) {
          **param_4 = *pwVar12;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 - 1;
        }
        else {
          wVar1 = *pwVar12;
          while ((wVar1 != L'\0' && (*param_5 != 0))) {
            pwVar12 = pwVar12 + 1;
            **param_4 = wVar1;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 - 1;
            wVar1 = *pwVar12;
          }
        }
        goto LAB_101873ae;
      }
      if (wVar1 != L'y') {
LAB_10187377:
        **param_4 = wVar1;
        *param_4 = *param_4 + 1;
        *param_5 = *param_5 - 1;
        pwVar13 = pwVar13 + 1;
        goto LAB_101873ae;
      }
      if (uVar9 == 1) {
        uVar15 = 0x79;
      }
      else {
        if (uVar9 != 3) goto LAB_10187377;
        uVar15 = 0x59;
      }
    }
LAB_1018738f:
    cVar6 = FUN_1018632c(param_1,uVar15,param_3,param_4,param_5,param_6,local_20);
    pwVar13 = local_1c;
  } while (cVar6 != '\0');
  piVar10 = __errno();
  *piVar10 = 0x16;
LAB_1018711c:
  uVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar5;
}

