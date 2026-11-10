// rea decompile_all
// name: FUN_1000cb60
// address: 0x1000cb60
// body: available
// range: 0x1000cb60-0x1000cc2c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000cb60(undefined4 *param_1,undefined4 param_2,uint *param_3,void *param_4)

{
  int *piVar1;
  void *_Memory;
  int *piVar2;
  undefined4 *puVar3;
  uint *in_ECX;
  int *piVar4;
  bool bVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c11d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)*in_ECX;
  bVar5 = true;
  piVar4 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    piVar2 = (int *)piVar1[1];
    do {
      piVar4 = piVar2;
      bVar5 = *param_3 < (uint)piVar4[4];
      if (bVar5) {
        piVar2 = (int *)*piVar4;
      }
      else {
        piVar2 = (int *)piVar4[2];
      }
    } while (*(char *)((int)piVar2 + 0xd) == '\0');
  }
  if (bVar5) {
    if (piVar4 == (int *)*piVar1) {
      bVar5 = true;
      goto LAB_1000cbe3;
    }
    FUN_1000ccd0();
  }
  _Memory = param_4;
  in_ECX = param_3;
  if (*param_3 <= (uint)piVar4[4]) {
    FUN_10048130();
    FID_conflict__free(_Memory);
    *param_1 = piVar4;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
LAB_1000cbe3:
  puVar3 = (undefined4 *)FUN_1000cd30(&param_3,bVar5,piVar4,in_ECX,param_4);
  *param_1 = *puVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}

