// rea decompile_all
// name: FUN_100c7f21
// address: 0x100c7f21
// body: available
// range: 0x100c7f21-0x100c8066 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c8062 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100c7f21(void)

{
  int *piVar1;
  code *pcVar2;
  AFX_MODULE_STATE *pAVar3;
  int iVar4;
  int iVar5;
  HACCEL pHVar6;
  CWnd *pCVar7;
  CObject *pCVar8;
  uint uVar9;
  int local_c [2];
  
  pAVar3 = AfxGetModuleState();
  piVar1 = *(int **)(*(int *)(pAVar3 + 4) + 0x5c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    guard_check_icall();
    local_c[0] = (*pcVar2)();
    while (local_c[0] != 0) {
      pcVar2 = *(code **)(*piVar1 + 0x14);
      guard_check_icall(local_c);
      iVar4 = (*pcVar2)();
      iVar5 = FUN_10051e53(&PTR_s_CMultiDocTemplate_101f5074);
      if ((iVar5 != 0) && (*(int *)(iVar4 + 0x8c) != 0)) {
        uVar9 = *(uint *)(iVar4 + 0x54);
        if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1004a383();
        }
        pAVar3 = AfxGetModuleState();
        pHVar6 = LoadAcceleratorsW(*(HINSTANCE *)(pAVar3 + 0xc),(LPCWSTR)(uVar9 & 0xffff));
        if (pHVar6 != (HACCEL)0x0) {
          FUN_100c81c8(iVar4,pHVar6,0);
        }
      }
    }
  }
  pCVar7 = AfxGetMainWnd();
  pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_101e3440,(CObject *)pCVar7);
  if ((pCVar8 != (CObject *)0x0) && (*(int *)(pCVar8 + 0x8c) != 0)) {
    pCVar7 = AfxGetMainWnd();
    pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_101e9630,(CObject *)pCVar7);
    if (pCVar8 == (CObject *)0x0) {
      pCVar7 = AfxGetMainWnd();
      pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_101e90a0,(CObject *)pCVar7);
      if (pCVar8 == (CObject *)0x0) {
        pCVar7 = AfxGetMainWnd();
        pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleIPFrameWndEx_101e9c40,
                                    (CObject *)pCVar7);
        if (pCVar8 == (CObject *)0x0) {
          return;
        }
        uVar9 = *(uint *)(pCVar8 + 0x1b4);
      }
      else {
        uVar9 = *(uint *)(pCVar8 + 0x140);
      }
    }
    else {
      uVar9 = *(uint *)(pCVar8 + 0x35c);
    }
    if (uVar9 != 0) {
      pAVar3 = AfxGetModuleState();
      pHVar6 = LoadAcceleratorsW(*(HINSTANCE *)(pAVar3 + 0xc),(LPCWSTR)(uVar9 & 0xffff));
      if (pHVar6 != (HACCEL)0x0) {
        FUN_100c81c8(0,pHVar6,0);
      }
    }
  }
  return;
}

