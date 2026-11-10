// rea decompile_all
// name: CMFCTasksPaneToolBarCmdUI::SetText
// address: 0x10150d7e
// body: available
// range: 0x10150d7e-0x10150e60 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10150d92 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCTasksPaneToolBarCmdUI::SetText(wchar_t const *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCTasksPaneToolBarCmdUI::SetText(CMFCTasksPaneToolBarCmdUI *this,wchar_t *param_1)

{
  CMFCTasksPane *this_00;
  int iVar1;
  undefined4 uVar2;
  CMFCTasksPaneTaskGroup *pCVar3;
  int *piVar4;
  int iVar5;
  int local_18;
  int local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x10150d8a;
  if ((param_1 != (wchar_t *)0x0) &&
     (this_00 = *(CMFCTasksPane **)(this + 0x14), this_00 != (CMFCTasksPane *)0x0)) {
    FUN_100185a0(param_1);
    local_8 = 0;
    iVar1 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                      ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       local_14,L'\t',0);
    if (iVar1 != -1) {
      uVar2 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Left
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         local_14,(int)&local_18);
      local_8._0_1_ = 1;
      FUN_10018680(uVar2);
      local_8 = (uint)local_8._1_3_ << 8;
      ATL::CStringData::Release((CStringData *)(local_18 + -0x10));
    }
    pCVar3 = CMFCTasksPane::GetTaskGroup(this_00,*(int *)(this + 8));
    if (pCVar3 != (CMFCTasksPaneTaskGroup *)0x0) {
      local_18 = *(int *)(pCVar3 + 0x10);
      while (local_18 != 0) {
        piVar4 = (int *)FUN_100972dc(&local_18);
        iVar1 = *piVar4;
        if ((*(int *)(iVar1 + 0x24) == *(int *)(this + 4)) &&
           (iVar5 = FUN_10030ace(local_14[0]), iVar5 != 0)) {
          FUN_10018680(local_14);
          InvalidateRect(*(HWND *)(this_00 + 0x20),(RECT *)(iVar1 + 0xc),1);
        }
      }
    }
    ATL::CStringData::Release((CStringData *)(local_14[0] + -0x10));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1001d023();
}

