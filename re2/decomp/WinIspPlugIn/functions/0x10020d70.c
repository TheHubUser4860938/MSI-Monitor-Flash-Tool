// rea decompile_all
// name: FUN_10020d70
// address: 0x10020d70
// body: available
// range: 0x10020d70-0x10021035 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10020d70(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_9e8 [304];
  undefined4 uStack_528;
  undefined *puStack_524;
  undefined4 **ppuStack_520;
  int local_504 [4];
  undefined4 *local_4f4;
  undefined4 local_4f0;
  int local_4ec;
  undefined4 local_4e8 [306];
  uint local_20;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c20c6;
  local_10 = ExceptionList;
  local_18 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_504[3] = param_1;
  local_504[0] = 0;
  local_504[1] = 0;
  local_504[2] = 0;
  local_8 = 0;
  local_4f4 = (undefined4 *)0x0;
  local_4f0 = 0;
  local_4f4 = (undefined4 *)FUN_1000c2b0();
  local_8 = CONCAT31(local_8._1_3_,1);
  ppuStack_520 = (undefined4 **)0x10020e05;
  FUN_1002bdf0();
  FUN_1000b550();
  ppuStack_520 = (undefined4 **)&DAT_1024a2cc;
  puStack_524 = (undefined *)0x10020e26;
  FUN_1000c880();
  puVar3 = &DAT_1024a654;
  puVar4 = local_4e8;
  for (iVar2 = 0x134; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if ((int)(*(ushort *)(param_1 + 0x40) - 1) < (int)(local_20 >> 0x10)) goto LAB_10020fc6;
  ppuStack_520 = (undefined4 **)local_504;
  puStack_524 = (undefined *)0x10020e6d;
  iVar2 = FUN_1001e070();
  if (iVar2 == 0) {
    ppuStack_520 = (undefined4 **)0x10020e95;
    iVar2 = FUN_1001e380();
    if ((iVar2 != 0) || ((local_4ec == 5 && (iVar2 = FUN_10020220(), iVar2 != 0))))
    goto LAB_10020fc6;
    puVar3 = local_4e8;
    puVar4 = &DAT_1024a654;
    for (iVar2 = 0x134; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_1000b550();
    ppuStack_520 = &local_4f4;
    puStack_524 = (undefined *)0x10020ef9;
    FUN_1000c880();
    if (local_4ec != 7) goto LAB_10020fc6;
    puVar3 = &DAT_1024aff4;
    puVar4 = local_4e8;
    for (iVar2 = 0x134; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    ppuStack_520 = (undefined4 **)local_504;
    puStack_524 = (undefined *)0x10020f34;
    iVar2 = FUN_1001e070();
    if (iVar2 == 0) {
      ppuStack_520 = (undefined4 **)0x10020f59;
      iVar1 = FUN_1001e380();
      iVar2 = local_504[3];
      if (iVar1 != 0) goto LAB_10020fc6;
      puVar3 = local_4e8;
      puVar4 = &DAT_1024aff4;
      for (iVar1 = 0x134; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = local_4e8;
      puVar4 = auStack_9e8;
      for (iVar1 = 0x134; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      iVar2 = FUN_1003d050(iVar2);
      if (iVar2 == 0) goto LAB_10020fc6;
      ppuStack_520 = (undefined4 **)0x102121c0;
    }
    else {
      ppuStack_520 = (undefined4 **)0x10212160;
    }
  }
  else {
    ppuStack_520 = (undefined4 **)0x10212108;
  }
  puStack_524 = &DAT_1024a13c;
  uStack_528 = 0x10020faa;
  FUN_10048350();
  FUN_1003fc00();
  FUN_10016860();
LAB_10020fc6:
  local_4ec = *local_4f4;
  FUN_1000b550();
  ppuStack_520 = (undefined4 **)0x10020feb;
  FID_conflict__free(local_4f4);
  if (local_504[0] != 0) {
    ppuStack_520 = (undefined4 **)local_504[0];
    puStack_524 = (undefined *)0x10021018;
    FUN_1002c430();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

