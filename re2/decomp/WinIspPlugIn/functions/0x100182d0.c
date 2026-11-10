// rea decompile_all
// name: FUN_100182d0
// address: 0x100182d0
// body: available
// range: 0x100182d0-0x10018541 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100182d0(void)

{
  uint uVar1;
  int iVar2;
  __time64_t _Var3;
  undefined4 local_88;
  undefined **local_84;
  undefined2 local_80 [8];
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined8 local_4f;
  undefined4 local_47;
  undefined2 local_43;
  undefined1 local_41;
  char local_40 [28];
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_101c1b98;
  local_1c = ExceptionList;
  uVar1 = DAT_1023dfec ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_50 = 0;
  local_4f = 0;
  local_47 = 0;
  local_43 = 0;
  local_41 = 0;
  local_40[0] = '\0';
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[7] = 0;
  local_40[8] = 0;
  local_40[9] = 0;
  local_40[10] = 0;
  local_40[0xb] = 0;
  local_40[0xc] = 0;
  local_40[0xd] = 0;
  local_40[0xe] = 0;
  local_40[0xf] = 0;
  local_40[0x10] = 0;
  local_40[0x19] = 0;
  local_40[0x11] = 0;
  local_40[0x12] = 0;
  local_40[0x13] = 0;
  local_40[0x14] = 0;
  local_40[0x15] = 0;
  local_40[0x16] = 0;
  local_40[0x17] = 0;
  local_40[0x18] = 0;
  local_6c = 7;
  local_70 = 0;
  local_80[0] = 0;
  local_84 = CCpRsString::vftable;
  local_54 = 0xf;
  local_58 = 0;
  local_68 = 0;
  local_14 = 0;
  if ((DAT_1024a2f0 == 0) && ((DAT_1024a1f8 == 1 || (DAT_1024a1f8 == 0x13)))) {
    local_88 = 0x4a;
  }
  else {
    local_88 = 0x6e;
  }
  local_24 = uVar1;
  _Var3 = FID_conflict___time64((__time64_t *)0x0);
  FUN_1019f526((int)_Var3,uVar1);
  uVar1 = 0;
  do {
    iVar2 = FUN_1019f505();
    (&local_50)[uVar1] = (char)(iVar2 % 0x101);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  local_40[2] = local_50;
  local_40[3] = (undefined1)local_4f;
  local_40[5] = local_4f._1_1_;
  local_40[6] = local_4f._2_1_;
  local_40[8] = local_4f._3_1_;
  local_40[9] = local_4f._4_1_;
  local_40[0xb] = local_4f._5_1_;
  local_40[0xc] = local_4f._6_1_;
  local_40[0xe] = local_4f._7_1_;
  local_40[0xf] = (undefined1)local_47;
  local_40[0x11] = local_47._1_1_;
  local_40[0x12] = local_47._2_1_;
  local_40[0x14] = local_47._3_1_;
  local_40[0x15] = (undefined1)local_43;
  local_40[0x17] = local_43._1_1_;
  local_40[0x18] = local_41;
  local_40[0] = 'w';
  local_40[1] = 0x33;
  local_40[4] = 'R';
  local_40[7] = 0x45;
  local_40[10] = 0x41;
  local_40[0xd] = 0x4c;
  local_40[0x10] = 0x54;
  local_40[0x13] = 0x45;
  local_40[0x16] = 0x43;
  local_40[0x19] = 0x48;
  iVar2 = (**(code **)(*DAT_10249d10 + 0x13c))(local_88,0x71,0x1a,local_40);
  if (iVar2 == 0) {
    Sleep(100);
    local_40[0x18] = 0;
    local_40[0x19] = 0;
    local_40[0] = '\0';
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_40[4] = '\0';
    local_40[5] = 0;
    local_40[6] = 0;
    local_40[7] = 0;
    local_40[8] = 0;
    local_40[9] = 0;
    local_40[10] = 0;
    local_40[0xb] = 0;
    local_40[0xc] = 0;
    local_40[0xd] = 0;
    local_40[0xe] = 0;
    local_40[0xf] = 0;
    local_40[0x10] = 0;
    local_40[0x11] = 0;
    local_40[0x12] = 0;
    local_40[0x13] = 0;
    local_40[0x14] = 0;
    local_40[0x15] = 0;
    local_40[0x16] = 0;
    local_40[0x17] = 0;
    iVar2 = (**(code **)(*DAT_10249d10 + 0x140))(local_88,0x71,6,local_40);
    if (iVar2 == 0) {
      if (local_40[4] != '\x01') {
        FUN_10048350(&DAT_1024a13c,L"Enable Isp Channel Fail! ");
        iVar2 = 0;
        do {
          FUN_10048350(&local_84,L"0x%x02X ,",local_40[iVar2]);
          FUN_1002c980(local_80,0,0xffffffff);
          iVar2 = iVar2 + 1;
        } while (iVar2 < 6);
        FUN_10016860();
      }
      FUN_10048350(&DAT_1024a13c,L"Enable Isp Channel Success! ");
      FUN_10016860();
    }
  }
  FUN_10048130();
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}

