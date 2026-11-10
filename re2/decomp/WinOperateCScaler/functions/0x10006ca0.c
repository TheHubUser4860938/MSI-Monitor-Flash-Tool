// rea decompile_all
// name: FUN_10006ca0
// address: 0x10006ca0
// body: available
// range: 0x10006ca0-0x10006d60 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006ca0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101957c6;
  local_10 = ExceptionList;
  uVar3 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  if ((in_ECX[0x13] != 0) && (*(undefined4 **)in_ECX[3] == in_ECX + 0xf)) {
    iVar1 = in_ECX[0x15];
    iVar2 = in_ECX[0x14];
    *(int *)in_ECX[3] = iVar2;
    *(int *)in_ECX[7] = iVar2;
    *(int *)in_ECX[0xb] = iVar1 - iVar2;
  }
  if (*(char *)(in_ECX + 0x12) != '\0') {
    if (in_ECX[0x13] != 0) {
      FUN_1000e940(uVar3);
      _fclose((FILE *)in_ECX[0x13]);
    }
    FUN_1000ec50(0,2);
  }
  *in_ECX = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  iVar1 = in_ECX[0xd];
  if (iVar1 != 0) {
    local_8 = 0;
    if (*(int **)(iVar1 + 4) != (int *)0x0) {
      puVar4 = (undefined4 *)(**(code **)(**(int **)(iVar1 + 4) + 8))();
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)*puVar4)(1);
      }
    }
    FUN_101539e9(iVar1,8);
  }
  ExceptionList = local_10;
  return;
}

