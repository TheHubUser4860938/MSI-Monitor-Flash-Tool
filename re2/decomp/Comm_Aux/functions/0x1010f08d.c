// rea decompile_all
// name: CMFCRibbonCategory::SetActive
// address: 0x1010f08d
// body: available
// range: 0x1010f08d-0x1010f142 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonCategory::SetActive(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonCategory::SetActive(CMFCRibbonCategory *this,int param_1)

{
  code *pcVar1;
  AFX_GLOBAL_DATA *this_00;
  int iVar2;
  undefined4 *puVar3;
  clock_t cVar4;
  int local_8;
  
  if (*(int *)(this + 100) == param_1) {
    return;
  }
  if ((*(byte *)(*(int *)(this + 0x53c) + 0x330) & 1) != 0) {
    *(int *)(this + 100) = param_1;
    return;
  }
  local_8 = 0;
  if (*(int *)(*(int *)(this + 0x53c) + 0x2f0) != 0) {
    this_00 = GetGlobalData();
    iVar2 = AFX_GLOBAL_DATA::IsDwmCompositionEnabled(this_00);
    if (iVar2 != 0) goto LAB_1010f0df;
  }
  ShowElements(this,1);
LAB_1010f0df:
  *(int *)(this + 100) = param_1;
  if (0 < *(int *)(this + 0x564)) {
    do {
      puVar3 = (undefined4 *)FUN_10151a1d(local_8);
      pcVar1 = *(code **)(*(int *)*puVar3 + 0x104);
      guard_check_icall(param_1);
      (*pcVar1)();
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(this + 0x564));
  }
  if (param_1 == 0) {
    cVar4 = -1;
  }
  else {
    cVar4 = _clock();
  }
  *(clock_t *)(this + 0x570) = cVar4;
  return;
}

