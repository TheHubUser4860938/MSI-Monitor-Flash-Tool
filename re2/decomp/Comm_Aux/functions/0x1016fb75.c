// rea decompile_all
// name: CMFCToolBarsKeyboardPropertyPage::AddKeyEntry
// address: 0x1016fb75
// body: available
// range: 0x1016fb75-0x1016fc00 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1016fb89 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarsKeyboardPropertyPage::AddKeyEntry(struct tagACCEL *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarsKeyboardPropertyPage::AddKeyEntry
          (CMFCToolBarsKeyboardPropertyPage *this,tagACCEL *param_1)

{
  undefined4 uVar1;
  WPARAM wParam;
  CMFCAcceleratorKey local_1c [8];
  LPARAM local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x1016fb81;
  if (param_1 == (tagACCEL *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
  }
  CMFCAcceleratorKey::CMFCAcceleratorKey(local_1c,param_1);
  local_8 = 0;
  uVar1 = FUN_10048e90();
  FUN_10034c30(uVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  CMFCAcceleratorKey::Format
            (local_1c,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14
            );
  wParam = SendMessageW(*(HWND *)(this + 0x378),0x180,0,local_14[0]);
  SendMessageW(*(HWND *)(this + 0x378),0x19a,wParam,(LPARAM)param_1);
  FUN_10034f00();
  FUN_100c6dc2();
  return;
}

