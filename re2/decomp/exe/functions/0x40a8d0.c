// rea decompile_all
// name: FUN_0040a8d0
// address: 0x40a8d0
// body: available
// range: 0x40a8d0-0x40a9da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040a8d0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  undefined4 extraout_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0059c7f2;
  local_10 = ExceptionList;
  uVar1 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = (int)&PTR_005e88fc;
  in_ECX[0x1c] = (int)std::basic_ios<char,std::char_traits<char>_>::vftable;
  local_8 = 0;
  *(undefined ***)((int)in_ECX + *(int *)(*in_ECX + 4)) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)(*(int *)(*in_ECX + 4) + -4 + (int)in_ECX) = *(int *)(*in_ECX + 4) + -0x18;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  FUN_0040d250(in_ECX + 4,0);
  local_8 = 2;
  *(undefined ***)((int)in_ECX + *(int *)(*in_ECX + 4)) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)(*(int *)(*in_ECX + 4) + -4 + (int)in_ECX) = *(int *)(*in_ECX + 4) + -0x70;
  FUN_0040d180(uVar1);
  in_ECX[4] = (int)std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  FUN_0040ca50(0,0);
  local_8 = CONCAT31(local_8._1_3_,3);
  iVar2 = FUN_0040cc10(param_1,1,extraout_ECX);
  if (iVar2 == 0) {
    uVar1 = *(uint *)((int)in_ECX + *(int *)(*in_ECX + 4) + 0xc);
    uVar3 = uVar1 | 6;
    if (*(int *)((int)in_ECX + *(int *)(*in_ECX + 4) + 0x38) != 0) {
      uVar3 = uVar1 | 2;
    }
    FUN_00402a10(uVar3,0);
  }
  ExceptionList = local_10;
  return;
}

