// rea decompile_all
// name: CMFCRibbonCategory::SetACCData
// address: 0x1010fdb5
// body: available
// range: 0x1010fdb5-0x1010fe14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCRibbonCategory::SetACCData(class CWnd *,class
   CAccessibilityData &)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCRibbonCategory::SetACCData(CMFCRibbonCategory *this,CWnd *param_1,CAccessibilityData *param_2)

{
  CWnd *this_00;
  
  FUN_100475f0(this + 0x8c);
  *(undefined4 *)(param_2 + 0x18) = 0x16;
  FUN_10047140(L"Group");
  ((tagRECT *)(param_2 + 0x24))->left = *(LONG *)(this + 0x7c);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(this + 0x80);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(this + 0x84);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(this + 0x88);
  this_00 = *(CWnd **)(this + 0x53c);
  if ((this_00 != (CWnd *)0x0) && (*(int *)(this_00 + 0x20) != 0)) {
    CWnd::ClientToScreen(this_00,(tagRECT *)(param_2 + 0x24));
  }
  *(undefined4 *)(param_2 + 0x1c) = 0;
  return 1;
}

