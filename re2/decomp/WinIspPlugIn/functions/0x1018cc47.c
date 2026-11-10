// rea decompile_all
// name: Putmfld
// address: 0x1018cc47
// body: available
// range: 0x1018cc47-0x1018d1cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    private: class std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >
   __thiscall std::money_put<unsigned short,class std::ostreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > >::_Putmfld(class std::ostreambuf_iterator<unsigned
   short,struct std::char_traits<unsigned short> >,bool,class std::ios_base &,unsigned
   short,bool,class std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> >,unsigned short)const 
    private: class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > __thiscall
   std::money_put<wchar_t,class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >
   >::_Putmfld(class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >,bool,class
   std::ios_base &,wchar_t,bool,class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >,wchar_t)const 
   
   Library: Visual Studio 2015 Release */

void Putmfld(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4,int param_5,
            ushort param_6,char param_7,undefined4 *param_8)

{
  char cVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  char ****ppppcVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  char cVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  uint in_stack_00000030;
  uint in_stack_00000034;
  ushort in_stack_00000038;
  undefined1 local_f4 [8];
  undefined1 local_ec [8];
  undefined1 local_e4 [8];
  undefined1 local_dc [8];
  undefined1 local_d4 [8];
  undefined1 local_cc [8];
  undefined1 local_c4 [8];
  undefined1 local_bc [8];
  undefined1 local_b4 [8];
  undefined1 local_ac [8];
  undefined1 local_a4 [8];
  undefined4 local_9c;
  uint local_98;
  int local_94;
  uint local_90;
  undefined1 local_8c [4];
  uint local_88;
  uint local_84;
  uint local_80;
  int *local_7c;
  char local_75;
  undefined1 local_74 [24];
  char ***local_5c [5];
  uint local_48;
  undefined4 local_44;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  uint local_1c;
  uint local_18;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xe4;
  local_84 = (uint)param_6;
  local_90 = (uint)in_stack_00000038;
  local_9c = param_1;
  local_94 = param_5;
  local_8 = 0;
  if (param_4 == '\0') {
    uVar4 = FUN_100072b0(local_ac);
    local_8 = CONCAT31(local_8._1_3_,2);
    piVar5 = (int *)use_facet<>(uVar4);
  }
  else {
    uVar4 = FUN_100072b0(local_a4);
    local_8 = CONCAT31(local_8._1_3_,1);
    piVar5 = (int *)use_facet<>(uVar4);
  }
  local_8 = local_8 & 0xffffff00;
  local_7c = piVar5;
  FUN_10006a30();
  grouping(local_5c);
  local_8 = CONCAT31(local_8._1_3_,3);
  pcVar2 = *(code **)(*piVar5 + 0x24);
  guard_check_icall();
  uVar6 = (*pcVar2)();
  uVar6 = (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f);
  local_80 = uVar6;
  if (uVar6 < in_stack_00000030) {
    ppppcVar7 = (char ****)local_5c[0];
    if (local_48 < 0x10) {
      ppppcVar7 = local_5c;
    }
    if (*(char *)ppppcVar7 != '\x7f') {
      ppppcVar7 = (char ****)local_5c[0];
      if (local_48 < 0x10) {
        ppppcVar7 = local_5c;
      }
      if ('\0' < *(char *)ppppcVar7) {
        pcVar2 = *(code **)(*piVar5 + 0x10);
        guard_check_icall();
        uVar11 = (*pcVar2)();
        if (local_48 < 0x10) {
          local_5c[0] = (char ***)local_5c;
        }
        uVar14 = in_stack_00000030 - uVar6;
        cVar12 = *(char *)local_5c[0];
        local_88 = uVar11 & 0xffff;
        ppppcVar7 = (char ****)local_5c[0];
        piVar5 = local_7c;
        uVar4 = local_44;
        uVar13 = local_2c;
        while (local_7c = piVar5, cVar12 != '\x7f') {
          local_44._2_2_ = (ushort)((uint)uVar4 >> 0x10);
          local_2c._2_2_ = (ushort)((uint)uVar13 >> 0x10);
          uVar6 = local_80;
          if ((cVar12 < '\x01') || (uVar14 <= (uint)(int)cVar12)) break;
          uVar14 = uVar14 - (int)cVar12;
          local_44 = (undefined4 *)uVar4;
          local_2c = (undefined4 *)uVar13;
          FUN_10191bda(uVar14,1,uVar11 & 0xffff);
          if ('\0' < *(char *)((int)ppppcVar7 + 1)) {
            ppppcVar7 = (char ****)((int)ppppcVar7 + 1);
          }
          uVar6 = local_80;
          piVar5 = local_7c;
          uVar4 = local_44;
          uVar13 = local_2c;
          cVar12 = *(char *)ppppcVar7;
        }
      }
    }
  }
  else {
    FUN_10191bda(0,(uVar6 - in_stack_00000030) + 1,local_90);
  }
  local_1c = 0;
  local_18 = 7;
  local_2c = (undefined4 *)((uint)local_2c._2_2_ << 0x10);
  local_8 = CONCAT31(local_8._1_3_,4);
  if (param_7 == '\0') {
    pcVar2 = *(code **)(*piVar5 + 0x28);
    guard_check_icall(&local_88);
    (*pcVar2)();
    local_80 = local_88;
    uVar4 = positive_sign(local_74);
  }
  else {
    pcVar2 = *(code **)(*piVar5 + 0x2c);
    guard_check_icall(&local_88);
    (*pcVar2)();
    local_80 = local_88;
    uVar4 = negative_sign(local_74);
  }
  FUN_10043b50(uVar4);
  FUN_1000a760(1,0);
  local_34 = 0;
  local_30 = 7;
  local_44 = (undefined4 *)((uint)local_44._2_2_ << 0x10);
  local_8 = CONCAT31(local_8._1_3_,5);
  if ((*(byte *)(local_94 + 0x14) & 8) != 0) {
    uVar4 = curr_symbol(local_74);
    FUN_10043b50(uVar4);
    FUN_1000a760(1,0);
  }
  cVar12 = '\0';
  uVar11 = 0;
  local_75 = '\0';
  uVar14 = 0;
  do {
    cVar1 = *(char *)((int)&local_80 + uVar14);
    if (cVar1 == ' ') {
      uVar11 = uVar11 + 1;
LAB_1018cebd:
      if (uVar14 != 3) {
        local_75 = '\x01';
        cVar12 = '\x01';
      }
    }
    else if (cVar1 == '$') {
      uVar11 = uVar11 + local_34;
    }
    else if (cVar1 == '+') {
      uVar11 = uVar11 + local_1c;
    }
    else if (cVar1 == 'v') {
      if (uVar6 < in_stack_00000030) {
        iVar15 = 0;
      }
      else {
        iVar15 = (uVar6 - in_stack_00000030) + 1;
      }
      uVar11 = uVar11 + (uVar6 != 0) + in_stack_00000030 + iVar15;
      cVar12 = local_75;
    }
    else if (cVar1 == 'x') goto LAB_1018cebd;
    uVar14 = uVar14 + 1;
  } while (uVar14 < 4);
  if ((*(int *)(local_94 + 0x24) < 0) ||
     (((*(int *)(local_94 + 0x24) < 1 && (*(int *)(local_94 + 0x20) == 0)) ||
      (*(uint *)(local_94 + 0x20) <= uVar11)))) {
    iVar15 = 0;
  }
  else {
    iVar15 = *(uint *)(local_94 + 0x20) - uVar11;
  }
  local_98 = *(uint *)(local_94 + 0x14) & 0x1c0;
  if ((local_98 != 0x40) && ((local_98 != 0x100 || (cVar12 == '\0')))) {
    puVar8 = (undefined4 *)Rep(local_8c,param_2,param_3,local_84,iVar15);
    iVar15 = 0;
    param_2 = *puVar8;
    param_3 = puVar8[1];
  }
  local_88 = 0;
  uVar13 = param_2;
  uVar4 = param_3;
  do {
    cVar12 = *(char *)((int)&local_80 + local_88);
    if (cVar12 == ' ') {
      puVar8 = (undefined4 *)Rep(local_f4,uVar13,uVar4,local_84,1);
      uVar13 = *puVar8;
      uVar4 = puVar8[1];
      param_2 = uVar13;
      param_3 = uVar4;
LAB_1018d0fc:
      if (local_98 != 0x100) goto LAB_1018d12a;
      puVar8 = (undefined4 *)Rep(local_b4,uVar13,uVar4,local_84,iVar15);
      iVar15 = 0;
LAB_1018d11f:
      uVar13 = *puVar8;
      uVar4 = puVar8[1];
      param_2 = uVar13;
      param_3 = uVar4;
    }
    else {
      if (cVar12 == '$') {
        puVar8 = local_44;
        if (local_30 < 8) {
          puVar8 = &local_44;
        }
        puVar9 = local_ec;
        uVar11 = local_34;
LAB_1018cf92:
        puVar8 = (undefined4 *)Put(puVar9,uVar13,uVar4,puVar8,uVar11);
        goto LAB_1018d11f;
      }
      if (cVar12 == '+') {
        if (local_1c != 0) {
          puVar8 = local_2c;
          if (local_18 < 8) {
            puVar8 = &local_2c;
          }
          uVar11 = 1;
          puVar9 = local_e4;
          goto LAB_1018cf92;
        }
      }
      else {
        if (cVar12 == 'v') {
          if (uVar6 == 0) {
            puVar8 = param_8;
            if (in_stack_00000034 < 8) {
              puVar8 = &param_8;
            }
            puVar9 = local_bc;
            uVar11 = in_stack_00000030;
          }
          else if (uVar6 < in_stack_00000030) {
            puVar8 = param_8;
            if (in_stack_00000034 < 8) {
              puVar8 = &param_8;
            }
            puVar8 = (undefined4 *)Put(local_d4,uVar13,uVar4,puVar8,in_stack_00000030 - uVar6);
            uVar13 = *puVar8;
            uVar4 = puVar8[1];
            pcVar2 = *(code **)(*local_7c + 0xc);
            guard_check_icall();
            uVar3 = (*pcVar2)();
            FID_conflict_operator_(uVar3);
            puVar8 = param_8;
            if (in_stack_00000034 < 8) {
              puVar8 = &param_8;
            }
            puVar8 = (undefined4 *)((int)puVar8 + uVar6 * -2 + in_stack_00000030 * 2);
            puVar9 = local_dc;
            uVar11 = uVar6;
          }
          else {
            FID_conflict_operator_(local_90);
            pcVar2 = *(code **)(*local_7c + 0xc);
            guard_check_icall();
            uVar3 = (*pcVar2)();
            FID_conflict_operator_(uVar3);
            puVar10 = (undefined4 *)Rep(local_c4,param_2,param_3,local_90,uVar6 - in_stack_00000030)
            ;
            puVar8 = param_8;
            if (in_stack_00000034 < 8) {
              puVar8 = &param_8;
            }
            puVar9 = local_cc;
            uVar4 = puVar10[1];
            uVar13 = *puVar10;
            uVar11 = in_stack_00000030;
          }
          goto LAB_1018cf92;
        }
        if (cVar12 == 'x') goto LAB_1018d0fc;
      }
    }
LAB_1018d12a:
    local_88 = local_88 + 1;
    if (3 < local_88) {
      if (1 < local_1c) {
        puVar8 = local_2c;
        if (local_18 < 8) {
          puVar8 = &local_2c;
        }
        puVar8 = (undefined4 *)Put(local_b4,uVar13,uVar4,(int)puVar8 + 2,local_1c - 1);
        uVar13 = *puVar8;
        uVar4 = puVar8[1];
      }
      *(undefined4 *)(local_94 + 0x20) = 0;
      *(undefined4 *)(local_94 + 0x24) = 0;
      Rep(local_9c,uVar13,uVar4,local_84,iVar15);
      FUN_1000a760(1,0);
      FUN_1000a760(1,0);
      FUN_1000a890(1,0);
      FUN_1000a760(1,0);
      FUN_1018015d();
      return;
    }
  } while( true );
}

