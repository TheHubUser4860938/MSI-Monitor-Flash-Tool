// rea decompile_all
// name: FUN_10009970
// address: 0x10009970
// body: available
// range: 0x10009970-0x10009a7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10009a16) */
/* WARNING: Removing unreachable block (ram,0x10009a2f) */
/* WARNING: Removing unreachable block (ram,0x10009a36) */
/* WARNING: Removing unreachable block (ram,0x10009a3a) */
/* WARNING: Removing unreachable block (ram,0x10009a26) */

void FUN_10009970(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_stack_00000014;
  uint in_stack_00000018;
  undefined4 *in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined1 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar3 = in_stack_0000001c;
  puStack_c = &LAB_10194fb8;
  local_10 = ExceptionList;
  uVar1 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_stack_00000014 != 0) {
    uVar4 = 0;
    FUN_10003b40(&param_1,0,0xffffffff);
    iVar2 = FUN_10015430(uVar4);
    if (iVar2 == 0) {
      puVar3 = &param_1;
      if (0xf < in_stack_00000018) {
        puVar3 = param_1;
      }
      FUN_10003e70("Parameter illegal! --slave %s \n",puVar3);
    }
    else {
      *puVar3 = 1;
    }
  }
  if (0xf < in_stack_00000018) {
    FUN_10003d70(param_1,in_stack_00000018 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}

