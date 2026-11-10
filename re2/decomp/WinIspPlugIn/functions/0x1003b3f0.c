// rea decompile_all
// name: FUN_1003b3f0
// address: 0x1003b3f0
// body: available
// range: 0x1003b3f0-0x1003b684 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1003b66b) */
/* WARNING: Removing unreachable block (ram,0x1003b4b8) */
/* WARNING: Removing unreachable block (ram,0x1003b4c2) */
/* WARNING: Removing unreachable block (ram,0x1003b4cc) */
/* WARNING: Removing unreachable block (ram,0x1003b674) */
/* WARNING: Removing unreachable block (ram,0x1003b67b) */

void FUN_1003b3f0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 ****ppppuVar4;
  uint *in_EDX;
  bool bVar5;
  wchar_t *pwVar6;
  undefined4 ***local_94 [4];
  undefined4 local_84;
  uint local_80;
  undefined1 local_7c;
  undefined4 local_6c;
  undefined4 local_68;
  undefined **local_64;
  undefined2 local_60 [8];
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  undefined2 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c36c3;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_4c = 7;
  local_50 = 0;
  local_60[0] = 0;
  local_64 = CCpRsString::vftable;
  local_34 = 0xf;
  local_38 = 0;
  local_48 = 0;
  local_80 = 7;
  local_84 = 0;
  local_94[0] = (undefined4 ***)((uint)local_94[0] & 0xffff0000);
  local_68 = 0xf;
  local_6c = 0;
  local_7c = 0;
  local_8 = 1;
  iVar1 = FUN_10017720(local_14);
  if ((((iVar1 == 0) && (iVar1 = FUN_10017780(), iVar1 == 0)) &&
      (iVar1 = FUN_10018120(), iVar1 == 0)) &&
     (((iVar2 = (**(code **)(*DAT_10249d10 + 0x14))(), iVar1 = DAT_1024be74, iVar2 != 2 ||
       (DAT_1024a384 == 0)) || (iVar2 = FUN_10019030(), iVar1 = DAT_1024be74, iVar2 == 0)))) {
    while( true ) {
      if ((iVar1 < 1) || (iVar2 = FUN_1003b2a0(), iVar2 != 0)) goto LAB_1003b605;
      local_18 = 0;
      local_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      local_20 = 0;
      Sleep(DAT_1024be70);
      iVar2 = FUN_1003a900();
      if (iVar2 != 0) goto LAB_1003b605;
      iVar1 = iVar1 + -1;
      if (*in_EDX == uStack_2c) break;
      iVar2 = 4;
      bVar5 = false;
      do {
        if (bVar5) {
          uVar3 = uStack_2c >> 0x18;
          pwVar6 = L"%02d";
        }
        else {
          uVar3 = (uint)*(byte *)((int)&local_30 + iVar2);
          pwVar6 = L"%02d.";
        }
        FUN_10048350(&local_64,pwVar6,uVar3);
        FUN_1002c980(local_60,0,0xffffffff);
        iVar2 = iVar2 + 1;
        bVar5 = iVar2 == 7;
      } while (iVar2 < 8);
      ppppuVar4 = local_94;
      if (7 < local_80) {
        ppppuVar4 = (undefined4 ****)local_94[0];
      }
      FUN_10048350(&local_64,L"Set count:%d compare merge fw gen1 info fail, read merge fw info:%ls"
                   ,(DAT_1024be74 - iVar1) + 1,ppppuVar4);
      FUN_10016860();
    }
    if (((0 < iVar1) && (iVar1 = (**(code **)(*DAT_10249d10 + 0x14))(), iVar1 == 2)) &&
       (DAT_1024a384 != 0)) {
      FUN_10019030();
    }
  }
LAB_1003b605:
  FUN_10048130();
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

