// rea decompile_all
// name: CMFCRibbonPanel::GetElements
// address: 0x10106982
// body: available
// range: 0x10106982-0x10106a1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCRibbonPanel::GetElements(class CArray<class CMFCRibbonBaseElement
   *,class CMFCRibbonBaseElement *> &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonPanel::GetElements
          (CMFCRibbonPanel *this,CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_8;
  
  local_8 = 0;
  if (0 < *(int *)(this + 0x4e4)) {
    do {
      puVar2 = (undefined4 *)FUN_10151a1d(local_8);
      pcVar1 = *(code **)(*(int *)*puVar2 + 0x1ec);
      guard_check_icall(param_1);
      (*pcVar1)();
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(this + 0x4e4));
  }
  if (*(int *)(this + 0x1b8) != 0) {
    FUN_10100265(*(undefined4 *)(param_1 + 8),this + 0x114);
  }
  pcVar1 = *(code **)(*(int *)this + 0xb4);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    FUN_10100265(*(undefined4 *)(param_1 + 8),this + 0x2e0);
  }
  return;
}

