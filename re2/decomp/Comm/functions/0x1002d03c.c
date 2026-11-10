// rea decompile_all
// name: CPropertySheet::GetPageIndex
// address: 0x1002d03c
// body: available
// range: 0x1002d03c-0x1002d073 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CPropertySheet::GetPageIndex(class CPropertyPage *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CPropertySheet::GetPageIndex(CPropertySheet *this,CPropertyPage *param_1)

{
  int iVar1;
  CPropertyPage *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = GetPageCount(this);
  if (0 < iVar1) {
    do {
      pCVar2 = (CPropertyPage *)FUN_1002cff0(iVar3);
      if (pCVar2 == param_1) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar1 = GetPageCount(this);
    } while (iVar3 < iVar1);
  }
  return -1;
}

