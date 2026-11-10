// rea decompile_all
// name: FUN_100192b0
// address: 0x100192b0
// body: available
// range: 0x100192b0-0x100193e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100192b0(int param_1)

{
  uint uVar1;
  _Facet_base *p_Var2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined **local_30;
  undefined8 local_2c;
  int local_24;
  _Facet_base *local_20;
  _Lockit local_1c [4];
  _Lockit local_18 [4];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10195dc8;
  local_10 = ExceptionList;
  uVar3 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = param_1;
  local_14 = uVar3;
  std::_Lockit::_Lockit(local_1c,0);
  p_Var2 = DAT_10207434;
  local_8 = 0;
  local_20 = DAT_10207434;
  if (DAT_1020742c == 0) {
    std::_Lockit::_Lockit(local_18,0);
    if (DAT_1020742c == 0) {
      DAT_1020742c = DAT_1020d118 + 1;
      DAT_1020d118 = DAT_1020742c;
    }
    FUN_10155121(uVar3);
  }
  uVar1 = DAT_1020742c;
  iVar4 = *(int *)(param_1 + 4);
  if ((DAT_1020742c < *(uint *)(iVar4 + 0xc)) &&
     (*(int *)(*(int *)(iVar4 + 8) + DAT_1020742c * 4) != 0)) goto LAB_100193bd;
  iVar5 = 0;
  if (*(char *)(iVar4 + 0x14) == '\0') {
LAB_10019360:
    if (iVar5 != 0) goto LAB_100193bd;
  }
  else {
    iVar4 = FUN_10155518();
    if (uVar1 < *(uint *)(iVar4 + 0xc)) {
      iVar5 = *(int *)(*(int *)(iVar4 + 8) + uVar1 * 4);
      goto LAB_10019360;
    }
  }
  if (p_Var2 == (_Facet_base *)0x0) {
    iVar4 = FUN_1001a430(&local_20,local_24);
    if (iVar4 == -1) {
      local_30 = std::bad_cast::vftable;
      local_2c = 0x101a63e4;
      __CxxThrowException_8(&local_30,&DAT_101ed21c);
    }
    p_Var2 = local_20;
    DAT_10207434 = local_20;
    (**(code **)(*(int *)local_20 + 4))();
    std::_Facet_Register(p_Var2);
  }
LAB_100193bd:
  FUN_10155121(uVar3);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

