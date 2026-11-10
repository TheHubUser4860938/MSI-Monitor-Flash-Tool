// rea decompile_all
// name: CMFCLinkCtrl::OnDraw
// address: 0x1006f5a3
// body: available
// range: 0x1006f5a3-0x1006f6bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006f5f8 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCLinkCtrl::OnDraw(class CDC *,class CRect const &,unsigned
   int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCLinkCtrl::OnDraw(CMFCLinkCtrl *this,CDC *param_1,CRect *param_2,uint param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  AFX_GLOBAL_DATA *pAVar4;
  undefined4 uVar5;
  int local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x1006f5af;
  if ((*(int *)(this + 0x7ac) == 0) && (*(int *)(this + 0xbc) == 0)) {
    iVar3 = FUN_1006c137(param_1);
  }
  else {
    iVar3 = *(int *)param_1;
    pAVar4 = GetGlobalData();
    guard_check_icall(pAVar4 + 0x144);
    iVar3 = (**(code **)(iVar3 + 0x28))();
  }
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
  }
  if (*(int *)(this + 0xbc) == 0) {
    if (*(int *)(this + 0x7b4) == 0) {
      pAVar4 = GetGlobalData();
      uVar5 = *(undefined4 *)(pAVar4 + 0x44);
    }
    else {
      pAVar4 = GetGlobalData();
      uVar5 = *(undefined4 *)(pAVar4 + 0x4c);
    }
  }
  else {
    pAVar4 = GetGlobalData();
    uVar5 = *(undefined4 *)(pAVar4 + 0x48);
  }
  pcVar1 = *(code **)(*(int *)param_1 + 0x30);
  guard_check_icall(uVar5);
  (*pcVar1)();
  CDC::SetBkMode(param_1,1);
  uVar5 = FUN_10048e90();
  FUN_10034c30(uVar5);
  local_8 = 0;
  CWnd::GetWindowTextW
            ((CWnd *)this,
             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_28);
  local_24 = *(undefined4 *)param_2;
  uStack_20 = *(undefined4 *)(param_2 + 4);
  uStack_1c = *(undefined4 *)(param_2 + 8);
  uStack_18 = *(undefined4 *)(param_2 + 0xc);
  iVar2 = *(int *)param_1;
  guard_check_icall(local_28,*(undefined4 *)(local_28 + -0xc),&local_24,
                    (-(uint)(*(int *)(this + 0x7a8) != 0) & 0xfffffff0) + 0x20);
  (**(code **)(iVar2 + 0x68))();
  pcVar1 = *(code **)(*(int *)param_1 + 0x28);
  guard_check_icall(iVar3);
  (*pcVar1)();
  FUN_10034f00();
  FUN_1017f5f4();
  return;
}

