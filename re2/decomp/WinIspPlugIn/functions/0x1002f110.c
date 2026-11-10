// rea decompile_all
// name: FUN_1002f110
// address: 0x1002f110
// body: available
// range: 0x1002f110-0x1002f21e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002f110(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  int iVar3;
  int local_3c;
  undefined4 local_38;
  int local_34;
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined2 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  puStack_c = &LAB_101c2c68;
  local_18 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = 0;
  local_34 = 0;
  local_8 = 0;
  local_38 = 0;
  iVar3 = *(int *)(*param_2 + param_1);
  *param_2 = *param_2 + 4;
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    iVar1 = *param_2;
    local_30[0] = *(undefined1 *)(iVar1 + param_1);
    *param_2 = iVar1 + 1;
    local_2c = *(undefined4 *)(iVar1 + 1 + param_1);
    *param_2 = iVar1 + 5;
    local_28 = *(undefined2 *)(iVar1 + 5 + param_1);
    *param_2 = iVar1 + 7;
    local_24 = *(undefined4 *)(iVar1 + 7 + param_1);
    *param_2 = iVar1 + 0xb;
    local_20 = *(undefined1 *)(iVar1 + 0xb + param_1);
    *param_2 = iVar1 + 0xc;
    local_1c = *(undefined4 *)(iVar1 + 0xc + param_1);
    *param_2 = iVar1 + 0x10;
    FUN_10033580(local_30);
  }
  FUN_1002bdf0(&local_3c);
  uVar2 = extraout_EDX;
  if (local_3c != 0) {
    FUN_1002c430(local_3c,(local_34 - local_3c) / 0x18);
    uVar2 = extraout_EDX_00;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc,uVar2,param_3);
  return;
}

