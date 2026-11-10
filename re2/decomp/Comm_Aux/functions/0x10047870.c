// rea decompile_all
// name: FUN_10047870
// address: 0x10047870
// body: available
// range: 0x10047870-0x100479f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10047870(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  undefined4 uVar4;
  undefined4 local_2c;
  int local_28;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_24;
  undefined4 local_20;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a18e0;
  local_10 = ExceptionList;
  if ((param_1 < 0) || (DAT_10206f10 <= param_1)) {
    return 0;
  }
  ExceptionList = &local_10;
  FUN_10040480();
  local_8 = 0;
  puVar3 = DAT_10206f08;
  if (param_1 < DAT_10206f10) {
    for (; param_1 != 0; param_1 = param_1 + -1) {
      puVar3 = (undefined4 *)*puVar3;
    }
    if (puVar3 != (undefined4 *)0x0) {
      FUN_10040570();
      in_ECX[1] = local_2c;
      *in_ECX = local_24;
      in_ECX[2] = local_20;
      if (DAT_1021ae54 != 0) {
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (local_24,(wchar_t *)&DAT_1021ae14,
                   L"Select HGPU:0x%X m_unoutputID= %u m_hDisplay = 0x%X",local_24);
        FUN_10034a50();
        local_8._0_1_ = 1;
        FUN_10034a50(&DAT_1021ae10);
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_10033a90();
      }
      if (DAT_1021ae38 != 0) {
        FUN_10034940();
        WritePrivateProfileStringW(L"Comm_AUX",L"AUX_SelectDeviceInfo",DAT_1021ae34,&DAT_10212800);
      }
      uVar4 = 1;
      goto LAB_1004798b;
    }
  }
  uVar4 = 0;
LAB_1004798b:
  local_8 = 0xffffffff;
  LOCK();
  piVar1 = (int *)(local_1c + -4);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(**(int **)(local_1c + -0x10) + 4))();
  }
  LOCK();
  piVar1 = (int *)(local_28 + -4);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(**(int **)(local_28 + -0x10) + 4))();
  }
  ExceptionList = local_10;
  return uVar4;
}

