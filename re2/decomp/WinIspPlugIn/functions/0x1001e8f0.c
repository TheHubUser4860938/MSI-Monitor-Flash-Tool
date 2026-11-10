// rea decompile_all
// name: FUN_1001e8f0
// address: 0x1001e8f0
// body: available
// range: 0x1001e8f0-0x1001eae1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001e8f0(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int in_ECX;
  int in_EDX;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [52];
  undefined1 local_7c [52];
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
  
  puStack_c = &LAB_101c1e7a;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_b4 = 0;
  local_30 = 7;
  local_34 = 0;
  local_44 = 0;
  local_48 = CCpRsString::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = 0;
  local_8 = 0;
  FUN_10048350(&local_48,L"---Deal with Specail Flash Begin---",local_14);
  FUN_10016860();
  if ((in_ECX == 4) && (DAT_1024dff8 != 0)) {
    FUN_1000da90(local_b0);
    local_8 = CONCAT31(local_8._1_3_,1);
    bVar2 = false;
    local_b4 = 1;
    iVar3 = FUN_1002c090(L"W25Q05CLWI");
    if (iVar3 == 0) {
LAB_1001e9e4:
      bVar1 = false;
    }
    else {
      FUN_1000da90(local_7c);
      bVar2 = true;
      iVar3 = FUN_1002c090(L"W25Q20CL");
      if (iVar3 == 0) goto LAB_1001e9e4;
      bVar1 = true;
    }
    if (bVar2) {
      FUN_10048130();
    }
    local_8 = 0;
    FUN_10048130();
    if (bVar1) goto LAB_1001eabc;
    local_b4 = *(uint *)(in_EDX + 0x50) & 0xffffff7f;
    local_b8 = *(uint *)(in_EDX + 0x4c) & 0xffffff7f;
    local_b4._0_2_ = CONCAT11(2,(undefined1)local_b4);
    local_b8._0_2_ = CONCAT11(2,(undefined1)local_b8);
    *(uint *)(in_EDX + 0x50) = local_b4;
    *(uint *)(in_EDX + 0x4c) = local_b8;
  }
  iVar3 = FUN_1001dda0();
  if (iVar3 == 0) {
    local_b4 = *(undefined4 *)(in_EDX + 0x50);
    iVar3 = FUN_1003cb60(&local_b4,in_EDX);
    if (iVar3 != 0) {
      FUN_10048350(&local_48,L"Write flash SR fail. Error code:0x%X",iVar3);
      FUN_10016860();
    }
  }
  else {
    FUN_10048350(&local_48,L"Disable WP RunSafeGuardCmd Fail, Error code: 0x%X",iVar3);
    FUN_10016860();
  }
LAB_1001eabc:
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

