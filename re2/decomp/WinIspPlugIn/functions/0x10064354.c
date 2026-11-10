// rea decompile_all
// name: CPropertyPage::MapWizardResult
// address: 0x10064354
// body: available
// range: 0x10064354-0x100643c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    protected: long __thiscall CPropertyPage::MapWizardResult(long)
   
   Library: Visual Studio 2015 Release */

long __thiscall CPropertyPage::MapWizardResult(CPropertyPage *this,long param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if ((param_1 != -1) && (param_1 != 0)) {
    pcVar1 = *(code **)(*(int *)this + 0x1b0);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      piVar4 = *(int **)(iVar2 + 0xa0);
      iVar5 = 0;
      if (0 < *(int *)(iVar2 + 0xbc)) {
        do {
          iVar3 = FUN_100640b0(iVar5);
          if (*(int *)(*(int *)(iVar3 + 0xa8) + 0xc) == param_1) {
            return piVar4[3];
          }
          piVar4 = (int *)((int)piVar4 + *piVar4);
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(iVar2 + 0xbc));
      }
    }
  }
  return param_1;
}

