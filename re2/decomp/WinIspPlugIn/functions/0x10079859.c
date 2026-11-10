// rea decompile_all
// name: FUN_10079859
// address: 0x10079859
// body: available
// range: 0x10079859-0x10079903 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100798ff to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10079859(uint param_1,uint param_2,int param_3,long *param_4)

{
  code *pcVar1;
  CMFCShellListCtrl *pCVar2;
  LRESULT LVar3;
  undefined4 uVar4;
  int iVar5;
  CMFCShellTreeCtrl *in_ECX;
  
  if ((param_1 == 0x4e) && (*(int *)(in_ECX + 0x84) == 0)) {
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1004a383();
    }
    if (((*(int *)(param_3 + 8) == -0x1c3) &&
        (pCVar2 = CMFCShellTreeCtrl::GetRelatedList(in_ECX), pCVar2 != (CMFCShellListCtrl *)0x0)) &&
       (LVar3 = SendMessageW(*(HWND *)(in_ECX + 0x20),0x110a,9,0), LVar3 != 0)) {
      LVar3 = SendMessageW(*(HWND *)(in_ECX + 0x20),0x110a,9,0);
      uVar4 = FUN_1007c701(LVar3);
      *(undefined4 *)(pCVar2 + 0x16c) = 1;
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x188);
      guard_check_icall(uVar4);
      (*pcVar1)();
      *(undefined4 *)(pCVar2 + 0x16c) = 0;
      return 1;
    }
  }
  iVar5 = CWnd::OnChildNotify((CWnd *)in_ECX,param_1,param_2,param_3,param_4);
  return iVar5;
}

