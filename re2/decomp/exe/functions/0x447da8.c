// rea decompile_all
// name: FUN_00447da8
// address: 0x447da8
// body: available
// range: 0x447da8-0x447ebb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x447eb7 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


COleControlSiteOrWnd * FUN_00447da8(CWnd *param_1,CWnd *param_2,undefined4 param_3)

{
  code *pcVar1;
  COleControlSiteOrWnd *pCVar2;
  int iVar3;
  int *piVar4;
  HWND pHVar5;
  COleControlSiteOrWnd *pCVar6;
  int iVar7;
  BOOL BVar8;
  uint uVar9;
  COleControlSiteOrWnd *pCVar10;
  int *local_c;
  COleControlSiteOrWnd *local_8;
  
  local_8 = (COleControlSiteOrWnd *)0x0;
  pCVar2 = _AfxFindSiteOrWnd(param_1,param_2);
  pCVar10 = (COleControlSiteOrWnd *)0x0;
  pCVar6 = pCVar2;
  if ((pCVar2 == (COleControlSiteOrWnd *)0x0) &&
     (iVar3 = FUN_0042f0a0(), pCVar10 = local_8, iVar3 != 0)) {
    local_c = *(int **)(iVar3 + 0x44);
    while (pCVar10 = local_8, pCVar6 = pCVar2, local_c != (int *)0x0) {
      piVar4 = (int *)FUN_004ead48(&local_c);
      pCVar6 = (COleControlSiteOrWnd *)*piVar4;
      if (((*(int *)(pCVar6 + 4) != 0) &&
          (pCVar10 = local_8, *(int *)(pCVar6 + 4) == *(int *)(iVar3 + 0x70))) ||
         ((*(int *)pCVar6 != 0 &&
          (pHVar5 = GetFocus(), pCVar10 = local_8, *(HWND *)pCVar6 == pHVar5)))) break;
    }
  }
  iVar3 = 0;
  do {
    pCVar6 = (COleControlSiteOrWnd *)FUN_00447b44(param_1,pCVar6,param_3);
    if (pCVar6 == (COleControlSiteOrWnd *)0x0) {
      return (COleControlSiteOrWnd *)0x0;
    }
    iVar7 = COccManager::IsLabelControl(pCVar6);
    if ((iVar7 != 0) &&
       (pCVar6 = CWnd::GetNextDlgTabItem(param_1,pCVar6,0), pCVar6 == (COleControlSiteOrWnd *)0x0))
    {
      return (COleControlSiteOrWnd *)0x0;
    }
    if (pCVar6 == (COleControlSiteOrWnd *)0x0) {
LAB_00447e6d:
      local_c = *(int **)(pCVar6 + 4);
      if (local_c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00429127();
      }
      pcVar1 = *(code **)(*local_c + 0x78);
      guard_check_icall();
      uVar9 = (*pcVar1)();
      pCVar10 = local_8;
      if ((uVar9 & 0x8000000) == 0) {
        return pCVar6;
      }
    }
    else {
      if (*(int *)(pCVar6 + 4) == 0) {
        pHVar5 = *(HWND *)pCVar6;
      }
      else {
        pHVar5 = *(HWND *)(*(int *)(pCVar6 + 4) + 0x24);
      }
      if (pHVar5 == (HWND)0x0) goto LAB_00447e6d;
      BVar8 = IsWindowEnabled(pHVar5);
      if (BVar8 != 0) {
        return pCVar6;
      }
    }
    if (pCVar6 == pCVar10) {
      return (COleControlSiteOrWnd *)0x0;
    }
    if (pCVar10 == (COleControlSiteOrWnd *)0x0) {
      pCVar10 = pCVar6;
      local_8 = pCVar6;
    }
    iVar3 = iVar3 + 1;
    if (0x1ff < iVar3) {
      return (COleControlSiteOrWnd *)0x0;
    }
  } while( true );
}

