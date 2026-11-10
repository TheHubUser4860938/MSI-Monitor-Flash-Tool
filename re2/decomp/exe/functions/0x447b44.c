// rea decompile_all
// name: FUN_00447b44
// address: 0x447b44
// body: available
// range: 0x447b44-0x447cc4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x447cc0 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


COleControlSiteOrWnd * FUN_00447b44(CWnd *param_1,COleControlSiteOrWnd *param_2,tagMSG *param_3)

{
  code *pcVar1;
  HWND__ *pHVar2;
  CWnd *pCVar3;
  COleControlSiteOrWnd *pCVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  HWND hWnd;
  BOOL BVar8;
  uint uVar9;
  int local_c;
  int local_8;
  
  if (param_1 != (CWnd *)0x0) {
    local_c = 0;
    pCVar4 = param_2;
    if (param_2 != (COleControlSiteOrWnd *)0x0) {
      if (*(int *)(param_2 + 4) == 0) {
        pHVar2 = *(HWND__ **)param_2;
      }
      else {
        pHVar2 = *(HWND__ **)(*(int *)(param_2 + 4) + 0x24);
      }
      if (pHVar2 != (HWND__ *)0x0) {
        pCVar3 = CWnd::FromHandle(pHVar2);
        pCVar3 = _AfxGetChildControl(param_1,pCVar3);
        if (pCVar3 != (CWnd *)0x0) {
          pCVar4 = _AfxFindSiteOrWnd(param_1,pCVar3);
        }
      }
    }
    while (((pCVar4 = CWnd::GetNextDlgGroupItem(param_1,pCVar4),
            pCVar4 != (COleControlSiteOrWnd *)0x0 && (local_c = local_c + 1, pCVar4 != param_2)) &&
           (local_c < 0x3d))) {
      iVar5 = COccManager::IsMatchingMnemonic(pCVar4,param_3);
      if (iVar5 != 0) {
        return pCVar4;
      }
    }
    iVar5 = FUN_0042f0a0();
    if (iVar5 != 0) {
      local_8 = *(int *)(iVar5 + 0x44);
      if (param_2 == (COleControlSiteOrWnd *)0x0) {
        puVar6 = (undefined4 *)FUN_004ead48(&local_8);
        pCVar4 = (COleControlSiteOrWnd *)*puVar6;
        param_2 = pCVar4;
      }
      else {
        if (local_8 == 0) {
          return (COleControlSiteOrWnd *)0x0;
        }
        pCVar4 = (COleControlSiteOrWnd *)0x0;
        do {
          if (pCVar4 == param_2) break;
          puVar6 = (undefined4 *)FUN_004ead48(&local_8);
          pCVar4 = (COleControlSiteOrWnd *)*puVar6;
        } while (local_8 != 0);
      }
      if ((pCVar4 != (COleControlSiteOrWnd *)0x0) && (param_2 != (COleControlSiteOrWnd *)0x0)) {
        do {
          if (local_8 == 0) {
            local_8 = *(int *)(iVar5 + 0x44);
          }
          puVar6 = (undefined4 *)FUN_004ead48(&local_8);
          pCVar4 = (COleControlSiteOrWnd *)*puVar6;
          iVar7 = COccManager::IsMatchingMnemonic(pCVar4,param_3);
          if (iVar7 != 0) {
            if (pCVar4 != (COleControlSiteOrWnd *)0x0) {
              if (*(int *)(pCVar4 + 4) == 0) {
                hWnd = *(HWND *)pCVar4;
              }
              else {
                hWnd = *(HWND *)(*(int *)(pCVar4 + 4) + 0x24);
              }
              if (hWnd != (HWND)0x0) {
                BVar8 = IsWindowEnabled(hWnd);
                if (BVar8 != 0) {
                  return pCVar4;
                }
                goto LAB_00447ca6;
              }
            }
            if (*(int **)(pCVar4 + 4) == (int *)0x0) goto LAB_00447cc0;
            pcVar1 = *(code **)(**(int **)(pCVar4 + 4) + 0x78);
            guard_check_icall();
            uVar9 = (*pcVar1)();
            if ((uVar9 & 0x8000000) == 0) {
              return pCVar4;
            }
          }
LAB_00447ca6:
        } while (pCVar4 != param_2);
      }
    }
    return (COleControlSiteOrWnd *)0x0;
  }
LAB_00447cc0:
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

