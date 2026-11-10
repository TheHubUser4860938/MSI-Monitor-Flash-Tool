// rea decompile_all
// name: CMFCRibbonCategory::SetPanelsLayout
// address: 0x47d8d0
// body: available
// range: 0x47d8d0-0x47d95d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCRibbonCategory::SetPanelsLayout(int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCRibbonCategory::SetPanelsLayout(CMFCRibbonCategory *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_8;
  
  local_8 = 0;
  iVar3 = 0;
  if (0 < *(int *)(this + 0x564)) {
    do {
      piVar2 = (int *)FUN_004ab4cd(iVar3);
      iVar1 = *piVar2;
      *(undefined4 *)(iVar1 + 100) = 0;
      if ((*(int *)(iVar1 + 0xa4) == *(int *)(iVar1 + 0x4d0) + -1) && (1 < *(int *)(iVar1 + 0x4d0)))
      {
        *(undefined4 *)(iVar1 + 100) = 1;
      }
      piVar2 = (int *)FUN_004ab4cd(*(int *)(iVar1 + 0xa4));
      local_8 = local_8 + 2 + *piVar2 + *(int *)(iVar1 + 0xb0) * 2;
      if (param_1 < local_8) {
        return 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(this + 0x564));
  }
  return 1;
}

