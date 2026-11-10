// rea decompile_all
// name: FUN_1000df70
// address: 0x1000df70
// body: available
// range: 0x1000df70-0x1000e2a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000df70(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_ECX;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int *in_stack_00000038;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_364 [20];
  int aiStack_350 [15];
  int aiStack_314 [9];
  int local_2f0;
  undefined **local_2dc [19];
  undefined1 local_290 [4];
  int local_28c;
  int *local_288;
  int local_284;
  int *local_280;
  undefined1 local_14c [260];
  undefined1 local_48 [52];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c134d;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_280 = in_stack_00000038;
  local_8 = 0;
  local_284 = 1;
  FUN_1000d890(local_14);
  local_8._0_1_ = 2;
  uVar7 = 0x1000dfd9;
  FUN_1000d7d0(*(undefined4 *)(*in_stack_00000038 + 4));
  *(int *)(*in_stack_00000038 + 4) = *in_stack_00000038;
  *(int *)*in_stack_00000038 = *in_stack_00000038;
  local_8._0_1_ = 1;
  *(int *)(*in_stack_00000038 + 8) = *in_stack_00000038;
  in_stack_00000038[1] = 0;
  uVar8 = 0x1000dffa;
  uVar1 = FUN_100486d0();
  FUN_1000d0a0(uVar1,0x21,uVar7,uVar8);
  local_8._0_1_ = 3;
  if (local_2f0 != 0) {
    FUN_10009c90(0,0,2);
    piVar2 = (int *)FUN_10009bb0(local_364);
    uVar6 = piVar2[2] + *piVar2;
    if (uVar6 == 0) {
      iVar3 = FUN_1000b310();
      if (iVar3 == 0) {
        uVar6 = *(uint *)((int)aiStack_350 + *(int *)(aiStack_350[1] + 4) + 0x10);
        uVar5 = uVar6 | 6;
        if (*(int *)((int)aiStack_314 + *(int *)(aiStack_350[1] + 4)) != 0) {
          uVar5 = uVar6 | 2;
        }
        FUN_100071e0(uVar5,0);
      }
    }
    else {
      piVar2 = (int *)FUN_100491e5(uVar6);
      local_288 = piVar2;
      _memset(piVar2,0,uVar6);
      FUN_10009c90(0,0,0);
      FUN_10009ec0(piVar2,uVar6,0);
      iVar3 = *piVar2;
      *(int *)(local_28c + 4) = iVar3;
      if (iVar3 == 0x7020509) {
        uVar5 = 8;
        *(short *)(local_28c + 8) = (short)piVar2[1];
        piVar4 = piVar2 + 2;
        *(undefined2 *)(local_28c + 10) = *(undefined2 *)((int)piVar2 + 6);
        do {
          iVar3 = FUN_1000dc20(piVar4,local_14c);
          uVar5 = uVar5 + iVar3;
          if (uVar5 == uVar6) {
            local_284 = 0;
          }
          else if (uVar6 < uVar5) break;
          piVar4 = (int *)((int)piVar4 + iVar3);
          FUN_1000da90(local_48);
          local_8._0_1_ = 4;
          uVar1 = FUN_10011ab0(local_14c);
          local_8._0_1_ = 5;
          iVar3 = FUN_10012a20(uVar1);
          FUN_10012ab0(local_290,extraout_ECX,iVar3 + 0x10,iVar3);
          FUN_10048130();
          FUN_10048130();
          FUN_10048130();
          FUN_10048130();
          FUN_10048130();
          local_8._0_1_ = 3;
          FUN_10048130();
        } while (local_284 != 0);
        FUN_100091d0();
        piVar2 = local_288;
      }
      else if (piVar2 == (int *)0x0) goto LAB_1000e1e2;
      FID_conflict__free(piVar2);
    }
  }
LAB_1000e1e2:
  *(undefined ***)((int)aiStack_350 + *(int *)(aiStack_350[1] + 4) + 4) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((int)aiStack_350 + *(int *)(aiStack_350[1] + 4)) = *(int *)(aiStack_350[1] + 4) + -0x70;
  FUN_10009b00();
  *(undefined ***)((int)aiStack_350 + *(int *)(aiStack_350[1] + 4) + 4) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)((int)aiStack_350 + *(int *)(aiStack_350[1] + 4)) = *(int *)(aiStack_350[1] + 4) + -0x18;
  local_8 = CONCAT31(local_8._1_3_,6);
  local_2dc[0] = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)local_2dc);
  FUN_10048130();
  FUN_10048130();
  FUN_10048130();
  FUN_10048130();
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

