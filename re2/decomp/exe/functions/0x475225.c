// rea decompile_all
// name: CMFCRibbonPanel::GetFocused
// address: 0x475225
// body: available
// range: 0x475225-0x4752ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CMFCRibbonBaseElement * __thiscall CMFCRibbonPanel::GetFocused(void)const 
   
   Library: Visual Studio 2015 Release */

CMFCRibbonBaseElement * __thiscall CMFCRibbonPanel::GetFocused(CMFCRibbonPanel *this)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  undefined4 *puVar4;
  CMFCRibbonBaseElement *pCVar5;
  
  BVar2 = IsRectEmpty((RECT *)(this + 0x354));
  if (BVar2 == 0) {
    pcVar1 = *(code **)(*(int *)(this + 0x2e0) + 0xd4);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) {
      return (CMFCRibbonBaseElement *)(this + 0x2e0);
    }
  }
  pCVar5 = (CMFCRibbonBaseElement *)(this + 0x114);
  pcVar1 = *(code **)(*(int *)pCVar5 + 0xd4);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    if (0 < *(int *)(this + 0x4e4)) {
      iVar3 = 0;
      do {
        puVar4 = (undefined4 *)FUN_004ab4cd(iVar3);
        pcVar1 = *(code **)(*(int *)*puVar4 + 0x1cc);
        guard_check_icall();
        pCVar5 = (CMFCRibbonBaseElement *)(*pcVar1)();
        if (pCVar5 != (CMFCRibbonBaseElement *)0x0) {
          return pCVar5;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(this + 0x4e4));
    }
    pCVar5 = (CMFCRibbonBaseElement *)0x0;
  }
  return pCVar5;
}

