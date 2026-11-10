// rea decompile_all
// name: FUN_1003ff60
// address: 0x1003ff60
// body: available
// range: 0x1003ff60-0x10040038 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003ff60(undefined4 param_1,char *param_2)

{
  uint uVar1;
  _Lockit *in_ECX;
  undefined **local_28;
  undefined8 local_24;
  char *local_1c;
  undefined1 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c0ada;
  local_10 = ExceptionList;
  uVar1 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
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
    param_2 = (char *)__CxxThrowException_8(&local_28,&DAT_10238a44);
  }
  std::_Locinfo::_Locinfo_ctor((_Locinfo *)in_ECX,0x3f,param_2);
  ExceptionList = local_10;
  return;
}

