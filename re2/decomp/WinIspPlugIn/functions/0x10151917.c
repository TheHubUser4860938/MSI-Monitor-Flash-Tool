// rea decompile_all
// name: CMFCRibbonQuickAccessToolBar::accDoDefaultAction
// address: 0x10151917
// body: available
// range: 0x10151917-0x101519bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual long __thiscall CMFCRibbonQuickAccessToolBar::accDoDefaultAction(struct
   tagVARIANT)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CMFCRibbonQuickAccessToolBar::accDoDefaultAction
          (CMFCRibbonQuickAccessToolBar *this,short param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  int *piVar2;
  long lVar3;
  undefined **local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  if (param_2 != 3) {
    return -0x7ff8ffa9;
  }
  if (param_4 == 0) {
LAB_101519a1:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    local_24 = CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::vftable;
    local_20 = 0;
    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    local_8 = 0;
    pcVar1 = *(code **)(*(int *)this + 0x1f0);
    guard_check_icall(&local_24);
    (*pcVar1)();
    param_4 = param_4 + -1;
    if ((param_4 < 0) || (local_1c <= param_4)) {
      lVar3 = -0x7ff8ffa9;
    }
    else {
      piVar2 = (int *)FUN_100efaed(param_4);
      if ((int *)*piVar2 == (int *)0x0) {
        CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::
        ~CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>
                  ((CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *)&local_24);
        goto LAB_101519a1;
      }
      pcVar1 = *(code **)(*(int *)*piVar2 + 0x15c);
      guard_check_icall();
      (*pcVar1)();
    }
    CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::
    ~CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>
              ((CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *)&local_24);
  }
  return lVar3;
}

