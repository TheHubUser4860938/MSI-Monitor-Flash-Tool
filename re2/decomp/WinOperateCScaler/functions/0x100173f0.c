// rea decompile_all
// name: FUN_100173f0
// address: 0x100173f0
// body: available
// range: 0x100173f0-0x100174c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100173f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined1 local_18 [4];
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019550e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x4c) == 0) {
    iVar2 = FUN_10155b01(param_1,param_2,param_3,DAT_10201fec ^ (uint)&stack0xfffffffc);
    if (iVar2 != 0) {
      FUN_10015a90(iVar2,1);
      uVar3 = FUN_100170c0(local_18);
      local_8 = 0;
      piVar4 = (int *)FUN_10012de0(uVar3);
      cVar1 = (**(code **)(*piVar4 + 0xc))();
      if (cVar1 == '\0') {
        *(int **)(in_ECX + 0x38) = piVar4;
        FUN_10015b20();
      }
      else {
        *(undefined4 *)(in_ECX + 0x38) = 0;
      }
      local_8 = 1;
      if (local_14 != (int *)0x0) {
        puVar5 = (undefined4 *)(**(code **)(*local_14 + 8))();
        if (puVar5 != (undefined4 *)0x0) {
          (**(code **)*puVar5)(1);
        }
      }
      ExceptionList = local_10;
      return in_ECX;
    }
  }
  ExceptionList = local_10;
  return 0;
}

