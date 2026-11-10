// rea decompile_all
// name: FUN_10048de0
// address: 0x10048de0
// body: available
// range: 0x10048de0-0x10048f00 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_10048de0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char *_Locale;
  int iVar4;
  void *_Memory;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c42d9;
  local_10 = ExceptionList;
  uVar1 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[5] = 0xf;
  param_1[4] = 0;
  puVar2 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar2 = (undefined4 *)*param_1;
  }
  *(undefined1 *)puVar2 = 0;
  local_8 = 0;
  local_18 = 1;
  if (7 < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  uVar6 = 0;
  uVar5 = 2;
  local_14 = param_2;
  pcVar3 = _setlocale(2,(char *)0x0);
  pcVar3 = (char *)FUN_101a1410(pcVar3,uVar5,uVar6,uVar1);
  _Locale = _setlocale(0,"");
  _setlocale(2,_Locale);
  local_20 = 0;
  iVar4 = FUN_101a18f7(0,&local_14,0,&local_20);
  if (iVar4 != -1) {
    _Memory = (void *)FUN_100491e5(iVar4 + 1);
    iVar4 = FUN_101a18f7(_Memory,&local_14,iVar4,&local_20);
    if (iVar4 != -1) {
      FUN_1000aa60(_Memory,iVar4);
    }
    if (_Memory != (void *)0x0) {
      FID_conflict__free(_Memory);
    }
  }
  _setlocale(2,pcVar3);
  FID_conflict__free(pcVar3);
  ExceptionList = local_10;
  return param_1;
}

