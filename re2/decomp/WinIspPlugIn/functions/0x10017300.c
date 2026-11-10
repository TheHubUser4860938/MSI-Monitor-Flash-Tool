// rea decompile_all
// name: FUN_10017300
// address: 0x10017300
// body: available
// range: 0x10017300-0x100175f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10017300(void)

{
  int iVar1;
  int in_ECX;
  byte local_49;
  undefined **local_48;
  undefined2 local_44;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c1aa8;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_49 = 0;
  local_30 = 7;
  local_34 = 0;
  local_44 = 0;
  local_48 = CCpRsString::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = 0;
  local_8 = 0;
  if ((DAT_1024a2d4 == 6) || (DAT_1024a2d4 == 7)) goto LAB_10017391;
  if (DAT_1024e000 == 0) {
    FUN_10048350(&local_48,L"Not check typeusb from setting!");
    FUN_10016860();
    goto LAB_10017391;
  }
  if ((DAT_1024dff0 != 0) && (iVar1 = FUN_10016ea0(local_14), iVar1 != 0)) {
    FUN_10048350(&local_48,L"Check RL6703 billboard fail! error code:0x%X.",iVar1);
    FUN_10016860();
    goto LAB_10017391;
  }
  iVar1 = (**(code **)(*DAT_10249d10 + 0x14))();
  if ((iVar1 != 8) ||
     ((((((in_ECX != 0x42 && (in_ECX != 0x36)) && (in_ECX != 0x3b)) &&
        ((in_ECX != 0x3a && (in_ECX != 0x3c)))) &&
       ((in_ECX != 0x41 && ((in_ECX != 0x47 && (in_ECX != 0x46)))))) &&
      ((in_ECX != 0x4a &&
       ((((in_ECX != 0x48 && (in_ECX != 0x45)) && (in_ECX != 0x4e)) && (in_ECX != 0x50))))))))
  goto LAB_10017391;
  iVar1 = (**(code **)(*DAT_10249d10 + 0xc0))(0xfd21,&local_49);
  if (iVar1 == 0) {
    if ((local_49 & 0xc) == 0xc) {
      if ((in_ECX == 0x3c) && (iVar1 = FUN_1001ad20(), iVar1 != 0)) goto LAB_10017391;
      (**(code **)(*DAT_10249d10 + 0xd0))(0xfd21,0x3f,0xc0);
      Sleep(10);
      FUN_10048350(&local_48,L"Waiting for switch to rom code...");
      FUN_1003fc00();
      FUN_10016860();
      iVar1 = (**(code **)(*DAT_10249d10 + 0x10c))();
      if ((iVar1 != 0) ||
         ((Sleep(DAT_1024a3e4), DAT_1024a3ac != 0 &&
          (iVar1 = (**(code **)(*DAT_10249d10 + 0x124))(1), iVar1 != 0)))) goto LAB_10017391;
      iVar1 = (**(code **)(*DAT_10249d10 + 0xc0))(0xfd21,&local_49);
      if (iVar1 != 0) goto LAB_1001752f;
      if ((local_49 & 0x82) != 0x82) {
        FUN_10048350(&local_48,L"Switch to boot code fail! Error code: 0x%X!!",0xd28);
        FUN_10016860();
        goto LAB_10017391;
      }
    }
    if ((in_ECX == 0x36) || (in_ECX == 0x42)) {
      iVar1 = (**(code **)(*DAT_10249d10 + 0xc0))(0xfd2c,&local_49);
      if (iVar1 != 0) {
        FUN_10048350(&local_48,L"Read 0xFD2C Fail! Error code:0x%X.",iVar1);
        FUN_10016860();
      }
      if ((local_49 & 1) == 0) {
        FUN_10048350(&local_48,L"Check 0xFD2C[0] = 1 Fail!");
        FUN_10016860();
      }
    }
  }
  else {
LAB_1001752f:
    FUN_10048350(&local_48,L"Read 0xFD21 Fail! Error code:0x%X.",iVar1);
    FUN_10016860();
  }
LAB_10017391:
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

