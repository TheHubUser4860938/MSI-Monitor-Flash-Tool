// rea decompile_all
// name: FUN_10012ef0
// address: 0x10012ef0
// body: available
// range: 0x10012ef0-0x10012fa4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10012f44) */

void FUN_10012ef0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int *in_ECX;
  uint uVar3;
  uint extraout_ECX;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c1930;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar3 = (uint)in_ECX & 0xffffff00;
  cVar1 = '\x01';
  puVar2 = (undefined4 *)((undefined4 *)*in_ECX)[1];
  puVar4 = (undefined4 *)*in_ECX;
  while (*(char *)((int)puVar2 + 0xd) == '\0') {
    cVar1 = FUN_10047f60();
    uVar3 = extraout_ECX & 0xffffff00;
    puVar4 = puVar2;
    if (cVar1 == '\0') {
      puVar2 = (undefined4 *)puVar2[2];
    }
    else {
      puVar2 = (undefined4 *)*puVar2;
    }
  }
  puVar2 = (undefined4 *)FUN_100130b0(&param_3,cVar1,puVar4,uVar3,param_4);
  *param_1 = *puVar2;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}

