// rea decompile_all
// name: FUN_1001fed0
// address: 0x1001fed0
// body: available
// range: 0x1001fed0-0x10020109 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001fed0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ***pppuVar3;
  int in_ECX;
  undefined **local_a8;
  uint local_a4 [4];
  undefined4 local_94;
  uint local_90;
  uint local_8c;
  undefined4 local_7c;
  uint local_78;
  undefined **local_74;
  undefined4 **local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_58;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40;
  undefined4 uStack_3f;
  undefined4 uStack_3b;
  undefined4 uStack_37;
  undefined4 uStack_33;
  undefined8 local_2f;
  undefined1 local_27;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_101c2013;
  local_1c = ExceptionList;
  local_24 = DAT_1023dfec ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_27 = 0;
  local_90 = 7;
  uStack_3b = 0;
  uStack_37 = 0;
  uStack_33 = 0;
  local_94 = 0;
  local_2f = 0;
  local_a4[0] = local_a4[0] & 0xffff0000;
  local_a8 = CCpRsString::vftable;
  local_78 = 0xf;
  local_7c = 0;
  local_8c = local_8c & 0xffffff00;
  local_5c = 7;
  local_60 = 0;
  local_70[0] = (undefined4 **)((uint)local_70[0] & 0xffff0000);
  local_74 = CCpRsString::vftable;
  local_44 = 0xf;
  local_48 = 0;
  local_58 = local_58 & 0xffffff00;
  local_14 = 1;
  local_40 = 0x77;
  uStack_3f = 0x77;
  iVar1 = (**(code **)(*DAT_10249d10 + 0x13c))(0x6e,0x71,2,&local_40,local_24);
  if (iVar1 == 0) {
    Sleep(200);
    uVar2 = (**(code **)(*DAT_10249d10 + 0x140))(0x6e,0x71,0x17);
    iVar1 = 0;
    do {
      FUN_10048350(&local_a8,L"0x%02X, ",*(undefined1 *)(in_ECX + iVar1));
      FUN_1002c980(local_a4,0,0xffffffff);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x1a);
    pppuVar3 = local_70;
    if (7 < local_5c) {
      pppuVar3 = (undefined4 ***)local_70[0];
    }
    FUN_10048350(&DAT_1024a13c,
                 L"GET active fw info, Slave Address:0x%X Error Code: 0x%X, read data: %s\r\n",0x6e,
                 uVar2,pppuVar3);
    FUN_10016860();
  }
  local_74 = CCpRsString::vftable;
  if (0xf < local_44) {
    FUN_1000b630(local_58,local_44 + 1);
  }
  local_44 = 0xf;
  local_48 = 0;
  local_58 = local_58 & 0xffffff00;
  if (7 < local_5c) {
    FUN_1000b5d0(local_70[0],local_5c + 1);
  }
  local_5c = 7;
  local_70[0] = (undefined4 **)((uint)local_70[0] & 0xffff0000);
  local_60 = 0;
  local_a8 = CCpRsString::vftable;
  if (0xf < local_78) {
    FUN_1000b630(local_8c,local_78 + 1);
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c = local_8c & 0xffffff00;
  if (7 < local_90) {
    FUN_1000b5d0(local_a4[0],local_90 + 1);
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}

