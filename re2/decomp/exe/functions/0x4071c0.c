// rea decompile_all
// name: FUN_004071c0
// address: 0x4071c0
// body: available
// range: 0x4071c0-0x4072aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004071c0(undefined4 param_1,char *param_2)

{
  uint uVar1;
  _Lockit *in_ECX;
  undefined **local_28;
  undefined8 local_24;
  char *local_1c;
  undefined1 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059bc9a;
  local_10 = ExceptionList;
  uVar1 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  std::_Lockit::_Lockit(in_ECX,0);
  *(undefined4 *)(in_ECX + 4) = 0;
  in_ECX[8] = (_Lockit)0x0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  in_ECX[0x10] = (_Lockit)0x0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined2 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined2 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  in_ECX[0x28] = (_Lockit)0x0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  in_ECX[0x30] = (_Lockit)0x0;
  local_8 = 6;
  if (param_2 == (char *)0x0) {
    local_28 = std::exception::vftable;
    local_1c = "bad locale name";
    local_18 = 1;
    local_24 = 0;
    ___std_exception_copy(&local_1c,&local_24,uVar1);
    local_28 = std::runtime_error::vftable;
    __CxxThrowException_8(&local_28,&DAT_00608364);
  }
  std::_Locinfo::_Locinfo_ctor((_Locinfo *)in_ECX,0x3f,param_2);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

