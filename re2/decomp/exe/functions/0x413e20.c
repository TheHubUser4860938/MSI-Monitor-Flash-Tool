// rea decompile_all
// name: FUN_00413e20
// address: 0x413e20
// body: available
// range: 0x413e20-0x413f1d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00413e20(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  BOOL BVar6;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059d330;
  local_10 = ExceptionList;
  uVar3 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar4 = FUN_00413f20(param_1);
  if (iVar4 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  uVar5 = FUN_00415c80(&param_1,puVar2,L"ISPToolForMsi\\",uVar3);
  local_8 = 0;
  FUN_00415f50(uVar5);
  local_8 = 0xffffffff;
  LOCK();
  piVar1 = param_1 + -1;
  iVar4 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(*(int *)param_1[-4] + 4))(param_1 + -4);
  }
  BVar6 = PathFileExistsW((LPCWSTR)*puVar2);
  if ((BVar6 == 0) &&
     (BVar6 = CreateDirectoryW((LPCWSTR)*puVar2,(LPSECURITY_ATTRIBUTES)0x0), BVar6 == 0)) {
    ExceptionList = local_10;
    return 0;
  }
  uVar5 = FUN_00415c80(&local_14,puVar2,L"IspSetting.ini");
  local_8 = 1;
  FUN_00415f50(uVar5);
  local_8 = 0xffffffff;
  LOCK();
  piVar1 = (int *)(local_14 + -4);
  iVar4 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(**(int **)(local_14 + -0x10) + 4))((undefined4 *)(local_14 + -0x10));
  }
  ExceptionList = local_10;
  return 1;
}

