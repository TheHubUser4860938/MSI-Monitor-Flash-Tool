// rea decompile_all
// name: Getmfld
// address: 0x10189b07
// body: available
// range: 0x10189b07-0x1018a481 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   __thiscall std::money_get<unsigned short,class std::istreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > >::_Getmfld(class std::istreambuf_iterator<unsigned
   short,struct std::char_traits<unsigned short> > &,class std::istreambuf_iterator<unsigned
   short,struct std::char_traits<unsigned short> > &,bool,class std::ios_base &,unsigned short
   *)const 
    private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   __thiscall std::money_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >::_Getmfld(class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > &,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > &,bool,class std::ios_base &,wchar_t *)const 
   
   Library: Visual Studio 2015 Release */

void Getmfld(undefined4 *param_1,int param_2,undefined4 param_3,char param_4,int param_5,
            undefined4 param_6)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  ushort uVar5;
  short sVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  short ****ppppsVar11;
  uint uVar12;
  short *psVar13;
  undefined4 uVar14;
  short *psVar15;
  short ****ppppsVar16;
  byte ****ppppbVar17;
  int iVar18;
  char *pcVar19;
  char *pcVar20;
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  undefined4 *local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  uint local_a0;
  undefined4 local_9c;
  char local_98 [4];
  int local_94;
  int *local_90;
  undefined4 local_8c;
  int local_88;
  uint local_84;
  uint local_80;
  undefined4 *local_7c;
  short ***local_78;
  undefined4 local_74;
  int local_70;
  int *local_6c;
  char local_65;
  uint local_64;
  char local_5d;
  undefined4 local_5c;
  uint local_4c;
  uint local_48;
  byte ***local_44 [4];
  int local_34;
  uint local_30;
  short ***local_2c [4];
  int local_1c;
  uint local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xb8;
  local_8 = 0x10189b16;
  local_80 = 0;
  local_74 = param_3;
  local_7c = param_1;
  local_b0 = param_1;
  local_ac = param_2;
  local_70 = param_5;
  local_8c = param_6;
  if (param_4 == '\0') {
    uVar7 = FUN_100072b0(local_c0);
    local_8 = 2;
    piVar8 = (int *)use_facet<>(uVar7);
  }
  else {
    uVar7 = FUN_100072b0(local_b8);
    local_8 = 1;
    piVar8 = (int *)use_facet<>(uVar7);
  }
  local_6c = piVar8;
  FUN_10006a30();
  local_4c = 0;
  local_65 = '\0';
  local_5d = '\0';
  local_48 = 7;
  local_5c = (short *)((uint)local_5c._2_2_ << 0x10);
  local_8 = 3;
  pcVar2 = *(code **)(*piVar8 + 0x2c);
  guard_check_icall(local_98);
  (*pcVar2)();
  iVar9 = local_70;
  param_1[5] = 0xf;
  param_1[4] = 0;
  if (0xf < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  *(undefined1 *)param_1 = 0;
  local_64 = 1;
  local_80 = 1;
  uVar7 = FUN_100072b0(local_c8);
  local_8._0_1_ = 4;
  piVar8 = (int *)use_facet<>(uVar7);
  local_8 = CONCAT31(local_8._1_3_,3);
  local_90 = piVar8;
  FUN_10006a30();
  pcVar20 = "0123456789-+Ee";
  pcVar2 = *(code **)(*piVar8 + 0x2c);
  pcVar19 = "0123456789-";
  uVar7 = local_8c;
  guard_check_icall("0123456789-","0123456789-+Ee",local_8c);
  (*pcVar2)();
  local_84 = 0;
  do {
    if (3 < local_84) break;
    cVar4 = local_98[local_84];
    if (cVar4 == ' ') {
LAB_10189c96:
      if (local_84 != 3) {
        bVar3 = false;
        while (cVar4 = equal(local_74), cVar4 == '\0') {
          if (*(char *)(param_2 + 4) == '\0') {
            Peek();
          }
          pcVar2 = *(code **)(*local_90 + 0x10);
          guard_check_icall(0x48,*(undefined2 *)(param_2 + 6));
          cVar4 = (*pcVar2)();
          if (cVar4 == '\0') break;
          bVar3 = true;
          Inc();
        }
        iVar9 = local_70;
        if ((local_98[local_84] == ' ') && (!bVar3)) {
          local_5d = '\x01';
        }
      }
      goto LAB_10189eac;
    }
    if (cVar4 == '$') {
      curr_symbol(local_2c);
      uVar14 = local_74;
      local_8 = CONCAT31(local_8._1_3_,5);
      if (((*(byte *)(iVar9 + 0x14) & 8) == 0) && (cVar4 = equal(local_74), cVar4 == '\0')) {
        if (*(char *)(param_2 + 4) == '\0') {
          Peek();
        }
        ppppsVar11 = (short ****)local_2c[0];
        if (local_18 < 8) {
          ppppsVar11 = local_2c;
        }
        if (*(short *)(param_2 + 6) == *(short *)ppppsVar11) goto LAB_1018a2c5;
LAB_1018a2fe:
        FUN_101919c2(0);
      }
      else {
LAB_1018a2c5:
        if ((local_84 == 3) && (local_4c < 2)) {
          cVar4 = equal(uVar14);
          if (cVar4 == '\0') {
            if (*(char *)(param_2 + 4) == '\0') {
              Peek();
            }
            ppppsVar11 = (short ****)local_2c[0];
            if (local_18 < 8) {
              ppppsVar11 = local_2c;
            }
            if (*(short *)(param_2 + 6) == *(short *)ppppsVar11) goto LAB_1018a308;
          }
          goto LAB_1018a2fe;
        }
      }
LAB_1018a308:
      ppppsVar11 = (short ****)local_2c[0];
      if (local_18 < 8) {
        ppppsVar11 = local_2c;
      }
      while (cVar4 = equal(uVar14), cVar4 == '\0') {
        ppppsVar16 = (short ****)local_2c[0];
        if (local_18 < 8) {
          ppppsVar16 = local_2c;
        }
        if (ppppsVar11 == (short ****)((int)ppppsVar16 + local_1c * 2)) break;
        if (*(char *)(param_2 + 4) == '\0') {
          Peek();
        }
        if (*(short *)(param_2 + 6) != *(short *)ppppsVar11) break;
        ppppsVar11 = (short ****)((int)ppppsVar11 + 2);
        Inc();
      }
      ppppsVar16 = (short ****)local_2c[0];
      if (local_18 < 8) {
        ppppsVar16 = local_2c;
      }
      if (ppppsVar11 != (short ****)((int)ppppsVar16 + local_1c * 2)) {
        local_5d = '\x01';
      }
      local_8 = CONCAT31(local_8._1_3_,3);
LAB_1018a145:
      FID_conflict__Tidy(1,0);
      iVar9 = local_70;
    }
    else if (cVar4 == '+') {
      cVar4 = equal(local_74);
      iVar9 = local_70;
      if (cVar4 == '\0') {
        iVar9 = positive_sign(local_2c);
        local_64 = local_64 | 2;
        local_8 = CONCAT31(local_8._1_3_,6);
        local_80 = local_64;
        if (*(int *)(iVar9 + 0x10) == 0) {
LAB_1018a0ea:
          bVar3 = false;
        }
        else {
          psVar13 = (short *)positive_sign(local_44);
          local_64 = local_64 | 4;
          local_8 = 7;
          if (7 < *(uint *)(psVar13 + 10)) {
            psVar13 = *(short **)psVar13;
          }
          local_80 = local_64;
          if (*(char *)(param_2 + 4) == '\0') {
            Peek();
          }
          if (*psVar13 != *(short *)(param_2 + 6)) goto LAB_1018a0ea;
          bVar3 = true;
        }
        if ((local_64 & 4) != 0) {
          local_64 = local_64 & 0xfffffffb;
          FID_conflict__Tidy(1,0);
        }
        local_80 = local_64 & 0xfffffffd;
        local_8 = 3;
        local_64 = local_80;
        FID_conflict__Tidy(1,0);
        if (!bVar3) {
          iVar9 = negative_sign(local_2c);
          local_64 = local_64 | 8;
          local_8 = CONCAT31(local_8._1_3_,8);
          local_80 = local_64;
          if (*(int *)(iVar9 + 0x10) == 0) {
LAB_1018a1bc:
            bVar3 = false;
          }
          else {
            psVar13 = (short *)negative_sign(local_44);
            local_64 = local_64 | 0x10;
            local_8 = 9;
            if (7 < *(uint *)(psVar13 + 10)) {
              psVar13 = *(short **)psVar13;
            }
            local_80 = local_64;
            if (*(char *)(param_2 + 4) == '\0') {
              Peek();
            }
            if (*psVar13 != *(short *)(param_2 + 6)) goto LAB_1018a1bc;
            bVar3 = true;
          }
          if ((local_64 & 0x10) != 0) {
            local_64 = local_64 & 0xffffffef;
            FID_conflict__Tidy(1,0);
          }
          local_80 = local_64 & 0xfffffff7;
          local_8 = 3;
          local_64 = local_80;
          FID_conflict__Tidy(1,0);
          if (bVar3) {
            Inc();
            uVar14 = negative_sign(local_44);
            FID_conflict_operator_(uVar14);
            FID_conflict__Tidy(1,0);
            local_65 = '\x01';
            iVar9 = local_70;
          }
          else {
            iVar9 = positive_sign(local_44);
            iVar18 = *(int *)(iVar9 + 0x10);
            FID_conflict__Tidy(1,0);
            iVar9 = local_70;
            if (iVar18 != 0) {
              iVar9 = negative_sign(local_44);
              iVar18 = *(int *)(iVar9 + 0x10);
              FID_conflict__Tidy(1,0);
              iVar9 = local_70;
              if (iVar18 == 0) {
                local_65 = '\x01';
              }
            }
          }
          goto LAB_10189eac;
        }
        Inc();
        uVar14 = positive_sign(local_44);
        FID_conflict_operator_(uVar14);
        goto LAB_1018a145;
      }
    }
    else {
      if (cVar4 != 'v') {
        if (cVar4 == 'x') goto LAB_10189c96;
        goto LAB_10189eac;
      }
      local_88 = 0;
      pcVar2 = *(code **)(*local_6c + 0x24);
      guard_check_icall(pcVar19,pcVar20,uVar7);
      iVar9 = (*pcVar2)();
      piVar8 = local_6c;
      local_94 = iVar9;
      grouping(local_44);
      local_8._0_1_ = 10;
      if (local_34 == 0) {
LAB_10189f01:
        uVar14 = local_74;
        cVar4 = equal(local_74);
        while (cVar4 == '\0') {
          if (*(char *)(param_2 + 4) == '\0') {
            Peek();
          }
          uVar12 = _Find_elem<>(local_8c,*(undefined2 *)(param_2 + 6));
          iVar9 = local_94;
          if (9 < uVar12) break;
          local_a4 = CONCAT31(local_a4._1_3_,"0123456789-"[uVar12]);
          FUN_1000ac90(1,local_a4);
          Inc();
          cVar4 = equal(uVar14);
          iVar9 = local_94;
        }
LAB_10189f6b:
        pcVar2 = *(code **)(*local_6c + 0xc);
        guard_check_icall();
        sVar6 = (*pcVar2)();
        cVar4 = equal(local_74);
        iVar18 = local_88;
        if ((cVar4 == '\0') && (sVar6 != 0)) {
          if (*(char *)(param_2 + 4) == '\0') {
            Peek();
          }
          iVar18 = local_88;
          if (*(short *)(param_2 + 6) == sVar6) {
            Inc();
            cVar4 = equal(local_74);
            iVar18 = local_88;
            while (cVar4 == '\0') {
              if (iVar9 <= iVar18) goto LAB_1018a034;
              if (*(char *)(param_2 + 4) == '\0') {
                Peek();
              }
              uVar12 = _Find_elem<>(local_8c,*(undefined2 *)(param_2 + 6));
              if (9 < uVar12) break;
              local_a8 = CONCAT31(local_a8._1_3_,"0123456789-"[uVar12]);
              FUN_1000ac90(1,local_a8);
              iVar18 = iVar18 + 1;
              Inc();
              cVar4 = equal(local_74);
            }
            if (iVar18 < iVar9) {
              local_5d = '\x01';
            }
          }
        }
LAB_1018a034:
        if (local_7c[4] == 0) {
          local_5d = '\x01';
        }
        else if (iVar18 < iVar9) {
          iVar9 = iVar9 - iVar18;
          do {
            FUN_1000ac90(1,0x30);
            iVar9 = iVar9 + -1;
            param_2 = local_ac;
          } while (iVar9 != 0);
        }
      }
      else {
        pcVar2 = *(code **)(*piVar8 + 0x10);
        guard_check_icall();
        uVar5 = (*pcVar2)();
        local_a0 = (uint)uVar5;
        if (uVar5 == 0) goto LAB_10189f01;
        ppppbVar17 = (byte ****)local_44[0];
        if (local_30 < 0x10) {
          ppppbVar17 = local_44;
        }
        if (0x7e < *(byte *)ppppbVar17) goto LAB_10189f01;
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = (short ***)((uint)local_2c[0] & 0xffffff00);
        FUN_1000a990(1,0);
        local_8._0_1_ = 0xb;
        iVar9 = 0;
        cVar4 = equal(local_74);
        local_78 = local_2c[0];
        uVar12 = local_18;
        if (cVar4 == '\0') {
          do {
            if (*(char *)(param_2 + 4) == '\0') {
              Peek();
            }
            uVar10 = _Find_elem<>(local_8c,*(undefined2 *)(param_2 + 6));
            if (uVar10 < 10) {
              local_9c = CONCAT31(local_9c._1_3_,"0123456789-"[uVar10]);
              FUN_1000ac90(1,local_9c);
              ppppsVar11 = (short ****)local_78;
              if (uVar12 < 0x10) {
                ppppsVar11 = local_2c;
              }
              if (*(char *)((int)ppppsVar11 + iVar9) != '\x7f') {
                if (uVar12 < 0x10) {
                  local_78 = (short ***)local_2c;
                }
                *(char *)((int)local_78 + iVar9) = *(char *)((int)local_78 + iVar9) + '\x01';
                goto LAB_10189df0;
              }
            }
            else {
              ppppsVar11 = (short ****)local_78;
              if (uVar12 < 0x10) {
                ppppsVar11 = local_2c;
              }
              if (*(char *)((int)ppppsVar11 + iVar9) == '\0') break;
              if (*(char *)(param_2 + 4) == '\0') {
                Peek();
              }
              if (*(short *)(param_2 + 6) != (short)local_a0) break;
              FUN_1000ac90(1,0);
              iVar9 = iVar9 + 1;
LAB_10189df0:
              local_78 = local_2c[0];
              uVar12 = local_18;
            }
            Inc();
            cVar4 = equal(local_74);
          } while (cVar4 == '\0');
          if (iVar9 != 0) {
            ppppsVar11 = (short ****)local_78;
            if (uVar12 < 0x10) {
              ppppsVar11 = local_2c;
            }
            if (*(char *)((int)ppppsVar11 + iVar9) < '\x01') {
              local_5d = '\x01';
            }
            else {
              iVar9 = iVar9 + 1;
            }
          }
        }
        ppppbVar17 = (byte ****)local_44[0];
        if (local_30 < 0x10) {
          ppppbVar17 = local_44;
        }
        if (local_5d == '\0') {
          while ((iVar9 != 0 && (bVar1 = *(byte *)ppppbVar17, bVar1 != 0x7f))) {
            iVar9 = iVar9 + -1;
            if (iVar9 != 0) {
              ppppsVar11 = (short ****)local_78;
              if (uVar12 < 0x10) {
                ppppsVar11 = local_2c;
              }
              if (bVar1 == *(byte *)((int)ppppsVar11 + iVar9)) goto LAB_10189e63;
LAB_10189e86:
              local_5d = '\x01';
              goto LAB_10189e8a;
            }
LAB_10189e63:
            if (iVar9 == 0) {
              ppppsVar11 = (short ****)local_78;
              if (uVar12 < 0x10) {
                ppppsVar11 = local_2c;
              }
              if ((char)bVar1 < *(char *)ppppsVar11) goto LAB_10189e86;
            }
            if ('\0' < (char)*(byte *)((int)ppppbVar17 + 1)) {
              ppppbVar17 = (byte ****)((int)ppppbVar17 + 1);
            }
          }
          local_8._0_1_ = 10;
          FUN_1000a890(1,0);
          iVar9 = local_94;
          goto LAB_10189f6b;
        }
LAB_10189e8a:
        FUN_1000a890(1,0);
      }
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_1000a890(1,0);
      iVar9 = local_70;
    }
LAB_10189eac:
    local_84 = local_84 + 1;
  } while (local_5d == '\0');
  if (local_5d == '\0') {
    if (1 < local_4c) {
      psVar15 = local_5c;
      psVar13 = local_5c;
      if (7 < local_48) goto LAB_1018a3f0;
      psVar13 = (short *)&local_5c;
      while( true ) {
        psVar15 = local_5c;
        if (local_48 < 8) {
          psVar15 = (short *)&local_5c;
        }
LAB_1018a3f0:
        psVar13 = psVar13 + 1;
        if ((psVar13 == psVar15 + local_4c) || (cVar4 = equal(local_74), cVar4 != '\0')) break;
        if (*(char *)(param_2 + 4) == '\0') {
          Peek();
        }
        if (*(short *)(param_2 + 6) != *psVar13) break;
        Inc();
      }
      psVar15 = local_5c;
      if (local_48 < 8) {
        psVar15 = (short *)&local_5c;
      }
      if (psVar13 != psVar15 + local_4c) goto LAB_1018a461;
    }
    if (local_65 != '\0') {
      FUN_100118a0(0,1,0x2d);
    }
  }
  else {
LAB_1018a461:
    FUN_1000b830(0);
  }
  FID_conflict__Tidy(1,0);
  FUN_1018015d();
  return;
}

