// rea decompile_all
// name: CMFCRibbonPanel::OnSetAccData
// address: 0x100d2f18
// body: available
// range: 0x100d2f18-0x100d2fd6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCRibbonPanel::OnSetAccData(long)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCRibbonPanel::OnSetAccData(CMFCRibbonPanel *this,long param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined **local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  CAccessibilityData *local_18;
  CMFCRibbonPanel *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x100d2f24;
  local_18 = (CAccessibilityData *)(this + 0x20);
  local_14 = this;
  CAccessibilityData::Clear(local_18);
  iVar4 = 0;
  local_2c = CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::vftable;
  local_28 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_8 = 0;
  GetVisibleElements(this,(CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *)&local_2c);
  iVar5 = param_1 + -1;
  if ((-1 < iVar5) && (iVar5 < local_24)) {
    pcVar1 = *(code **)(*(int *)this + 0xa4);
    guard_check_icall();
    iVar4 = (*pcVar1)();
    if ((iVar4 == 0) || (*(int *)(iVar4 + 0x20) == 0)) {
      iVar4 = 1;
    }
    else {
      puVar2 = (undefined4 *)FUN_100d7168(iVar5);
      iVar4 = *(int *)*puVar2;
      pcVar1 = *(code **)(*(int *)local_14 + 0xa4);
      guard_check_icall(local_18);
      uVar3 = (*pcVar1)();
      guard_check_icall(uVar3);
      iVar4 = (**(code **)(iVar4 + 0xac))();
    }
  }
  CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::
  ~CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>
            ((CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *)&local_2c);
  return iVar4;
}

