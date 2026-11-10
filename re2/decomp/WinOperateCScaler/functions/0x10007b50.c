// rea decompile_all
// name: FUN_10007b50
// address: 0x10007b50
// body: available
// range: 0x10007b50-0x10007bd2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007b50(byte param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101957c6;
  local_10 = ExceptionList;
  uVar2 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = in_ECX[0xd];
  *in_ECX = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  if (iVar1 != 0) {
    local_8 = 0;
    if (*(int **)(iVar1 + 4) != (int *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(**(int **)(iVar1 + 4) + 8))(uVar2);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
    }
    FUN_101539e9(iVar1,8);
  }
  if ((param_1 & 1) != 0) {
    FUN_101539e9();
  }
  ExceptionList = local_10;
  return;
}

