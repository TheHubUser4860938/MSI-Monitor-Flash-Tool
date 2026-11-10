// rea decompile_all
// name: FUN_100107c0
// address: 0x100107c0
// body: available
// range: 0x100107c0-0x100108e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


_Facet_base * FUN_100107c0(int param_1)

{
  uint uVar1;
  _Facet_base *p_Var2;
  uint uVar3;
  int iVar4;
  _Facet_base *p_Var5;
  undefined **local_2c;
  undefined8 local_28;
  _Lockit local_20 [4];
  _Lockit local_1c [4];
  _Facet_base *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1016d978;
  local_10 = ExceptionList;
  uVar3 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  std::_Lockit::_Lockit(local_20,0);
  p_Var2 = DAT_101df0b4;
  local_8 = 0;
  local_18[0] = DAT_101df0b4;
  if (DAT_101de3d8 == 0) {
    std::_Lockit::_Lockit(local_1c,0);
    if (DAT_101de3d8 == 0) {
      DAT_101de3b8 = DAT_101de3b8 + 1;
      DAT_101de3d8 = DAT_101de3b8;
    }
    FUN_10149ce6(uVar3);
  }
  uVar1 = DAT_101de3d8;
  iVar4 = *(int *)(param_1 + 4);
  if (DAT_101de3d8 < *(uint *)(iVar4 + 0xc)) {
    p_Var5 = *(_Facet_base **)(*(int *)(iVar4 + 8) + DAT_101de3d8 * 4);
    if (p_Var5 != (_Facet_base *)0x0) goto LAB_100108c7;
  }
  else {
    p_Var5 = (_Facet_base *)0x0;
  }
  if (*(char *)(iVar4 + 0x14) == '\0') {
LAB_1001086a:
    if (p_Var5 != (_Facet_base *)0x0) goto LAB_100108c7;
  }
  else {
    iVar4 = FUN_10149e79();
    if (uVar1 < *(uint *)(iVar4 + 0xc)) {
      p_Var5 = *(_Facet_base **)(*(int *)(iVar4 + 8) + uVar1 * 4);
      goto LAB_1001086a;
    }
  }
  p_Var5 = p_Var2;
  if (p_Var2 == (_Facet_base *)0x0) {
    iVar4 = FUN_1000d4e0(local_18,param_1);
    if (iVar4 == -1) {
      local_2c = std::bad_cast::vftable;
      local_28 = 0x101b5ddc;
      __CxxThrowException_8(&local_2c,&DAT_101ce5dc);
    }
    p_Var5 = local_18[0];
    DAT_101df0b4 = local_18[0];
    (**(code **)(*(int *)local_18[0] + 4))();
    std::_Facet_Register(p_Var5);
  }
LAB_100108c7:
  FUN_10149ce6(uVar3);
  ExceptionList = local_10;
  return p_Var5;
}

