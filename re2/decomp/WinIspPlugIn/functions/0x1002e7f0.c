// rea decompile_all
// name: FUN_1002e7f0
// address: 0x1002e7f0
// body: available
// range: 0x1002e7f0-0x1002ee79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002e7f0(int param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *_Memory;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  undefined ***pppuVar10;
  undefined ***extraout_ECX;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  undefined4 *puVar14;
  undefined **local_4dc;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_4d0;
  int local_4cc;
  int local_4c8;
  char *local_4c4;
  undefined4 local_4c0 [2];
  wchar_t local_4b8 [262];
  undefined **local_2ac;
  undefined2 local_2a8 [8];
  undefined4 local_298;
  undefined4 local_294;
  undefined1 local_290;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  uint uStack_264;
  undefined4 local_260 [3];
  int local_254;
  uint local_24c;
  uint local_248 [4];
  undefined4 local_238;
  uint local_234;
  wchar_t local_230 [262];
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined1 local_14;
  undefined3 uStack_13;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_101c2bbd;
  local_1c = ExceptionList;
  local_24 = DAT_1023dfec ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_4cc = param_1;
  local_4c8 = param_2;
  local_4c4 = (char *)0x0;
  local_234 = 0xf;
  local_238 = 0;
  local_248[0] = local_248[0] & 0xffffff00;
  local_294 = 7;
  local_298 = 0;
  local_2a8[0] = 0;
  local_2ac = CCpRsString::vftable;
  local_27c = 0xf;
  local_280 = 0;
  local_290 = 0;
  local_4d8 = 0;
  local_4d4 = 0;
  local_4d0 = 0;
  local_14 = 2;
  uStack_13 = 0;
  local_274 = 0;
  local_270 = 0;
  uStack_26c = 0;
  uStack_268 = 0;
  uStack_264 = 0;
  _Memory = (undefined4 *)FUN_10033960(local_24);
  local_4c0[0] = 0;
  local_4c0[1] = 0;
  _memset(local_230,0,0x208);
  _wcsncpy(local_4b8,local_230,0x104);
  local_4dc = CCpTransform::vftable;
  local_14 = 4;
  FUN_10032f90();
  FUN_1002ee80(param_1,&local_4c4,param_2);
  pcVar12 = local_4c4;
  *(undefined4 *)(param_2 + 0xdc) = *(undefined4 *)(local_4c4 + local_4cc);
  *(undefined4 *)(param_2 + 0xe0) = *(undefined4 *)(local_4c4 + local_4cc + 4);
  *(undefined4 *)(param_2 + 0xf4) = *(undefined4 *)(local_4c4 + local_4cc + 8);
  *(undefined4 *)(param_2 + 0xe8) = *(undefined4 *)(local_4c4 + local_4cc + 0xc);
  *(undefined4 *)(param_2 + 0x426c) = *(undefined4 *)(local_4c4 + local_4cc + 0x10);
  *(undefined4 *)(param_2 + 0x42a8) = *(undefined4 *)(local_4c4 + local_4cc + 0x14);
  *(undefined4 *)(param_2 + 0x42a4) = *(undefined4 *)(local_4c4 + local_4cc + 0x18);
  *(undefined4 *)(param_2 + 0x42bc) = *(undefined4 *)(local_4c4 + local_4cc + 0x1c);
  pcVar13 = local_4c4 + local_4cc + 0x20;
  if (local_4c4[local_4cc + 0x20] == '\0') {
    iVar8 = 0;
  }
  else {
    pcVar9 = pcVar13;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    iVar8 = (int)pcVar9 - (int)(pcVar13 + 1);
  }
  local_4c4 = pcVar13;
  FUN_1000aa60(pcVar13,iVar8);
  uVar7 = FUN_10048c90(local_260,local_248);
  local_14 = 5;
  FUN_10046260(uVar7,0,0xffffffff);
  _local_14 = CONCAT31(uStack_13,4);
  if (7 < local_24c) {
    FUN_1000b5d0(local_260[0],local_24c + 1);
  }
  pppuVar10 = (undefined ***)(local_4c8 + 0x4270);
  if (pppuVar10 != &local_2ac) {
    pppuVar10 = (undefined ***)(local_4c8 + 0x4274);
    if (pppuVar10 != (undefined ***)local_2a8) {
      FUN_10046260(local_2a8,0,0xffffffff);
      pppuVar10 = extraout_ECX;
    }
  }
  uVar7 = FUN_100409e0(&DAT_1020ebe8,pppuVar10);
  FUN_1002c000(uVar7);
  if (local_254 != 0) {
    FUN_1002d300(local_254,local_4dc);
    FUN_1002c430(local_254,(int)(local_24c - local_254) / 0x18);
    pcVar13 = local_4c4;
  }
  uVar4 = local_4d0;
  uVar3 = local_4d4;
  uVar7 = local_4d8;
  local_4d8 = 0;
  local_4d4 = 0;
  local_4d0 = 0;
  FUN_1002e6b0(uVar7,uVar3,uVar4,&local_274);
  iVar8 = local_4c8;
  pcVar9 = pcVar13 + 1;
  *(undefined4 *)(local_4c8 + 0x42ac) = local_270;
  *(undefined4 *)(local_4c8 + 0x42b0) = uStack_26c;
  *(undefined4 *)(local_4c8 + 0x42b4) = uStack_268;
  *(uint *)(local_4c8 + 0x42b8) = uStack_264;
  do {
    cVar2 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar2 != '\0');
  iVar11 = -(int)pcVar9 + 0x20;
  *(undefined4 *)(local_4c8 + 0x138) =
       *(undefined4 *)(pcVar13 + (int)(pcVar12 + local_4cc + 1 + iVar11));
  *(undefined4 *)(local_4c8 + 0x198) =
       *(undefined4 *)(pcVar13 + (int)(pcVar12 + local_4cc + 5 + iVar11));
  *(undefined4 *)(local_4c8 + 0x134) =
       *(undefined4 *)(pcVar13 + (int)(pcVar12 + local_4cc + 9 + iVar11));
  *(undefined4 *)(local_4c8 + 0x13c) =
       *(undefined4 *)(pcVar13 + (int)(pcVar12 + local_4cc + 0xd + iVar11));
  *(undefined4 *)(local_4c8 + 0x140) =
       *(undefined4 *)(pcVar13 + (int)(pcVar12 + local_4cc + 0x11 + iVar11));
  *(undefined4 *)(local_4c8 + 0x140) =
       *(undefined4 *)(pcVar13 + (int)(pcVar12 + local_4cc + 0x15 + iVar11));
  *(undefined4 *)(local_4c8 + 0x148) =
       *(undefined4 *)(pcVar13 + (int)(pcVar12 + local_4cc + 0x19 + iVar11));
  *(undefined4 *)(local_4c8 + 0x14c) =
       *(undefined4 *)(pcVar13 + (int)(pcVar12 + local_4cc + 0x1d + iVar11));
  *(undefined4 *)(local_4c8 + 0x150) =
       *(undefined4 *)(pcVar13 + (int)(pcVar12 + local_4cc + 0x21 + iVar11));
  *(undefined4 *)(local_4c8 + 0x154) =
       *(undefined4 *)(pcVar13 + (int)(pcVar12 + local_4cc + 0x25 + iVar11));
  *(char *)(local_4c8 + 0x158) = pcVar13[(int)(pcVar12 + local_4cc + 0x29 + iVar11)];
  *(undefined4 *)(local_4c8 + 0x15c) =
       *(undefined4 *)(pcVar13 + (int)(pcVar12 + local_4cc + 0x2a + iVar11));
  *(undefined4 *)(local_4c8 + 0x188) =
       *(undefined4 *)(pcVar13 + (int)(pcVar12 + local_4cc + 0x2e + iVar11));
  *(undefined4 *)(local_4c8 + 0x160) =
       *(undefined4 *)(pcVar13 + (int)(pcVar12 + local_4cc + 0x32 + iVar11));
  *(undefined4 *)(local_4c8 + 0x164) =
       *(undefined4 *)(pcVar13 + (int)(pcVar12 + local_4cc + 0x36 + iVar11));
  *(undefined4 *)(local_4c8 + 0x16c) =
       *(undefined4 *)(pcVar13 + (int)(pcVar12 + local_4cc + 0x3a + iVar11));
  *(undefined4 *)(local_4c8 + 0x170) =
       *(undefined4 *)(pcVar13 + (int)(pcVar12 + local_4cc + 0x3e + iVar11));
  *(undefined4 *)(local_4c8 + 0x174) =
       *(undefined4 *)(pcVar13 + (int)(pcVar12 + local_4cc + 0x42 + iVar11));
  *(undefined4 *)(local_4c8 + 0x178) =
       *(undefined4 *)(pcVar13 + (int)(pcVar12 + local_4cc + 0x46 + iVar11));
  *(undefined4 *)(local_4c8 + 0x17c) =
       *(undefined4 *)(pcVar13 + (int)(pcVar12 + local_4cc + 0x4a + iVar11));
  pcVar1 = pcVar13 + (int)(pcVar12 + local_4cc + 0x4e + iVar11);
  uVar7 = *(undefined4 *)(pcVar1 + 4);
  uVar3 = *(undefined4 *)(pcVar1 + 8);
  uVar4 = *(undefined4 *)(pcVar1 + 0xc);
  *(undefined4 *)(local_4c8 + 0x1ccc) = *(undefined4 *)pcVar1;
  *(undefined4 *)(local_4c8 + 0x1cd0) = uVar7;
  *(undefined4 *)(local_4c8 + 0x1cd4) = uVar3;
  *(undefined4 *)(local_4c8 + 0x1cd8) = uVar4;
  *(undefined4 *)(local_4c8 + 0x1cdc) =
       *(undefined4 *)(pcVar13 + (int)(pcVar12 + local_4cc + 0x5e + iVar11));
  *(undefined4 *)(local_4c8 + 0x1b4) =
       *(undefined4 *)(pcVar13 + (int)(pcVar12 + local_4cc + 0x62 + iVar11));
  *(undefined4 *)(local_4c8 + 0x1b8) =
       *(undefined4 *)(pcVar13 + (int)(pcVar12 + local_4cc + 0x66 + iVar11));
  *(undefined2 *)(local_4c8 + 0x1bc) =
       *(undefined2 *)(pcVar13 + (int)(pcVar12 + local_4cc + 0x6a + iVar11));
  *(undefined4 *)(local_4c8 + 0x1c0) =
       *(undefined4 *)(pcVar13 + (int)(pcVar12 + local_4cc + 0x6c + iVar11));
  *(undefined4 *)(local_4c8 + 0x1e8) =
       *(undefined4 *)(pcVar13 + (int)(pcVar12 + local_4cc + 0x70 + iVar11));
  *(undefined4 *)(local_4c8 + 0x1c4) =
       *(undefined4 *)(pcVar13 + (int)(pcVar12 + local_4cc + 0x74 + iVar11));
  *(undefined4 *)(local_4c8 + 0x1c8) =
       *(undefined4 *)(pcVar13 + (int)(pcVar12 + local_4cc + 0x78 + iVar11));
  *(undefined4 *)(local_4c8 + 0x1cc) =
       *(undefined4 *)(pcVar13 + (int)(pcVar12 + local_4cc + 0x7c + iVar11));
  *(undefined4 *)(local_4c8 + 0x1e0) =
       *(undefined4 *)(pcVar13 + (int)(pcVar12 + local_4cc + 0x80 + iVar11));
  *(undefined4 *)(local_4c8 + 0x1e4) =
       *(undefined4 *)(pcVar13 + (int)(pcVar12 + local_4cc + 0x84 + iVar11));
  local_4c4 = pcVar13 + (int)(pcVar12 + -(int)pcVar9 + 0xac);
  *(undefined4 *)(local_4c8 + 0x1fc) =
       *(undefined4 *)(pcVar13 + (int)(pcVar12 + local_4cc + 0x88 + iVar11));
  pcVar13 = local_4c4 + local_4cc;
  if (local_4c4[local_4cc] == '\0') {
    iVar11 = 0;
  }
  else {
    pcVar12 = pcVar13;
    do {
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    iVar11 = (int)pcVar12 - (int)(pcVar13 + 1);
  }
  FUN_1000aa60(pcVar13,iVar11);
  uVar7 = FUN_10048c90(&local_278,local_248);
  local_14 = 6;
  FUN_10046260(uVar7,0,0xffffffff);
  _local_14 = CONCAT31(uStack_13,4);
  if (7 < uStack_264) {
    FUN_1000b5d0(local_278,uStack_264 + 1);
  }
  if (((undefined ***)(iVar8 + 0x200) != &local_2ac) && ((undefined2 *)(iVar8 + 0x204) != local_2a8)
     ) {
    FUN_10046260(local_2a8,0,0xffffffff);
  }
  iVar6 = local_4c8;
  iVar11 = local_4cc;
  pcVar12 = pcVar13 + 1;
  do {
    cVar2 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar2 != '\0');
  *(undefined4 *)(iVar8 + 0x234) =
       *(undefined4 *)(pcVar13 + (int)(local_4c4 + ((local_4cc + 1) - (int)pcVar12)));
  iVar5 = 9 - (int)pcVar12;
  *(undefined4 *)(iVar8 + 0x1f8) =
       *(undefined4 *)(pcVar13 + (int)(local_4c4 + ((local_4cc + 5) - (int)pcVar12)));
  pcVar9 = pcVar13 + (int)(local_4c4 + local_4cc + iVar5);
  puVar14 = local_4c0;
  for (iVar8 = 0x84; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar14 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    puVar14 = puVar14 + 1;
  }
  pcVar9 = pcVar13 + (int)(local_4c4 + local_4cc + iVar5);
  puVar14 = (undefined4 *)(local_4c8 + 0x238);
  for (iVar8 = 0x84; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar14 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    puVar14 = puVar14 + 1;
  }
  *(undefined4 *)(local_4c8 + 0x448) =
       *(undefined4 *)(pcVar13 + (int)(local_4c4 + local_4cc + 0x210 + iVar5));
  pcVar9 = local_4c4 + local_4cc + 0x214 + iVar5;
  local_4c4 = pcVar13 + (int)(local_4c4 + (0x221 - (int)pcVar12));
  *(undefined4 *)(local_4c8 + 0x44c) = *(undefined4 *)(pcVar13 + (int)pcVar9);
  FUN_1002f110(local_4cc,&local_4c4,local_4c8);
  pcVar13 = local_4c4 + iVar11;
  puVar14 = (undefined4 *)(iVar6 + 0x45c);
  for (iVar8 = 0x134; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar14 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    puVar14 = puVar14 + 1;
  }
  *(undefined4 *)(local_4c8 + 0x1c6c) = *(undefined4 *)(local_4c4 + local_4cc + 0x4d0);
  FUN_1002c5b0(&local_4dc,*_Memory,_Memory);
  FID_conflict__free(_Memory);
  FUN_10048130();
  if (0xf < local_234) {
    FUN_1000b630(local_248[0],local_234 + 1);
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}

