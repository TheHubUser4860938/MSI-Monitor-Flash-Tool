// rea decompile_all
// name: FUN_10005a10
// address: 0x10005a10
// body: available
// range: 0x10005a10-0x10005ae7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005a10(undefined4 *param_1,char param_2,uint *param_3,void *param_4)

{
  uint *puVar1;
  void *_Memory;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *in_ECX;
  bool bVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar1 = param_3;
  puStack_c = &LAB_10194a70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)*in_ECX;
  local_8 = 0;
  bVar4 = true;
  if (*(char *)((int)puVar3[1] + 0xd) == '\0') {
    puVar2 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar2;
      if (param_2 == '\0') {
        bVar4 = *param_3 < (uint)puVar3[4];
      }
      else {
        bVar4 = *param_3 <= (uint)puVar3[4];
      }
      if (bVar4 == false) {
        puVar2 = (undefined4 *)puVar3[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar3;
      }
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  _param_2 = puVar3;
  if (bVar4) {
    if (puVar3 == *(undefined4 **)*in_ECX) {
      bVar4 = true;
      goto LAB_10005aa1;
    }
    FUN_10007970();
  }
  _Memory = param_4;
  puVar2 = _param_2;
  if (*puVar1 <= (uint)_param_2[4]) {
    FUN_100196a0();
    FID_conflict__free(_Memory);
    *param_1 = puVar2;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
LAB_10005aa1:
  puVar3 = (undefined4 *)FUN_10005860(&param_2,bVar4,puVar3,puVar1,param_4);
  *param_1 = *puVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}

