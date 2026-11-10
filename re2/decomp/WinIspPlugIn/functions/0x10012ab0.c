// rea decompile_all
// name: FUN_10012ab0
// address: 0x10012ab0
// body: available
// range: 0x10012ab0-0x10012bf1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10012b03) */

void FUN_10012ab0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,void *param_4)

{
  void *_Memory;
  char cVar1;
  char cVar2;
  undefined4 *puVar3;
  int *in_ECX;
  int *extraout_ECX;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c1910;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  cVar1 = '\x01';
  puVar3 = (undefined4 *)((undefined4 *)*in_ECX)[1];
  puVar4 = (undefined4 *)*in_ECX;
  while (*(char *)((int)puVar3 + 0xd) == '\0') {
    cVar1 = FUN_10047f60();
    puVar4 = puVar3;
    if (cVar1 == '\0') {
      puVar3 = (undefined4 *)puVar3[2];
    }
    else {
      puVar3 = (undefined4 *)*puVar3;
    }
  }
  param_3 = puVar4;
  if (cVar1 != '\0') {
    if (puVar4 == *(undefined4 **)*in_ECX) {
      cVar1 = '\x01';
      goto LAB_10012b4a;
    }
    FUN_1000ccd0();
  }
  puVar3 = param_3;
  cVar2 = FUN_10047f60();
  _Memory = param_4;
  in_ECX = extraout_ECX;
  if (cVar2 == '\0') {
    FUN_10048130();
    FUN_10048130();
    FUN_10048130();
    FUN_10048130();
    FUN_10048130();
    FID_conflict__free(_Memory);
    *param_1 = puVar3;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
LAB_10012b4a:
  puVar3 = (undefined4 *)FUN_10012c80(&param_3,cVar1,puVar4,in_ECX,param_4);
  *param_1 = *puVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}

