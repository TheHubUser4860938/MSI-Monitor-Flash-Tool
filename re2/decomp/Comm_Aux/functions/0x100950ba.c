// rea decompile_all
// name: CMFCToolBar::InsertSeparator
// address: 0x100950ba
// body: available
// range: 0x100950ba-0x1009513b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBar::InsertSeparator(int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCToolBar::InsertSeparator(CMFCToolBar *this,int param_1)

{
  code *pcVar1;
  CMFCToolBarButton *this_00;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)0x0;
  if ((*(int *)(this + 0xc48) == 0) || (param_1 == 0)) {
    iVar2 = -1;
  }
  else {
    this_00 = (CMFCToolBarButton *)FUN_10047eb4(0x70);
    if (this_00 != (CMFCToolBarButton *)0x0) {
      piVar3 = (int *)CMFCToolBarButton::CMFCToolBarButton(this_00);
    }
    piVar3[9] = 1;
    pcVar1 = *(code **)(*(int *)this + 0x340);
    guard_check_icall(piVar3,param_1);
    iVar2 = (*pcVar1)();
    if (iVar2 == -1) {
      pcVar1 = *(code **)(*piVar3 + 4);
      guard_check_icall(1);
      (*pcVar1)();
    }
  }
  return iVar2;
}

