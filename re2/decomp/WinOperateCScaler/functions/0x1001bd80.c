// rea decompile_all
// name: FUN_1001bd80
// address: 0x1001bd80
// body: available
// range: 0x1001bd80-0x1001beb0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001bd80(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  char *pcVar2;
  char *_Locale;
  int iVar3;
  void *_Memory;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *local_20;
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10196189;
  local_10 = ExceptionList;
  uVar1 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[5] = 0xf;
  param_1[4] = 0;
  if (0xf < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  *(undefined1 *)param_1 = 0;
  local_8 = 0;
  if (7 < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  uVar5 = 0;
  uVar4 = 2;
  local_20 = param_2;
  local_14 = uVar1;
  pcVar2 = _setlocale(2,(char *)0x0);
  pcVar2 = (char *)FUN_10173277(pcVar2,uVar4,uVar5,uVar1);
  _Locale = _setlocale(0,(char *)&PTR_101a6410);
  _setlocale(2,_Locale);
  local_1c = 0;
  iVar3 = FUN_10174bdb(0,&local_20,0,&local_1c);
  if (iVar3 != -1) {
    _Memory = (void *)FUN_1001cfdc(iVar3 + 1);
    iVar3 = FUN_10174bdb(_Memory,&local_20,iVar3,&local_1c);
    if (iVar3 != -1) {
      FUN_10003c70(_Memory,iVar3);
    }
    if (_Memory != (void *)0x0) {
      FID_conflict__free(_Memory);
    }
  }
  _setlocale(2,pcVar2);
  FID_conflict__free(pcVar2);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

