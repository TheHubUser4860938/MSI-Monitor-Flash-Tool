// rea decompile_all
// name: FUN_1000ba20
// address: 0x1000ba20
// body: available
// range: 0x1000ba20-0x1000bae3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000ba20(undefined4 param_1,char param_2)

{
  ios_base iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  ios_base *in_ECX;
  undefined1 local_18 [4];
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c103e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10007300(DAT_1023dfec ^ (uint)&stack0xfffffffc);
  *(undefined4 *)(in_ECX + 0x38) = param_1;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  uVar2 = FUN_100072b0(local_18);
  local_8 = 0;
  piVar3 = (int *)FUN_1000c530(uVar2);
  local_8 = 1;
  if (local_14 != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*local_14 + 8))();
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(1);
    }
  }
  local_8 = 0xffffffff;
  iVar1 = (ios_base)(**(code **)(*piVar3 + 0x20))(0x20);
  in_ECX[0x40] = iVar1;
  if (*(int *)(in_ECX + 0x38) == 0) {
    FUN_100071e0(*(uint *)(in_ECX + 0xc) | 4,0);
  }
  if (param_2 != '\0') {
    std::ios_base::_Addstd(in_ECX);
  }
  ExceptionList = local_10;
  return;
}

