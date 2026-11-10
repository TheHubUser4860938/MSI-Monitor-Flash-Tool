// rea decompile_all
// name: fp_format_a
// address: 0x101b21bf
// body: available
// range: 0x101b21bf-0x101b24c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl fp_format_a(double const * const,char *,unsigned int,char * const,unsigned
   int,int,bool,unsigned int,struct __crt_locale_pointers * const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
fp_format_a(double *param_1,char *param_2,uint param_3,char *param_4,uint param_5,int param_6,
           bool param_7,uint param_8,__crt_locale_pointers *param_9)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  int extraout_EDX;
  int extraout_EDX_00;
  char *pcVar10;
  bool bVar11;
  int local_34;
  int local_30;
  char local_28;
  undefined4 local_24;
  int local_20;
  char *local_1c;
  uint local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  if (param_6 < 0) {
    param_6 = 0;
  }
  *param_2 = '\0';
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_34,param_9);
  if (param_3 <= param_6 + 0xbU) {
    piVar4 = __errno();
    iVar5 = 0x22;
    *piVar4 = 0x22;
    FUN_1019ab61();
    goto LAB_101b24a9;
  }
  local_24 = *(undefined4 *)param_1;
  if ((*(uint *)((int)param_1 + 4) >> 0x14 & 0x7ff) == 0x7ff) {
    iVar5 = fp_format_e(param_1,param_2,param_3,param_4,param_5,param_6,false,param_8,
                        (__crt_locale_pointers *)0x0);
    if (iVar5 == 0) {
      pcVar6 = (char *)FUN_101c0940(param_2,0x65);
      if (pcVar6 != (char *)0x0) {
        *pcVar6 = (!param_7 - 1U & 0xe0) + 0x70;
        pcVar6[3] = '\0';
      }
      iVar5 = 0;
    }
    else {
      *param_2 = '\0';
    }
    goto LAB_101b24a9;
  }
  if ((*(uint *)((int)param_1 + 4) & 0x80000000) != 0) {
    *param_2 = '-';
    param_2 = param_2 + 1;
  }
  local_10 = 0x3ff;
  iVar5 = (!param_7 - 1 & 0xffffffe0) + 0x27;
  if (((ulonglong)*param_1 & 0x7ff0000000000000) == 0) {
    *param_2 = '0';
    if (*(int *)param_1 == 0 && ((ulonglong)*param_1 & 0xfffff00000000) == 0) {
      local_10 = 0;
    }
    else {
      local_10 = 0x3fe;
    }
  }
  else {
    *param_2 = '1';
  }
  local_1c = param_2 + 1;
  pcVar6 = param_2 + 2;
  if (param_6 == 0) {
    *local_1c = '\0';
  }
  else {
    *local_1c = *(char *)**(undefined4 **)(local_30 + 0x88);
  }
  local_20 = iVar5;
  if ((((ulonglong)*param_1 & 0xfffff00000000) != 0) || (local_14 = 0, *(int *)param_1 != 0)) {
    local_8 = 0;
    local_c = 0x30;
    local_14 = 0xf0000;
    do {
      if (param_6 < 1) break;
      sVar2 = __aullshr();
      uVar7 = (uint)(ushort)(sVar2 + 0x30);
      if (0x39 < uVar7) {
        uVar7 = uVar7 + iVar5;
      }
      *pcVar6 = (char)uVar7;
      pcVar6 = pcVar6 + 1;
      local_8 = local_8 >> 4 | local_14 << 0x1c;
      local_14 = local_14 >> 4;
      local_c = local_c + -4;
      param_6 = param_6 - 1;
    } while (-1 < (short)local_c);
    if ((-1 < (short)local_c) && (uVar3 = __aullshr(), pcVar10 = pcVar6, 8 < uVar3)) {
      while( true ) {
        pcVar8 = pcVar10 + -1;
        if ((*pcVar8 != 'f') && (*pcVar8 != 'F')) break;
        *pcVar8 = '0';
        pcVar10 = pcVar8;
      }
      if (pcVar8 == local_1c) {
        pcVar10[-2] = pcVar10[-2] + '\x01';
      }
      else if (*pcVar8 == '9') {
        *pcVar8 = (char)local_20 + ':';
      }
      else {
        *pcVar8 = *pcVar8 + '\x01';
      }
    }
  }
  if (0 < param_6) {
    _memset(pcVar6,0x30,param_6);
    pcVar6 = pcVar6 + param_6;
  }
  if (*local_1c == '\0') {
    pcVar6 = local_1c;
  }
  *pcVar6 = (!param_7 - 1U & 0xe0) + 0x70;
  uVar9 = __aullshr();
  uVar7 = (uVar9 & 0x7ff) - local_10;
  iVar5 = -(uint)((uVar9 & 0x7ff) < local_10);
  if (iVar5 < 0) {
    pcVar6[1] = '-';
    bVar11 = uVar7 != 0;
    uVar7 = -uVar7;
    iVar5 = -(iVar5 + (uint)bVar11);
  }
  else {
    pcVar6[1] = '+';
  }
  pcVar8 = pcVar6 + 2;
  *pcVar8 = '0';
  pcVar10 = pcVar8;
  if (-1 < iVar5) {
    if ((iVar5 < 1) && (uVar7 < 1000)) {
LAB_101b245c:
      if ((iVar5 < 0) || ((iVar5 < 1 && (uVar7 < 100)))) goto LAB_101b247a;
    }
    else {
      cVar1 = __alldvrm(uVar7,iVar5,1000,0);
      *pcVar8 = cVar1 + '0';
      pcVar10 = pcVar6 + 3;
      uVar7 = extraout_ECX;
      local_20 = extraout_EDX;
      if (pcVar10 == pcVar8) goto LAB_101b245c;
    }
    cVar1 = __alldvrm(uVar7,iVar5,100,0);
    *pcVar10 = cVar1 + '0';
    pcVar10 = pcVar10 + 1;
    uVar7 = extraout_ECX_00;
    local_20 = extraout_EDX_00;
  }
LAB_101b247a:
  if ((pcVar10 != pcVar8) || ((-1 < iVar5 && ((0 < iVar5 || (9 < uVar7)))))) {
    cVar1 = __alldvrm(uVar7,iVar5,10,0);
    *pcVar10 = cVar1 + '0';
    pcVar10 = pcVar10 + 1;
    uVar7 = extraout_ECX_01;
  }
  iVar5 = 0;
  *pcVar10 = (char)uVar7 + '0';
  pcVar10[1] = '\0';
LAB_101b24a9:
  if (local_28 != '\0') {
    *(uint *)(local_34 + 0x350) = *(uint *)(local_34 + 0x350) & 0xfffffffd;
  }
  return iVar5;
}

