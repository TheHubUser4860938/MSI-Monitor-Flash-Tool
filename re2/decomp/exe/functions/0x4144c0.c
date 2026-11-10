// rea decompile_all
// name: FUN_004144c0
// address: 0x4144c0
// body: available
// range: 0x4144c0-0x4145c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004144c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *in_ECX;
  undefined4 extraout_ECX;
  undefined4 uVar4;
  uint uVar5;
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;
  undefined1 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059d3a6;
  local_10 = ExceptionList;
  uVar2 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar5 = *(uint *)((int)in_ECX + *(int *)(*in_ECX + 4) + 0xc) & 0xfffffffe;
  uVar3 = uVar5 | 4;
  if (*(int *)((int)in_ECX + *(int *)(*in_ECX + 4) + 0x38) != 0) {
    uVar3 = uVar5;
  }
  FUN_00402a10(uVar3,0);
  piVar1 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
  uVar4 = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(uVar2);
    uVar4 = extraout_ECX;
  }
  local_8 = 0;
  local_18 = FUN_00406a20(uVar4);
  local_8 = 1;
  if ((*(byte *)(*(int *)(*in_ECX + 4) + 0xc + (int)in_ECX) & 6) == 0) {
    (**(code **)(**(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX) + 0x28))
              (&local_38,param_1,param_2,param_3,1);
    if ((local_38 + local_30 == -1) && (local_34 + local_2c + (uint)CARRY4(local_38,local_30) == -1)
       ) {
      uVar3 = *(uint *)((int)in_ECX + *(int *)(*in_ECX + 4) + 0xc);
      uVar2 = uVar3 | 6;
      if (*(int *)((int)in_ECX + *(int *)(*in_ECX + 4) + 0x38) != 0) {
        uVar2 = uVar3 | 2;
      }
      FUN_00402a10(uVar2,0);
    }
  }
  local_8 = 2;
  piVar1 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = local_10;
  return;
}

