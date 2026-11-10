// rea decompile_all
// name: FUN_004472f9
// address: 0x4472f9
// body: available
// range: 0x4472f9-0x4476f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4476f3 to 0x447706 FUN_00447706 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

BOOL FUN_004472f9(CWnd *param_1,tagMSG *param_2)

{
  short sVar1;
  ushort uVar2;
  int *piVar3;
  SHORT SVar4;
  HWND pHVar5;
  CWnd *this;
  HWND pHVar6;
  CWnd *pCVar7;
  CWnd *pCVar8;
  int iVar9;
  ulong uVar10;
  COleControlSiteOrWnd *pCVar11;
  BOOL BVar12;
  uint uVar13;
  CWnd *this_00;
  code *pcVar14;
  BOOL BVar15;
  HWND local_30;
  int local_28;
  CWnd *local_18;
  
  BVar15 = 0;
  if (param_1 == (CWnd *)0x0) {
    local_30 = (HWND)0x0;
  }
  else {
    local_30 = *(HWND *)(param_1 + 0x20);
  }
  uVar13 = param_2->message;
  pHVar5 = GetFocus();
  this = CWnd::FromHandle(pHVar5);
  if ((((0xff < uVar13) && (uVar13 < 0x10a)) || (uVar13 - 0x200 < 10)) &&
     (pCVar8 = this, this != (CWnd *)0x0)) {
    do {
      if (*(int *)(pCVar8 + 0x74) != 0) break;
      pHVar6 = GetParent(*(HWND *)(pCVar8 + 0x20));
      pCVar7 = CWnd::FromHandle(pHVar6);
      if (pCVar7 == param_1) break;
      pHVar6 = GetParent(*(HWND *)(pCVar8 + 0x20));
      pCVar8 = CWnd::FromHandle(pHVar6);
    } while (pCVar8 != (CWnd *)0x0);
    if (((pCVar8 != (CWnd *)0x0) && (*(int *)(pCVar8 + 0x74) != 0)) &&
       (piVar3 = *(int **)(*(int *)(pCVar8 + 0x74) + 0x58), piVar3 != (int *)0x0)) {
      pcVar14 = *(code **)(*piVar3 + 0x14);
      guard_check_icall(piVar3,param_2);
      iVar9 = (*pcVar14)();
      if (iVar9 == 0) {
        return 1;
      }
    }
    if ((((uVar13 == 0x101) || (uVar13 == 0x100)) || (uVar13 == 0x102)) &&
       ((pCVar8 != (CWnd *)0x0 && (iVar9 = *(int *)(pCVar8 + 0x74), iVar9 != 0)))) {
      sVar1 = (short)param_2->wParam;
      if ((sVar1 == 0xd) && ((*(byte *)(iVar9 + 0x84) & 1) != 0)) {
        return 0;
      }
      if ((sVar1 == 0x1b) && ((*(byte *)(iVar9 + 0x84) & 2) != 0)) {
        return 0;
      }
    }
  }
  pCVar8 = CWnd::FromHandle(param_2->hwnd);
  local_18 = (CWnd *)0x0;
  local_28 = 0;
  if (uVar13 == 0x100) {
    uVar10 = _AfxGetDlgCode(pCVar8,param_2);
    uVar2 = (ushort)param_2->wParam;
    if (uVar2 < 0x1c) {
      if ((uVar2 == 0x1b) || (uVar2 == 3)) {
        uVar10 = 2;
LAB_0044761e:
        local_18 = _AfxFindDlgItem(param_1,uVar10);
        if (local_18 != (CWnd *)0x0) {
LAB_0044762c:
          iVar9 = CWnd::IsWindowEnabled(local_18);
          if (iVar9 == 0) {
            MessageBeep(0);
          }
          else if (*(int *)(local_18 + 0x74) != 0) {
            CWnd::InvokeHelper(this_00,(long)local_18,0xfdd9,1,(void *)0x0,(uchar *)0x0,0);
            BVar15 = FUN_00447706();
            return BVar15;
          }
        }
      }
      else if (uVar2 == 9) {
        if ((uVar10 & 2) == 0) {
          SVar4 = GetKeyState(0x10);
          pCVar11 = CWnd::GetNextDlgTabItem(param_1,(COleControlSiteOrWnd *)0x0,(uint)(SVar4 < 0));
          if (pCVar11 != (COleControlSiteOrWnd *)0x0) {
            if (*(int **)(pCVar11 + 4) == (int *)0x0) {
              if (*(int *)pCVar11 == 0) {
                pCVar8 = CWnd::GetNextDlgTabItem(param_1,pCVar8,(uint)(SVar4 < 0));
              }
              else {
                pCVar8 = CWnd::FromHandle(*(HWND__ **)pCVar11);
              }
              if (pCVar8 != (CWnd *)0x0) {
                *(undefined4 *)(*(int *)(param_1 + 0x70) + 0x70) = 0;
                _AfxDlgSetFocus(pCVar8);
                COccManager::UIDeactivateIfNecessary(this,pCVar8);
              }
              goto LAB_004477f7;
            }
            pcVar14 = *(code **)(**(int **)(pCVar11 + 4) + 0xac);
            guard_check_icall(param_2);
LAB_00447582:
            (*pcVar14)();
            goto LAB_004477f7;
          }
        }
      }
      else if (uVar2 == 0xd) {
LAB_004475ee:
        if ((uVar10 & 4) == 0) {
          uVar10 = COccManager::GetDefBtnCode(this);
          if ((uVar10 & 0x10) == 0) {
            uVar10 = _AfxOriginalDefButton(param_1);
          }
          else {
            uVar10 = CWnd::GetDlgCtrlID(this);
            local_18 = this;
          }
          if (local_18 == (CWnd *)0x0) goto LAB_0044761e;
          goto LAB_0044762c;
        }
      }
    }
    else if (0x24 < uVar2) {
      if (uVar2 < 0x27) {
        local_28 = 1;
      }
      else if (0x28 < uVar2) {
        if (uVar2 == 0x2b) goto LAB_004475ee;
        goto LAB_00447645;
      }
      uVar10 = _AfxGetDlgCode(this,param_2);
      if ((uVar10 & 1) == 0) {
        if (local_28 == 0) {
          pCVar11 = CWnd::GetNextDlgGroupItem(param_1,(COleControlSiteOrWnd *)0x0);
        }
        else {
          pCVar11 = CWnd::GetPrevDlgGroupItem(param_1,(COleControlSiteOrWnd *)0x0);
        }
        if (pCVar11 != (COleControlSiteOrWnd *)0x0) {
          if (*(int *)(pCVar11 + 8) != 0) {
            CWnd::RemoveRadioCheckFromGroup(param_1,pCVar11);
          }
          if (*(int **)(pCVar11 + 4) != (int *)0x0) {
            pcVar14 = *(code **)(**(int **)(pCVar11 + 4) + 0xac);
            guard_check_icall(param_2);
            goto LAB_00447582;
          }
          if (*(int *)pCVar11 == 0) {
            pCVar8 = CWnd::GetNextDlgGroupItem(param_1,this,local_28);
          }
          else {
            pCVar8 = CWnd::FromHandle(*(HWND__ **)pCVar11);
          }
          if (pCVar8 != (CWnd *)0x0) {
            *(undefined4 *)(*(int *)(param_1 + 0x70) + 0x70) = 0;
            _AfxDlgSetFocus(pCVar8);
            if (*(int *)(pCVar11 + 8) != 0) {
              uVar13 = GetWindowLongW(*(HWND *)(pCVar8 + 0x20),-0xc);
              SendMessageW(*(HWND *)(pCVar8 + 0x20),0xf1,1,0);
              SendMessageW(*(HWND *)(param_1 + 0x20),0x111,uVar13 & 0xffff,
                           *(LPARAM *)(pCVar8 + 0x20));
              _AfxDlgSetFocus(pCVar8);
            }
            goto LAB_004477f7;
          }
        }
      }
    }
  }
  else if ((((uVar13 == 0x102) ||
            ((uVar13 == 0x106 &&
             (((this != (CWnd *)0x0 || (SVar4 = GetKeyState(0x12), SVar4 < 0)) &&
              ((short)param_2->wParam != 0x20)))))) &&
           ((uVar10 = _AfxGetDlgCode(pCVar8,param_2), uVar13 != 0x102 || ((uVar10 & 0x84) == 0))))
          && ((sVar1 = (short)param_2->wParam, sVar1 != 9 || ((uVar10 & 2) == 0)))) {
    if (sVar1 == 0x20) {
      return 0;
    }
    iVar9 = FUN_00447da8(param_1,pCVar8,param_2);
    if ((iVar9 != 0) && (*(int *)(iVar9 + 4) != 0)) {
      FUN_00445c90(param_2);
LAB_004477f7:
      BVar15 = 1;
      goto LAB_00447681;
    }
  }
LAB_00447645:
  if (((*(uint *)(param_1 + 0x60) & 0x1000) == 0) &&
     (BVar15 = IsDialogMessageW(*(HWND *)(param_1 + 0x20),param_2), BVar15 != 0)) {
    pHVar6 = GetFocus();
    pCVar8 = CWnd::FromHandle(pHVar6);
    if (pCVar8 != this) {
      pHVar6 = GetFocus();
      pCVar8 = CWnd::FromHandle(pHVar6);
      COccManager::UIActivateControl(pCVar8);
    }
  }
LAB_00447681:
  BVar12 = IsWindow(pHVar5);
  if (BVar12 != 0) {
    pHVar5 = GetFocus();
    pCVar8 = CWnd::FromHandle(pHVar5);
    COccManager::UIDeactivateIfNecessary(this,pCVar8);
    BVar12 = IsWindow(local_30);
    if (BVar12 != 0) {
      pHVar5 = GetFocus();
      pCVar8 = CWnd::FromHandle(pHVar5);
      _AfxCheckDefPushButton(param_1,this,pCVar8);
    }
  }
  return BVar15;
}

