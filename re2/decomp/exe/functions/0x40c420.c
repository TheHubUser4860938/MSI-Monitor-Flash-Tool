// rea decompile_all
// name: FUN_0040c420
// address: 0x40c420
// body: available
// range: 0x40c420-0x40c54e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040c420(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined1 local_1c [4];
  int *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059c84e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x4c) == 0) {
    iVar1 = FUN_0055f624(param_1,1,0x40,DAT_0060cff4 ^ (uint)&stack0xfffffffc);
    if (iVar1 != 0) {
      *(undefined1 *)(in_ECX + 0x48) = 1;
      *(int *)(in_ECX + 0xc) = in_ECX + 4;
      *(undefined4 **)(in_ECX + 0x10) = (undefined4 *)(in_ECX + 8);
      *(int *)(in_ECX + 0x1c) = in_ECX + 0x14;
      *(int *)(in_ECX + 0x20) = in_ECX + 0x18;
      *(int *)(in_ECX + 0x2c) = in_ECX + 0x24;
      *(int *)(in_ECX + 0x30) = in_ECX + 0x28;
      *(undefined1 *)(in_ECX + 0x3e) = 0;
      *(undefined4 *)(in_ECX + 8) = 0;
      **(undefined4 **)(in_ECX + 0x20) = 0;
      **(undefined4 **)(in_ECX + 0x30) = 0;
      **(undefined4 **)(in_ECX + 0xc) = 0;
      **(undefined4 **)(in_ECX + 0x1c) = 0;
      **(undefined4 **)(in_ECX + 0x2c) = 0;
      *(int *)(in_ECX + 0x4c) = iVar1;
      *(undefined4 *)(in_ECX + 0x40) = DAT_00619628;
      *(undefined4 *)(in_ECX + 0x44) = DAT_0061962c;
      *(undefined4 *)(in_ECX + 0x38) = 0;
      uVar2 = FUN_0040cf90(local_1c);
      local_8 = 0;
      uVar2 = FUN_0040da30(uVar2);
      FUN_0040c170(uVar2);
      local_8 = 1;
      if (local_18 != (int *)0x0) {
        puVar3 = (undefined4 *)(**(code **)(*local_18 + 8))();
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)*puVar3)(1);
        }
      }
      ExceptionList = local_10;
      return in_ECX;
    }
  }
  ExceptionList = local_10;
  return 0;
}

