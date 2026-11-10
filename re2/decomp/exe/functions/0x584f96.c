// rea decompile_all
// name: __acrt_stdio_parse_mode<char>
// address: 0x584f96
// body: available
// range: 0x584f96-0x5851c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    struct __acrt_stdio_stream_mode __cdecl __acrt_stdio_parse_mode<char>(char const * const)
   
   Library: Visual Studio 2015 Release */

char * __cdecl __acrt_stdio_parse_mode<char>(char *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  char cVar6;
  char *pcVar7;
  char *pcVar8;
  char *in_stack_00000008;
  bool local_8;
  bool local_7;
  char local_6;
  byte local_5;
  
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  *(undefined4 *)(param_1 + 4) = DAT_00618f34;
  for (; *in_stack_00000008 == ' '; in_stack_00000008 = in_stack_00000008 + 1) {
  }
  cVar6 = *in_stack_00000008;
  if (cVar6 == 'a') {
    param_1[0] = '\t';
    param_1[1] = '\x01';
    param_1[2] = '\0';
    param_1[3] = '\0';
LAB_00584ff4:
    param_1[4] = '\x02';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  else {
    if (cVar6 != 'r') {
      if (cVar6 != 'w') goto LAB_005851af;
      param_1[0] = '\x01';
      param_1[1] = '\x03';
      param_1[2] = '\0';
      param_1[3] = '\0';
      goto LAB_00584ff4;
    }
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\x01';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  cVar6 = '\0';
  local_7 = false;
  local_8 = false;
  pcVar7 = in_stack_00000008 + 1;
  local_6 = '\0';
  local_5 = 0;
  uVar5 = 1;
LAB_0058500e:
  uVar2 = (undefined1)uVar5;
  cVar1 = *pcVar7;
  if (cVar1 == '\0') {
    uVar5 = (uint)local_5 << 8;
    goto LAB_005850fc;
  }
  if (cVar1 < 'T') {
    if (cVar1 == 'S') {
      uVar5 = (uint)CONCAT11(local_5,uVar2);
      if (cVar6 != '\0') goto LAB_0058506e;
      *(uint *)param_1 = *(uint *)param_1 | 0x20;
LAB_00585089:
      cVar6 = '\x01';
      local_6 = '\x01';
      uVar5 = CONCAT31((int3)(uVar5 >> 8),1);
      goto LAB_005850e6;
    }
    if (cVar1 == ' ') goto LAB_005850e3;
    if (cVar1 == '+') {
      uVar2 = __acrt_stdio_parse_mode_plus((__acrt_stdio_stream_mode *)param_1,&local_8);
      cVar6 = local_6;
    }
    else {
      if (cVar1 == ',') {
        uVar5 = (uint)CONCAT11(1,uVar2);
        local_5 = 1;
LAB_0058506e:
        uVar5 = uVar5 & 0xffffff00;
        goto LAB_005850e6;
      }
      if (cVar1 == 'D') {
        uVar2 = __acrt_stdio_parse_mode_D((__acrt_stdio_stream_mode *)param_1);
        cVar6 = local_6;
      }
      else {
        if (cVar1 != 'N') {
          if (cVar1 == 'R') {
            uVar5 = (uint)CONCAT11(local_5,uVar2);
            if (cVar6 == '\0') {
              *(uint *)param_1 = *(uint *)param_1 | 0x10;
              goto LAB_00585089;
            }
            goto LAB_0058506e;
          }
          goto LAB_005851af;
        }
        *(uint *)param_1 = *(uint *)param_1 | 0x80;
        uVar2 = 1;
      }
    }
  }
  else if (cVar1 == 'T') {
    uVar2 = __acrt_stdio_parse_mode_T((__acrt_stdio_stream_mode *)param_1);
    cVar6 = local_6;
  }
  else if (cVar1 == 'b') {
    uVar2 = FID_conflict___acrt_stdio_parse_mode_b(param_1);
    cVar6 = local_6;
  }
  else if (cVar1 == 'c') {
    uVar2 = __acrt_stdio_parse_mode_c((__acrt_stdio_stream_mode *)param_1,&local_7);
    cVar6 = local_6;
  }
  else if (cVar1 == 'n') {
    uVar2 = __acrt_stdio_parse_mode_n((__acrt_stdio_stream_mode *)param_1,&local_7);
    cVar6 = local_6;
  }
  else {
    if (cVar1 != 't') goto LAB_005851af;
    uVar2 = FID_conflict___acrt_stdio_parse_mode_b(param_1);
    cVar6 = local_6;
  }
LAB_005850e3:
  uVar5 = (uint)CONCAT11(local_5,uVar2);
LAB_005850e6:
  pcVar7 = pcVar7 + ((char)uVar5 != '\0');
  if ((char)uVar5 == '\0') goto LAB_005850fc;
  goto LAB_0058500e;
LAB_005850fc:
  cVar6 = (char)(uVar5 >> 8);
  if (cVar6 == '\0') goto LAB_00585101;
  do {
    pcVar7 = pcVar7 + 1;
LAB_00585101:
  } while (*pcVar7 == ' ');
  if (cVar6 != '\0') {
    iVar3 = _strncmp(pcVar7,"ccs",3);
    if (iVar3 != 0) goto LAB_005851af;
    for (pcVar7 = pcVar7 + 3; *pcVar7 == ' '; pcVar7 = pcVar7 + 1) {
    }
    if (*pcVar7 != '=') goto LAB_005851af;
    do {
      pcVar8 = pcVar7;
      pcVar7 = pcVar8 + 1;
    } while (*pcVar7 == ' ');
    iVar3 = __strnicmp(pcVar7,"UTF-8",5);
    if (iVar3 == 0) {
      pcVar7 = pcVar8 + 6;
      *(uint *)param_1 = *(uint *)param_1 | 0x40000;
    }
    else {
      iVar3 = __strnicmp(pcVar7,"UTF-16LEUNICODE",8);
      if (iVar3 == 0) {
        pcVar7 = pcVar8 + 9;
        *(uint *)param_1 = *(uint *)param_1 | 0x20000;
      }
      else {
        iVar3 = __strnicmp(pcVar7,"UNICODE",7);
        if (iVar3 != 0) goto LAB_005851af;
        pcVar7 = pcVar8 + 8;
        *(uint *)param_1 = *(uint *)param_1 | 0x10000;
      }
    }
    for (; *pcVar7 == ' '; pcVar7 = pcVar7 + 1) {
    }
  }
  if (*pcVar7 == '\0') {
    param_1[8] = '\x01';
    return param_1;
  }
LAB_005851af:
  piVar4 = __errno();
  *piVar4 = 0x16;
  FUN_0057662d();
  return param_1;
}

