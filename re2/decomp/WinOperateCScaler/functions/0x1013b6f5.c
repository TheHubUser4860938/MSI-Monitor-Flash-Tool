// rea decompile_all
// name: CMFCRibbonButtonsGroup::GetLastTabStop
// address: 0x1013b6f5
// body: available
// range: 0x1013b6f5-0x1013b741 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual class CMFCRibbonBaseElement * __thiscall
   CMFCRibbonButtonsGroup::GetLastTabStop(void)
   
   Library: Visual Studio 2015 Release */

CMFCRibbonBaseElement * __thiscall
CMFCRibbonButtonsGroup::GetLastTabStop(CMFCRibbonButtonsGroup *this)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  CMFCRibbonBaseElement *pCVar4;
  
  iVar1 = *(int *)(this + 0x114);
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return (CMFCRibbonBaseElement *)0x0;
    }
    puVar3 = (undefined4 *)FUN_1009f8c7(iVar1);
    pcVar2 = *(code **)(*(int *)*puVar3 + 0x20c);
    guard_check_icall();
    pCVar4 = (CMFCRibbonBaseElement *)(*pcVar2)();
  } while (pCVar4 == (CMFCRibbonBaseElement *)0x0);
  return pCVar4;
}

