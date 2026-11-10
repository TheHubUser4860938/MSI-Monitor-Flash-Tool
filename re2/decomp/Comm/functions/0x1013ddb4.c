// rea decompile_all
// name: FUN_1013ddb4
// address: 0x1013ddb4
// body: available
// range: 0x1013ddb4-0x1013e20b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1013e207 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1013ddb4(uint param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  HWND pHVar6;
  CWnd *pCVar7;
  CObject *pCVar8;
  undefined4 uVar9;
  RECT *lpRect;
  CMFCColorPickerCtrl *in_ECX;
  int iVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  iVar11 = *(int *)(in_ECX + 0x80);
  if (iVar11 == 1) {
    CMFCColorPickerCtrl::GetCursorRect(in_ECX);
    InflateRect(&local_18,1,1);
    dVar14 = *(double *)(in_ECX + 0x88);
    if (param_1 == 0x26) {
      dVar13 = *(double *)(in_ECX + 0x88) + 0.05;
LAB_1013e18f:
      *(double *)(in_ECX + 0x88) = dVar13;
    }
    else if (param_1 == 0x28) {
      dVar13 = *(double *)(in_ECX + 0x88) - 0.05;
      goto LAB_1013e18f;
    }
    dVar13 = 0.0;
    if ((*(double *)(in_ECX + 0x88) < 0.0) || (*(double *)(in_ECX + 0x88) <= 1.0)) {
      if (0.0 <= *(double *)(in_ECX + 0x88)) {
        dVar13 = *(double *)(in_ECX + 0x88);
      }
    }
    else {
      dVar13 = 1.0;
    }
    *(double *)(in_ECX + 0x88) = dVar13;
    if (dVar13 == dVar14) goto LAB_1013e0e2;
    dVar14 = *(double *)(in_ECX + 0x90);
    dVar2 = *(double *)(in_ECX + 0x98);
  }
  else {
    if (iVar11 != 2) {
      if ((iVar11 - 3U < 2) && (iVar11 = 0, 0 < *(int *)(in_ECX + 0xc0))) {
        do {
          piVar4 = (int *)FUN_100d7168();
          iVar3 = *piVar4;
          if (*(int *)(iVar3 + 0x34) == *(int *)(in_ECX + 0xa0)) {
            if (*(int *)(in_ECX + 0x80) == 3) {
              iVar11 = *(int *)(iVar3 + 0x3c);
              iVar10 = *(int *)(iVar3 + 0x40);
              iVar12 = iVar10;
              if (param_1 == 0x25) {
                iVar5 = iVar11 - *(int *)(iVar3 + 0x44);
              }
              else if (param_1 == 0x26) {
                iVar5 = -(*(int *)(iVar3 + 0x44) / 2);
                iVar12 = -*(int *)(iVar3 + 0x44);
LAB_1013de7f:
                iVar12 = iVar10 + iVar12;
                iVar5 = iVar11 + iVar5;
                iVar10 = *(int *)(iVar3 + 0x40);
              }
              else if (param_1 == 0x27) {
                iVar5 = iVar11 + *(int *)(iVar3 + 0x44);
              }
              else {
                iVar5 = iVar11;
                if (param_1 == 0x28) {
                  iVar5 = *(int *)(iVar3 + 0x44) / 2;
                  iVar12 = *(int *)(iVar3 + 0x44);
                  goto LAB_1013de7f;
                }
              }
              if ((iVar5 == iVar11) && (iVar12 == iVar10)) break;
              iVar11 = CMFCColorPickerCtrl::SelectCellHexagon(in_ECX,iVar5,iVar12);
              if (iVar11 == 0) {
                if (param_1 == 0x28) {
                  pHVar6 = GetParent(*(HWND *)(in_ECX + 0x20));
                  pCVar7 = CWnd::FromHandle(pHVar6);
                  pCVar8 = AfxDynamicDownCast((CRuntimeClass *)
                                              &PTR_s_CMFCStandardColorsPropertyPage_101a6bd0,
                                              (CObject *)pCVar7);
                  if ((pCVar8 != (CObject *)0x0) && (0 < *(int *)(pCVar8 + 600))) {
                    CWnd::SetFocus((CWnd *)(pCVar8 + 0x198));
                    if (*(int *)(pCVar8 + 600) < 1) {
LAB_1013e207:
                    /* WARNING: Subroutine does not return */
                      FUN_10012a3f();
                    }
                    piVar4 = *(int **)(pCVar8 + 0x254);
LAB_1013df43:
                    iVar11 = *piVar4;
                    goto LAB_1013df9b;
                  }
                }
                break;
              }
            }
            else {
              if (param_1 < 0x25) break;
              if (0x26 < param_1) {
                if ((param_1 < 0x29) && (iVar11 < *(int *)(in_ECX + 0xc0) + -1)) {
LAB_1013df37:
                  piVar4 = (int *)FUN_100d7168();
                  goto LAB_1013df43;
                }
                break;
              }
              if (0 < iVar11) goto LAB_1013df37;
              pHVar6 = GetParent(*(HWND *)(in_ECX + 0x20));
              pCVar7 = CWnd::FromHandle(pHVar6);
              pCVar8 = AfxDynamicDownCast((CRuntimeClass *)
                                          &PTR_s_CMFCStandardColorsPropertyPage_101a6bd0,
                                          (CObject *)pCVar7);
              if ((pCVar8 == (CObject *)0x0) || (*(int *)(pCVar8 + 0x188) < 1)) break;
              CWnd::SetFocus((CWnd *)(pCVar8 + 200));
              if (*(int *)(pCVar8 + 0x188) < 2) goto LAB_1013e207;
              iVar11 = *(int *)(*(int *)(pCVar8 + 0x184) + 4);
LAB_1013df9b:
              if (iVar11 == 0) break;
              CMFCColorPickerCtrl::SetColor(in_ECX,*(ulong *)(iVar11 + 0x34));
            }
            RedrawWindow(*(HWND *)(in_ECX + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
            goto LAB_1013e143;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(in_ECX + 0xc0));
      }
      goto LAB_1013e0e2;
    }
    CMFCColorPickerCtrl::GetCursorRect(in_ECX);
    InflateRect(&local_18,1,1);
    dVar13 = *(double *)(in_ECX + 0x90);
    dVar1 = *(double *)(in_ECX + 0x98);
    if (param_1 == 0x25) {
      dVar14 = *(double *)(in_ECX + 0x98) - 0.05;
LAB_1013e038:
      *(double *)(in_ECX + 0x98) = dVar14;
    }
    else if (param_1 == 0x26) {
      dVar14 = *(double *)(in_ECX + 0x90) + 0.05;
LAB_1013e024:
      *(double *)(in_ECX + 0x90) = dVar14;
    }
    else {
      if (param_1 == 0x27) {
        dVar14 = *(double *)(in_ECX + 0x98) + 0.05;
        goto LAB_1013e038;
      }
      if (param_1 == 0x28) {
        dVar14 = *(double *)(in_ECX + 0x90) - 0.05;
        goto LAB_1013e024;
      }
    }
    dVar14 = 1.0;
    if ((*(double *)(in_ECX + 0x90) < 0.0) || (*(double *)(in_ECX + 0x90) <= 1.0)) {
      if (0.0 <= *(double *)(in_ECX + 0x90)) {
        dVar14 = *(double *)(in_ECX + 0x90);
      }
      else {
        dVar14 = 0.0;
      }
    }
    *(double *)(in_ECX + 0x90) = dVar14;
    if ((*(double *)(in_ECX + 0x98) < 0.0) || (*(double *)(in_ECX + 0x98) <= 1.0)) {
      if (*(double *)(in_ECX + 0x98) < 0.0) {
        dVar2 = 0.0;
      }
      else {
        dVar2 = *(double *)(in_ECX + 0x98);
      }
    }
    else {
      dVar2 = 1.0;
    }
    *(double *)(in_ECX + 0x98) = dVar2;
    if ((dVar2 == dVar1) && (dVar14 == dVar13)) goto LAB_1013e0e2;
    dVar13 = *(double *)(in_ECX + 0x88);
  }
  uVar9 = FUN_1007c24d(dVar2,dVar13,dVar14);
  *(undefined4 *)(in_ECX + 0xa0) = uVar9;
  InvalidateRect(*(HWND *)(in_ECX + 0x20),&local_18,1);
  lpRect = (RECT *)CMFCColorPickerCtrl::GetCursorRect(in_ECX);
  InvalidateRect(*(HWND *)(in_ECX + 0x20),lpRect,1);
LAB_1013e143:
  CMFCColorPickerCtrl::NotifyParent(in_ECX);
LAB_1013e0e2:
  FUN_1001d029();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

