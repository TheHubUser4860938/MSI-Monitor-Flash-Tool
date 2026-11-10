// rea decompile_all
// name: FUN_10027730
// address: 0x10027730
// body: available
// range: 0x10027730-0x1002786e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10027730(void)

{
  int iVar1;
  undefined4 ***pppuVar2;
  undefined4 ***pppuVar3;
  undefined4 **local_d0 [5];
  uint local_bc;
  undefined **local_a0;
  undefined4 **local_9c [4];
  undefined4 local_8c;
  uint local_88;
  undefined1 local_84;
  undefined4 local_74;
  undefined4 local_70;
  wchar_t local_6c [24];
  undefined4 local_3c;
  wchar_t awStack_38 [18];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c26a6;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  builtin_wcsncpy(awStack_38,L"pUserDefined.txt",0x11);
  local_3c._0_2_ = L'I';
  local_3c._2_2_ = L's';
  local_88 = 7;
  local_8c = 0;
  local_9c[0] = (undefined4 **)((uint)local_9c[0] & 0xffff0000);
  local_a0 = CCpRsString::vftable;
  local_70 = 0xf;
  builtin_wcsncpy(local_6c,L"UserDefinedInfo",0x10);
  local_74 = 0;
  local_84 = 0;
  builtin_wcsncpy(local_6c + 0x10,L"HPHwCid",8);
  local_8 = 0;
  iVar1 = FUN_10025a90(local_14);
  if (iVar1 == 0) {
    FUN_10047dc0(&local_3c);
    local_8 = CONCAT31(local_8._1_3_,1);
    pppuVar3 = local_d0;
    if (7 < local_bc) {
      pppuVar3 = (undefined4 ***)local_d0[0];
    }
    pppuVar2 = local_9c;
    if (7 < local_88) {
      pppuVar2 = (undefined4 ***)local_9c[0];
    }
    FUN_10042360(pppuVar2,pppuVar3);
    FUN_10048130();
  }
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

