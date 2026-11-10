// rea decompile_all
// name: CMFCToolBar::OnPromptReset
// address: 0x1009a406
// body: available
// range: 0x1009a406-0x1009a4d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009a467 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: long __thiscall CMFCToolBar::OnPromptReset(unsigned int,long)
   
   Library: Visual Studio 2015 Release */

long __thiscall CMFCToolBar::OnPromptReset(CMFCToolBar *this,uint param_1,long param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  wchar_t *local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x1009a412;
  uVar2 = FUN_10049868();
  FUN_100476a0(uVar2);
  local_8 = 0;
  CWnd::GetWindowTextW
            ((CWnd *)this,
             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
  FUN_10046ce0();
  FUN_10046d90();
  if (*(int *)(local_14[0] + -0xc) == 0) {
    iVar3 = FUN_1004c4e6(0x3ee8);
    if (iVar3 != 0) {
      iVar3 = FUN_10047070(iVar3,0x3ee8);
      if (iVar3 != 0) goto LAB_1009a46c;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1004a383();
  }
LAB_1009a46c:
  uVar2 = FUN_10049868();
  FUN_100476a0(uVar2);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_10096310(&local_18,0x3eef,local_14[0]);
  iVar3 = AfxMessageBox(local_18,0x31,0);
  if (iVar3 == 1) {
    pcVar1 = *(code **)(*(int *)this + 0x388);
    guard_check_icall();
    (*pcVar1)();
  }
  FUN_100476d0();
  FUN_100476d0();
  return 0;
}

