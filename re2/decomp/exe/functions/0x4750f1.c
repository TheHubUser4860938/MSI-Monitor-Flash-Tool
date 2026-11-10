// rea decompile_all
// name: CMFCRibbonPanel::GetFirstTabStop
// address: 0x4750f1
// body: available
// range: 0x4750f1-0x475224 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: class CMFCRibbonBaseElement * __thiscall CMFCRibbonPanel::GetFirstTabStop(void)const 
   
   Library: Visual Studio 2015 Release */

CMFCRibbonBaseElement * __thiscall CMFCRibbonPanel::GetFirstTabStop(CMFCRibbonPanel *this)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  CMFCRibbonBaseElement *pCVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_8;
  
  iVar7 = 0;
  if (*(int *)(this + 0x110) != 0) {
    local_8 = 0;
    if (0 < *(int *)(this + 0x4e4)) {
      do {
        piVar2 = (int *)FUN_004ab4cd(local_8);
        piVar2 = (int *)*piVar2;
        iVar3 = FUN_0043970d(&PTR_s_CMFCRibbonLabel_005ca074);
        iVar4 = FUN_0043970d(&PTR_s_CMFCRibbonGalleryIcon_005c9d90);
        if (((iVar4 == 0) && (iVar3 == 0)) && (piVar2[0x3e] != 0)) {
          pcVar1 = *(code **)(*piVar2 + 0x208);
          guard_check_icall();
          pCVar5 = (CMFCRibbonBaseElement *)(*pcVar1)();
          if (pCVar5 != (CMFCRibbonBaseElement *)0x0) {
            return pCVar5;
          }
        }
        local_8 = local_8 + 1;
      } while (local_8 < *(int *)(this + 0x4e4));
    }
    local_8 = 0;
    if (*(int *)(this + 0x4e4) < 1) {
      return (CMFCRibbonBaseElement *)0x0;
    }
    do {
      puVar6 = (undefined4 *)FUN_004ab4cd(local_8);
      piVar2 = (int *)*puVar6;
      iVar3 = FUN_0043970d(&PTR_s_CMFCRibbonGalleryIcon_005c9d90);
      if (iVar3 != 0) {
        pcVar1 = *(code **)(*piVar2 + 0x208);
        guard_check_icall();
        pCVar5 = (CMFCRibbonBaseElement *)(*pcVar1)();
        if (pCVar5 != (CMFCRibbonBaseElement *)0x0) {
          return pCVar5;
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(this + 0x4e4));
  }
  if (0 < *(int *)(this + 0x4e4)) {
    do {
      puVar6 = (undefined4 *)FUN_004ab4cd(iVar7);
      pcVar1 = *(code **)(*(int *)*puVar6 + 0x208);
      guard_check_icall();
      pCVar5 = (CMFCRibbonBaseElement *)(*pcVar1)();
      if (pCVar5 != (CMFCRibbonBaseElement *)0x0) {
        return pCVar5;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(this + 0x4e4));
  }
  return (CMFCRibbonBaseElement *)0x0;
}

