// rea decompile_all
// name: FUN_100c7498
// address: 0x100c7498
// body: available
// range: 0x100c7498-0x100c75a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c75a4 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100c7498(int *param_1,int param_2,CObject *param_3)

{
  code *pcVar1;
  CWnd *pCVar2;
  CFrameWnd *pCVar3;
  HACCEL hAccel;
  int local_10;
  int local_c;
  int *local_8;
  
  if (param_2 != 0) {
    if (param_1 == (int *)0x0) {
      if (param_3 == (CObject *)0x0) {
        pCVar2 = AfxGetMainWnd();
        param_3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_101bf4c8,(CObject *)pCVar2);
        if (param_3 == (CObject *)0x0) {
          return 0;
        }
      }
      hAccel = *(HACCEL *)(param_3 + 0x8c);
      *(int *)(param_3 + 0x8c) = param_2;
    }
    else {
      if ((param_3 != (CObject *)0x0) || (hAccel = (HACCEL)param_1[0x23], hAccel == (HACCEL)0x0))
      goto LAB_100c75a4;
      param_1[0x23] = param_2;
      pcVar1 = *(code **)(*param_1 + 0x54);
      guard_check_icall();
      local_10 = (*pcVar1)();
      while (local_10 != 0) {
        pcVar1 = *(code **)(*param_1 + 0x58);
        guard_check_icall(&local_10);
        local_8 = (int *)(*pcVar1)();
        pcVar1 = *(code **)(*local_8 + 0x68);
        guard_check_icall();
        local_c = (*pcVar1)();
        while (local_c != 0) {
          pcVar1 = *(code **)(*local_8 + 0x6c);
          guard_check_icall(&local_c);
          pCVar2 = (CWnd *)(*pcVar1)();
          pCVar3 = CWnd::GetParentFrame(pCVar2);
          if (*(HACCEL *)(pCVar3 + 0x8c) == hAccel) {
            *(int *)(pCVar3 + 0x8c) = param_2;
          }
        }
        local_c = 0;
      }
    }
    if (hAccel == (HACCEL)0x0) {
      return 0;
    }
    DestroyAcceleratorTable(hAccel);
    return 1;
  }
LAB_100c75a4:
                    /* WARNING: Subroutine does not return */
  FUN_1004886a();
}

