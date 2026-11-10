// rea decompile_all
// name: std::money_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::_Getmfld
// address: 0x10192cc9
// body: available
// range: 0x10192cc9-0x10193632 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   __thiscall std::money_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char>
   > >::_Getmfld(class std::istreambuf_iterator<char,struct std::char_traits<char> > &,class
   std::istreambuf_iterator<char,struct std::char_traits<char> > &,bool,class std::ios_base &,char
   *)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall
std::money_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::_Getmfld
          (money_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this,
          istreambuf_iterator<char,std::char_traits<char>_> *param_1,
          istreambuf_iterator<char,std::char_traits<char>_> *param_2,bool param_3,ios_base *param_4,
          char *param_5)

{
  char cVar1;
  code *pcVar2;
  istreambuf_iterator<char,struct_std::char_traits<char>_> *piVar3;
  istreambuf_iterator<char,std::char_traits<char>_> iVar4;
  bool bVar5;
  bool bVar6;
  locale *plVar7;
  moneypunct<char,1> *pmVar8;
  undefined4 uVar9;
  int *piVar10;
  uint uVar11;
  istreambuf_iterator<char,std::char_traits<char>_> *piVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  istreambuf_iterator<char,std::char_traits<char>_> *piVar16;
  undefined3 in_stack_0000000d;
  char *in_stack_00000018;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  undefined1 local_d4 [8];
  undefined1 local_cc [8];
  undefined1 local_c4 [8];
  istreambuf_iterator<char,std::char_traits<char>_> *local_bc;
  istreambuf_iterator<char,std::char_traits<char>_> *local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  char local_9c [4];
  int *local_98;
  char *local_94;
  char *local_90;
  int local_8c;
  int local_88;
  uint local_84;
  istreambuf_iterator<char,std::char_traits<char>_> local_7d;
  istreambuf_iterator<char,std::char_traits<char>_> *local_7c;
  istreambuf_iterator<char,struct_std::char_traits<char>_> *local_78;
  moneypunct<char,1> *local_74;
  char local_6d;
  uint local_6c;
  uint local_68;
  istreambuf_iterator<char,std::char_traits<char>_> *local_64;
  char local_5d;
  istreambuf_iterator<char,std::char_traits<char>_> *local_5c [4];
  uint local_4c;
  uint local_48;
  istreambuf_iterator<char,std::char_traits<char>_> *local_44 [4];
  int local_34;
  uint local_30;
  istreambuf_iterator<char,std::char_traits<char>_> *local_2c [4];
  int local_1c;
  uint local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc4;
  local_8 = 0x10192cd8;
  local_84 = 0;
  local_78 = _param_3;
  local_64 = param_1;
  local_bc = param_1;
  local_b8 = param_2;
  local_94 = param_5;
  local_90 = in_stack_00000018;
  if ((char)param_4 == '\0') {
    plVar7 = (locale *)FUN_100072b0(local_cc);
    local_8 = 2;
    pmVar8 = (moneypunct<char,1> *)use_facet<std::moneypunct<char,0>_>(plVar7);
  }
  else {
    plVar7 = (locale *)FUN_100072b0(local_c4);
    local_8 = 1;
    pmVar8 = use_facet<std::moneypunct<char,1>_>(plVar7);
  }
  local_74 = pmVar8;
  FUN_10006a30();
  local_48 = 0xf;
  local_5d = '\0';
  local_6d = '\0';
  local_4c = 0;
  local_5c[0] = (istreambuf_iterator<char,std::char_traits<char>_> *)
                ((uint)local_5c[0] & 0xffffff00);
  local_8 = 3;
  pcVar2 = *(code **)(*(int *)pmVar8 + 0x2c);
  guard_check_icall(local_9c);
  (*pcVar2)();
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0xf < *(uint *)(param_1 + 0x14)) {
    param_1 = *(istreambuf_iterator<char,std::char_traits<char>_> **)param_1;
  }
  *param_1 = (istreambuf_iterator<char,std::char_traits<char>_>)0x0;
  local_68 = 1;
  local_84 = 1;
  uVar9 = FUN_100072b0(local_d4);
  local_8._0_1_ = 4;
  piVar10 = (int *)FUN_1000c530(uVar9);
  local_8 = CONCAT31(local_8._1_3_,3);
  local_98 = piVar10;
  FUN_10006a30();
  pcVar18 = "0123456789abcdefghijklmnopqrstuvwxyz";
  pcVar2 = *(code **)(*piVar10 + 0x1c);
  pcVar17 = "0123456789-";
  pcVar19 = local_90;
  guard_check_icall("0123456789-","0123456789abcdefghijklmnopqrstuvwxyz",local_90);
  (*pcVar2)();
  local_6c = 0;
  do {
    piVar3 = local_78;
    if (3 < local_6c) break;
    cVar1 = local_9c[local_6c];
    if (cVar1 == ' ') {
LAB_10193532:
      if (local_6c != 3) {
        bVar6 = false;
        while (bVar5 = istreambuf_iterator<char,std::char_traits<char>_>::equal(param_2,piVar3),
              !bVar5) {
          if (param_2[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
            istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_2);
          }
          if ((*(byte *)(local_98[3] + (uint)(byte)param_2[5] * 2) & 0x48) == 0) break;
          bVar6 = true;
          istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_2);
        }
        if ((local_9c[local_6c] == ' ') && (!bVar6)) {
          local_5d = '\x01';
        }
      }
      goto LAB_10192e58;
    }
    if (cVar1 == '$') {
      curr_symbol(local_2c);
      piVar3 = local_78;
      local_8 = CONCAT31(local_8._1_3_,5);
      if (((local_94[0x14] & 8U) != 0) ||
         (bVar6 = istreambuf_iterator<char,std::char_traits<char>_>::equal(param_2,local_78), bVar6)
         ) {
LAB_10193466:
        if ((local_6c == 3) && (local_4c < 2)) {
          bVar6 = istreambuf_iterator<char,std::char_traits<char>_>::equal(param_2,piVar3);
          if (!bVar6) {
            if (param_2[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
              istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_2);
            }
            piVar16 = local_2c[0];
            if (local_18 < 0x10) {
              piVar16 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_2c;
            }
            if (param_2[5] == *piVar16) goto LAB_101934a7;
          }
          goto LAB_1019349d;
        }
      }
      else {
        if (param_2[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
          istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_2);
        }
        piVar16 = local_2c[0];
        if (local_18 < 0x10) {
          piVar16 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_2c;
        }
        if (param_2[5] == *piVar16) goto LAB_10193466;
LAB_1019349d:
        FUN_1000b830(0);
      }
LAB_101934a7:
      piVar16 = local_2c[0];
      if (local_18 < 0x10) {
        piVar16 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_2c;
      }
      bVar6 = istreambuf_iterator<char,std::char_traits<char>_>::equal(param_2,local_78);
      piVar3 = local_78;
      while (!bVar6) {
        piVar12 = local_2c[0];
        if (local_18 < 0x10) {
          piVar12 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_2c;
        }
        if (piVar16 == piVar12 + local_1c) break;
        if (param_2[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
          istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_2);
        }
        if (param_2[5] != *piVar16) break;
        piVar16 = piVar16 + 1;
        istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_2);
        bVar6 = istreambuf_iterator<char,std::char_traits<char>_>::equal(param_2,piVar3);
      }
      piVar12 = local_2c[0];
      if (local_18 < 0x10) {
        piVar12 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_2c;
      }
      if (piVar16 != piVar12 + local_1c) {
        local_5d = '\x01';
      }
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_1000a890(1,0);
    }
    else {
      if (cVar1 == '+') {
        bVar6 = istreambuf_iterator<char,std::char_traits<char>_>::equal(param_2,local_78);
        if (bVar6) goto LAB_10192e58;
        iVar14 = positive_sign(local_2c);
        local_68 = local_68 | 2;
        local_8 = CONCAT31(local_8._1_3_,6);
        local_84 = local_68;
        if (*(int *)(iVar14 + 0x10) == 0) {
LAB_10193295:
          bVar6 = false;
        }
        else {
          piVar16 = (istreambuf_iterator<char,std::char_traits<char>_> *)positive_sign(local_44);
          local_68 = local_68 | 4;
          local_8 = 7;
          if (0xf < *(uint *)(piVar16 + 0x14)) {
            piVar16 = *(istreambuf_iterator<char,std::char_traits<char>_> **)piVar16;
          }
          local_84 = local_68;
          if (param_2[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
            istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_2);
          }
          if (*piVar16 != param_2[5]) goto LAB_10193295;
          bVar6 = true;
        }
        if ((local_68 & 4) != 0) {
          local_68 = local_68 & 0xfffffffb;
          FUN_1000a890(1,0);
        }
        local_84 = local_68 & 0xfffffffd;
        local_8 = 3;
        local_68 = local_84;
        FUN_1000a890(1,0);
        if (!bVar6) {
          iVar14 = negative_sign(local_2c);
          local_68 = local_68 | 8;
          local_8 = CONCAT31(local_8._1_3_,8);
          local_84 = local_68;
          if (*(int *)(iVar14 + 0x10) == 0) {
LAB_10193359:
            bVar6 = false;
          }
          else {
            piVar16 = (istreambuf_iterator<char,std::char_traits<char>_> *)negative_sign(local_44);
            local_68 = local_68 | 0x10;
            local_8 = 9;
            if (0xf < *(uint *)(piVar16 + 0x14)) {
              piVar16 = *(istreambuf_iterator<char,std::char_traits<char>_> **)piVar16;
            }
            local_84 = local_68;
            if (param_2[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
              istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_2);
            }
            if (*piVar16 != param_2[5]) goto LAB_10193359;
            bVar6 = true;
          }
          if ((local_68 & 0x10) != 0) {
            local_68 = local_68 & 0xffffffef;
            FUN_1000a890(1,0);
          }
          local_84 = local_68 & 0xfffffff7;
          local_8 = 3;
          local_68 = local_84;
          FUN_1000a890(1,0);
          if (bVar6) {
            istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_2);
            uVar9 = negative_sign(local_44);
            FUN_1000d1e0(uVar9);
            FUN_1000a890(1,0);
            local_6d = '\x01';
          }
          else {
            iVar14 = positive_sign(local_44);
            iVar14 = *(int *)(iVar14 + 0x10);
            FUN_1000a890(1,0);
            if (iVar14 != 0) {
              iVar14 = negative_sign(local_44);
              iVar14 = *(int *)(iVar14 + 0x10);
              FUN_1000a890(1,0);
              if (iVar14 == 0) {
                local_6d = '\x01';
              }
            }
          }
          goto LAB_10192e58;
        }
        istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_2);
        uVar9 = positive_sign(local_44);
        FUN_1000d1e0(uVar9);
      }
      else {
        if (cVar1 != 'v') {
          if (cVar1 == 'x') goto LAB_10193532;
          goto LAB_10192e58;
        }
        local_8c = 0;
        pcVar2 = *(code **)(*(int *)local_74 + 0x24);
        guard_check_icall(pcVar17,pcVar18,pcVar19);
        local_88 = (*pcVar2)();
        pmVar8 = local_74;
        grouping(local_44);
        local_8._0_1_ = 10;
        piVar3 = local_78;
        if (local_34 == 0) {
LAB_101930fa:
          while (bVar6 = istreambuf_iterator<char,std::char_traits<char>_>::equal(param_2,piVar3),
                !bVar6) {
            if (param_2[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
              istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_2);
            }
            local_a8 = CONCAT31(local_a8._1_3_,param_2[5]);
            uVar13 = _Find_elem<char>(local_90,(char)param_2[5]);
            if (9 < uVar13) break;
            local_ac = CONCAT31(local_ac._1_3_,"0123456789-"[uVar13]);
            FUN_1000ac90(1,local_ac);
            istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_2);
          }
LAB_10193106:
          pcVar2 = *(code **)(*(int *)local_74 + 0xc);
          guard_check_icall();
          iVar4 = (istreambuf_iterator<char,std::char_traits<char>_>)(*pcVar2)();
          piVar3 = local_78;
          bVar6 = istreambuf_iterator<char,std::char_traits<char>_>::equal(param_2,local_78);
          iVar14 = local_88;
          iVar15 = local_8c;
          if ((!bVar6) && (iVar4 != (istreambuf_iterator<char,std::char_traits<char>_>)0x0)) {
            if (param_2[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
              istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_2);
            }
            iVar14 = local_88;
            iVar15 = local_8c;
            if (param_2[5] == iVar4) {
              istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_2);
              bVar6 = istreambuf_iterator<char,std::char_traits<char>_>::equal(param_2,piVar3);
              iVar14 = local_88;
              iVar15 = local_8c;
              while (bVar6 == false) {
                if (iVar14 <= iVar15) goto LAB_101931e1;
                if (param_2[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
                  istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_2);
                }
                local_b0 = CONCAT31(local_b0._1_3_,param_2[5]);
                uVar13 = _Find_elem<char>(local_90,(char)param_2[5]);
                if (9 < uVar13) break;
                local_b4 = CONCAT31(local_b4._1_3_,"0123456789-"[uVar13]);
                FUN_1000ac90(1,local_b4);
                iVar15 = iVar15 + 1;
                istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_2);
                bVar6 = istreambuf_iterator<char,std::char_traits<char>_>::equal(param_2,local_78);
              }
              if (iVar15 < iVar14) {
                local_5d = '\x01';
              }
            }
          }
LAB_101931e1:
          if (*(int *)(local_64 + 0x10) == 0) {
            local_5d = '\x01';
          }
          else if (iVar15 < iVar14) {
            iVar14 = iVar14 - iVar15;
            do {
              FUN_1000ac90(1,0x30);
              iVar14 = iVar14 + -1;
              param_2 = local_b8;
            } while (iVar14 != 0);
          }
        }
        else {
          pcVar2 = *(code **)(*(int *)pmVar8 + 0x10);
          guard_check_icall();
          local_7d = (istreambuf_iterator<char,std::char_traits<char>_>)(*pcVar2)();
          piVar3 = local_78;
          if (local_7d == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) goto LAB_101930fa;
          piVar16 = local_44[0];
          if (local_30 < 0x10) {
            piVar16 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_44;
          }
          if (0x7e < (byte)*piVar16) goto LAB_101930fa;
          local_18 = 0xf;
          local_1c = 0;
          local_2c[0] = (istreambuf_iterator<char,std::char_traits<char>_> *)
                        ((uint)local_2c[0] & 0xffffff00);
          FUN_1000a990(1,0);
          local_8._0_1_ = 0xb;
          iVar14 = 0;
          bVar6 = istreambuf_iterator<char,std::char_traits<char>_>::equal(param_2,local_78);
          local_7c = local_2c[0];
          uVar13 = local_18;
          if (!bVar6) {
            do {
              if (param_2[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
                istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_2);
              }
              local_a0 = CONCAT31(local_a0._1_3_,param_2[5]);
              uVar11 = _Find_elem<char>(local_90,(char)param_2[5]);
              if (uVar11 < 10) {
                local_a4 = CONCAT31(local_a4._1_3_,"0123456789-"[uVar11]);
                FUN_1000ac90(1,local_a4);
                piVar16 = local_7c;
                if (uVar13 < 0x10) {
                  piVar16 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_2c;
                }
                if (piVar16[iVar14] != (istreambuf_iterator<char,std::char_traits<char>_>)0x7f) {
                  if (uVar13 < 0x10) {
                    local_7c = (istreambuf_iterator<char,std::char_traits<char>_> *)local_2c;
                  }
                  local_7c[iVar14] =
                       (istreambuf_iterator<char,std::char_traits<char>_>)
                       ((char)local_7c[iVar14] + '\x01');
                  goto LAB_10192fdd;
                }
              }
              else {
                piVar16 = local_7c;
                if (uVar13 < 0x10) {
                  piVar16 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_2c;
                }
                if (piVar16[iVar14] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0)
                break;
                if (param_2[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
                  istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_2);
                }
                if (param_2[5] != local_7d) break;
                FUN_1000ac90(1,0);
                iVar14 = iVar14 + 1;
LAB_10192fdd:
                local_7c = local_2c[0];
                uVar13 = local_18;
              }
              istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_2);
              bVar6 = istreambuf_iterator<char,std::char_traits<char>_>::equal(param_2,local_78);
            } while (!bVar6);
            if (iVar14 != 0) {
              piVar16 = local_7c;
              if (uVar13 < 0x10) {
                piVar16 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_2c;
              }
              if ((char)piVar16[iVar14] < '\x01') {
                local_5d = '\x01';
              }
              else {
                iVar14 = iVar14 + 1;
              }
            }
          }
          piVar16 = local_44[0];
          if (local_30 < 0x10) {
            piVar16 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_44;
          }
          if (local_5d == '\0') {
            while ((iVar14 != 0 &&
                   (iVar4 = *piVar16,
                   iVar4 != (istreambuf_iterator<char,std::char_traits<char>_>)0x7f))) {
              iVar14 = iVar14 + -1;
              if (iVar14 != 0) {
                piVar12 = local_7c;
                if (uVar13 < 0x10) {
                  piVar12 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_2c;
                }
                if (iVar4 == piVar12[iVar14]) goto LAB_10193048;
LAB_1019306b:
                local_5d = '\x01';
                goto LAB_1019306f;
              }
LAB_10193048:
              if (iVar14 == 0) {
                piVar12 = local_7c;
                if (uVar13 < 0x10) {
                  piVar12 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_2c;
                }
                if ((char)iVar4 < (char)*piVar12) goto LAB_1019306b;
              }
              if ('\0' < (char)piVar16[1]) {
                piVar16 = piVar16 + 1;
              }
            }
            local_8._0_1_ = 10;
            FUN_1000a890(1,0);
            goto LAB_10193106;
          }
LAB_1019306f:
          FUN_1000a890(1,0);
        }
        local_8 = CONCAT31(local_8._1_3_,3);
      }
      FUN_1000a890(1,0);
    }
LAB_10192e58:
    local_6c = local_6c + 1;
  } while (local_5d == '\0');
  if (local_5d == '\0') {
    if (1 < local_4c) {
      piVar12 = local_5c[0];
      piVar16 = local_5c[0];
      if (0xf < local_48) goto LAB_101935a6;
      piVar16 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_5c;
      while( true ) {
        piVar12 = local_5c[0];
        if (local_48 < 0x10) {
          piVar12 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_5c;
        }
LAB_101935a6:
        piVar16 = piVar16 + 1;
        if ((piVar16 == piVar12 + local_4c) ||
           (bVar6 = istreambuf_iterator<char,std::char_traits<char>_>::equal(param_2,local_78),
           bVar6)) break;
        if (param_2[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
          istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_2);
        }
        if (param_2[5] != *piVar16) break;
        istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_2);
      }
      piVar12 = local_5c[0];
      if (local_48 < 0x10) {
        piVar12 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_5c;
      }
      if (piVar16 != piVar12 + local_4c) goto LAB_10193612;
    }
    if (local_6d != '\0') {
      FUN_100118a0(0,1,0x2d);
    }
  }
  else {
LAB_10193612:
    FUN_1000b830(0);
  }
  FUN_1000a890(1,0);
  FUN_1018015d();
  return;
}

