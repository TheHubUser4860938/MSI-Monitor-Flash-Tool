// rea decompile_all
// name: FUN_10044380
// address: 0x10044380
// body: available
// range: 0x10044380-0x1004449b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100443d0 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10044380(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int in_ECX;
  undefined4 uVar4;
  int local_30;
  undefined4 local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a1568;
  local_10 = ExceptionList;
  if ((param_1 < 0) || (DAT_10206ed4 <= param_1)) {
    return 0;
  }
  ExceptionList = &local_10;
  piVar3 = (int *)FUN_10048e90(DAT_10206460 ^ (uint)&stack0xfffffffc);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_100351a0(0x80004005);
  }
  local_30 = (**(code **)(*piVar3 + 0xc))();
  local_30 = local_30 + 0x10;
  local_8 = 0;
  puVar2 = DAT_10206ecc;
  if (param_1 < DAT_10206ed4) {
    for (; param_1 != 0; param_1 = param_1 + -1) {
      puVar2 = (undefined4 *)*puVar2;
    }
    if (puVar2 != (undefined4 *)0x0) {
      FUN_100403e0(puVar2 + 2);
      *(undefined4 *)(in_ECX + 4) = local_2c;
      if (DAT_1021ae38 != 0) {
        FUN_10034940(&local_30);
        WritePrivateProfileStringW(L"Comm_AUX",L"AUX_SelectDeviceInfo",DAT_1021ae34,&DAT_10212800);
      }
      uVar4 = 1;
      goto LAB_10044453;
    }
  }
  uVar4 = 0;
LAB_10044453:
  local_8 = 0xffffffff;
  LOCK();
  piVar3 = (int *)(local_30 + -4);
  iVar1 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar1 == 1 || iVar1 + -1 < 0) {
    (**(code **)(**(int **)(local_30 + -0x10) + 4))((undefined4 *)(local_30 + -0x10));
  }
  ExceptionList = local_10;
  return uVar4;
}

