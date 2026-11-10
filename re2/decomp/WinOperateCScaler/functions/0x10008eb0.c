// rea decompile_all
// name: FUN_10008eb0
// address: 0x10008eb0
// body: available
// range: 0x10008eb0-0x100090d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10008f04) */
/* WARNING: Removing unreachable block (ram,0x10008f37) */

void FUN_10008eb0(undefined4 ****param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_128 [4];
  undefined4 uStack_124;
  undefined4 ***pppuStack_120;
  undefined1 *local_e8;
  int local_e4 [23];
  int local_88;
  undefined **local_74 [18];
  undefined4 ***local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10194ed4;
  local_10 = ExceptionList;
  local_14 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_e8 = local_128;
  FUN_10003b40();
  local_8 = 0;
  FUN_10003b40(param_1,0,0xffffffff);
  local_8 = 0xffffffff;
  FUN_10014b00(local_2c);
  local_8 = 1;
  if (param_1 != local_2c) {
    pppuStack_120 = (undefined4 ***)0x10008f77;
    FUN_10003b40();
  }
  pppuStack_120 = (undefined4 ***)0x10008f8a;
  _memset(local_e4,0,0xb8);
  pppuStack_120 = local_2c;
  if (0xf < local_18) {
    pppuStack_120 = local_2c[0];
  }
  uStack_124 = 0x10008faa;
  FUN_10006040();
  local_8 = CONCAT31(local_8._1_3_,2);
  if (local_88 == 0) {
    FUN_10003e70();
  }
  else {
    pppuStack_120 = (undefined4 ***)0x10008fe5;
    FUN_100111a0();
    piVar3 = (int *)FUN_100116c0();
    iVar1 = piVar3[2];
    iVar2 = *piVar3;
    pppuStack_120 = (undefined4 ****)0x1000900d;
    FUN_100111a0();
    FUN_1000fb30();
    *param_2 = (uint)((iVar1 + iVar2 & 0xffffU) != 0) + ((uint)(iVar1 + iVar2) >> 0x10);
  }
  *(undefined ***)((int)local_e4 + *(int *)(local_e4[0] + 4)) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((int)local_e4 + *(int *)(local_e4[0] + 4) + -4) = *(int *)(local_e4[0] + 4) + -0x70;
  FUN_10006ca0();
  *(undefined ***)((int)local_e4 + *(int *)(local_e4[0] + 4)) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)((int)local_e4 + *(int *)(local_e4[0] + 4) + -4) = *(int *)(local_e4[0] + 4) + -0x18;
  local_8 = CONCAT31(local_8._1_3_,3);
  local_74[0] = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)local_74);
  if (0xf < local_18) {
    FUN_10003d70();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

