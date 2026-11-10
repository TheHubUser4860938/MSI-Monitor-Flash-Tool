// rea decompile_all
// name: CMFCRibbonTab::get_accDefaultAction
// address: 0x10110742
// body: available
// range: 0x10110742-0x101107a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1011077f to 0x10047550 FUN_10047550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __thiscall CMFCRibbonTab::get_accDefaultAction(struct tagVARIANT,wchar_t *
   *)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CMFCRibbonTab::get_accDefaultAction
          (undefined4 param_1,short param_2,undefined4 param_3,int param_4,undefined4 param_5,
          int *param_6)

{
  int iVar1;
  long lVar2;
  int local_14;
  
  if ((param_2 == 3) && (param_4 == 0)) {
    FUN_10047180(L"Switch");
    iVar1 = Ordinal_4(local_14,*(undefined4 *)(local_14 + -0xc));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10047550();
    }
    *param_6 = iVar1;
    FUN_100476d0();
    lVar2 = 0;
  }
  else {
    lVar2 = 1;
  }
  return lVar2;
}

