// rea decompile_all
// name: FUN_1000b770
// address: 0x1000b770
// body: available
// range: 0x1000b770-0x1000b8b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1000b85b) */

void FUN_1000b770(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint in_stack_00000024;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10195158;
  local_10 = ExceptionList;
  uVar1 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  switch(param_1) {
  case 1:
    *param_2 = 1;
    break;
  case 2:
    *param_2 = 2;
    break;
  default:
    *param_2 = 0;
    break;
  case 4:
    *param_2 = 3;
    break;
  case 8:
    *param_2 = 4;
    break;
  case 0x10:
    *param_2 = 5;
    break;
  case 0x20:
    *param_2 = 6;
    break;
  case 0x40:
    *param_2 = 7;
    break;
  case 0x80:
    *param_2 = 8;
    FUN_10001d90(&param_4);
    iVar2 = FUN_10015430();
    if (iVar2 == 0) {
      puVar3 = &param_4;
      if (0xf < in_stack_00000024) {
        puVar3 = param_4;
      }
      FUN_10003e70("User defined version mode illegal, mode is: %s\n",puVar3);
    }
    else {
      puVar3 = &param_4;
      if (0xf < in_stack_00000024) {
        puVar3 = param_4;
      }
      FUN_10003e70("Get user defined version mode fail, mode is: %s\n",puVar3);
    }
  }
  if (0xf < in_stack_00000024) {
    FUN_10003d70(param_4,in_stack_00000024 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}

