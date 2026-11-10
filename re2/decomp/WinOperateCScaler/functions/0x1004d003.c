// rea decompile_all
// name: CMFCPropertyGridCtrl::get_accDescription
// address: 0x1004d003
// body: available
// range: 0x1004d003-0x1004d08e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004d073 to 0x10018fb0 FUN_10018fb0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __thiscall CMFCPropertyGridCtrl::get_accDescription(struct
   tagVARIANT,wchar_t * *)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CMFCPropertyGridCtrl::get_accDescription
          (CMFCPropertyGridCtrl *this,short param_2,undefined4 param_3,int param_4,
          undefined4 param_5,int *param_6)

{
  long lVar1;
  int iVar2;
  int local_14;
  
  if (((param_2 == 3) || (param_4 == 0)) && (param_6 != (int *)0x0)) {
    if ((param_2 == 3) && (param_4 == 0)) {
      iVar2 = Ordinal_2(L"PropertyList");
      *param_6 = iVar2;
    }
    else if (*(int *)(this + 0x404) != 0) {
      FUN_100185a0(*(undefined4 *)(*(int *)(this + 0x404) + 0x88));
      iVar2 = Ordinal_4(local_14,*(undefined4 *)(local_14 + -0xc));
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_10018fb0();
      }
      *param_6 = iVar2;
      ATL::CStringData::Release((CStringData *)(local_14 + -0x10));
    }
    lVar1 = 0;
  }
  else {
    lVar1 = -0x7ff8ffa9;
  }
  return lVar1;
}

