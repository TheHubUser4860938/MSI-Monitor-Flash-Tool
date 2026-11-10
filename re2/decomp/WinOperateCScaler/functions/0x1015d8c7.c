// rea decompile_all
// name: Getifld
// address: 0x1015d8c7
// body: available
// range: 0x1015d8c7-0x1015dcaa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    private: int __cdecl std::num_get<unsigned short,class std::istreambuf_iterator<unsigned
   short,struct std::char_traits<unsigned short> > >::_Getifld(char *,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > &,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > &,int,class
   std::locale const &)const 
    private: int __cdecl std::num_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >::_Getifld(char *,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > &,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > &,int,class std::locale const &)const 
   
   Library: Visual Studio 2015 Release */

void Getifld(undefined4 param_1,char *param_2,int param_3,undefined4 param_4,uint param_5,
            undefined4 param_6)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  uint uVar6;
  char ****ppppcVar7;
  byte bVar8;
  int iVar9;
  short local_94;
  uint local_90;
  char *local_88;
  char ***local_84;
  char ***local_7c [4];
  int local_6c;
  uint local_68;
  char ***local_64 [4];
  undefined4 local_54;
  uint local_50;
  short local_4c [22];
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x8c;
  local_8 = 0x1015d8d6;
  piVar5 = (int *)use_facet<>(param_6);
  grouping(local_7c);
  local_8 = 0;
  if (local_6c == 0) {
    local_94 = 0;
  }
  else {
    pcVar1 = *(code **)(*piVar5 + 0x10);
    guard_check_icall();
    local_94 = (*pcVar1)();
  }
  piVar5 = (int *)FUN_10012f20(param_6);
  pcVar1 = *(code **)(*piVar5 + 0x2c);
  guard_check_icall("0123456789ABCDEFabcdef-+Xx",&DAT_101d5ebf,local_4c);
  (*pcVar1)();
  local_88 = param_2;
  cVar4 = equal(param_4);
  if (cVar4 == '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      Peek();
    }
    if (*(short *)(param_3 + 6) == local_1e) {
      *param_2 = '+';
    }
    else {
      if (*(char *)(param_3 + 4) == '\0') {
        Peek();
      }
      if (*(short *)(param_3 + 6) != local_20) goto LAB_1015d9c4;
      *param_2 = '-';
    }
    local_88 = param_2 + 1;
    Inc();
  }
LAB_1015d9c4:
  param_5 = param_5 & 0xe00;
  local_90 = 10;
  if (param_5 == 0x400) {
    bVar8 = 8;
  }
  else if (param_5 == 0x800) {
    bVar8 = 0x10;
  }
  else {
    bVar8 = -(param_5 != 0) & 10;
  }
  bVar3 = false;
  local_84 = (char ***)0x0;
  bVar2 = false;
  cVar4 = equal(param_4);
  if (cVar4 == '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      Peek();
    }
    if (*(short *)(param_3 + 6) != local_4c[0]) goto LAB_1015daa5;
    bVar3 = true;
    local_84 = (char ***)0x1;
    Inc();
    cVar4 = equal(param_4);
    if (cVar4 != '\0') {
LAB_1015da9b:
      if (bVar8 == 0) {
        bVar8 = 8;
        goto LAB_1015daa5;
      }
      goto LAB_1015daa9;
    }
    if (*(char *)(param_3 + 4) == '\0') {
      Peek();
    }
    if (*(short *)(param_3 + 6) != local_1a) {
      if (*(char *)(param_3 + 4) == '\0') {
        Peek();
      }
      if (*(short *)(param_3 + 6) != local_1c) goto LAB_1015da9b;
    }
    if ((bVar8 != 0) && (bVar8 != 0x10)) goto LAB_1015da9b;
    bVar8 = 0x10;
    bVar3 = false;
    local_84 = (char ***)0x0;
    Inc();
  }
  else {
LAB_1015daa5:
    if (bVar8 == 0) goto LAB_1015dac2;
LAB_1015daa9:
    if (bVar8 == 10) goto LAB_1015dac2;
  }
  local_90 = ((bVar8 != 8) - 1 & 0xfffffff2) + 0x16;
LAB_1015dac2:
  local_54 = 0;
  local_50 = 0xf;
  local_64[0] = (char ***)((uint)local_64[0] & 0xffffff00);
  FUN_1001ad30(1,local_84);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar9 = 0;
  cVar4 = equal(param_4);
  local_84 = local_64[0];
  if (cVar4 == '\0') {
    do {
      if (*(char *)(param_3 + 4) == '\0') {
        Peek();
      }
      uVar6 = _Find_elem<>(local_4c,*(undefined2 *)(param_3 + 6));
      if (uVar6 < local_90) {
        cVar4 = "0123456789ABCDEFabcdef-+Xx"[uVar6];
        *local_88 = cVar4;
        if (((bVar2) || (cVar4 != '0')) && (local_88 < param_2 + 0x1f)) {
          local_88 = local_88 + 1;
          bVar2 = true;
        }
        bVar3 = true;
        ppppcVar7 = (char ****)local_84;
        if (local_50 < 0x10) {
          ppppcVar7 = local_64;
        }
        if (*(char *)((int)ppppcVar7 + iVar9) != '\x7f') {
          if (local_50 < 0x10) {
            local_84 = (char ***)local_64;
          }
          *(char *)((int)local_84 + iVar9) = *(char *)((int)local_84 + iVar9) + '\x01';
          goto LAB_1015dbcb;
        }
      }
      else {
        ppppcVar7 = (char ****)local_84;
        if (local_50 < 0x10) {
          ppppcVar7 = local_64;
        }
        if ((*(char *)((int)ppppcVar7 + iVar9) == '\0') || (local_94 == 0)) break;
        if (*(char *)(param_3 + 4) == '\0') {
          Peek();
        }
        if (*(short *)(param_3 + 6) != local_94) break;
        FUN_1000f7d0(1,0);
        iVar9 = iVar9 + 1;
LAB_1015dbcb:
        local_84 = local_64[0];
      }
      Inc();
      cVar4 = equal(param_4);
    } while (cVar4 == '\0');
    if (iVar9 != 0) {
      ppppcVar7 = (char ****)local_84;
      if (local_50 < 0x10) {
        ppppcVar7 = local_64;
      }
      if (*(char *)((int)ppppcVar7 + iVar9) < '\x01') {
        bVar3 = false;
      }
      else {
        iVar9 = iVar9 + 1;
      }
    }
  }
  if (local_68 < 0x10) {
    local_7c[0] = (char ***)local_7c;
  }
  if (bVar3) {
    while ((iVar9 != 0 && (cVar4 = *(char *)local_7c[0], cVar4 != '\x7f'))) {
      iVar9 = iVar9 + -1;
      if (iVar9 != 0) {
        ppppcVar7 = (char ****)local_84;
        if (local_50 < 0x10) {
          ppppcVar7 = local_64;
        }
        if (cVar4 != *(char *)((int)ppppcVar7 + iVar9)) goto LAB_1015dc89;
      }
      if (iVar9 == 0) {
        ppppcVar7 = (char ****)local_84;
        if (local_50 < 0x10) {
          ppppcVar7 = local_64;
        }
        if (cVar4 < *(char *)ppppcVar7) goto LAB_1015dc89;
      }
      if ('\0' < *(char *)((int)local_7c[0] + 1)) {
        local_7c[0] = (char ***)((int)local_7c[0] + 1);
      }
    }
    param_2 = local_88;
    if (!bVar2) {
      *local_88 = '0';
      param_2 = local_88 + 1;
    }
  }
LAB_1015dc89:
  *param_2 = '\0';
  FUN_10003850(1,0);
  FUN_10003850(1,0);
  FUN_10154478();
  return;
}

