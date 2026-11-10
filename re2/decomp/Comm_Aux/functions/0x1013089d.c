// rea decompile_all
// name: FUN_1013089d
// address: 0x1013089d
// body: available
// range: 0x1013089d-0x10130a3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10130a39 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1013089d(int param_1,int param_2)

{
  code *pcVar1;
  CMDIClientAreaWnd *pCVar2;
  int iVar3;
  undefined4 *puVar4;
  __POSITION *p_Var5;
  int iVar6;
  HWND__ *pHVar7;
  CMDIClientAreaWnd *in_ECX;
  int iVar8;
  int local_10;
  int local_c;
  __POSITION *local_8;
  
  if ((*(int *)(in_ECX + 0x2b30) == 0) && (*(int *)(in_ECX + 0x2a9c) == 0)) {
    FUN_100509af();
  }
  else {
    if (*(int *)(in_ECX + 0x2b30) == 0) {
      pCVar2 = in_ECX + 0x80;
    }
    else {
      pCVar2 = (CMDIClientAreaWnd *)CMDIClientAreaWnd::FindActiveTabWnd(in_ECX);
    }
    if (*(int *)(in_ECX + 0x2b30) == 0) {
      local_8 = (__POSITION *)0x0;
    }
    else {
      local_8 = CObList::Find((CObList *)(in_ECX + 11000),(CObject *)pCVar2,(__POSITION *)0x0);
    }
    if (*(int *)(in_ECX + 0x2b30) == 0) {
      local_10 = 0;
    }
    else {
      local_10 = *(int *)(in_ECX + 0x2b04);
      if (local_8 == (__POSITION *)0x0) goto LAB_10130a39;
    }
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x20c);
    guard_check_icall();
    local_c = (*pcVar1)();
    if (param_2 == 0) {
      local_c = local_c + 1;
    }
    else {
      local_c = local_c + -1;
    }
    if (local_c < 0) {
      if (0 < local_10) {
        FUN_10069da3(&local_8);
        p_Var5 = local_8;
        if (local_8 == (__POSITION *)0x0) {
          p_Var5 = *(__POSITION **)(in_ECX + 0x2b00);
        }
        pCVar2 = (CMDIClientAreaWnd *)
                 AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_101bd71c,
                                    *(CObject **)(p_Var5 + 8));
      }
      if (pCVar2 == (CMDIClientAreaWnd *)0x0) goto LAB_10130a39;
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x1ac);
      guard_check_icall();
      local_c = (*pcVar1)();
      local_c = local_c + -1;
    }
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x1ac);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 <= local_c) {
      if (0 < local_10) {
        puVar4 = (undefined4 *)FUN_10034920(&local_8);
        AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_101bd71c,(CObject *)*puVar4);
        p_Var5 = local_8;
        if (local_8 == (__POSITION *)0x0) {
          p_Var5 = *(__POSITION **)(in_ECX + 0x2afc);
        }
        pCVar2 = (CMDIClientAreaWnd *)
                 AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_101bd71c,
                                    *(CObject **)(p_Var5 + 8));
      }
      if (pCVar2 == (CMDIClientAreaWnd *)0x0) {
LAB_10130a39:
                    /* WARNING: Subroutine does not return */
        FUN_1004886a();
      }
      local_c = 0;
    }
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x1b0);
    guard_check_icall(local_c);
    iVar6 = (*pcVar1)();
    pHVar7 = (HWND__ *)0x0;
    iVar3 = 0;
    if (iVar6 != 0) {
      iVar3 = *(int *)(iVar6 + 0x20);
    }
    if (param_1 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(param_1 + 0x20);
    }
    if (iVar3 != iVar8) {
      if (iVar6 != 0) {
        pHVar7 = *(HWND__ **)(iVar6 + 0x20);
      }
      CMDIClientAreaWnd::SetActiveTab(in_ECX,pHVar7);
    }
  }
  return;
}

