// rea decompile_all
// name: FUN_1000bb40
// address: 0x1000bb40
// body: available
// range: 0x1000bb40-0x1000bcdd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1000bbb2) */

void FUN_1000bb40(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  uint in_stack_0000001c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101951fb;
  local_10 = ExceptionList;
  uVar1 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100195f0();
  local_8._0_1_ = 1;
  FUN_10003b40(&param_2,0,0xffffffff);
  iVar2 = FUN_10015430();
  if (((iVar2 == 0) || (local_18 == 0xffffffff)) || (0xff < local_18)) {
    FUN_10003e70();
  }
  else {
    piVar3 = (int *)FUN_10010060();
    if (*piVar3 == *(int *)(in_ECX + 0x18)) {
      FUN_100198c0();
      FUN_10005d10();
      local_8._0_1_ = 2;
      FUN_10005ce0();
      FUN_100196a0();
    }
    else {
      *(uint *)(*piVar3 + 0x18) = local_18;
    }
  }
  FUN_100196a0();
  if (0xf < in_stack_0000001c) {
    FUN_10003d70();
  }
  ExceptionList = local_10;
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}

