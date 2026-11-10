// rea decompile_all
// name: FUN_00408750
// address: 0x408750
// body: available
// range: 0x408750-0x408848 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00408750(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint in_stack_00000018;
  int *_Dst;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_cc [28];
  undefined **local_5c [18];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0059c4ee;
  local_10 = ExceptionList;
  uVar1 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar4 = 0xb8;
  _Dst = local_cc;
  local_8 = 0;
  uVar3 = 0;
  local_14 = uVar1;
  _memset(_Dst,0,0xb8);
  puVar2 = &param_1;
  if (0xf < in_stack_00000018) {
    puVar2 = param_1;
  }
  FUN_0040a8d0(puVar2,_Dst,uVar3,uVar4);
  *(undefined ***)((int)local_cc + *(int *)(local_cc[0] + 4)) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((int)local_cc + *(int *)(local_cc[0] + 4) + -4) = *(int *)(local_cc[0] + 4) + -0x70;
  FUN_0040b1b0(uVar1);
  *(undefined ***)((int)local_cc + *(int *)(local_cc[0] + 4)) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)((int)local_cc + *(int *)(local_cc[0] + 4) + -4) = *(int *)(local_cc[0] + 4) + -0x18;
  local_8 = CONCAT31(local_8._1_3_,1);
  local_5c[0] = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)local_5c);
  FUN_004033e0();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

