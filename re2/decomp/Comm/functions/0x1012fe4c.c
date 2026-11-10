// rea decompile_all
// name: CMFCRibbonButtonsGroup::CopyFrom
// address: 0x1012fe4c
// body: available
// range: 0x1012fe4c-0x1012ff21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonButtonsGroup::CopyFrom(class CMFCRibbonBaseElement
   const &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonButtonsGroup::CopyFrom(CMFCRibbonButtonsGroup *this,CMFCRibbonBaseElement *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *piVar3;
  int local_8;
  
  CMFCRibbonBaseElement::CopyFrom((CMFCRibbonBaseElement *)this,param_1);
  RemoveAll(this);
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x114)) {
    do {
      puVar2 = (undefined4 *)FUN_100d7168(local_8);
      puVar2 = (undefined4 *)*puVar2;
      pcVar1 = *(code **)*puVar2;
      guard_check_icall();
      (*pcVar1)();
      piVar3 = (int *)FUN_10019cd8();
      pcVar1 = *(code **)(*piVar3 + 0x168);
      guard_check_icall(puVar2);
      (*pcVar1)();
      FUN_100c9f11(*(undefined4 *)(this + 0x114),piVar3);
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(param_1 + 0x114));
  }
  CMFCToolBarImages::CopyTo
            ((CMFCToolBarImages *)(param_1 + 0x120),(CMFCToolBarImages *)(this + 0x120));
  CMFCToolBarImages::CopyTo
            ((CMFCToolBarImages *)(param_1 + 0x238),(CMFCToolBarImages *)(this + 0x238));
  CMFCToolBarImages::CopyTo
            ((CMFCToolBarImages *)(param_1 + 0x350),(CMFCToolBarImages *)(this + 0x350));
  return;
}

