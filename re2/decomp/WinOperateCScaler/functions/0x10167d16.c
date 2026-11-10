// rea decompile_all
// name: std::money_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Putmfld
// address: 0x10167d16
// body: available
// range: 0x10167d16-0x1016828c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    private: class std::ostreambuf_iterator<char,struct std::char_traits<char> > __thiscall
   std::money_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> >
   >::_Putmfld(class std::ostreambuf_iterator<char,struct std::char_traits<char> >,bool,class
   std::ios_base &,char,bool,class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >,char)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall
std::money_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Putmfld
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char param_5,
          int param_6,undefined1 param_7,char param_8,undefined4 ****param_9)

{
  char cVar1;
  code *pcVar2;
  undefined1 uVar3;
  char cVar4;
  locale *plVar5;
  moneypunct<char,1> *pmVar6;
  uint uVar7;
  char ****ppppcVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined4 ****ppppuVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  uint in_stack_00000030;
  uint in_stack_00000034;
  undefined1 in_stack_00000038;
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [4];
  char local_a4;
  undefined3 uStack_a3;
  undefined4 local_a0;
  uint local_9c;
  char local_98;
  undefined3 uStack_97;
  undefined4 ***local_94;
  int local_90;
  undefined4 local_8c;
  uint local_88;
  undefined4 local_84;
  uint local_80;
  uint local_7c;
  char local_75;
  undefined1 local_74 [24];
  char ***local_5c [5];
  uint local_48;
  undefined4 ***local_44 [4];
  uint local_34;
  uint local_30;
  undefined4 ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xf0;
  local_a0 = param_2;
  local_84 = CONCAT31(local_84._1_3_,param_7);
  local_90 = param_6;
  local_8c = CONCAT31(local_8c._1_3_,in_stack_00000038);
  local_8 = 0;
  if (param_5 == '\0') {
    plVar5 = (locale *)FUN_100103a0(local_b8);
    local_8 = CONCAT31(local_8._1_3_,2);
    pmVar6 = (moneypunct<char,1> *)use_facet<std::moneypunct<char,0>_>(plVar5);
  }
  else {
    plVar5 = (locale *)FUN_100103a0(local_b0);
    local_8 = CONCAT31(local_8._1_3_,1);
    pmVar6 = use_facet<std::moneypunct<char,1>_>(plVar5);
  }
  local_8 = local_8 & 0xffffff00;
  FUN_10007650();
  grouping(local_5c);
  local_8 = CONCAT31(local_8._1_3_,3);
  pcVar2 = *(code **)(*(int *)pmVar6 + 0x24);
  guard_check_icall();
  uVar7 = (*pcVar2)();
  uVar7 = (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f);
  local_80 = uVar7;
  if (uVar7 < in_stack_00000030) {
    ppppcVar8 = (char ****)local_5c[0];
    if (local_48 < 0x10) {
      ppppcVar8 = local_5c;
    }
    if (*(char *)ppppcVar8 != '\x7f') {
      ppppcVar8 = (char ****)local_5c[0];
      if (local_48 < 0x10) {
        ppppcVar8 = local_5c;
      }
      if ('\0' < *(char *)ppppcVar8) {
        pcVar2 = *(code **)(*(int *)pmVar6 + 0x10);
        guard_check_icall();
        uVar3 = (*pcVar2)();
        local_7c = CONCAT31(local_7c._1_3_,uVar3);
        if (local_48 < 0x10) {
          local_5c[0] = (char ***)local_5c;
        }
        uVar13 = in_stack_00000030 - local_80;
        ppppcVar8 = (char ****)local_5c[0];
        while (((cVar4 = *(char *)ppppcVar8, uVar7 = local_80, cVar4 != '\x7f' && ('\0' < cVar4)) &&
               ((uint)(int)cVar4 < uVar13))) {
          uVar13 = uVar13 - (int)cVar4;
          FUN_1001b780(uVar13,1,local_7c);
          if ('\0' < *(char *)((int)ppppcVar8 + 1)) {
            ppppcVar8 = (char ****)((int)ppppcVar8 + 1);
          }
        }
      }
    }
  }
  else {
    FUN_1001b780(0,(uVar7 - in_stack_00000030) + 1,local_8c);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  local_8 = CONCAT31(local_8._1_3_,4);
  if (param_8 == '\0') {
    pcVar2 = *(code **)(*(int *)pmVar6 + 0x28);
    guard_check_icall(&local_7c);
    (*pcVar2)();
    local_88 = local_7c;
    uVar9 = positive_sign(local_74);
  }
  else {
    pcVar2 = *(code **)(*(int *)pmVar6 + 0x2c);
    guard_check_icall(&local_7c);
    (*pcVar2)();
    local_88 = local_7c;
    uVar9 = negative_sign(local_74);
  }
  FUN_10001e80(uVar9);
  FUN_10003850(1,0);
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (undefined4 ***)((uint)local_44[0] & 0xffffff00);
  local_8 = CONCAT31(local_8._1_3_,5);
  if ((*(byte *)(local_90 + 0x14) & 8) != 0) {
    uVar9 = curr_symbol(local_74);
    FUN_10001e80(uVar9);
    FUN_10003850(1,0);
  }
  cVar4 = '\0';
  uVar13 = 0;
  local_75 = '\0';
  uVar14 = 0;
  do {
    cVar1 = *(char *)((int)&local_88 + uVar14);
    if (cVar1 == ' ') {
      uVar13 = uVar13 + 1;
LAB_10167f68:
      if (uVar14 != 3) {
        local_75 = '\x01';
        cVar4 = '\x01';
      }
    }
    else if (cVar1 == '$') {
      uVar13 = uVar13 + local_34;
    }
    else if (cVar1 == '+') {
      uVar13 = uVar13 + local_1c;
    }
    else if (cVar1 == 'v') {
      if (uVar7 < in_stack_00000030) {
        iVar16 = 0;
      }
      else {
        iVar16 = (uVar7 - in_stack_00000030) + 1;
      }
      uVar13 = uVar13 + (uVar7 != 0) + in_stack_00000030 + iVar16;
      cVar4 = local_75;
    }
    else if (cVar1 == 'x') goto LAB_10167f68;
    uVar14 = uVar14 + 1;
  } while (uVar14 < 4);
  if (((*(int *)(local_90 + 0x24) < 0) ||
      ((*(int *)(local_90 + 0x24) < 1 && (*(int *)(local_90 + 0x20) == 0)))) ||
     (*(uint *)(local_90 + 0x20) <= uVar13)) {
    iVar16 = 0;
  }
  else {
    iVar16 = *(uint *)(local_90 + 0x20) - uVar13;
  }
  local_9c = *(uint *)(local_90 + 0x14) & 0x1c0;
  if ((local_9c != 0x40) && ((local_9c != 0x100 || (cVar4 == '\0')))) {
    puVar10 = (undefined4 *)_Rep(local_a8,param_3,param_4,local_84,iVar16);
    iVar16 = 0;
    param_3 = *puVar10;
    param_4 = puVar10[1];
  }
  local_7c = 0;
  uVar9 = param_3;
  uVar15 = param_4;
  do {
    cVar4 = *(char *)((int)&local_88 + local_7c);
    if (cVar4 == ' ') {
      puVar10 = (undefined4 *)_Rep(local_100,uVar9,uVar15,local_84,1);
      uVar9 = *puVar10;
      uVar15 = puVar10[1];
      param_3 = uVar9;
      param_4 = uVar15;
LAB_101681c1:
      if (local_9c != 0x100) goto LAB_101681ef;
      puVar10 = (undefined4 *)_Rep(local_c0,uVar9,uVar15,local_84,iVar16);
      iVar16 = 0;
LAB_101681e4:
      uVar9 = *puVar10;
      uVar15 = puVar10[1];
      param_3 = uVar9;
      param_4 = uVar15;
    }
    else {
      if (cVar4 == '$') {
        ppppuVar12 = (undefined4 ****)local_44[0];
        if (local_30 < 0x10) {
          ppppuVar12 = local_44;
        }
        puVar11 = local_f8;
        uVar7 = local_34;
LAB_10168040:
        puVar10 = (undefined4 *)_Put(puVar11,uVar9,uVar15,ppppuVar12,uVar7);
        goto LAB_101681e4;
      }
      if (cVar4 == '+') {
        if (local_1c != 0) {
          ppppuVar12 = (undefined4 ****)local_2c[0];
          if (local_18 < 0x10) {
            ppppuVar12 = local_2c;
          }
          uVar7 = 1;
          puVar11 = local_f0;
          goto LAB_10168040;
        }
      }
      else {
        if (cVar4 == 'v') {
          if (local_80 == 0) {
            ppppuVar12 = param_9;
            if (in_stack_00000034 < 0x10) {
              ppppuVar12 = &param_9;
            }
            puVar11 = local_c8;
            uVar7 = in_stack_00000030;
          }
          else if (local_80 < in_stack_00000030) {
            local_94 = param_9;
            if (in_stack_00000034 < 0x10) {
              local_94 = &param_9;
            }
            puVar10 = (undefined4 *)
                      _Put(local_e0,uVar9,uVar15,local_94,in_stack_00000030 - local_80);
            param_3 = *puVar10;
            param_4 = puVar10[1];
            pcVar2 = *(code **)(*(int *)pmVar6 + 0xc);
            guard_check_icall();
            cVar4 = (*pcVar2)();
            _local_a4 = CONCAT31(uStack_a3,cVar4);
            ostreambuf_iterator<char,std::char_traits<char>_>::operator=
                      ((ostreambuf_iterator<char,std::char_traits<char>_> *)&param_3,cVar4);
            ppppuVar12 = param_9;
            if (in_stack_00000034 < 0x10) {
              ppppuVar12 = &param_9;
            }
            ppppuVar12 = (undefined4 ****)((int)ppppuVar12 + (in_stack_00000030 - local_80));
            puVar11 = local_e8;
            uVar9 = param_3;
            uVar15 = param_4;
            uVar7 = local_80;
          }
          else {
            ostreambuf_iterator<char,std::char_traits<char>_>::operator=
                      ((ostreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(char)local_8c)
            ;
            pcVar2 = *(code **)(*(int *)pmVar6 + 0xc);
            guard_check_icall();
            cVar4 = (*pcVar2)();
            _local_98 = CONCAT31(uStack_97,cVar4);
            ostreambuf_iterator<char,std::char_traits<char>_>::operator=
                      ((ostreambuf_iterator<char,std::char_traits<char>_> *)&param_3,cVar4);
            puVar10 = (undefined4 *)
                      _Rep(local_d0,param_3,param_4,local_8c,local_80 - in_stack_00000030);
            param_3 = *puVar10;
            param_4 = puVar10[1];
            ppppuVar12 = param_9;
            if (in_stack_00000034 < 0x10) {
              ppppuVar12 = &param_9;
            }
            puVar11 = local_d8;
            uVar9 = *puVar10;
            uVar15 = puVar10[1];
            uVar7 = in_stack_00000030;
          }
          goto LAB_10168040;
        }
        if (cVar4 == 'x') goto LAB_101681c1;
      }
    }
LAB_101681ef:
    local_7c = local_7c + 1;
    if (3 < local_7c) {
      if (1 < local_1c) {
        ppppuVar12 = (undefined4 ****)local_2c[0];
        if (local_18 < 0x10) {
          ppppuVar12 = local_2c;
        }
        puVar10 = (undefined4 *)_Put(local_c0,uVar9,uVar15,(int)ppppuVar12 + 1,local_1c - 1);
        uVar9 = *puVar10;
        uVar15 = puVar10[1];
        param_3 = uVar9;
        param_4 = uVar15;
      }
      *(undefined4 *)(local_90 + 0x20) = 0;
      *(undefined4 *)(local_90 + 0x24) = 0;
      _Rep(local_a0,uVar9,uVar15,local_84,iVar16);
      FUN_10003850(1,0);
      FUN_10003850(1,0);
      FUN_10003850(1,0);
      FUN_10003850(1,0);
      FUN_10154478();
      return;
    }
  } while( true );
}

