// rea decompile_all
// name: FUN_10032a00
// address: 0x10032a00
// body: available
// range: 0x10032a00-0x10032e7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10032a00(void)

{
  wchar_t local_21c [260];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_101c2e82;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  _DAT_1024a214 = 7;
  _DAT_1024a210 = 0;
  _DAT_1024a200 = 0;
  _DAT_1024a1fc = CCpRsString::vftable;
  _DAT_1024a22c = 0xf;
  _DAT_1024a228 = 0;
  DAT_1024a218 = 0;
  _DAT_1024a248 = 7;
  _DAT_1024a244 = 0;
  _DAT_1024a234 = 0;
  _DAT_1024a230 = CCpRsString::vftable;
  _DAT_1024a260 = 0xf;
  _DAT_1024a25c = 0;
  DAT_1024a24c = 0;
  _DAT_1024a27c = 7;
  _DAT_1024a278 = 0;
  _DAT_1024a268 = 0;
  _DAT_1024a264 = CCpRsString::vftable;
  _DAT_1024a294 = 0xf;
  _DAT_1024a290 = 0;
  DAT_1024a280 = 0;
  _DAT_1024a2b0 = 7;
  _DAT_1024a2ac = 0;
  _DAT_1024a29c = 0;
  _DAT_1024a298 = CCpRsString::vftable;
  _DAT_1024a2c8 = 0xf;
  _DAT_1024a2c4 = 0;
  DAT_1024a2b4 = 0;
  local_8 = 3;
  uStack_7 = 0;
  DAT_1024a2cc = 0;
  DAT_1024a2d0 = 0;
  DAT_1024a2cc = FUN_1000c2b0(local_14);
  _DAT_1024a310 = 7;
  _DAT_1024a30c = 0;
  _DAT_1024a2fc = 0;
  _DAT_1024a2f8 = CCpRsString::vftable;
  _DAT_1024a328 = 0xf;
  _DAT_1024a324 = 0;
  DAT_1024a314 = 0;
  DAT_1024a394 = 0;
  _DAT_1024a398 = 100;
  _DAT_1024a39c = 10;
  _DAT_1024a3a0 = 0;
  DAT_1024a3a4._0_4_ = 10;
  DAT_1024a3a4._4_4_ = 200;
  _DAT_1024a3cc = 0;
  _DAT_1024a3d0 = 0;
  _DAT_1024a3d4 = 0;
  _DAT_1024a410 = 7;
  _DAT_1024a40c = 0;
  _DAT_1024a3fc = 0;
  _DAT_1024a3f8 = CCpRsString::vftable;
  _DAT_1024a428 = 0xf;
  _DAT_1024a424 = 0;
  DAT_1024a414 = 0;
  DAT_1024a430 = 0;
  DAT_1024a434 = 0;
  _memset(local_21c,0,0x208);
  _wcsncpy((wchar_t *)&DAT_1024a438,local_21c,0x104);
  DAT_1024a648 = 0;
  _DAT_1024a64c = 0;
  DAT_1024a650 = 0;
  DAT_1024a654 = 0;
  _DAT_1024ab1c = 0;
  _DAT_1024ab20 = 0;
  _memset(&DAT_1024a658,0xff,0x4c4);
  DAT_1024ab24 = 0;
  _DAT_1024afec = 0;
  _DAT_1024aff0 = 0;
  _memset(&DAT_1024ab28,0xff,0x4c4);
  DAT_1024aff4 = 0;
  _DAT_1024b4bc = 0;
  DAT_1024b4c0 = 0;
  _memset(&DAT_1024aff8,0xff,0x4c4);
  DAT_1024b4c4 = 0;
  _DAT_1024b98c = 0;
  _DAT_1024b990 = 0;
  _memset(&DAT_1024b4c8,0xff,0x4c4);
  DAT_1024b994 = 0;
  _DAT_1024be5c = 0;
  _DAT_1024be60 = 0;
  _memset(&DAT_1024b998,0xff,0x4c4);
  _DAT_1024bea4 = 7;
  _DAT_1024bea0 = 0;
  _DAT_1024be90 = 0;
  _DAT_1024be8c = CCpRsString::vftable;
  _DAT_1024bebc = 0xf;
  _DAT_1024beb8 = 0;
  DAT_1024bea8 = 0;
  _DAT_1024bec4 = 0;
  _DAT_1024bec8 = 0;
  _DAT_1024becc = 0;
  _DAT_1024bed0 = 0;
  DAT_1024bed4 = 0;
  DAT_1024bed8 = 0;
  FUN_1002db10();
  FUN_1002da70();
  FUN_1002dca0();
  FUN_10007520();
  _DAT_1024e480 = 7;
  _DAT_1024e47c = 0;
  _DAT_1024e46c = 0;
  _DAT_1024e468 = CCpRsString::vftable;
  _DAT_1024e498 = 0xf;
  _DAT_1024e494 = 0;
  DAT_1024e484 = 0;
  _local_8 = CONCAT31(uStack_7,10);
  _DAT_1024e4b8 = 0;
  _DAT_1024e4bc = 0;
  _DAT_1024e4c0 = 0;
  _DAT_1024e4c4 = 1;
  _DAT_1024e4cc = 0;
  _DAT_1024e4d0 = 0x1194;
  _DAT_1024e4d4 = 0x32;
  _DAT_1024e4d8 = 10;
  _DAT_1024e4dc = 0;
  _DAT_1024e4e0 = 0;
  _DAT_1024e4e4 = 0x20;
  _DAT_1024e4e8 = 0;
  DAT_1024e4ec._0_4_ = 2;
  DAT_1024e4ec._4_4_ = 4;
  DAT_1024e4f4._0_2_ = 0;
  FUN_10032f90();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

