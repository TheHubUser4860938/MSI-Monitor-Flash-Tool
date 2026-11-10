// rea decompile_all
// name: FUN_1003af50
// address: 0x1003af50
// body: available
// range: 0x1003af50-0x1003b296 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003af50(void)

{
  short sVar1;
  uint uVar2;
  undefined ***pppuVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 ****ppppuVar6;
  undefined1 *in_ECX;
  int iVar7;
  short *psVar8;
  int in_EDX;
  undefined4 ****ppppuVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int local_20c;
  uint auStack_200 [11];
  int aiStack_1d4 [32];
  int local_154;
  undefined1 *local_150;
  undefined1 local_14c [52];
  undefined **local_118;
  undefined2 local_114;
  undefined4 local_104;
  undefined4 local_100;
  undefined1 local_fc;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined **local_e4;
  undefined4 ***local_e0 [4];
  undefined4 local_d0;
  uint local_cc;
  undefined1 local_c8;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined **local_b0;
  undefined4 ***local_ac [4];
  undefined4 local_9c;
  uint local_98;
  undefined1 local_94;
  undefined4 local_84;
  undefined4 local_80;
  wchar_t local_7c [12];
  undefined4 local_64;
  wchar_t awStack_60 [24];
  undefined1 local_30;
  undefined4 local_2f;
  undefined4 uStack_2b;
  undefined4 uStack_27;
  undefined4 uStack_23;
  undefined8 local_1f;
  undefined1 local_17;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_101c3682;
  local_10 = ExceptionList;
  uVar2 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_cc = 7;
  local_e0[0] = (undefined4 ***)((uint)local_e0[0] & 0xffff0000);
  local_d0 = 0;
  local_e4 = CCpRsString::vftable;
  local_b4 = 0xf;
  local_b8 = 0;
  local_c8 = 0;
  local_98 = 7;
  local_9c = 0;
  local_ac[0] = (undefined4 ***)((uint)local_ac[0] & 0xffff0000);
  local_b0 = CCpRsString::vftable;
  local_80 = 0xf;
  local_84 = 0;
  local_94 = 0;
  local_100 = 7;
  local_104 = 0;
  local_114 = 0;
  local_118 = CCpRsString::vftable;
  local_e8 = 0xf;
  local_ec = 0;
  local_fc = 0;
  local_8 = 2;
  uStack_7 = 0;
  local_30 = 0;
  local_2f = 0;
  uStack_2b = 0;
  uStack_27 = 0;
  uStack_23 = 0;
  local_17 = 0;
  local_1f = 0;
  local_150 = &local_30;
  if (in_ECX != (undefined1 *)0x0) {
    local_150 = in_ECX;
  }
  builtin_wcsncpy(awStack_60 + 0xe,L"DualBank",9);
  local_64._0_2_ = L'M';
  local_64._2_2_ = L'e';
  builtin_wcsncpy(awStack_60,L"rgeFWInfo.txt",0xe);
  builtin_wcsncpy(local_7c,L"MergeFwInfo",0xc);
  local_154 = in_EDX;
  local_14 = uVar2;
  pppuVar3 = (undefined ***)FUN_100075b0(local_14c);
  if (&local_b0 != pppuVar3) {
    if (pppuVar3 == (undefined ***)0x0) {
      ppppuVar9 = (undefined4 ****)0x0;
    }
    else {
      ppppuVar9 = (undefined4 ****)(pppuVar3 + 1);
    }
    if (local_ac != ppppuVar9) {
      if (7 < local_98) {
        FUN_1000b5d0(local_ac[0],local_98 + 1);
      }
      local_98 = 7;
      local_9c = 0;
      local_ac[0] = (undefined4 ***)((uint)local_ac[0] & 0xffff0000);
      FUN_10045640(ppppuVar9);
    }
    local_8 = 2;
  }
  FUN_10048130(uVar2);
  if ((wchar_t)local_64 == L'\0') {
    iVar7 = 0;
  }
  else {
    psVar8 = (short *)&local_64;
    do {
      sVar1 = *psVar8;
      psVar8 = psVar8 + 1;
    } while (sVar1 != 0);
    iVar7 = (int)psVar8 - ((int)&local_64 + 2) >> 1;
  }
  puVar10 = &local_64;
  FUN_1002c850(puVar10,iVar7);
  if (DAT_1024a368 != 0) {
    uVar11 = 0x1003b163;
    uVar4 = FUN_100486d0();
    FUN_1000d0a0(uVar4,0x12,puVar10,uVar11);
    _local_8 = CONCAT31(uStack_7,4);
    iVar7 = FUN_1000b310();
    if (iVar7 == 0) {
      uVar2 = *(uint *)((int)auStack_200 + *(int *)(local_20c + 4));
      uVar5 = uVar2 | 6;
      if (*(int *)((int)aiStack_1d4 + *(int *)(local_20c + 4)) != 0) {
        uVar5 = uVar2 | 2;
      }
      FUN_100071e0(uVar5,0);
    }
    local_8 = 2;
    FUN_10007f80();
  }
  if (local_154 == 1) {
    iVar7 = FUN_1003ab90();
LAB_1003b1ed:
    if (iVar7 != 0) goto LAB_1003b259;
  }
  else if (local_154 == 2) {
    iVar7 = FUN_1003ad60();
    goto LAB_1003b1ed;
  }
  FUN_1003bf20();
  uVar4 = FUN_1003c280();
  FUN_1003c7c0(uVar4);
  if (DAT_1024a368 != 0) {
    ppppuVar9 = local_ac;
    if (7 < local_98) {
      ppppuVar9 = (undefined4 ****)local_ac[0];
    }
    ppppuVar6 = local_e0;
    if (7 < local_cc) {
      ppppuVar6 = (undefined4 ****)local_e0[0];
    }
    FUN_10042360(ppppuVar6,ppppuVar9);
  }
LAB_1003b259:
  FUN_10048130();
  FUN_10048130();
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

