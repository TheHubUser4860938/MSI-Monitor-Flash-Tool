// rea decompile_all
// name: std::num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::_Getifld
// address: 0x10156f2c
// body: available
// range: 0x10156f2c-0x101572af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    private: int __cdecl std::num_get<char,class std::istreambuf_iterator<char,struct
   std::char_traits<char> > >::_Getifld(char *,class std::istreambuf_iterator<char,struct
   std::char_traits<char> > &,class std::istreambuf_iterator<char,struct std::char_traits<char> >
   &,int,class std::locale const &)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall
std::num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::_Getifld
          (num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this,char *param_1
          ,istreambuf_iterator<char,std::char_traits<char>_> *param_2,
          istreambuf_iterator<char,std::char_traits<char>_> *param_3,int param_4,locale *param_5)

{
  istreambuf_iterator<char,std::char_traits<char>_> iVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int *piVar7;
  char ****ppppcVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  undefined4 in_stack_00000018;
  uint local_74;
  istreambuf_iterator<char,std::char_traits<char>_> *local_6c;
  char ***local_68;
  istreambuf_iterator<char,std::char_traits<char>_> local_62;
  char ***local_60 [4];
  int local_50;
  uint local_4c;
  char ***local_48 [4];
  undefined4 local_38;
  uint local_34;
  istreambuf_iterator<char,std::char_traits<char>_> local_30 [22];
  istreambuf_iterator<char,std::char_traits<char>_> local_1a;
  istreambuf_iterator<char,std::char_traits<char>_> local_19;
  istreambuf_iterator<char,std::char_traits<char>_> local_18;
  istreambuf_iterator<char,std::char_traits<char>_> local_17;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x6c;
  local_8 = 0x10156f38;
  piVar7 = (int *)FUN_100193f0();
  FUN_1001b760(local_60);
  local_8 = 0;
  if (local_50 == 0) {
    local_62 = (istreambuf_iterator<char,std::char_traits<char>_>)0x0;
  }
  else {
    pcVar3 = *(code **)(*piVar7 + 0x10);
    guard_check_icall();
    local_62 = (istreambuf_iterator<char,std::char_traits<char>_>)(*pcVar3)();
  }
  piVar7 = (int *)FUN_10005f00(in_stack_00000018);
  pcVar3 = *(code **)(*piVar7 + 0x1c);
  guard_check_icall("0123456789ABCDEFabcdef-+Xx",&DAT_101d56db,local_30);
  (*pcVar3)();
  local_6c = param_2;
  bVar5 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                    (param_3,(istreambuf_iterator<char,struct_std::char_traits<char>_> *)param_4);
  if (!bVar5) {
    if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
    }
    if (param_3[5] == local_19) {
      *param_2 = (istreambuf_iterator<char,std::char_traits<char>_>)0x2b;
    }
    else {
      if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
        istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
      }
      if (param_3[5] != local_1a) goto LAB_10157001;
      *param_2 = (istreambuf_iterator<char,std::char_traits<char>_>)0x2d;
    }
    local_6c = param_2 + 1;
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
  }
LAB_10157001:
  uVar10 = (uint)param_5 & 0xe00;
  local_74 = 10;
  if (uVar10 == 0x400) {
    bVar9 = 8;
  }
  else if (uVar10 == 0x800) {
    bVar9 = 0x10;
  }
  else {
    bVar9 = -(uVar10 != 0) & 10;
  }
  bVar4 = false;
  local_68 = (char ***)0x0;
  bVar5 = false;
  bVar6 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                    (param_3,(istreambuf_iterator<char,struct_std::char_traits<char>_> *)param_4);
  if (bVar6) {
LAB_101570d3:
    if (bVar9 == 0) goto LAB_101570ed;
LAB_101570d7:
    if (bVar9 == 10) goto LAB_101570ed;
  }
  else {
    if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
    }
    if (param_3[5] != local_30[0]) goto LAB_101570d3;
    bVar4 = true;
    local_68 = (char ***)0x1;
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
    bVar6 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                      (param_3,(istreambuf_iterator<char,struct_std::char_traits<char>_> *)param_4);
    if (bVar6) {
LAB_101570c9:
      if (bVar9 == 0) {
        bVar9 = 8;
        goto LAB_101570d3;
      }
      goto LAB_101570d7;
    }
    if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
    }
    if (param_3[5] != local_17) {
      if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
        istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
      }
      if (param_3[5] != local_18) goto LAB_101570c9;
    }
    if ((bVar9 != 0) && (bVar9 != 0x10)) goto LAB_101570c9;
    bVar9 = 0x10;
    bVar4 = false;
    local_68 = (char ***)0x0;
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
  }
  local_74 = ((bVar9 != 8) - 1 & 0xfffffff2) + 0x16;
LAB_101570ed:
  local_38 = 0;
  local_34 = 0xf;
  local_48[0] = (char ***)((uint)local_48[0] & 0xffffff00);
  FUN_1001ad30(1,local_68);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar11 = 0;
  bVar6 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                    (param_3,(istreambuf_iterator<char,struct_std::char_traits<char>_> *)param_4);
  local_68 = local_48[0];
  if (!bVar6) {
    do {
      if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
        istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
      }
      uVar10 = _Find_elem<char>((char *)local_30,(char)param_3[5]);
      if (uVar10 < local_74) {
        iVar1 = *(istreambuf_iterator<char,std::char_traits<char>_> *)
                 ("0123456789ABCDEFabcdef-+Xx" + uVar10);
        *local_6c = iVar1;
        if (((bVar5) || (iVar1 != (istreambuf_iterator<char,std::char_traits<char>_>)0x30)) &&
           (local_6c < param_2 + 0x1f)) {
          local_6c = local_6c + 1;
          bVar5 = true;
        }
        bVar4 = true;
        ppppcVar8 = (char ****)local_68;
        if (local_34 < 0x10) {
          ppppcVar8 = local_48;
        }
        if (*(char *)((int)ppppcVar8 + iVar11) != '\x7f') {
          if (local_34 < 0x10) {
            local_68 = (char ***)local_48;
          }
          *(char *)((int)local_68 + iVar11) = *(char *)((int)local_68 + iVar11) + '\x01';
          goto LAB_101571d9;
        }
      }
      else {
        ppppcVar8 = (char ****)local_68;
        if (local_34 < 0x10) {
          ppppcVar8 = local_48;
        }
        if ((*(char *)((int)ppppcVar8 + iVar11) == '\0') ||
           (local_62 == (istreambuf_iterator<char,std::char_traits<char>_>)0x0)) break;
        if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
          istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
        }
        if (param_3[5] != local_62) break;
        FUN_1000f7d0(1,0);
        iVar11 = iVar11 + 1;
LAB_101571d9:
        local_68 = local_48[0];
      }
      istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
      bVar6 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                        (param_3,(istreambuf_iterator<char,struct_std::char_traits<char>_> *)param_4
                        );
    } while (!bVar6);
    if (iVar11 != 0) {
      ppppcVar8 = (char ****)local_68;
      if (local_34 < 0x10) {
        ppppcVar8 = local_48;
      }
      if (*(char *)((int)ppppcVar8 + iVar11) < '\x01') {
        bVar4 = false;
      }
      else {
        iVar11 = iVar11 + 1;
      }
    }
  }
  if (local_4c < 0x10) {
    local_60[0] = (char ***)local_60;
  }
  if (bVar4) {
    while ((iVar11 != 0 && (cVar2 = *(char *)local_60[0], cVar2 != '\x7f'))) {
      iVar11 = iVar11 + -1;
      if (iVar11 != 0) {
        ppppcVar8 = (char ****)local_68;
        if (local_34 < 0x10) {
          ppppcVar8 = local_48;
        }
        if (cVar2 != *(char *)((int)ppppcVar8 + iVar11)) goto LAB_1015728e;
      }
      if (iVar11 == 0) {
        ppppcVar8 = (char ****)local_68;
        if (local_34 < 0x10) {
          ppppcVar8 = local_48;
        }
        if (cVar2 < *(char *)ppppcVar8) goto LAB_1015728e;
      }
      if ('\0' < *(char *)((int)local_60[0] + 1)) {
        local_60[0] = (char ***)((int)local_60[0] + 1);
      }
    }
    param_2 = local_6c;
    if (!bVar5) {
      *local_6c = (istreambuf_iterator<char,std::char_traits<char>_>)0x30;
      param_2 = local_6c + 1;
    }
  }
LAB_1015728e:
  *param_2 = (istreambuf_iterator<char,std::char_traits<char>_>)0x0;
  FUN_10003850(1,0);
  FUN_10003850(1,0);
  iVar11 = FUN_10154478();
  return iVar11;
}

