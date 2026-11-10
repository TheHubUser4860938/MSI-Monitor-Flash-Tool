// rea decompile_all
// name: CMFCOutlookBarTabCtrl::OnDragOver
// address: 0x101353a7
// body: available
// range: 0x101353a7-0x10135430 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual unsigned long __thiscall CMFCOutlookBarTabCtrl::OnDragOver(class
   COleDataObject *,unsigned long,class CPoint)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCOutlookBarTabCtrl::OnDragOver(CMFCOutlookBarTabCtrl *this,undefined4 param_1,byte param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)FUN_1011dfc2(param_1);
  if (piVar2 != (int *)0x0) {
    iVar3 = FUN_10051e53(&PTR_s_CMFCOutlookBarPaneButton_1023d9e0);
    pcVar1 = *(code **)(*piVar2 + 4);
    if (iVar3 == 0) {
      guard_check_icall(1);
      (*pcVar1)();
    }
    else {
      guard_check_icall(1);
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)this + 0x218);
      guard_check_icall(&stack0x0000000c);
      iVar3 = (*pcVar1)();
      if (-1 < iVar3) {
        pcVar1 = *(code **)(*(int *)this + 0x214);
        guard_check_icall(iVar3);
        (*pcVar1)();
        return ((param_2 & 8) == 0) + 1;
      }
    }
  }
  return 0;
}

