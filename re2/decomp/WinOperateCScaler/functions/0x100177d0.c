// rea decompile_all
// name: FUN_100177d0
// address: 0x100177d0
// body: available
// range: 0x100177d0-0x1001787a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100177d0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10195ca5;
  local_10 = ExceptionList;
  uVar3 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = 0;
  piVar1 = *(int **)(in_ECX[0xd] + 4);
  *(int **)((int)param_1 + 4) = piVar1;
  local_8 = 1;
  (**(code **)(*piVar1 + 4))(uVar3);
  local_8 = 0;
  (**(code **)(*in_ECX + 0x38))(param_2);
  iVar2 = in_ECX[0xd];
  piVar1 = *(int **)(iVar2 + 4);
  local_8 = 2;
  if (piVar1 != *(int **)(param_2 + 4)) {
    puVar4 = (undefined4 *)(**(code **)(*piVar1 + 8))();
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(1);
    }
    piVar1 = *(int **)(param_2 + 4);
    *(int **)(iVar2 + 4) = piVar1;
    (**(code **)(*piVar1 + 4))();
  }
  ExceptionList = local_10;
  return param_1;
}

