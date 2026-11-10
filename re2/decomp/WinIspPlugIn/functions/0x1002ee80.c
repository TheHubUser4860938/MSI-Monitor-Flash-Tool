// rea decompile_all
// name: FUN_1002ee80
// address: 0x1002ee80
// body: available
// range: 0x1002ee80-0x1002f108 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002ee80(int param_1,int *param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 extraout_ECX;
  undefined1 local_e8 [8];
  int local_e0;
  undefined **local_dc;
  undefined4 local_d8;
  int local_d4;
  undefined4 *local_d0;
  undefined4 local_cc;
  undefined4 local_84 [5];
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined **local_64;
  undefined2 local_60;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c2c29;
  local_10 = ExceptionList;
  local_18 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_e0 = param_3;
  local_d0 = (undefined4 *)0x0;
  local_cc = 0;
  local_d0 = (undefined4 *)FUN_1000c2b0(local_18);
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_6c = 0;
  local_68 = 0;
  local_4c = 7;
  local_50 = 0;
  local_60 = 0;
  FUN_10045540(&PTR_1020e6b0,0);
  local_64 = CCpRsString::vftable;
  local_34 = 0xf;
  local_38 = 0;
  local_48 = 0;
  local_dc = CCpTransform::vftable;
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_1000b550();
  local_d4 = *(int *)(*param_2 + param_1);
  *param_2 = *param_2 + 4;
  for (; local_d4 != 0; local_d4 = local_d4 + -1) {
    iVar3 = *param_2;
    local_d8 = *(undefined4 *)(iVar3 + param_1);
    *param_2 = iVar3 + 4;
    local_68 = *(undefined4 *)(iVar3 + 4 + param_1);
    pcVar1 = (char *)(iVar3 + 8 + param_1);
    *param_2 = iVar3 + 8;
    if (*pcVar1 == '\0') {
      iVar3 = 0;
    }
    else {
      pcVar5 = pcVar1;
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      iVar3 = (int)pcVar5 - (int)(pcVar1 + 1);
    }
    FUN_1000aa60(pcVar1,iVar3);
    uVar4 = FUN_10048c90(local_84,local_30);
    local_8._0_1_ = 4;
    FUN_10046260(uVar4,0,0xffffffff);
    local_8._0_1_ = 3;
    if (7 < local_70) {
      FUN_1000b5d0(local_84[0],local_70 + 1);
    }
    pcVar5 = (char *)(*param_2 + param_1);
    pcVar1 = pcVar5 + 1;
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    *param_2 = (int)(pcVar5 + ((*param_2 + 1) - (int)pcVar1));
    uVar4 = FUN_1000c6d0(&local_6c);
    local_8._0_1_ = 5;
    iVar3 = FUN_1000cb30(uVar4);
    FUN_1000cb60(local_e8,extraout_ECX,iVar3 + 0x10,iVar3);
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_10048130();
  }
  if ((undefined4 **)(local_e0 + 0xd4) != &local_d0) {
    FUN_1000b550();
    FUN_1000c880(&local_d0,local_dc);
  }
  FUN_10048130();
  if (0xf < local_1c) {
    FUN_1000b630(local_30[0],local_1c + 1);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  local_d4 = *local_d0;
  FUN_1000b550();
  FID_conflict__free(local_d0);
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

