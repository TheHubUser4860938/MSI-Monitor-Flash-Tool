// rea decompile_all
// name: FUN_100275e0
// address: 0x100275e0
// body: available
// range: 0x100275e0-0x1002772e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100275e0(void)

{
  int iVar1;
  undefined4 ***pppuVar2;
  undefined4 ***pppuVar3;
  undefined4 **local_d8 [5];
  uint local_c4;
  undefined **local_a8;
  undefined4 **local_a4 [4];
  undefined4 local_94;
  uint local_90;
  undefined1 local_8c;
  undefined4 local_7c;
  undefined4 local_78;
  wchar_t local_74 [28];
  undefined4 local_3c;
  wchar_t awStack_38 [18];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c2666;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  builtin_wcsncpy(awStack_38,L"pUserDefined.txt",0x11);
  local_3c._0_2_ = L'I';
  local_3c._2_2_ = L's';
  local_90 = 7;
  local_94 = 0;
  local_a4[0] = (undefined4 **)((uint)local_a4[0] & 0xffff0000);
  local_a8 = CCpRsString::vftable;
  local_78 = 0xf;
  builtin_wcsncpy(local_74,L"UserDefinedInfo",0x10);
  local_7c = 0;
  local_8c = 0;
  builtin_wcsncpy(local_74 + 0x10,L"HPModelName",0xc);
  local_8 = 0;
  iVar1 = FUN_10025520(local_14);
  if (iVar1 == 0) {
    FUN_10047dc0(&local_3c);
    local_8 = CONCAT31(local_8._1_3_,1);
    pppuVar3 = local_d8;
    if (7 < local_c4) {
      pppuVar3 = (undefined4 ***)local_d8[0];
    }
    pppuVar2 = local_a4;
    if (7 < local_90) {
      pppuVar2 = (undefined4 ***)local_a4[0];
    }
    FUN_10042360(pppuVar2,pppuVar3);
    FUN_10048130();
  }
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

