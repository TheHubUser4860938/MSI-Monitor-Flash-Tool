// rea decompile_all
// name: std::num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::_Getffldx
// address: 0x55d85b
// body: available
// range: 0x55d85b-0x55decd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    private: int __cdecl std::num_get<char,class std::istreambuf_iterator<char,struct
   std::char_traits<char> > >::_Getffldx(char *,class std::istreambuf_iterator<char,struct
   std::char_traits<char> > &,class std::istreambuf_iterator<char,struct std::char_traits<char> >
   &,class std::ios_base &,int *)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall
std::num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::_Getffldx
          (num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this,char *param_1
          ,istreambuf_iterator<char,std::char_traits<char>_> *param_2,
          istreambuf_iterator<char,std::char_traits<char>_> *param_3,ios_base *param_4,int *param_5)

{
  char cVar1;
  istreambuf_iterator<char,std::char_traits<char>_> iVar2;
  code *pcVar3;
  bool bVar4;
  istreambuf_iterator<char,std::char_traits<char>_> iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  char ****ppppcVar9;
  char ****ppppcVar10;
  lconv *plVar11;
  int iVar12;
  ios_base *piVar13;
  istreambuf_iterator<char,std::char_traits<char>_> *piVar14;
  istreambuf_iterator<char,std::char_traits<char>_> *piVar15;
  int *in_stack_00000018;
  undefined1 local_a0 [8];
  int *local_98;
  undefined1 local_94 [4];
  int local_90;
  istreambuf_iterator<char,std::char_traits<char>_> *local_8c;
  istreambuf_iterator<char,std::char_traits<char>_> *local_88;
  int *local_84;
  char ***local_80;
  istreambuf_iterator<char,std::char_traits<char>_> *local_7c;
  int local_78;
  char ***local_74;
  int local_70;
  ios_base *local_6c;
  char local_67;
  istreambuf_iterator<char,std::char_traits<char>_> local_66;
  char local_65;
  char ***local_64 [4];
  int local_54;
  uint local_50;
  char ***local_4c [4];
  undefined4 local_3c;
  uint local_38;
  istreambuf_iterator<char,std::char_traits<char>_> local_34 [22];
  istreambuf_iterator<char,std::char_traits<char>_> local_1e;
  istreambuf_iterator<char,std::char_traits<char>_> local_1d;
  istreambuf_iterator<char,std::char_traits<char>_> local_1c;
  istreambuf_iterator<char,std::char_traits<char>_> local_1b;
  istreambuf_iterator<char,std::char_traits<char>_> local_1a;
  istreambuf_iterator<char,std::char_traits<char>_> local_19;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x90;
  local_8 = 0x55d86a;
  local_88 = param_2;
  local_6c = param_4;
  local_98 = in_stack_00000018;
  local_8c = param_3;
  uVar6 = FUN_00402ad0(local_a0);
  local_8 = 0;
  local_84 = (int *)FUN_00406230(uVar6);
  local_8 = 0xffffffff;
  FUN_00402240();
  FUN_00405990(local_64);
  local_8 = 1;
  uVar6 = FUN_00402ad0(local_94);
  local_8._0_1_ = 2;
  piVar7 = (int *)FUN_00405f50(uVar6);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00402240();
  pcVar3 = *(code **)(*piVar7 + 0x1c);
  guard_check_icall("0123456789ABCDEFabcdef-+XxPp",&DAT_005dc961,local_34);
  (*pcVar3)();
  piVar13 = local_6c;
  piVar14 = local_88;
  local_67 = '\0';
  bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                    (param_3,(istreambuf_iterator<char,struct_std::char_traits<char>_> *)local_6c);
  if (!bVar4) {
    if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
    }
    if (param_3[5] == local_1d) {
      *piVar14 = (istreambuf_iterator<char,std::char_traits<char>_>)0x2b;
    }
    else {
      if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
        istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
      }
      if (param_3[5] != local_1e) goto LAB_0055d96d;
      *piVar14 = (istreambuf_iterator<char,std::char_traits<char>_>)0x2d;
    }
    piVar14 = piVar14 + 1;
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
  }
LAB_0055d96d:
  *(undefined2 *)piVar14 = 0x7830;
  piVar14 = piVar14 + 2;
  local_65 = '\0';
  local_78 = 0;
  local_70 = 0;
  local_7c = piVar14;
  bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                    (param_3,(istreambuf_iterator<char,struct_std::char_traits<char>_> *)piVar13);
  if (!bVar4) {
    if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
    }
    if (param_3[5] == local_34[0]) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
      bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                        (param_3,(istreambuf_iterator<char,struct_std::char_traits<char>_> *)piVar13
                        );
      if (bVar4) {
LAB_0055d9e8:
        local_65 = '\x01';
      }
      else {
        if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
          istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
        }
        if (param_3[5] != local_1b) {
          if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
            istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
          }
          if (param_3[5] != local_1c) goto LAB_0055d9e8;
        }
        istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
      }
    }
  }
  local_90 = ((*local_98 != 1000000000) - 1 & 0x2dc) + 0x24;
  if (local_50 < 0x10) {
    local_64[0] = (char ***)local_64;
  }
  local_80 = local_64[0];
  if ((*(char *)local_64[0] == '\x7f') || (*(char *)local_64[0] < '\x01')) {
    bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                      (param_3,(istreambuf_iterator<char,struct_std::char_traits<char>_> *)piVar13);
    piVar15 = local_7c;
    while (!bVar4) {
      if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
        istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
      }
      uVar8 = _Find_elem<char>((char *)local_34,(char)param_3[5]);
      piVar15 = piVar14;
      if (0x15 < uVar8) break;
      if (local_78 < local_90) {
        if ((uVar8 != 0) || (local_78 != 0)) {
          *piVar14 = *(istreambuf_iterator<char,std::char_traits<char>_> *)
                      ("0123456789ABCDEFabcdef-+XxPp" + uVar8);
          piVar14 = piVar14 + 1;
          local_78 = local_78 + 1;
        }
      }
      else {
        local_70 = local_70 + 1;
      }
      local_65 = '\x01';
      istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
      bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                        (param_3,(istreambuf_iterator<char,struct_std::char_traits<char>_> *)piVar13
                        );
      piVar15 = piVar14;
    }
  }
  else {
    if (local_54 == 0) {
      local_66 = (istreambuf_iterator<char,std::char_traits<char>_>)0x0;
    }
    else {
      pcVar3 = *(code **)(*local_84 + 0x10);
      guard_check_icall();
      local_66 = (istreambuf_iterator<char,std::char_traits<char>_>)(*pcVar3)();
    }
    local_3c = 0;
    local_38 = 0xf;
    local_4c[0] = (char ***)((uint)local_4c[0] & 0xffffff00);
    FUN_00404310(1,0);
    local_8 = CONCAT31(local_8._1_3_,3);
    iVar12 = 0;
    bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                      (param_3,(istreambuf_iterator<char,struct_std::char_traits<char>_> *)local_6c)
    ;
    ppppcVar9 = (char ****)local_4c[0];
    if (bVar4) {
LAB_0055db74:
      while ((iVar12 != 0 && (cVar1 = *(char *)local_80, cVar1 != '\x7f'))) {
        iVar12 = iVar12 + -1;
        if (iVar12 != 0) {
          ppppcVar10 = ppppcVar9;
          if (local_38 < 0x10) {
            ppppcVar10 = local_4c;
          }
          if (cVar1 != *(char *)((int)ppppcVar10 + iVar12)) goto LAB_0055dbba;
        }
        if (iVar12 == 0) {
          ppppcVar10 = ppppcVar9;
          if (local_38 < 0x10) {
            ppppcVar10 = local_4c;
          }
          if (cVar1 < *(char *)ppppcVar10) goto LAB_0055dbba;
        }
        if ('\0' < *(char *)((int)local_80 + 1)) {
          local_80 = (char ***)((int)local_80 + 1);
        }
      }
    }
    else {
      local_74 = local_4c[0];
      do {
        if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
          istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
        }
        local_7c = (istreambuf_iterator<char,std::char_traits<char>_> *)
                   CONCAT31(local_7c._1_3_,param_3[5]);
        uVar8 = _Find_elem<char>((char *)local_34,(char)param_3[5]);
        if (uVar8 < 0x16) {
          local_65 = '\x01';
          if (local_78 < local_90) {
            if ((uVar8 != 0) || (local_78 != 0)) {
              *piVar14 = *(istreambuf_iterator<char,std::char_traits<char>_> *)
                          ("0123456789ABCDEFabcdef-+XxPp" + uVar8);
              piVar14 = piVar14 + 1;
              local_78 = local_78 + 1;
            }
          }
          else {
            local_70 = local_70 + 1;
          }
          ppppcVar9 = (char ****)local_74;
          if (local_38 < 0x10) {
            ppppcVar9 = local_4c;
          }
          if (*(char *)((int)ppppcVar9 + iVar12) != '\x7f') {
            if (local_38 < 0x10) {
              local_74 = (char ***)local_4c;
            }
            *(char *)((int)local_74 + iVar12) = *(char *)((int)local_74 + iVar12) + '\x01';
            goto LAB_0055db35;
          }
        }
        else {
          ppppcVar9 = (char ****)local_74;
          if (local_38 < 0x10) {
            ppppcVar9 = local_4c;
          }
          if ((*(char *)((int)ppppcVar9 + iVar12) == '\0') ||
             (local_66 == (istreambuf_iterator<char,std::char_traits<char>_>)0x0)) break;
          if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
            istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
          }
          if (param_3[5] != local_66) break;
          FUN_00405710(1,0);
          iVar12 = iVar12 + 1;
LAB_0055db35:
          local_74 = local_4c[0];
        }
        istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
        bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                          (param_3,(istreambuf_iterator<char,struct_std::char_traits<char>_> *)
                                   local_6c);
      } while (!bVar4);
      local_7c = piVar14;
      ppppcVar9 = (char ****)local_74;
      if (iVar12 == 0) goto LAB_0055db74;
      ppppcVar10 = (char ****)local_74;
      if (local_38 < 0x10) {
        ppppcVar10 = local_4c;
      }
      if ('\0' < *(char *)((int)ppppcVar10 + iVar12)) {
        iVar12 = iVar12 + 1;
        goto LAB_0055db74;
      }
LAB_0055dbba:
      local_67 = '\x01';
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00404250(1,0);
    piVar13 = local_6c;
    piVar15 = local_7c;
  }
  local_7c = piVar15;
  if ((local_65 != '\0') && (local_78 == 0)) {
    *piVar14 = (istreambuf_iterator<char,std::char_traits<char>_>)0x30;
    piVar14 = piVar14 + 1;
    local_7c = piVar14;
  }
  bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                    (param_3,(istreambuf_iterator<char,struct_std::char_traits<char>_> *)piVar13);
  if (!bVar4) {
    if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
    }
    iVar2 = param_3[5];
    pcVar3 = *(code **)(*local_84 + 0xc);
    guard_check_icall();
    iVar5 = (istreambuf_iterator<char,std::char_traits<char>_>)(*pcVar3)();
    param_3 = local_8c;
    piVar13 = local_6c;
    if (iVar2 == iVar5) {
      plVar11 = _localeconv();
      param_3 = local_8c;
      *piVar14 = *(istreambuf_iterator<char,std::char_traits<char>_> *)plVar11->decimal_point;
      piVar14 = piVar14 + 1;
      local_7c = piVar14;
      istreambuf_iterator<char,std::char_traits<char>_>::_Inc(local_8c);
      piVar13 = local_6c;
    }
  }
  if (local_78 == 0) {
    bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                      (param_3,(istreambuf_iterator<char,struct_std::char_traits<char>_> *)piVar13);
    iVar12 = local_70;
    while (!bVar4) {
      if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
        istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
      }
      piVar14 = local_7c;
      if (param_3[5] != local_34[0]) break;
      local_65 = '\x01';
      iVar12 = iVar12 + -1;
      istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
      bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                        (param_3,(istreambuf_iterator<char,struct_std::char_traits<char>_> *)piVar13
                        );
      piVar14 = local_7c;
    }
    local_70 = iVar12;
    if (iVar12 < 0) {
      *piVar14 = (istreambuf_iterator<char,std::char_traits<char>_>)0x30;
      piVar14 = piVar14 + 1;
      local_70 = iVar12 + 1;
    }
  }
  while (bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                           (param_3,(istreambuf_iterator<char,struct_std::char_traits<char>_> *)
                                    piVar13), !bVar4) {
    if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
    }
    uVar8 = _Find_elem<char>((char *)local_34,(char)param_3[5]);
    if (0x15 < uVar8) break;
    if (local_78 < local_90) {
      *piVar14 = *(istreambuf_iterator<char,std::char_traits<char>_> *)
                  ("0123456789ABCDEFabcdef-+XxPp" + uVar8);
      piVar14 = piVar14 + 1;
      local_78 = local_78 + 1;
    }
    local_65 = '\x01';
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
  }
  piVar15 = piVar14;
  if ((local_65 == '\0') ||
     (bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                        (param_3,(istreambuf_iterator<char,struct_std::char_traits<char>_> *)piVar13
                        ), bVar4)) goto LAB_0055de9c;
  if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
    istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
  }
  if (param_3[5] != local_19) {
    if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
    }
    if (param_3[5] != local_1a) goto LAB_0055de9c;
  }
  *piVar14 = (istreambuf_iterator<char,std::char_traits<char>_>)0x70;
  piVar15 = piVar14 + 1;
  istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
  local_65 = '\0';
  local_8c = (istreambuf_iterator<char,std::char_traits<char>_> *)0x0;
  bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                    (param_3,(istreambuf_iterator<char,struct_std::char_traits<char>_> *)local_6c);
  if (!bVar4) {
    if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
    }
    if (param_3[5] == local_1d) {
      *piVar15 = (istreambuf_iterator<char,std::char_traits<char>_>)0x2b;
    }
    else {
      if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
        istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
      }
      if (param_3[5] != local_1e) goto LAB_0055de01;
      *piVar15 = (istreambuf_iterator<char,std::char_traits<char>_>)0x2d;
    }
    piVar15 = piVar14 + 2;
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
  }
LAB_0055de01:
  bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                    (param_3,(istreambuf_iterator<char,struct_std::char_traits<char>_> *)local_6c);
  piVar13 = local_6c;
  piVar14 = (istreambuf_iterator<char,std::char_traits<char>_> *)0x0;
  if (!bVar4) {
    do {
      if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
        istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
      }
      if (param_3[5] != local_34[0]) break;
      local_65 = '\x01';
      istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
      bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                        (param_3,(istreambuf_iterator<char,struct_std::char_traits<char>_> *)piVar13
                        );
    } while (!bVar4);
    piVar14 = local_8c;
    if (local_65 != '\0') {
      *piVar15 = (istreambuf_iterator<char,std::char_traits<char>_>)0x30;
      piVar15 = piVar15 + 1;
    }
  }
  while (bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                           (param_3,(istreambuf_iterator<char,struct_std::char_traits<char>_> *)
                                    local_6c), !bVar4) {
    if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
    }
    uVar8 = _Find_elem<char>((char *)local_34,(char)param_3[5]);
    if (0x15 < uVar8) break;
    if ((int)piVar14 < 8) {
      *piVar15 = *(istreambuf_iterator<char,std::char_traits<char>_> *)
                  ("0123456789ABCDEFabcdef-+XxPp" + uVar8);
      piVar15 = piVar15 + 1;
      piVar14 = piVar14 + 1;
    }
    local_65 = '\x01';
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
  }
LAB_0055de9c:
  if ((local_67 != '\0') || (local_65 == '\0')) {
    piVar15 = local_88;
  }
  *piVar15 = (istreambuf_iterator<char,std::char_traits<char>_>)0x0;
  *local_98 = local_70;
  FUN_00404250(1,0);
  iVar12 = FUN_0055bae6();
  return iVar12;
}

