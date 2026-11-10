// rea decompile_all
// name: std::num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::_Getffld
// address: 0x55d1fc
// body: available
// range: 0x55d1fc-0x55d85a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    private: int __cdecl std::num_get<char,class std::istreambuf_iterator<char,struct
   std::char_traits<char> > >::_Getffld(char *,class std::istreambuf_iterator<char,struct
   std::char_traits<char> > &,class std::istreambuf_iterator<char,struct std::char_traits<char> >
   &,class std::ios_base &,int *)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall
std::num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::_Getffld
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
  istreambuf_iterator<char,std::char_traits<char>_> *piVar13;
  istreambuf_iterator<char,struct_std::char_traits<char>_> *piVar14;
  istreambuf_iterator<char,std::char_traits<char>_> *piVar15;
  int *in_stack_00000018;
  undefined1 local_94 [8];
  istreambuf_iterator<char,std::char_traits<char>_> *local_8c;
  undefined1 local_88 [4];
  istreambuf_iterator<char,std::char_traits<char>_> *local_84;
  istreambuf_iterator<char,std::char_traits<char>_> *local_80;
  int local_7c;
  int *local_78;
  int *local_74;
  char ***local_70;
  int local_6c;
  char ***local_68;
  istreambuf_iterator<char,std::char_traits<char>_> *local_64;
  int local_60;
  istreambuf_iterator<char,struct_std::char_traits<char>_> *local_5c;
  char local_58;
  istreambuf_iterator<char,std::char_traits<char>_> local_57;
  char local_56;
  char local_55;
  char ***local_54 [4];
  int local_44;
  uint local_40;
  char ***local_3c [4];
  undefined4 local_2c;
  uint local_28;
  istreambuf_iterator<char,std::char_traits<char>_> local_24 [10];
  istreambuf_iterator<char,std::char_traits<char>_> local_1a;
  istreambuf_iterator<char,std::char_traits<char>_> local_19;
  istreambuf_iterator<char,std::char_traits<char>_> local_18;
  istreambuf_iterator<char,std::char_traits<char>_> local_17;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x84;
  local_8 = 0x55d20b;
  local_80 = param_2;
  local_8c = param_3;
  local_5c = (istreambuf_iterator<char,struct_std::char_traits<char>_> *)param_4;
  local_78 = in_stack_00000018;
  if ((param_5[5] & 0x3000U) == 0x3000) {
    _Getffldx((num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)param_4,
              param_1,param_2,param_3,param_4,param_5);
    goto LAB_0055d855;
  }
  uVar6 = FUN_00402ad0(local_94);
  local_8 = 0;
  local_74 = (int *)FUN_00406230(uVar6);
  local_8 = 0xffffffff;
  FUN_00402240();
  FUN_00405990(local_54);
  local_8 = 1;
  local_64 = param_2;
  local_58 = '\0';
  local_56 = '\0';
  uVar6 = FUN_00402ad0(local_88);
  local_8._0_1_ = 2;
  piVar7 = (int *)FUN_00405f50(uVar6);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00402240();
  pcVar3 = *(code **)(*piVar7 + 0x1c);
  guard_check_icall("0123456789-+Ee",&DAT_005dc927,local_24);
  (*pcVar3)();
  piVar14 = local_5c;
  bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal(param_3,local_5c);
  if (!bVar4) {
    if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
    }
    if (param_3[5] == local_19) {
      *local_80 = (istreambuf_iterator<char,std::char_traits<char>_>)0x2b;
    }
    else {
      if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
        istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
      }
      if (param_3[5] != local_1a) goto LAB_0055d333;
      *local_80 = (istreambuf_iterator<char,std::char_traits<char>_>)0x2d;
    }
    piVar15 = local_80 + 1;
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
    local_64 = piVar15;
  }
LAB_0055d333:
  *local_64 = (istreambuf_iterator<char,std::char_traits<char>_>)0x30;
  piVar15 = local_64 + 1;
  local_55 = '\0';
  local_6c = 0;
  local_60 = 0;
  local_7c = ((*local_78 != 1000000000) - 1 & 0x2dc) + 0x24;
  if (local_40 < 0x10) {
    local_54[0] = (char ***)local_54;
  }
  local_84 = local_64;
  local_70 = local_54[0];
  if ((*(char *)local_54[0] == '\x7f') || (*(char *)local_54[0] < '\x01')) {
    local_64 = piVar15;
    bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal(param_3,piVar14);
    piVar13 = local_64;
    while (!bVar4) {
      if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
        istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
      }
      uVar8 = _Find_elem<char>((char *)local_24,(char)param_3[5]);
      piVar13 = piVar15;
      if (9 < uVar8) break;
      if (local_6c < local_7c) {
        if ((uVar8 != 0) || (local_6c != 0)) {
          *piVar15 = *(istreambuf_iterator<char,std::char_traits<char>_> *)
                      ("0123456789-+Ee" + uVar8);
          piVar15 = piVar15 + 1;
          local_6c = local_6c + 1;
        }
      }
      else {
        local_60 = local_60 + 1;
        if (uVar8 != 0) {
          local_56 = '\x01';
        }
      }
      local_55 = '\x01';
      istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
      bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal(param_3,piVar14);
      piVar13 = piVar15;
    }
  }
  else {
    if (local_44 == 0) {
      local_57 = (istreambuf_iterator<char,std::char_traits<char>_>)0x0;
      local_64 = piVar15;
    }
    else {
      pcVar3 = *(code **)(*local_74 + 0x10);
      local_64 = piVar15;
      guard_check_icall();
      local_57 = (istreambuf_iterator<char,std::char_traits<char>_>)(*pcVar3)();
    }
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = (char ***)((uint)local_3c[0] & 0xffffff00);
    FUN_00404310(1,0);
    local_8 = CONCAT31(local_8._1_3_,3);
    iVar12 = 0;
    bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal(param_3,local_5c);
    ppppcVar9 = (char ****)local_3c[0];
    if (bVar4) {
LAB_0055d4cc:
      while ((iVar12 != 0 && (cVar1 = *(char *)local_70, cVar1 != '\x7f'))) {
        iVar12 = iVar12 + -1;
        if (iVar12 != 0) {
          ppppcVar10 = ppppcVar9;
          if (local_28 < 0x10) {
            ppppcVar10 = local_3c;
          }
          if (cVar1 != *(char *)((int)ppppcVar10 + iVar12)) goto LAB_0055d512;
        }
        if (iVar12 == 0) {
          ppppcVar10 = ppppcVar9;
          if (local_28 < 0x10) {
            ppppcVar10 = local_3c;
          }
          if (cVar1 < *(char *)ppppcVar10) goto LAB_0055d512;
        }
        if ('\0' < *(char *)((int)local_70 + 1)) {
          local_70 = (char ***)((int)local_70 + 1);
        }
      }
    }
    else {
      local_68 = local_3c[0];
      do {
        if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
          istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
        }
        local_64 = (istreambuf_iterator<char,std::char_traits<char>_> *)
                   CONCAT31(local_64._1_3_,param_3[5]);
        uVar8 = _Find_elem<char>((char *)local_24,(char)param_3[5]);
        if (uVar8 < 10) {
          local_55 = '\x01';
          if (local_6c < local_7c) {
            if ((uVar8 != 0) || (local_6c != 0)) {
              *piVar15 = *(istreambuf_iterator<char,std::char_traits<char>_> *)
                          ("0123456789-+Ee" + uVar8);
              piVar15 = piVar15 + 1;
              local_6c = local_6c + 1;
            }
          }
          else {
            local_60 = local_60 + 1;
            if (uVar8 != 0) {
              local_56 = '\x01';
            }
          }
          ppppcVar9 = (char ****)local_68;
          if (local_28 < 0x10) {
            ppppcVar9 = local_3c;
          }
          if (*(char *)((int)ppppcVar9 + iVar12) != '\x7f') {
            if (local_28 < 0x10) {
              local_68 = (char ***)local_3c;
            }
            *(char *)((int)local_68 + iVar12) = *(char *)((int)local_68 + iVar12) + '\x01';
            goto LAB_0055d48d;
          }
        }
        else {
          ppppcVar9 = (char ****)local_68;
          if (local_28 < 0x10) {
            ppppcVar9 = local_3c;
          }
          if ((*(char *)((int)ppppcVar9 + iVar12) == '\0') ||
             (local_57 == (istreambuf_iterator<char,std::char_traits<char>_>)0x0)) break;
          if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
            istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
          }
          if (param_3[5] != local_57) break;
          FUN_00405710(1,0);
          iVar12 = iVar12 + 1;
LAB_0055d48d:
          local_68 = local_3c[0];
        }
        istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
        bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal(param_3,local_5c);
      } while (!bVar4);
      local_64 = piVar15;
      ppppcVar9 = (char ****)local_68;
      if (iVar12 == 0) goto LAB_0055d4cc;
      ppppcVar10 = (char ****)local_68;
      if (local_28 < 0x10) {
        ppppcVar10 = local_3c;
      }
      if ('\0' < *(char *)((int)ppppcVar10 + iVar12)) {
        iVar12 = iVar12 + 1;
        goto LAB_0055d4cc;
      }
LAB_0055d512:
      local_58 = '\x01';
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00404250(1,0);
    piVar14 = local_5c;
    piVar13 = local_64;
  }
  local_64 = piVar13;
  bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal(param_3,piVar14);
  if (!bVar4) {
    if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
    }
    iVar2 = param_3[5];
    pcVar3 = *(code **)(*local_74 + 0xc);
    guard_check_icall();
    iVar5 = (istreambuf_iterator<char,std::char_traits<char>_>)(*pcVar3)();
    param_3 = local_8c;
    piVar14 = local_5c;
    if (iVar2 == iVar5) {
      plVar11 = _localeconv();
      param_3 = local_8c;
      *piVar15 = *(istreambuf_iterator<char,std::char_traits<char>_> *)plVar11->decimal_point;
      piVar15 = piVar15 + 1;
      local_64 = piVar15;
      istreambuf_iterator<char,std::char_traits<char>_>::_Inc(local_8c);
      piVar14 = local_5c;
    }
  }
  if ((*local_78 != 1000000000) && (local_6c == 0)) {
    bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal(param_3,piVar14);
    iVar12 = local_60;
    while (!bVar4) {
      if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
        istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
      }
      piVar15 = local_64;
      if (param_3[5] != local_24[0]) break;
      local_55 = '\x01';
      iVar12 = iVar12 + -1;
      istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
      bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal(param_3,piVar14);
      piVar15 = local_64;
    }
    local_60 = iVar12;
    if (iVar12 < 0) {
      *piVar15 = (istreambuf_iterator<char,std::char_traits<char>_>)0x30;
      piVar15 = piVar15 + 1;
      local_60 = iVar12 + 1;
    }
  }
  while (bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal(param_3,piVar14), !bVar4)
  {
    if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
    }
    uVar8 = _Find_elem<char>((char *)local_24,(char)param_3[5]);
    if (9 < uVar8) break;
    if (local_6c < local_7c) {
      *piVar15 = *(istreambuf_iterator<char,std::char_traits<char>_> *)("0123456789-+Ee" + uVar8);
      piVar15 = piVar15 + 1;
      local_6c = local_6c + 1;
    }
    else if (uVar8 != 0) {
      local_56 = '\x01';
    }
    local_55 = '\x01';
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
  }
  if (local_56 != '\0') {
    piVar13 = piVar15 + -1;
    if (piVar13 != local_84) {
      do {
        plVar11 = _localeconv();
        if (*piVar13 != *(istreambuf_iterator<char,std::char_traits<char>_> *)plVar11->decimal_point
           ) {
          if (*piVar13 != (istreambuf_iterator<char,std::char_traits<char>_>)0x39) {
            *piVar13 = (istreambuf_iterator<char,std::char_traits<char>_>)((char)*piVar13 + '\x01');
            break;
          }
          *piVar13 = (istreambuf_iterator<char,std::char_traits<char>_>)0x30;
        }
        piVar13 = piVar13 + -1;
      } while (piVar13 != local_84);
      piVar14 = local_5c;
      if (piVar13 != local_84) goto LAB_0055d6fa;
    }
    local_60 = local_60 + 1;
    *piVar13 = (istreambuf_iterator<char,std::char_traits<char>_>)0x31;
    piVar14 = local_5c;
  }
LAB_0055d6fa:
  piVar13 = piVar15;
  if ((local_55 != '\0') &&
     (bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal(param_3,piVar14), !bVar4)) {
    if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
    }
    if (param_3[5] != local_17) {
      if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
        istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
      }
      if (param_3[5] != local_18) goto LAB_0055d836;
    }
    *piVar15 = (istreambuf_iterator<char,std::char_traits<char>_>)0x65;
    piVar13 = piVar15 + 1;
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
    local_55 = '\0';
    local_78 = (int *)0x0;
    bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal(param_3,local_5c);
    if (!bVar4) {
      if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
        istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
      }
      if (param_3[5] == local_19) {
        *piVar13 = (istreambuf_iterator<char,std::char_traits<char>_>)0x2b;
      }
      else {
        if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
          istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
        }
        if (param_3[5] != local_1a) goto LAB_0055d79d;
        *piVar13 = (istreambuf_iterator<char,std::char_traits<char>_>)0x2d;
      }
      piVar13 = piVar15 + 2;
      istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
    }
LAB_0055d79d:
    bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal(param_3,local_5c);
    piVar14 = local_5c;
    piVar7 = (int *)0x0;
    if (!bVar4) {
      do {
        if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
          istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
        }
        if (param_3[5] != local_24[0]) break;
        local_55 = '\x01';
        istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
        bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal(param_3,piVar14);
      } while (!bVar4);
      piVar7 = local_78;
      if (local_55 != '\0') {
        *piVar13 = (istreambuf_iterator<char,std::char_traits<char>_>)0x30;
        piVar13 = piVar13 + 1;
      }
    }
    while (bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal(param_3,local_5c),
          !bVar4) {
      if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
        istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
      }
      uVar8 = _Find_elem<char>((char *)local_24,(char)param_3[5]);
      if (9 < uVar8) break;
      if ((int)piVar7 < 8) {
        *piVar13 = *(istreambuf_iterator<char,std::char_traits<char>_> *)("0123456789-+Ee" + uVar8);
        piVar13 = piVar13 + 1;
        piVar7 = (int *)((int)piVar7 + 1);
      }
      local_55 = '\x01';
      istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
    }
  }
LAB_0055d836:
  if ((local_58 != '\0') || (local_55 == '\0')) {
    piVar13 = local_80;
  }
  *piVar13 = (istreambuf_iterator<char,std::char_traits<char>_>)0x0;
  FUN_00404250(1,0);
LAB_0055d855:
  iVar12 = FUN_0055bae6();
  return iVar12;
}

