// rea decompile_all
// name: CMFCRibbonPanel::InsertSeparator
// address: 0x10107b07
// body: available
// range: 0x10107b07-0x10107b85 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCRibbonPanel::InsertSeparator(int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCRibbonPanel::InsertSeparator(CMFCRibbonPanel *this,int param_1)

{
  CMFCRibbonSeparator *this_00;
  int iVar1;
  
  if ((param_1 < 0) || (*(int *)(this + 0x4e4) < param_1)) {
    iVar1 = 0;
  }
  else {
    this_00 = (CMFCRibbonSeparator *)FUN_10047eb4(0x110);
    iVar1 = 0;
    if (this_00 != (CMFCRibbonSeparator *)0x0) {
      iVar1 = CMFCRibbonSeparator::CMFCRibbonSeparator(this_00,0);
    }
    *(undefined4 *)(iVar1 + 0x88) = *(undefined4 *)(this + 0x108);
    if (param_1 == *(int *)(this + 0x4e4)) {
      FUN_10100265(*(undefined4 *)(this + 0x4e4),iVar1);
    }
    else {
      FUN_10103747(param_1,iVar1,1);
    }
    iVar1 = 1;
  }
  return iVar1;
}

