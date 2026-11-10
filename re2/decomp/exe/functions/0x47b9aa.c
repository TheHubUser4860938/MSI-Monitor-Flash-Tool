// rea decompile_all
// name: CMFCRibbonCategory::FindByID
// address: 0x47b9aa
// body: available
// range: 0x47b9aa-0x47ba20 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CMFCRibbonBaseElement * __thiscall CMFCRibbonCategory::FindByID(unsigned
   int,int)const 
   
   Library: Visual Studio 2015 Release */

CMFCRibbonBaseElement * __thiscall
CMFCRibbonCategory::FindByID(CMFCRibbonCategory *this,uint param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  CMFCRibbonBaseElement *pCVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if ((param_2 == 0) && (iVar4 = 0, 0 < *(int *)(this + 0x7b0))) {
    do {
      piVar1 = (int *)FUN_004ab4cd(iVar4);
      if (*(uint *)((CMFCRibbonBaseElement *)*piVar1 + 0xa4) == param_1) {
        return (CMFCRibbonBaseElement *)*piVar1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(this + 0x7b0));
  }
  if (0 < *(int *)(this + 0x564)) {
    do {
      puVar2 = (undefined4 *)FUN_004ab4cd(iVar5);
      pCVar3 = CMFCRibbonPanel::FindByID((CMFCRibbonPanel *)*puVar2,param_1);
      if (pCVar3 != (CMFCRibbonBaseElement *)0x0) {
        return pCVar3;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(this + 0x564));
  }
  return (CMFCRibbonBaseElement *)0x0;
}

