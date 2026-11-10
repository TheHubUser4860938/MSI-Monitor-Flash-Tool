// rea decompile_all
// name: std::money_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Putmfld
// address: 0x10193ba2
// body: available
// range: 0x10193ba2-0x10194118 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  locale *plVar4;
  moneypunct<char,1> *pmVar5;
  uint uVar6;
  char ****ppppcVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined4 ****ppppuVar11;
  uint uVar12;
  char cVar13;
  undefined4 uVar14;
  uint uVar15;
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
  undefined4 local_a4;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
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
    plVar4 = (locale *)FUN_100072b0(local_b8);
    local_8 = CONCAT31(local_8._1_3_,2);
    pmVar5 = (moneypunct<char,1> *)use_facet<std::moneypunct<char,0>_>(plVar4);
  }
  else {
    plVar4 = (locale *)FUN_100072b0(local_b0);
    local_8 = CONCAT31(local_8._1_3_,1);
    pmVar5 = use_facet<std::moneypunct<char,1>_>(plVar4);
  }
  local_8 = local_8 & 0xffffff00;
  FUN_10006a30();
  grouping(local_5c);
  local_8 = CONCAT31(local_8._1_3_,3);
  pcVar2 = *(code **)(*(int *)pmVar5 + 0x24);
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
        pcVar2 = *(code **)(*(int *)pmVar5 + 0x10);
        guard_check_icall();
        uVar3 = (*pcVar2)();
        local_7c = CONCAT31(local_7c._1_3_,uVar3);
        if (local_48 < 0x10) {
          local_5c[0] = (char ***)local_5c;
        }
        uVar12 = in_stack_00000030 - local_80;
        ppppcVar7 = (char ****)local_5c[0];
        while (((cVar13 = *(char *)ppppcVar7, uVar6 = local_80, cVar13 != '\x7f' && ('\0' < cVar13))
               && ((uint)(int)cVar13 < uVar12))) {
          uVar12 = uVar12 - (int)cVar13;
          FUN_100118a0(uVar12,1,local_7c);
          if ('\0' < *(char *)((int)ppppcVar7 + 1)) {
            ppppcVar7 = (char ****)((int)ppppcVar7 + 1);
          }
        }
      }
    }
  }
  else {
    FUN_100118a0(0,(uVar6 - in_stack_00000030) + 1,local_8c);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  local_8 = CONCAT31(local_8._1_3_,4);
  if (param_8 == '\0') {
    pcVar2 = *(code **)(*(int *)pmVar5 + 0x28);
    guard_check_icall(&local_7c);
    (*pcVar2)();
    local_88 = local_7c;
    uVar8 = positive_sign(local_74);
  }
  else {
    pcVar2 = *(code **)(*(int *)pmVar5 + 0x2c);
    guard_check_icall(&local_7c);
    (*pcVar2)();
    local_88 = local_7c;
    uVar8 = negative_sign(local_74);
  }
  FUN_1000d1e0(uVar8);
  FUN_1000a890(1,0);
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (undefined4 ***)((uint)local_44[0] & 0xffffff00);
  local_8 = CONCAT31(local_8._1_3_,5);
  if ((*(byte *)(local_90 + 0x14) & 8) != 0) {
    uVar8 = curr_symbol(local_74);
    FUN_1000d1e0(uVar8);
    FUN_1000a890(1,0);
  }
  cVar13 = '\0';
  uVar12 = 0;
  local_75 = '\0';
  uVar15 = 0;
  do {
    cVar1 = *(char *)((int)&local_88 + uVar15);
    if (cVar1 == ' ') {
      uVar12 = uVar12 + 1;
LAB_10193df4:
      if (uVar15 != 3) {
        local_75 = '\x01';
        cVar13 = '\x01';
      }
    }
    else if (cVar1 == '$') {
      uVar12 = uVar12 + local_34;
    }
    else if (cVar1 == '+') {
      uVar12 = uVar12 + local_1c;
    }
    else if (cVar1 == 'v') {
      if (uVar6 < in_stack_00000030) {
        iVar16 = 0;
      }
      else {
        iVar16 = (uVar6 - in_stack_00000030) + 1;
      }
      uVar12 = uVar12 + (uVar6 != 0) + in_stack_00000030 + iVar16;
      cVar13 = local_75;
    }
    else if (cVar1 == 'x') goto LAB_10193df4;
    uVar15 = uVar15 + 1;
  } while (uVar15 < 4);
  if (((*(int *)(local_90 + 0x24) < 0) ||
      ((*(int *)(local_90 + 0x24) < 1 && (*(int *)(local_90 + 0x20) == 0)))) ||
     (*(uint *)(local_90 + 0x20) <= uVar12)) {
    iVar16 = 0;
  }
  else {
    iVar16 = *(uint *)(local_90 + 0x20) - uVar12;
  }
  local_9c = *(uint *)(local_90 + 0x14) & 0x1c0;
  if ((local_9c != 0x40) && ((local_9c != 0x100 || (cVar13 == '\0')))) {
    puVar9 = (undefined4 *)_Rep(local_a8,param_3,param_4,local_84,iVar16);
    iVar16 = 0;
    param_3 = *puVar9;
    param_4 = puVar9[1];
  }
  local_7c = 0;
  uVar14 = param_3;
  uVar8 = param_4;
  do {
    cVar13 = *(char *)((int)&local_88 + local_7c);
    if (cVar13 == ' ') {
      puVar9 = (undefined4 *)_Rep(local_100,uVar14,uVar8,local_84,1);
      uVar14 = *puVar9;
      uVar8 = puVar9[1];
      param_3 = uVar14;
      param_4 = uVar8;
LAB_1019404d:
      if (local_9c != 0x100) goto LAB_1019407b;
      puVar9 = (undefined4 *)_Rep(local_c0,uVar14,uVar8,local_84,iVar16);
      iVar16 = 0;
LAB_10194070:
      uVar14 = *puVar9;
      uVar8 = puVar9[1];
      param_3 = uVar14;
      param_4 = uVar8;
    }
    else {
      if (cVar13 == '$') {
        ppppuVar11 = (undefined4 ****)local_44[0];
        if (local_30 < 0x10) {
          ppppuVar11 = local_44;
        }
        puVar10 = local_f8;
        uVar6 = local_34;
LAB_10193ecc:
        puVar9 = (undefined4 *)_Put(puVar10,uVar14,uVar8,ppppuVar11,uVar6);
        goto LAB_10194070;
      }
      if (cVar13 == '+') {
        if (local_1c != 0) {
          ppppuVar11 = (undefined4 ****)local_2c[0];
          if (local_18 < 0x10) {
            ppppuVar11 = local_2c;
          }
          uVar6 = 1;
          puVar10 = local_f0;
          goto LAB_10193ecc;
        }
      }
      else {
        if (cVar13 == 'v') {
          if (local_80 == 0) {
            ppppuVar11 = param_9;
            if (in_stack_00000034 < 0x10) {
              ppppuVar11 = &param_9;
            }
            puVar10 = local_c8;
            uVar6 = in_stack_00000030;
          }
          else if (local_80 < in_stack_00000030) {
            local_94 = param_9;
            if (in_stack_00000034 < 0x10) {
              local_94 = &param_9;
            }
            puVar9 = (undefined4 *)_Put(local_e0,uVar14,uVar8,local_94,in_stack_00000030 - local_80)
            ;
            uVar14 = *puVar9;
            uVar8 = puVar9[1];
            pcVar2 = *(code **)(*(int *)pmVar5 + 0xc);
            guard_check_icall();
            uVar3 = (*pcVar2)();
            local_a4 = CONCAT31(local_a4._1_3_,uVar3);
            FUN_10011850(local_a4);
            ppppuVar11 = param_9;
            if (in_stack_00000034 < 0x10) {
              ppppuVar11 = &param_9;
            }
            ppppuVar11 = (undefined4 ****)((int)ppppuVar11 + (in_stack_00000030 - local_80));
            puVar10 = local_e8;
            uVar6 = local_80;
          }
          else {
            FUN_10011850(local_8c);
            pcVar2 = *(code **)(*(int *)pmVar5 + 0xc);
            guard_check_icall();
            uVar3 = (*pcVar2)();
            local_98 = CONCAT31(local_98._1_3_,uVar3);
            FUN_10011850(local_98);
            puVar9 = (undefined4 *)
                     _Rep(local_d0,param_3,param_4,local_8c,local_80 - in_stack_00000030);
            ppppuVar11 = param_9;
            if (in_stack_00000034 < 0x10) {
              ppppuVar11 = &param_9;
            }
            puVar10 = local_d8;
            uVar8 = puVar9[1];
            uVar14 = *puVar9;
            uVar6 = in_stack_00000030;
          }
          goto LAB_10193ecc;
        }
        if (cVar13 == 'x') goto LAB_1019404d;
      }
    }
LAB_1019407b:
    local_7c = local_7c + 1;
    if (3 < local_7c) {
      if (1 < local_1c) {
        ppppuVar11 = (undefined4 ****)local_2c[0];
        if (local_18 < 0x10) {
          ppppuVar11 = local_2c;
        }
        puVar9 = (undefined4 *)_Put(local_c0,uVar14,uVar8,(int)ppppuVar11 + 1,local_1c - 1);
        uVar14 = *puVar9;
        uVar8 = puVar9[1];
      }
      *(undefined4 *)(local_90 + 0x20) = 0;
      *(undefined4 *)(local_90 + 0x24) = 0;
      _Rep(local_a0,uVar14,uVar8,local_84,iVar16);
      FUN_1000a890(1,0);
      FUN_1000a890(1,0);
      FUN_1000a890(1,0);
      FUN_1000a890(1,0);
      FUN_1018015d();
      return;
    }
  } while( true );
}

