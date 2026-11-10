// rea decompile_all
// name: FUN_1000c750
// address: 0x1000c750
// body: available
// range: 0x1000c750-0x1000c872 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


_Facet_base * FUN_1000c750(int param_1)

{
  _Facet_base *p_Var1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  _Facet_base *p_Var5;
  undefined **local_28;
  undefined8 local_24;
  _Lockit local_1c [4];
  _Lockit local_18 [4];
  _Facet_base *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c1158;
  local_10 = ExceptionList;
  uVar3 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  std::_Lockit::_Lockit(local_1c,0);
  p_Var1 = DAT_10249ce0;
  local_8 = 0;
  local_14 = DAT_10249ce0;
  if (DAT_1024ecec == 0) {
    std::_Lockit::_Lockit(local_18,0);
    if (DAT_1024ecec == 0) {
      DAT_102490d0 = DAT_102490d0 + 1;
      DAT_1024ecec = DAT_102490d0;
    }
    FUN_10180d1e(uVar3);
  }
  uVar2 = DAT_1024ecec;
  iVar4 = *(int *)(param_1 + 4);
  if (DAT_1024ecec < *(uint *)(iVar4 + 0xc)) {
    p_Var5 = *(_Facet_base **)(*(int *)(iVar4 + 8) + DAT_1024ecec * 4);
    if (p_Var5 != (_Facet_base *)0x0) goto LAB_1000c857;
  }
  else {
    p_Var5 = (_Facet_base *)0x0;
  }
  if (*(char *)(iVar4 + 0x14) == '\0') {
LAB_1000c7fa:
    if (p_Var5 != (_Facet_base *)0x0) goto LAB_1000c857;
  }
  else {
    iVar4 = FUN_10180eb1();
    if (uVar2 < *(uint *)(iVar4 + 0xc)) {
      p_Var5 = *(_Facet_base **)(*(int *)(iVar4 + 8) + uVar2 * 4);
      goto LAB_1000c7fa;
    }
  }
  p_Var5 = p_Var1;
  if (p_Var1 == (_Facet_base *)0x0) {
    iVar4 = FUN_1000c940(&local_14,param_1);
    if (iVar4 == -1) {
      local_28 = std::bad_cast::vftable;
      local_24 = 0x1020e3e8;
      __CxxThrowException_8(&local_28,&DAT_10238974);
    }
    p_Var5 = local_14;
    DAT_10249ce0 = local_14;
    (**(code **)(*(int *)local_14 + 4))();
    std::_Facet_Register(p_Var5);
  }
LAB_1000c857:
  FUN_10180d1e(uVar3);
  ExceptionList = local_10;
  return p_Var5;
}

