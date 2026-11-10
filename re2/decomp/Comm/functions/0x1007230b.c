// rea decompile_all
// name: FUN_1007230b
// address: 0x1007230b
// body: available
// range: 0x1007230b-0x100723a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100723a1 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1007230b(undefined4 param_1,int *param_2,undefined4 param_3)

{
  CWnd *pCVar1;
  undefined4 uVar2;
  int iVar3;
  CMFCTabCtrl *in_ECX;
  
  uVar2 = FUN_1001e943(param_1,param_2,param_3);
  if (param_2 != (int *)0x0) {
    if (param_2[2] == -0x209) {
      pCVar1 = *(CWnd **)(in_ECX + 0xf8);
      if ((pCVar1 != (CWnd *)0x0) && (*(int *)(pCVar1 + 0x20) != 0)) {
        CWnd::SetWindowPos(pCVar1,(CWnd *)&DAT_101da328,-1,-1,-1,-1,0x13);
      }
      pCVar1 = *(CWnd **)(in_ECX + 0xfc);
      if ((pCVar1 != (CWnd *)0x0) && (*(int *)(pCVar1 + 0x20) != 0)) {
        if (pCVar1 == (CWnd *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(pCVar1 + 0x20);
        }
        if (*param_2 == iVar3) {
          CWnd::SetWindowPos(pCVar1,(CWnd *)&DAT_101da328,-1,-1,-1,-1,0x13);
        }
      }
    }
    if (param_2[2] == -0x141) {
      CMFCTabCtrl::SynchronizeScrollBar(in_ECX,(tagSCROLLINFO *)0x0);
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10012a3f();
}

