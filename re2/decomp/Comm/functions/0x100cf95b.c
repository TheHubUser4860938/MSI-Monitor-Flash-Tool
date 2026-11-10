// rea decompile_all
// name: CMFCRibbonPanel::CalcTotalWidth
// address: 0x100cf95b
// body: available
// range: 0x100cf95b-0x100cf9d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCRibbonPanel::CalcTotalWidth(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCRibbonPanel::CalcTotalWidth(CMFCRibbonPanel *this)

{
  int iVar1;
  int *piVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = *(int *)(this + 0x4e4);
  while (iVar5 = iVar5 + -1, -1 < iVar5) {
    piVar2 = (int *)FUN_100d7168(iVar5);
    iVar1 = *piVar2;
    BVar3 = IsRectEmpty((RECT *)(iVar1 + 0x74));
    if ((BVar3 == 0) && (iVar4 <= *(int *)(iVar1 + 0x7c))) {
      iVar4 = *(int *)(iVar1 + 0x7c);
    }
  }
  iVar4 = (-*(int *)(this + 0xcc) - *(int *)(this + 0xb0) / 2) + -1 + iVar4;
  iVar5 = 0;
  if (-1 < iVar4) {
    iVar5 = iVar4;
  }
  return iVar5;
}

