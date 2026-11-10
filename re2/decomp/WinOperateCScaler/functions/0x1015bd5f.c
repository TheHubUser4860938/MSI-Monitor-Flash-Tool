// rea decompile_all
// name: Getffld
// address: 0x1015bd5f
// body: available
// range: 0x1015bd5f-0x1015c404 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    private: int __cdecl std::num_get<unsigned short,class std::istreambuf_iterator<unsigned
   short,struct std::char_traits<unsigned short> > >::_Getffld(char *,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > &,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > &,class
   std::ios_base &,int *)const 
    private: int __cdecl std::num_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >::_Getffld(char *,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > &,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > &,class std::ios_base &,int *)const 
   
   Library: Visual Studio 2015 Release */

void Getffld(undefined4 param_1,char *param_2,int param_3,undefined4 param_4,int param_5,
            int *param_6)

{
  short sVar1;
  code *pcVar2;
  char cVar3;
  short sVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  char ****ppppcVar8;
  char ****ppppcVar9;
  lconv *plVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  undefined1 local_a4 [8];
  undefined1 local_9c [4];
  char *local_98;
  char *local_94;
  int local_90;
  uint local_8c;
  int *local_88;
  int *local_84;
  char ***local_80;
  int local_7c;
  char ***local_78;
  char *local_74;
  int local_70;
  undefined4 local_6c;
  char local_67;
  char local_66;
  char local_65;
  char ***local_64 [4];
  int local_54;
  uint local_50;
  char ***local_4c [4];
  undefined4 local_3c;
  uint local_38;
  short local_34 [10];
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x94;
  local_8 = 0x1015bd6e;
  local_94 = param_2;
  local_6c = param_4;
  local_88 = param_6;
  if ((*(uint *)(param_5 + 0x14) & 0x3000) == 0x3000) {
    Getffldx(param_1,param_2,param_3,param_4,param_5,param_6);
    goto LAB_1015c3ff;
  }
  uVar5 = FUN_100103a0(local_a4);
  local_8 = 0;
  local_84 = (int *)use_facet<>(uVar5);
  local_8 = 0xffffffff;
  FUN_10007650();
  grouping(local_64);
  local_8 = 1;
  local_74 = param_2;
  local_67 = '\0';
  local_66 = '\0';
  uVar5 = FUN_100103a0(local_9c);
  local_8._0_1_ = 2;
  piVar6 = (int *)FUN_10012f20(uVar5);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_10007650();
  pcVar2 = *(code **)(*piVar6 + 0x2c);
  guard_check_icall("0123456789-+Ee",&DAT_101d5ea3,local_34);
  (*pcVar2)();
  uVar5 = local_6c;
  cVar3 = equal(local_6c);
  if (cVar3 == '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      Peek();
    }
    if (*(short *)(param_3 + 6) == local_1e) {
      *local_94 = '+';
    }
    else {
      if (*(char *)(param_3 + 4) == '\0') {
        Peek();
      }
      if (*(short *)(param_3 + 6) != local_20) goto LAB_1015bea0;
      *local_94 = '-';
    }
    pcVar13 = local_94 + 1;
    Inc();
    local_74 = pcVar13;
  }
LAB_1015bea0:
  *local_74 = '0';
  pcVar13 = local_74 + 1;
  local_65 = '\0';
  local_7c = 0;
  local_70 = 0;
  local_90 = ((*local_88 != 1000000000) - 1 & 0x2dc) + 0x24;
  if (local_50 < 0x10) {
    local_64[0] = (char ***)local_64;
  }
  local_98 = local_74;
  local_80 = local_64[0];
  if ((*(char *)local_64[0] == '\x7f') || (*(char *)local_64[0] < '\x01')) {
    local_74 = pcVar13;
    cVar3 = equal(uVar5);
    pcVar12 = local_74;
    while (cVar3 == '\0') {
      if (*(char *)(param_3 + 4) == '\0') {
        Peek();
      }
      uVar7 = _Find_elem<>(local_34,*(undefined2 *)(param_3 + 6));
      pcVar12 = pcVar13;
      if (9 < uVar7) break;
      if (local_7c < local_90) {
        if ((uVar7 != 0) || (local_7c != 0)) {
          *pcVar13 = "0123456789-+Ee"[uVar7];
          pcVar13 = pcVar13 + 1;
          local_7c = local_7c + 1;
        }
      }
      else {
        local_70 = local_70 + 1;
        if (uVar7 != 0) {
          local_66 = '\x01';
        }
      }
      local_65 = '\x01';
      Inc();
      cVar3 = equal(uVar5);
      pcVar12 = pcVar13;
    }
  }
  else {
    if (local_54 == 0) {
      local_8c = 0;
      local_74 = pcVar13;
    }
    else {
      pcVar2 = *(code **)(*local_84 + 0x10);
      local_74 = pcVar13;
      guard_check_icall();
      local_8c = (*pcVar2)();
      local_8c = local_8c & 0xffff;
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = (char ***)((uint)local_4c[0] & 0xffffff00);
    FUN_1001ad30(1,0);
    local_8 = CONCAT31(local_8._1_3_,3);
    iVar11 = 0;
    cVar3 = equal(local_6c);
    ppppcVar8 = (char ****)local_4c[0];
    if (cVar3 == '\0') {
      local_78 = local_4c[0];
      do {
        if (*(char *)(param_3 + 4) == '\0') {
          Peek();
        }
        uVar7 = _Find_elem<>(local_34,*(undefined2 *)(param_3 + 6));
        if (uVar7 < 10) {
          local_65 = '\x01';
          if (local_7c < local_90) {
            if ((uVar7 != 0) || (local_7c != 0)) {
              *pcVar13 = "0123456789-+Ee"[uVar7];
              pcVar13 = pcVar13 + 1;
              local_7c = local_7c + 1;
            }
          }
          else {
            local_70 = local_70 + 1;
            if (uVar7 != 0) {
              local_66 = '\x01';
            }
          }
          ppppcVar8 = (char ****)local_78;
          if (local_38 < 0x10) {
            ppppcVar8 = local_4c;
          }
          if (*(char *)((int)ppppcVar8 + iVar11) != '\x7f') {
            if (local_38 < 0x10) {
              local_78 = (char ***)local_4c;
            }
            *(char *)((int)local_78 + iVar11) = *(char *)((int)local_78 + iVar11) + '\x01';
            goto LAB_1015c014;
          }
        }
        else {
          ppppcVar8 = (char ****)local_78;
          if (local_38 < 0x10) {
            ppppcVar8 = local_4c;
          }
          if ((*(char *)((int)ppppcVar8 + iVar11) == '\0') || ((short)local_8c == 0)) break;
          if (*(char *)(param_3 + 4) == '\0') {
            Peek();
          }
          if (*(short *)(param_3 + 6) != (short)local_8c) break;
          FUN_1000f7d0(1,0);
          iVar11 = iVar11 + 1;
LAB_1015c014:
          local_78 = local_4c[0];
        }
        Inc();
        cVar3 = equal(local_6c);
      } while (cVar3 == '\0');
      local_74 = pcVar13;
      ppppcVar8 = (char ****)local_78;
      if (iVar11 == 0) goto LAB_1015c053;
      ppppcVar9 = (char ****)local_78;
      if (local_38 < 0x10) {
        ppppcVar9 = local_4c;
      }
      if ('\0' < *(char *)((int)ppppcVar9 + iVar11)) {
        iVar11 = iVar11 + 1;
        goto LAB_1015c053;
      }
LAB_1015c099:
      local_67 = '\x01';
    }
    else {
LAB_1015c053:
      while ((iVar11 != 0 && (cVar3 = *(char *)local_80, cVar3 != '\x7f'))) {
        iVar11 = iVar11 + -1;
        if (iVar11 != 0) {
          ppppcVar9 = ppppcVar8;
          if (local_38 < 0x10) {
            ppppcVar9 = local_4c;
          }
          if (cVar3 != *(char *)((int)ppppcVar9 + iVar11)) goto LAB_1015c099;
        }
        if (iVar11 == 0) {
          ppppcVar9 = ppppcVar8;
          if (local_38 < 0x10) {
            ppppcVar9 = local_4c;
          }
          if (cVar3 < *(char *)ppppcVar9) goto LAB_1015c099;
        }
        if ('\0' < *(char *)((int)local_80 + 1)) {
          local_80 = (char ***)((int)local_80 + 1);
        }
      }
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_10003850(1,0);
    uVar5 = local_6c;
    pcVar12 = local_74;
  }
  local_74 = pcVar12;
  cVar3 = equal(uVar5);
  if (cVar3 == '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      Peek();
    }
    sVar1 = *(short *)(param_3 + 6);
    pcVar2 = *(code **)(*local_84 + 0xc);
    guard_check_icall();
    sVar4 = (*pcVar2)();
    uVar5 = local_6c;
    pcVar13 = local_74;
    if (sVar1 == sVar4) {
      plVar10 = _localeconv();
      *local_74 = *plVar10->decimal_point;
      pcVar13 = local_74 + 1;
      local_74 = pcVar13;
      Inc();
      uVar5 = local_6c;
    }
  }
  if ((*local_88 != 1000000000) && (local_7c == 0)) {
    cVar3 = equal(uVar5);
    iVar11 = local_70;
    while (cVar3 == '\0') {
      if (*(char *)(param_3 + 4) == '\0') {
        Peek();
      }
      pcVar13 = local_74;
      if (*(short *)(param_3 + 6) != local_34[0]) break;
      local_65 = '\x01';
      iVar11 = iVar11 + -1;
      Inc();
      cVar3 = equal(uVar5);
      pcVar13 = local_74;
    }
    local_70 = iVar11;
    if (iVar11 < 0) {
      *pcVar13 = '0';
      pcVar13 = pcVar13 + 1;
      local_70 = iVar11 + 1;
    }
  }
  while (cVar3 = equal(uVar5), cVar3 == '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      Peek();
    }
    uVar7 = _Find_elem<>(local_34,*(undefined2 *)(param_3 + 6));
    if (9 < uVar7) break;
    if (local_7c < local_90) {
      *pcVar13 = "0123456789-+Ee"[uVar7];
      pcVar13 = pcVar13 + 1;
      local_7c = local_7c + 1;
    }
    else if (uVar7 != 0) {
      local_66 = '\x01';
    }
    local_65 = '\x01';
    Inc();
  }
  if (local_66 != '\0') {
    pcVar12 = pcVar13 + -1;
    if (pcVar12 != local_98) {
      do {
        plVar10 = _localeconv();
        if (*pcVar12 != *plVar10->decimal_point) {
          if (*pcVar12 != '9') {
            *pcVar12 = *pcVar12 + '\x01';
            break;
          }
          *pcVar12 = '0';
        }
        pcVar12 = pcVar12 + -1;
      } while (pcVar12 != local_98);
      uVar5 = local_6c;
      if (pcVar12 != local_98) goto LAB_1015c291;
    }
    local_70 = local_70 + 1;
    *pcVar12 = '1';
    uVar5 = local_6c;
  }
LAB_1015c291:
  pcVar12 = pcVar13;
  if ((local_65 != '\0') && (cVar3 = equal(uVar5), cVar3 == '\0')) {
    if (*(char *)(param_3 + 4) == '\0') {
      Peek();
    }
    if (*(short *)(param_3 + 6) != local_1a) {
      if (*(char *)(param_3 + 4) == '\0') {
        Peek();
      }
      if (*(short *)(param_3 + 6) != local_1c) goto LAB_1015c3dd;
    }
    *pcVar13 = 'e';
    pcVar12 = pcVar13 + 1;
    Inc();
    local_65 = '\0';
    local_88 = (int *)0x0;
    cVar3 = equal(local_6c);
    if (cVar3 == '\0') {
      if (*(char *)(param_3 + 4) == '\0') {
        Peek();
      }
      if (*(short *)(param_3 + 6) == local_1e) {
        *pcVar12 = '+';
      }
      else {
        if (*(char *)(param_3 + 4) == '\0') {
          Peek();
        }
        if (*(short *)(param_3 + 6) != local_20) goto LAB_1015c33f;
        *pcVar12 = '-';
      }
      pcVar12 = pcVar13 + 2;
      Inc();
    }
LAB_1015c33f:
    cVar3 = equal(local_6c);
    uVar5 = local_6c;
    piVar6 = (int *)0x0;
    if (cVar3 == '\0') {
      do {
        if (*(char *)(param_3 + 4) == '\0') {
          Peek();
        }
        if (*(short *)(param_3 + 6) != local_34[0]) break;
        local_65 = '\x01';
        Inc();
        cVar3 = equal(uVar5);
      } while (cVar3 == '\0');
      piVar6 = local_88;
      if (local_65 != '\0') {
        *pcVar12 = '0';
        pcVar12 = pcVar12 + 1;
      }
    }
    while (cVar3 = equal(local_6c), cVar3 == '\0') {
      if (*(char *)(param_3 + 4) == '\0') {
        Peek();
      }
      uVar7 = _Find_elem<>(local_34,*(undefined2 *)(param_3 + 6));
      if (9 < uVar7) break;
      if ((int)piVar6 < 8) {
        *pcVar12 = "0123456789-+Ee"[uVar7];
        pcVar12 = pcVar12 + 1;
        piVar6 = (int *)((int)piVar6 + 1);
      }
      local_65 = '\x01';
      Inc();
    }
  }
LAB_1015c3dd:
  if ((local_67 != '\0') || (local_65 == '\0')) {
    pcVar12 = local_94;
  }
  *pcVar12 = '\0';
  FUN_10003850(1,0);
LAB_1015c3ff:
  FUN_10154478();
  return;
}

