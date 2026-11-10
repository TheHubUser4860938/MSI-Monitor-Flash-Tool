// rea decompile_all
// name: FUN_1003b810
// address: 0x1003b810
// body: available
// range: 0x1003b810-0x1003b9e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b810(int param_1)

{
  uint uVar1;
  undefined4 ****ppppuVar2;
  byte in_CL;
  int in_EDX;
  int iVar3;
  wchar_t *pwVar4;
  undefined4 ***local_78 [4];
  undefined4 local_68;
  uint local_64;
  uint local_60;
  undefined4 local_50;
  uint local_4c;
  undefined **local_48;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c3750;
  local_10 = ExceptionList;
  uVar1 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_64 = 7;
  local_68 = 0;
  local_78[0] = (undefined4 ***)((uint)local_78[0] & 0xffff0000);
  local_4c = 0xf;
  local_50 = 0;
  local_60 = local_60 & 0xffffff00;
  local_30 = 7;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffff0000;
  local_48 = CCpRsString::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  local_8 = 1;
  local_14 = uVar1;
  if (DAT_1024a36c == 0) goto LAB_1003b907;
  iVar3 = 0;
  if (in_CL == 0) {
LAB_1003b8e7:
    ppppuVar2 = local_78;
  }
  else {
    do {
      if (iVar3 == in_CL - 1) {
        pwVar4 = L"%02d";
      }
      else {
        pwVar4 = L"%02d.";
      }
      FUN_10048350(&local_48,pwVar4,*(undefined1 *)(in_EDX + iVar3),uVar1);
      FUN_1002c980(local_44,0,0xffffffff);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)in_CL);
    ppppuVar2 = (undefined4 ****)local_78[0];
    if (local_64 < 8) goto LAB_1003b8e7;
  }
  FUN_10048350(&local_48,L"isp merge fw info:%ls",ppppuVar2,uVar1);
  FUN_10016860();
LAB_1003b907:
  if (param_1 == 1) {
    FUN_1003b3f0();
  }
  else if (param_1 == 2) {
    FUN_1003b690();
  }
  local_48 = CCpRsString::vftable;
  if (0xf < local_18) {
    FUN_1000b630(local_2c,local_18 + 1);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  if (7 < local_30) {
    FUN_1000b5d0(local_44[0],local_30 + 1);
  }
  local_30 = 7;
  local_44[0] = local_44[0] & 0xffff0000;
  local_34 = 0;
  if (0xf < local_4c) {
    FUN_1000b630(local_60,local_4c + 1);
  }
  local_4c = 0xf;
  local_50 = 0;
  local_60 = local_60 & 0xffffff00;
  if (7 < local_64) {
    FUN_1000b5d0(local_78[0],local_64 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

