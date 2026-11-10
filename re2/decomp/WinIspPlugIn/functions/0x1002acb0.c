// rea decompile_all
// name: FUN_1002acb0
// address: 0x1002acb0
// body: available
// range: 0x1002acb0-0x1002addb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002acb0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined **local_50;
  undefined2 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_1b;
  undefined1 local_17;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c28a8;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_38 = 7;
  local_4c = 0;
  local_3c = 0;
  local_50 = CCpRsString::vftable;
  local_20 = 0xf;
  local_24 = 0;
  local_34 = 0;
  local_8 = 0;
  local_1c = 0;
  local_1b = 0;
  local_17 = 0;
  if (*(int *)(in_ECX + 0x14) != 0) {
    FUN_10048350(&local_50,L"Send Backgroudn FW Update Set Packet len",local_14);
    FUN_10016860();
    iVar1 = FUN_1002aa00();
    if (iVar1 == 0) {
      local_1c = 7;
      local_1b._0_2_ = CONCAT11(*(undefined1 *)(in_ECX + 0x18),*(undefined1 *)(in_ECX + 0x19));
      uVar2 = (**(code **)(*DAT_10249d10 + 0x54))(0x3a,0x31,3,&local_1c);
      FUN_10048350(&local_50,L"Send Backgroudn FW Update Start Command Error Code %d",uVar2);
      FUN_10016860();
    }
    else {
      FUN_10048350(&local_50,L"Polling Status Fail!!!");
      FUN_10016860();
      local_1c = 4;
      (**(code **)(*DAT_10249d10 + 0x54))(0x3a,0x31,1,&local_1c);
    }
  }
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

