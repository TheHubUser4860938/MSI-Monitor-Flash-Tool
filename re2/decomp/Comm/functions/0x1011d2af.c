// rea decompile_all
// name: CMFCRibbonMainPanel::CopyFrom
// address: 0x1011d2af
// body: available
// range: 0x1011d2af-0x1011d368 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonMainPanel::CopyFrom(class CMFCRibbonPanel &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonMainPanel::CopyFrom(CMFCRibbonMainPanel *this,CMFCRibbonPanel *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  CObject *this_00;
  int iVar3;
  
  CMFCRibbonPanel::CopyFrom((CMFCRibbonPanel *)this,param_1);
  iVar3 = 0;
  *(undefined4 *)(this + 0x4f0) = *(undefined4 *)(param_1 + 0x4f0);
  *(undefined4 *)(this + 0x4f4) = *(undefined4 *)(param_1 + 0x4f4);
  *(undefined4 *)(this + 0x50c) = *(undefined4 *)(param_1 + 0x50c);
  *(undefined4 *)(this + 0x510) = 0;
  *(undefined4 *)(this + 0x4f8) = *(undefined4 *)(param_1 + 0x4f8);
  if (*(int *)(param_1 + 0x510) != 0) {
    if (0 < *(int *)(param_1 + 0x4e4)) {
      do {
        piVar1 = (int *)FUN_100d7168(iVar3);
        if (*piVar1 == *(int *)(param_1 + 0x510)) {
          puVar2 = (undefined4 *)FUN_100d7168(iVar3);
          *(undefined4 *)(this + 0x510) = *puVar2;
          break;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x4e4));
    }
    this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonRecentFilesList_101a024c,
                                 *(CObject **)(this + 0x510));
    if (this_00 != (CObject *)0x0) {
      CMFCRibbonButtonsGroup::RemoveAll((CMFCRibbonButtonsGroup *)this_00);
    }
  }
  return;
}

