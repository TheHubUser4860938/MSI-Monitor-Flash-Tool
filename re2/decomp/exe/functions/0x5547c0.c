// rea decompile_all
// name: FUN_005547c0
// address: 0x5547c0
// body: available
// range: 0x5547c0-0x554c17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x554c13 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005547c0(uint param_1)

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
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  iVar11 = *(int *)(in_ECX + 0x80);
  if (iVar11 == 1) {
    CMFCColorPickerCtrl::GetCursorRect(in_ECX);
    InflateRect(&local_18,1,1);
    dVar14 = *(double *)(in_ECX + 0x88);
    if (param_1 == 0x26) {
      dVar13 = *(double *)(in_ECX + 0x88) + 0.05;
LAB_00554b9b:
      *(double *)(in_ECX + 0x88) = dVar13;
    }
    else if (param_1 == 0x28) {
      dVar13 = *(double *)(in_ECX + 0x88) - 0.05;
      goto LAB_00554b9b;
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
    if (dVar13 == dVar14) goto LAB_00554aee;
    dVar14 = *(double *)(in_ECX + 0x90);
    dVar2 = *(double *)(in_ECX + 0x98);
  }
  else {
    if (iVar11 != 2) {
      if ((iVar11 - 3U < 2) && (iVar11 = 0, 0 < *(int *)(in_ECX + 0xc0))) {
        do {
          piVar4 = (int *)FUN_004ab4cd();
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
LAB_0055488b:
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
                  goto LAB_0055488b;
                }
              }
              if ((iVar5 == iVar11) && (iVar12 == iVar10)) break;
              iVar11 = CMFCColorPickerCtrl::SelectCellHexagon(in_ECX,iVar5,iVar12);
              if (iVar11 == 0) {
                if (param_1 == 0x28) {
                  pHVar6 = GetParent(*(HWND *)(in_ECX + 0x20));
                  pCVar7 = CWnd::FromHandle(pHVar6);
                  pCVar8 = AfxDynamicDownCast((CRuntimeClass *)
                                              &PTR_s_CMFCStandardColorsPropertyPage_005d9a10,
                                              (CObject *)pCVar7);
                  if ((pCVar8 != (CObject *)0x0) && (0 < *(int *)(pCVar8 + 600))) {
                    CWnd::SetFocus((CWnd *)(pCVar8 + 0x198));
                    if (*(int *)(pCVar8 + 600) < 1) {
LAB_00554c13:
                    /* WARNING: Subroutine does not return */
                      FUN_00429127();
                    }
                    piVar4 = *(int **)(pCVar8 + 0x254);
LAB_0055494f:
                    iVar11 = *piVar4;
                    goto LAB_005549a7;
                  }
                }
                break;
              }
            }
            else {
              if (param_1 < 0x25) break;
              if (0x26 < param_1) {
                if ((param_1 < 0x29) && (iVar11 < *(int *)(in_ECX + 0xc0) + -1)) {
LAB_00554943:
                  piVar4 = (int *)FUN_004ab4cd();
                  goto LAB_0055494f;
                }
                break;
              }
              if (0 < iVar11) goto LAB_00554943;
              pHVar6 = GetParent(*(HWND *)(in_ECX + 0x20));
              pCVar7 = CWnd::FromHandle(pHVar6);
              pCVar8 = AfxDynamicDownCast((CRuntimeClass *)
                                          &PTR_s_CMFCStandardColorsPropertyPage_005d9a10,
                                          (CObject *)pCVar7);
              if ((pCVar8 == (CObject *)0x0) || (*(int *)(pCVar8 + 0x188) < 1)) break;
              CWnd::SetFocus((CWnd *)(pCVar8 + 200));
              if (*(int *)(pCVar8 + 0x188) < 2) goto LAB_00554c13;
              iVar11 = *(int *)(*(int *)(pCVar8 + 0x184) + 4);
LAB_005549a7:
              if (iVar11 == 0) break;
              CMFCColorPickerCtrl::SetColor(in_ECX,*(ulong *)(iVar11 + 0x34));
            }
            RedrawWindow(*(HWND *)(in_ECX + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
            goto LAB_00554b4f;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(in_ECX + 0xc0));
      }
      goto LAB_00554aee;
    }
    CMFCColorPickerCtrl::GetCursorRect(in_ECX);
    InflateRect(&local_18,1,1);
    dVar13 = *(double *)(in_ECX + 0x90);
    dVar1 = *(double *)(in_ECX + 0x98);
    if (param_1 == 0x25) {
      dVar14 = *(double *)(in_ECX + 0x98) - 0.05;
LAB_00554a44:
      *(double *)(in_ECX + 0x98) = dVar14;
    }
    else if (param_1 == 0x26) {
      dVar14 = *(double *)(in_ECX + 0x90) + 0.05;
LAB_00554a30:
      *(double *)(in_ECX + 0x90) = dVar14;
    }
    else {
      if (param_1 == 0x27) {
        dVar14 = *(double *)(in_ECX + 0x98) + 0.05;
        goto LAB_00554a44;
      }
      if (param_1 == 0x28) {
        dVar14 = *(double *)(in_ECX + 0x90) - 0.05;
        goto LAB_00554a30;
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
    if ((dVar2 == dVar1) && (dVar14 == dVar13)) goto LAB_00554aee;
    dVar13 = *(double *)(in_ECX + 0x88);
  }
  uVar9 = FUN_004649d1(dVar2,dVar13,dVar14);
  *(undefined4 *)(in_ECX + 0xa0) = uVar9;
  InvalidateRect(*(HWND *)(in_ECX + 0x20),&local_18,1);
  lpRect = (RECT *)CMFCColorPickerCtrl::GetCursorRect(in_ECX);
  InvalidateRect(*(HWND *)(in_ECX + 0x20),lpRect,1);
LAB_00554b4f:
  CMFCColorPickerCtrl::NotifyParent(in_ECX);
LAB_00554aee:
  FUN_0042ec70();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

