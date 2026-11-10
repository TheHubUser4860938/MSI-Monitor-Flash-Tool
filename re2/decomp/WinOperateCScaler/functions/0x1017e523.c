// rea decompile_all
// name: __acrt_stdio_parse_mode<wchar_t>
// address: 0x1017e523
// body: available
// range: 0x1017e523-0x1017e766 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    struct __acrt_stdio_stream_mode __cdecl __acrt_stdio_parse_mode<wchar_t>(wchar_t const * const)
   
   Library: Visual Studio 2015 Release */

wchar_t * __cdecl __acrt_stdio_parse_mode<wchar_t>(wchar_t *param_1)

{
  short sVar1;
  wchar_t wVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  char cVar7;
  uint uVar6;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  short *in_stack_00000008;
  bool local_8;
  bool local_7;
  char local_6;
  byte local_5;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  param_1[4] = L'\0';
  param_1[5] = L'\0';
  *(undefined4 *)(param_1 + 2) = DAT_1020dc18;
  for (; *in_stack_00000008 == 0x20; in_stack_00000008 = in_stack_00000008 + 1) {
  }
  sVar1 = *in_stack_00000008;
  cVar7 = '\0';
  if (sVar1 == 0x61) {
    param_1[0] = L'ĉ';
    param_1[1] = L'\0';
LAB_1017e58c:
    param_1[2] = L'\x02';
    param_1[3] = L'\0';
  }
  else {
    if (sVar1 != 0x72) {
      if (sVar1 != 0x77) goto LAB_1017e74e;
      param_1[0] = L'́';
      param_1[1] = L'\0';
      goto LAB_1017e58c;
    }
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\x01';
    param_1[3] = L'\0';
  }
  pwVar9 = in_stack_00000008 + 1;
  local_7 = false;
  local_8 = false;
  local_6 = '\0';
  uVar6 = 1;
  local_5 = 0;
LAB_1017e5a1:
  uVar3 = (undefined1)uVar6;
  wVar2 = *pwVar9;
  if (wVar2 == L'\0') {
    uVar6 = (uint)local_5 << 8;
    goto LAB_1017e68d;
  }
  if ((ushort)wVar2 < 0x54) {
    if (wVar2 == L'S') {
      uVar6 = (uint)CONCAT11(local_5,uVar3);
      if (cVar7 != '\0') goto LAB_1017e5ff;
      *(uint *)param_1 = *(uint *)param_1 | 0x20;
LAB_1017e619:
      cVar7 = '\x01';
      local_6 = '\x01';
      uVar6 = CONCAT31((int3)(uVar6 >> 8),1);
      goto LAB_1017e676;
    }
    if (wVar2 == L' ') goto LAB_1017e673;
    if (wVar2 == L'+') {
      uVar3 = __acrt_stdio_parse_mode_plus((__acrt_stdio_stream_mode *)param_1,&local_8);
      cVar7 = local_6;
    }
    else {
      if (wVar2 == L',') {
        uVar6 = (uint)CONCAT11(1,uVar3);
        local_5 = 1;
LAB_1017e5ff:
        uVar6 = uVar6 & 0xffffff00;
        goto LAB_1017e676;
      }
      if (wVar2 == L'D') {
        uVar3 = __acrt_stdio_parse_mode_D((__acrt_stdio_stream_mode *)param_1);
        cVar7 = local_6;
      }
      else {
        if (wVar2 != L'N') {
          if (wVar2 == L'R') {
            uVar6 = (uint)CONCAT11(local_5,uVar3);
            if (cVar7 == '\0') {
              *(uint *)param_1 = *(uint *)param_1 | 0x10;
              goto LAB_1017e619;
            }
            goto LAB_1017e5ff;
          }
          goto LAB_1017e74e;
        }
        *(uint *)param_1 = *(uint *)param_1 | 0x80;
        uVar3 = 1;
      }
    }
  }
  else if (wVar2 == L'T') {
    uVar3 = __acrt_stdio_parse_mode_T((__acrt_stdio_stream_mode *)param_1);
    cVar7 = local_6;
  }
  else if (wVar2 == L'b') {
    uVar3 = FID_conflict___acrt_stdio_parse_mode_b(param_1);
    cVar7 = local_6;
  }
  else if (wVar2 == L'c') {
    uVar3 = __acrt_stdio_parse_mode_c((__acrt_stdio_stream_mode *)param_1,&local_7);
    cVar7 = local_6;
  }
  else if (wVar2 == L'n') {
    uVar3 = __acrt_stdio_parse_mode_n((__acrt_stdio_stream_mode *)param_1,&local_7);
    cVar7 = local_6;
  }
  else {
    if (wVar2 != L't') goto LAB_1017e74e;
    uVar3 = FID_conflict___acrt_stdio_parse_mode_b(param_1);
    cVar7 = local_6;
  }
LAB_1017e673:
  uVar6 = (uint)CONCAT11(local_5,uVar3);
LAB_1017e676:
  pwVar9 = pwVar9 + ((char)uVar6 != '\0');
  if ((char)uVar6 == '\0') goto LAB_1017e68d;
  goto LAB_1017e5a1;
LAB_1017e68d:
  cVar7 = (char)(uVar6 >> 8);
  if (cVar7 == '\0') goto LAB_1017e694;
  do {
    pwVar9 = pwVar9 + 1;
LAB_1017e694:
  } while (*pwVar9 == L' ');
  if (cVar7 != '\0') {
    iVar4 = _wcsncmp(pwVar9,L"ccs",3);
    if (iVar4 != 0) goto LAB_1017e74e;
    for (pwVar9 = pwVar9 + 3; *pwVar9 == L' '; pwVar9 = pwVar9 + 1) {
    }
    if (*pwVar9 != L'=') goto LAB_1017e74e;
    do {
      pwVar8 = pwVar9;
      pwVar9 = pwVar8 + 1;
    } while (*pwVar9 == L' ');
    iVar4 = __wcsnicmp(pwVar9,L"UTF-8",5);
    if (iVar4 == 0) {
      pwVar9 = pwVar8 + 6;
      *(uint *)param_1 = *(uint *)param_1 | 0x40000;
    }
    else {
      iVar4 = __wcsnicmp(pwVar9,L"UTF-16LEUNICODE",8);
      if (iVar4 == 0) {
        pwVar9 = pwVar8 + 9;
        *(uint *)param_1 = *(uint *)param_1 | 0x20000;
      }
      else {
        iVar4 = __wcsnicmp(pwVar9,L"UNICODE",7);
        if (iVar4 != 0) goto LAB_1017e74e;
        pwVar9 = pwVar8 + 8;
        *(uint *)param_1 = *(uint *)param_1 | 0x10000;
      }
    }
    for (; *pwVar9 == L' '; pwVar9 = pwVar9 + 1) {
    }
  }
  if (*pwVar9 == L'\0') {
    *(undefined1 *)(param_1 + 4) = 1;
    return param_1;
  }
LAB_1017e74e:
  piVar5 = __errno();
  *piVar5 = 0x16;
  FUN_1016ec41();
  return param_1;
}

