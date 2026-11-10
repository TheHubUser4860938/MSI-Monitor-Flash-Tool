// rea decompile_all
// name: FUN_1002b9a0
// address: 0x1002b9a0
// body: available
// range: 0x1002b9a0-0x1002bbb5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002b9a0(void)

{
  uint uVar1;
  int iVar2;
  undefined ***pppuVar3;
  undefined4 ***pppuVar4;
  undefined2 uVar5;
  undefined1 local_b0 [52];
  undefined **local_7c;
  undefined2 local_78;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_50;
  undefined4 local_4c;
  undefined **local_48;
  undefined4 **local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined1 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c294c;
  local_10 = ExceptionList;
  uVar1 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (undefined4 **)((uint)local_44[0] & 0xffff0000);
  local_48 = CCpRsString::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = 0;
  local_64 = 7;
  local_68 = 0;
  local_78 = 0;
  local_7c = CCpRsString::vftable;
  local_4c = 0xf;
  local_50 = 0;
  local_60 = 0;
  local_8 = 1;
  local_14 = uVar1;
  iVar2 = FUN_100165f0(local_b0);
  iVar2 = *(int *)(iVar2 + 0x14);
  FUN_10048130(uVar1);
  if (iVar2 == 0) {
    pppuVar3 = (undefined ***)FUN_10047bd0(&DAT_1024a108);
    if (&local_48 != pppuVar3) {
      if (pppuVar3 == (undefined ***)0x0) {
        pppuVar4 = (undefined4 ***)0x0;
      }
      else {
        pppuVar4 = (undefined4 ***)(pppuVar3 + 1);
      }
      if (local_44 != pppuVar4) {
        if (7 < local_30) {
          FUN_1000b5d0(local_44[0],local_30 + 1);
        }
        local_30 = 7;
        local_34 = 0;
        local_44[0] = (undefined4 **)((uint)local_44[0] & 0xffff0000);
        FUN_10045640(pppuVar4);
      }
      local_8 = CONCAT31(local_8._1_3_,1);
    }
    FUN_10048130(uVar1);
  }
  else {
    pppuVar3 = (undefined ***)FUN_100165f0(local_b0);
    if (&local_48 != pppuVar3) {
      if (pppuVar3 == (undefined ***)0x0) {
        pppuVar4 = (undefined4 ***)0x0;
      }
      else {
        pppuVar4 = (undefined4 ***)(pppuVar3 + 1);
      }
      if (local_44 != pppuVar4) {
        if (7 < local_30) {
          FUN_1000b5d0(local_44[0],local_30 + 1);
        }
        local_30 = 7;
        local_34 = 0;
        local_44[0] = (undefined4 **)((uint)local_44[0] & 0xffff0000);
        FUN_10045640(pppuVar4);
      }
      local_8 = CONCAT31(local_8._1_3_,1);
    }
    FUN_10048130(uVar1);
    pppuVar4 = local_44;
    if (7 < local_30) {
      pppuVar4 = (undefined4 ***)local_44[0];
    }
    FUN_10048350(&DAT_1024a13c,L"Load Flash dat from setting path:%ls",pppuVar4);
    FUN_10016860();
  }
  uVar5 = 0;
  FUN_10045640(local_44);
  FUN_1000df70(CCpRsString::vftable,uVar5);
  FUN_10048130();
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

