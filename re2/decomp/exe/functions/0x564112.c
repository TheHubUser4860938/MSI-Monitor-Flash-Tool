// rea decompile_all
// name: Getffldx
// address: 0x564112
// body: available
// range: 0x564112-0x564834 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    private: int __cdecl std::num_get<unsigned short,class std::istreambuf_iterator<unsigned
   short,struct std::char_traits<unsigned short> > >::_Getffldx(char *,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > &,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > &,class
   std::ios_base &,int *)const 
    private: int __cdecl std::num_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >::_Getffldx(char *,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > &,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > &,class std::ios_base &,int *)const 
   
   Library: Visual Studio 2015 Release */

void Getffldx(undefined4 param_1,char *param_2,int param_3,undefined4 param_4,undefined4 param_5,
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
  undefined1 local_bc [8];
  int *local_b4;
  undefined1 local_b0 [4];
  int local_ac;
  uint local_a8;
  char *local_a4;
  int *local_a0;
  char ***local_9c;
  char *local_98;
  int local_94;
  char ***local_90;
  int local_8c;
  undefined4 local_88;
  char local_82;
  char local_81;
  char ***local_80 [4];
  int local_70;
  uint local_6c;
  char ***local_68 [4];
  undefined4 local_58;
  uint local_54;
  short local_50 [22];
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xac;
  local_8 = 0x564121;
  local_a4 = param_2;
  local_88 = param_4;
  local_b4 = param_6;
  uVar5 = FUN_00402ad0(local_bc);
  local_8 = 0;
  local_a0 = (int *)use_facet<>(uVar5);
  local_8 = 0xffffffff;
  FUN_00402240();
  grouping(local_80);
  local_8 = 1;
  uVar5 = FUN_00402ad0(local_b0);
  local_8._0_1_ = 2;
  piVar6 = (int *)FUN_0040dcb0(uVar5);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00402240();
  pcVar2 = *(code **)(*piVar6 + 0x2c);
  guard_check_icall("0123456789ABCDEFabcdef-+XxPp",&DAT_005dd4fd,local_50);
  (*pcVar2)();
  uVar5 = local_88;
  pcVar12 = local_a4;
  local_82 = '\0';
  cVar3 = equal(local_88);
  if (cVar3 == '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      Peek();
    }
    if (*(short *)(param_3 + 6) == local_22) {
      *pcVar12 = '+';
    }
    else {
      if (*(char *)(param_3 + 4) == '\0') {
        Peek();
      }
      if (*(short *)(param_3 + 6) != local_24) goto LAB_0056422b;
      *pcVar12 = '-';
    }
    pcVar12 = pcVar12 + 1;
    Inc();
  }
LAB_0056422b:
  pcVar12[0] = '0';
  pcVar12[1] = 'x';
  pcVar12 = pcVar12 + 2;
  local_81 = '\0';
  local_94 = 0;
  local_8c = 0;
  local_98 = pcVar12;
  cVar3 = equal(uVar5);
  if (cVar3 == '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      Peek();
    }
    if (*(short *)(param_3 + 6) == local_50[0]) {
      Inc();
      cVar3 = equal(uVar5);
      if (cVar3 == '\0') {
        if (*(char *)(param_3 + 4) == '\0') {
          Peek();
        }
        if (*(short *)(param_3 + 6) != local_1e) {
          if (*(char *)(param_3 + 4) == '\0') {
            Peek();
          }
          if (*(short *)(param_3 + 6) != local_20) goto LAB_005642b5;
        }
        Inc();
      }
      else {
LAB_005642b5:
        local_81 = '\x01';
      }
    }
  }
  local_ac = ((*local_b4 != 1000000000) - 1 & 0x2dc) + 0x24;
  if (local_6c < 0x10) {
    local_80[0] = (char ***)local_80;
  }
  local_9c = local_80[0];
  if ((*(char *)local_80[0] == '\x7f') || (*(char *)local_80[0] < '\x01')) {
    cVar3 = equal(uVar5);
    pcVar13 = local_98;
    while (cVar3 == '\0') {
      if (*(char *)(param_3 + 4) == '\0') {
        Peek();
      }
      uVar7 = _Find_elem<>(local_50,*(undefined2 *)(param_3 + 6));
      pcVar13 = pcVar12;
      if (0x15 < uVar7) break;
      if (local_94 < local_ac) {
        if ((uVar7 != 0) || (local_94 != 0)) {
          *pcVar12 = "0123456789ABCDEFabcdef-+XxPp"[uVar7];
          pcVar12 = pcVar12 + 1;
          local_94 = local_94 + 1;
        }
      }
      else {
        local_8c = local_8c + 1;
      }
      local_81 = '\x01';
      Inc();
      cVar3 = equal(uVar5);
      pcVar13 = pcVar12;
    }
  }
  else {
    if (local_70 == 0) {
      local_a8 = 0;
    }
    else {
      pcVar2 = *(code **)(*local_a0 + 0x10);
      guard_check_icall();
      local_a8 = (*pcVar2)();
      local_a8 = local_a8 & 0xffff;
    }
    local_58 = 0;
    local_54 = 0xf;
    local_68[0] = (char ***)((uint)local_68[0] & 0xffffff00);
    FUN_00404310(1,0);
    local_8 = CONCAT31(local_8._1_3_,3);
    iVar11 = 0;
    cVar3 = equal(local_88);
    ppppcVar8 = (char ****)local_68[0];
    if (cVar3 == '\0') {
      local_90 = local_68[0];
      do {
        if (*(char *)(param_3 + 4) == '\0') {
          Peek();
        }
        uVar7 = _Find_elem<>(local_50,*(undefined2 *)(param_3 + 6));
        if (uVar7 < 0x16) {
          local_81 = '\x01';
          if (local_94 < local_ac) {
            if ((uVar7 != 0) || (local_94 != 0)) {
              *pcVar12 = "0123456789ABCDEFabcdef-+XxPp"[uVar7];
              pcVar12 = pcVar12 + 1;
              local_94 = local_94 + 1;
            }
          }
          else {
            local_8c = local_8c + 1;
          }
          ppppcVar8 = (char ****)local_90;
          if (local_54 < 0x10) {
            ppppcVar8 = local_68;
          }
          if (*(char *)((int)ppppcVar8 + iVar11) != '\x7f') {
            if (local_54 < 0x10) {
              local_90 = (char ***)local_68;
            }
            *(char *)((int)local_90 + iVar11) = *(char *)((int)local_90 + iVar11) + '\x01';
            goto LAB_0056442e;
          }
        }
        else {
          ppppcVar8 = (char ****)local_90;
          if (local_54 < 0x10) {
            ppppcVar8 = local_68;
          }
          if ((*(char *)((int)ppppcVar8 + iVar11) == '\0') || ((short)local_a8 == 0)) break;
          if (*(char *)(param_3 + 4) == '\0') {
            Peek();
          }
          if (*(short *)(param_3 + 6) != (short)local_a8) break;
          FUN_00405710(1,0);
          iVar11 = iVar11 + 1;
LAB_0056442e:
          local_90 = local_68[0];
        }
        Inc();
        cVar3 = equal(local_88);
      } while (cVar3 == '\0');
      local_98 = pcVar12;
      ppppcVar8 = (char ****)local_90;
      if (iVar11 == 0) goto LAB_0056447f;
      ppppcVar9 = (char ****)local_90;
      if (local_54 < 0x10) {
        ppppcVar9 = local_68;
      }
      if ('\0' < *(char *)((int)ppppcVar9 + iVar11)) {
        iVar11 = iVar11 + 1;
        goto LAB_0056447f;
      }
LAB_005644cb:
      local_82 = '\x01';
    }
    else {
LAB_0056447f:
      while ((iVar11 != 0 && (cVar3 = *(char *)local_9c, cVar3 != '\x7f'))) {
        iVar11 = iVar11 + -1;
        if (iVar11 != 0) {
          ppppcVar9 = ppppcVar8;
          if (local_54 < 0x10) {
            ppppcVar9 = local_68;
          }
          if (cVar3 != *(char *)((int)ppppcVar9 + iVar11)) goto LAB_005644cb;
        }
        if (iVar11 == 0) {
          ppppcVar9 = ppppcVar8;
          if (local_54 < 0x10) {
            ppppcVar9 = local_68;
          }
          if (cVar3 < *(char *)ppppcVar9) goto LAB_005644cb;
        }
        if ('\0' < *(char *)((int)local_9c + 1)) {
          local_9c = (char ***)((int)local_9c + 1);
        }
      }
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00404250(1,0);
    uVar5 = local_88;
    pcVar13 = local_98;
  }
  local_98 = pcVar13;
  if ((local_81 != '\0') && (local_94 == 0)) {
    *pcVar12 = '0';
    pcVar12 = pcVar12 + 1;
    local_98 = pcVar12;
  }
  cVar3 = equal(uVar5);
  if (cVar3 == '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      Peek();
    }
    sVar1 = *(short *)(param_3 + 6);
    pcVar2 = *(code **)(*local_a0 + 0xc);
    guard_check_icall();
    sVar4 = (*pcVar2)();
    uVar5 = local_88;
    pcVar12 = local_98;
    if (sVar1 == sVar4) {
      plVar10 = _localeconv();
      *local_98 = *plVar10->decimal_point;
      pcVar12 = local_98 + 1;
      local_98 = pcVar12;
      Inc();
      uVar5 = local_88;
    }
  }
  if (local_94 == 0) {
    cVar3 = equal(uVar5);
    iVar11 = local_8c;
    while (cVar3 == '\0') {
      if (*(char *)(param_3 + 4) == '\0') {
        Peek();
      }
      pcVar12 = local_98;
      if (*(short *)(param_3 + 6) != local_50[0]) break;
      local_81 = '\x01';
      iVar11 = iVar11 + -1;
      Inc();
      cVar3 = equal(uVar5);
      pcVar12 = local_98;
    }
    local_8c = iVar11;
    if (iVar11 < 0) {
      *pcVar12 = '0';
      pcVar12 = pcVar12 + 1;
      local_8c = iVar11 + 1;
    }
  }
  while (cVar3 = equal(uVar5), cVar3 == '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      Peek();
    }
    uVar7 = _Find_elem<>(local_50,*(undefined2 *)(param_3 + 6));
    if (0x15 < uVar7) break;
    if (local_94 < local_ac) {
      *pcVar12 = "0123456789ABCDEFabcdef-+XxPp"[uVar7];
      pcVar12 = pcVar12 + 1;
      local_94 = local_94 + 1;
    }
    local_81 = '\x01';
    Inc();
  }
  pcVar13 = pcVar12;
  if ((local_81 == '\0') || (cVar3 = equal(uVar5), cVar3 != '\0')) goto LAB_00564800;
  if (*(char *)(param_3 + 4) == '\0') {
    Peek();
  }
  if (*(short *)(param_3 + 6) != local_1a) {
    if (*(char *)(param_3 + 4) == '\0') {
      Peek();
    }
    if (*(short *)(param_3 + 6) != local_1c) goto LAB_00564800;
  }
  *pcVar12 = 'p';
  pcVar13 = pcVar12 + 1;
  Inc();
  local_81 = '\0';
  local_ac = 0;
  cVar3 = equal(local_88);
  if (cVar3 == '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      Peek();
    }
    if (*(short *)(param_3 + 6) == local_22) {
      *pcVar13 = '+';
    }
    else {
      if (*(char *)(param_3 + 4) == '\0') {
        Peek();
      }
      if (*(short *)(param_3 + 6) != local_24) goto LAB_0056475a;
      *pcVar13 = '-';
    }
    pcVar13 = pcVar12 + 2;
    Inc();
  }
LAB_0056475a:
  cVar3 = equal(local_88);
  uVar5 = local_88;
  iVar11 = 0;
  if (cVar3 == '\0') {
    do {
      if (*(char *)(param_3 + 4) == '\0') {
        Peek();
      }
      if (*(short *)(param_3 + 6) != local_50[0]) break;
      local_81 = '\x01';
      Inc();
      cVar3 = equal(uVar5);
    } while (cVar3 == '\0');
    iVar11 = local_ac;
    if (local_81 != '\0') {
      *pcVar13 = '0';
      pcVar13 = pcVar13 + 1;
    }
  }
  while (cVar3 = equal(local_88), cVar3 == '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      Peek();
    }
    uVar7 = _Find_elem<>(local_50,*(undefined2 *)(param_3 + 6));
    if (0x15 < uVar7) break;
    if (iVar11 < 8) {
      *pcVar13 = "0123456789ABCDEFabcdef-+XxPp"[uVar7];
      pcVar13 = pcVar13 + 1;
      iVar11 = iVar11 + 1;
    }
    local_81 = '\x01';
    Inc();
  }
LAB_00564800:
  if ((local_82 != '\0') || (local_81 == '\0')) {
    pcVar13 = local_a4;
  }
  *pcVar13 = '\0';
  *local_b4 = local_8c;
  FUN_00404250(1,0);
  FUN_0055bae6();
  return;
}

