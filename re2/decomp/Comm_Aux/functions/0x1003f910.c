// rea decompile_all
// name: FUN_1003f910
// address: 0x1003f910
// body: available
// range: 0x1003f910-0x1003fa2d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1003f910(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined4 uVar4;
  int local_28;
  undefined4 local_20;
  int local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a1078;
  local_10 = ExceptionList;
  if ((param_1 < 0) || (DAT_10206e78 <= param_1)) {
    return 0;
  }
  ExceptionList = &local_10;
  FUN_1003d1c0(DAT_10206460 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  puVar3 = DAT_10206e70;
  if (param_1 < DAT_10206e78) {
    for (; param_1 != 0; param_1 = param_1 + -1) {
      puVar3 = (undefined4 *)*puVar3;
    }
    if (puVar3 != (undefined4 *)0x0) {
      FUN_1003f820(puVar3 + 2);
      *(undefined4 *)(in_ECX + 4) = local_20;
      if (DAT_1021ae38 != 0) {
        FUN_10034940(local_18);
        WritePrivateProfileStringW(L"Comm_AUX",L"AUX_SelectDeviceInfo",DAT_1021ae34,&DAT_10212800);
      }
      uVar4 = 1;
      goto LAB_1003f9c8;
    }
  }
  uVar4 = 0;
LAB_1003f9c8:
  local_8 = 0xffffffff;
  LOCK();
  piVar1 = (int *)(local_18[0] + -4);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(**(int **)(local_18[0] + -0x10) + 4))((undefined4 *)(local_18[0] + -0x10));
  }
  LOCK();
  piVar1 = (int *)(local_28 + -4);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(**(int **)(local_28 + -0x10) + 4))((undefined4 *)(local_28 + -0x10));
  }
  ExceptionList = local_10;
  return uVar4;
}

