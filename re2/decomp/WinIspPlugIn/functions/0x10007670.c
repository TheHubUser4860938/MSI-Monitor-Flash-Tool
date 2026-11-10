// rea decompile_all
// name: FUN_10007670
// address: 0x10007670
// body: available
// range: 0x10007670-0x10007b2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007670(void)

{
  undefined4 uVar1;
  int iVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  int *in_ECX;
  undefined4 extraout_ECX;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined1 local_11c [8];
  undefined **local_114;
  undefined2 local_110 [8];
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 local_f8;
  undefined4 local_e8;
  undefined4 local_e4;
  int *local_dc;
  undefined4 local_d8;
  int *local_d4;
  undefined4 local_d0;
  int local_cc;
  int *local_c8;
  undefined4 local_84;
  undefined4 local_80;
  undefined **local_7c;
  undefined2 local_78;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_50;
  undefined4 local_4c;
  undefined **local_48;
  undefined4 local_44;
  int local_34;
  uint local_30;
  undefined1 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c0cac;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_d4 = (int *)0x0;
  local_d0 = 0;
  local_d4 = (int *)FUN_1000c2b0(local_14);
  local_8 = 0;
  local_dc = (int *)0x0;
  local_d8 = 0;
  local_dc = (int *)FUN_1000c2b0();
  local_8._0_1_ = 1;
  local_84 = 0;
  local_80 = 0;
  local_64 = 7;
  local_68 = 0;
  local_78 = 0;
  FUN_10045540(&PTR_1020e6b0,0);
  iVar5 = DAT_1024a2ec;
  local_7c = CCpRsString::vftable;
  local_4c = 0xf;
  local_50 = 0;
  local_60 = 0;
  local_8._0_1_ = 2;
  DAT_1024a2d4 = *in_ECX;
  if (in_ECX[0x15] != 0) {
    FUN_1003fdc0();
    if ((*in_ECX == 5) && (in_ECX[0x14] == 0)) {
      local_c8 = (int *)*local_d4;
      if (local_c8 != local_d4) {
        do {
          local_cc = local_c8[4] + iVar5;
          uVar1 = FUN_1000c6d0(local_c8 + 5);
          local_8._0_1_ = 3;
          iVar2 = FUN_1000cb30(uVar1);
          FUN_1000cb60(local_11c,extraout_ECX,iVar2 + 0x10,iVar2);
          local_8._0_1_ = 2;
          FUN_10048130();
          FUN_1000a700();
        } while (local_c8 != local_d4);
      }
      FUN_1000b550();
      ppiVar3 = &local_dc;
    }
    else {
      FUN_1000b550();
      ppiVar3 = &local_d4;
    }
    FUN_1000c880(ppiVar3,local_cc);
  }
  DAT_1024a2f0 = in_ECX[0x11];
  DAT_1024a2f4 = in_ECX[0x12];
  iVar5 = in_ECX[0xc];
  if ((iVar5 != -1) && (DAT_1024a34c = iVar5, in_ECX[0xc] == 0)) {
    DAT_1024a350 = (undefined1)in_ECX[0xd];
  }
  if (in_ECX[0x10a16] != 0) {
    piVar7 = in_ECX + 0x10a16;
    piVar6 = &DAT_1024a654;
    for (iVar5 = 0x134; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar6 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar6 = piVar6 + 1;
    }
  }
  DAT_1024a2e0 = in_ECX[3];
  piVar7 = in_ECX + 0x10c98;
  DAT_1024a2e4 = in_ECX[4];
  DAT_1024a2e8 = in_ECX[0xb];
  _DAT_1024bec4 = in_ECX[0x10b4a];
  _DAT_1024bec8 = in_ECX[0x10b4b];
  _DAT_1024becc = in_ECX[0x10b4c];
  _DAT_1024bed0 = in_ECX[0x10b4d];
  local_fc = 7;
  local_100 = 0;
  DAT_1024bed4 = in_ECX[0x10b4e];
  DAT_1024a2d8 = in_ECX[1];
  DAT_1024a2dc = in_ECX[2];
  DAT_1024a380 = in_ECX[0x10];
  DAT_1024e460 = in_ECX[0x13];
  _DAT_1024e464 = (uint)*(byte *)(in_ECX + 0x10e5f);
  _DAT_1024e4a4 = in_ECX[0x10e60];
  iRam1024e4a8 = in_ECX[0x10e61];
  iRam1024e4ac = in_ECX[0x10e62];
  iRam1024e4b0 = in_ECX[0x10e63];
  DAT_1024e4b4 = in_ECX[10];
  _DAT_1024e4a0 = in_ECX[5];
  DAT_1024e49c = in_ECX[6];
  piVar6 = in_ECX + 0x10b50;
  piVar8 = &DAT_1024a430;
  for (iVar5 = 0x84; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar8 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar8 = piVar8 + 1;
  }
  local_110[0] = 0;
  if ((short)*piVar7 == 0) {
    iVar5 = 0;
  }
  else {
    piVar6 = piVar7;
    do {
      iVar5 = *piVar6;
      piVar6 = (int *)((int)piVar6 + 2);
    } while ((short)iVar5 != 0);
    iVar5 = (int)piVar6 - ((int)in_ECX + 0x43262) >> 1;
  }
  FUN_10045540(piVar7,iVar5);
  local_114 = CCpRsString::vftable;
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8 = 0;
  local_8._0_1_ = 4;
  FUN_10046260(local_110,0,0xffffffff);
  FUN_10048130();
  local_30 = 7;
  local_34 = 0;
  local_44 = (undefined4 *)((uint)local_44._2_2_ << 0x10);
  local_48 = CCpRsString::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = 0;
  piVar7 = in_ECX + 0x10d1a;
  local_8 = CONCAT31(local_8._1_3_,5);
  if ((short)*piVar7 == 0) {
    iVar5 = 0;
  }
  else {
    piVar6 = piVar7;
    do {
      iVar5 = *piVar6;
      piVar6 = (int *)((int)piVar6 + 2);
    } while ((short)iVar5 != 0);
    iVar5 = (int)piVar6 - ((int)in_ECX + 0x4346a) >> 1;
  }
  FUN_10045540(piVar7,iVar5);
  if (local_34 != 0) {
    puVar4 = &local_44;
    if (7 < local_30) {
      puVar4 = local_44;
    }
    if (*(short *)((int)puVar4 + local_34 * 2 + -2) != 0x5c) {
      puVar4 = &local_44;
      if (7 < local_30) {
        puVar4 = local_44;
      }
      if (*(short *)((int)puVar4 + local_34 * 2 + -2) != 0x2f) {
        FUN_1000a7d0(1,0x5c);
      }
    }
  }
  FUN_10046260(&local_44,0,0xffffffff);
  if ((short)in_ECX[0x10d9c] == 0) {
    iVar5 = 0;
  }
  else {
    piVar7 = in_ECX + 0x10d9c;
    do {
      iVar5 = *piVar7;
      piVar7 = (int *)((int)piVar7 + 2);
    } while ((short)iVar5 != 0);
    iVar5 = (int)piVar7 - ((int)in_ECX + 0x43672) >> 1;
  }
  FUN_10045540(in_ECX + 0x10d9c,iVar5);
  FUN_10046260(&local_44,0,0xffffffff);
  if (in_ECX[7] != 0) {
    DAT_1024a1f8 = in_ECX[7];
  }
  DAT_1024e4ec = *(undefined8 *)(in_ECX + 0x10e64);
  DAT_1024e4f4 = in_ECX[0x10e66];
  FUN_10048130();
  FUN_10048130();
  local_c8 = (int *)*local_dc;
  FUN_1000b550();
  FID_conflict__free(local_dc);
  local_c8 = (int *)*local_d4;
  FUN_1000b550();
  FID_conflict__free(local_d4);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

