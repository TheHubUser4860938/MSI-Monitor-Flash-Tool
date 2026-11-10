// rea decompile_all
// name: FUN_1000ee50
// address: 0x1000ee50
// body: available
// range: 0x1000ee50-0x1000f215 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000ee50(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  undefined ***pppuVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  int *piVar7;
  undefined1 local_124 [4];
  undefined4 local_120;
  undefined **local_e8;
  undefined4 local_e4;
  uint local_d0;
  uint local_cc;
  undefined4 local_bc;
  uint local_b8;
  undefined4 local_b4 [5];
  uint local_a0;
  undefined **local_9c;
  uint local_98;
  undefined4 local_88;
  uint local_84;
  uint local_80;
  undefined4 local_70;
  uint local_6c;
  undefined **local_68;
  undefined **local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  undefined4 local_3c;
  uint local_38;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c14ad;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_120 = param_1;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  local_84 = 7;
  local_88 = 0;
  local_98 = local_98 & 0xffff0000;
  local_9c = CCpRsString::vftable;
  local_6c = 0xf;
  local_70 = 0;
  local_80 = local_80 & 0xffffff00;
  uVar6 = 7;
  local_54 = 0;
  local_50 = 7;
  local_64[0] = (undefined **)((uint)local_64[0] & 0xffff0000);
  local_68 = CCpRsString::vftable;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = local_4c & 0xffffff00;
  local_8 = 2;
  piVar7 = *(int **)*param_2;
  if (piVar7 != (int *)*param_2) {
    do {
      local_1c = piVar7[0x12];
      local_18 = piVar7[0x13];
      puVar4 = (uint *)FUN_1000e7a0(local_b4,&local_1c,uVar6);
      if (local_34 != puVar4) {
        if (0xf < local_20) {
          FUN_1000b630(local_34[0],local_20 + 1);
        }
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        FUN_1000af70(puVar4);
      }
      local_8._0_1_ = 2;
      if (0xf < local_a0) {
        FUN_1000b630(local_b4[0],local_a0 + 1);
      }
      uVar6 = FUN_10048c90(local_b4,local_34);
      local_8._0_1_ = 4;
      FUN_10046260(uVar6,0,0xffffffff);
      local_8 = CONCAT31(local_8._1_3_,2);
      if (7 < local_a0) {
        FUN_1000b5d0(local_b4[0],local_a0 + 1);
      }
      pppuVar5 = (undefined ***)FUN_1000da90(&local_e8);
      if (&local_68 != pppuVar5) {
        if (pppuVar5 == (undefined ***)0x0) {
          pppuVar5 = (undefined ***)0x0;
        }
        else {
          pppuVar5 = pppuVar5 + 1;
        }
        if (local_64 != pppuVar5) {
          if (7 < local_50) {
            FUN_1000b5d0(local_64[0],local_50 + 1);
          }
          local_50 = 7;
          local_54 = 0;
          local_64[0] = (undefined **)((uint)local_64[0] & 0xffff0000);
          FUN_10045640(pppuVar5);
        }
        local_8 = CONCAT31(local_8._1_3_,2);
      }
      local_e8 = CCpRsString::vftable;
      if (0xf < local_b8) {
        FUN_1000b630(local_cc,local_b8 + 1);
      }
      local_b8 = 0xf;
      local_bc = 0;
      local_cc = local_cc & 0xffffff00;
      if (7 < local_d0) {
        FUN_1000b5d0(local_e4,local_d0 + 1);
      }
      uVar6 = FUN_10011ec0(&local_68);
      local_8._0_1_ = 6;
      FUN_10012720(local_124,uVar6);
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_10048130();
      FUN_10048130();
      if (*(char *)((int)piVar7 + 0xd) == '\0') {
        piVar2 = (int *)piVar7[2];
        if (*(char *)((int)piVar2 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          piVar7 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0xd);
            piVar7 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar7[1] + 0xd);
          piVar3 = (int *)piVar7[1];
          piVar2 = piVar7;
          while ((piVar7 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar7[2]))) {
            cVar1 = *(char *)(piVar7[1] + 0xd);
            piVar3 = (int *)piVar7[1];
            piVar2 = piVar7;
          }
        }
      }
      uVar6 = extraout_ECX;
    } while (piVar7 != (int *)*param_2);
  }
  local_68 = CCpRsString::vftable;
  if (0xf < local_38) {
    FUN_1000b630(local_4c,local_38 + 1);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c = local_4c & 0xffffff00;
  if (7 < local_50) {
    FUN_1000b5d0(local_64[0],local_50 + 1);
  }
  local_50 = 7;
  local_64[0] = (undefined **)((uint)local_64[0] & 0xffff0000);
  local_54 = 0;
  local_9c = CCpRsString::vftable;
  if (0xf < local_6c) {
    FUN_1000b630(local_80,local_6c + 1);
  }
  local_6c = 0xf;
  local_70 = 0;
  local_80 = local_80 & 0xffffff00;
  if (7 < local_84) {
    FUN_1000b5d0(local_98,local_84 + 1);
  }
  local_84 = 7;
  local_98 = local_98 & 0xffff0000;
  local_88 = 0;
  if (0xf < local_20) {
    FUN_1000b630(local_34[0],local_20 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

