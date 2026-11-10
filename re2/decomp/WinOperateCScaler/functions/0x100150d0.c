// rea decompile_all
// name: FUN_100150d0
// address: 0x100150d0
// body: available
// range: 0x100150d0-0x100151de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100150d0(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint in_stack_00000018;
  int local_cc [28];
  undefined **local_5c [18];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101959de;
  local_10 = ExceptionList;
  uVar1 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = uVar1;
  _memset(local_cc,0,0xb8);
  puVar2 = &param_1;
  if (0xf < in_stack_00000018) {
    puVar2 = param_1;
  }
  FUN_10006040(puVar2,1,0x40,1);
  *(undefined ***)((int)local_cc + *(int *)(local_cc[0] + 4)) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((int)local_cc + *(int *)(local_cc[0] + 4) + -4) = *(int *)(local_cc[0] + 4) + -0x70;
  FUN_10006ca0(uVar1);
  *(undefined ***)((int)local_cc + *(int *)(local_cc[0] + 4)) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)((int)local_cc + *(int *)(local_cc[0] + 4) + -4) = *(int *)(local_cc[0] + 4) + -0x18;
  local_8 = CONCAT31(local_8._1_3_,1);
  local_5c[0] = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)local_5c);
  if (0xf < in_stack_00000018) {
    FUN_10003d70(param_1,in_stack_00000018 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

