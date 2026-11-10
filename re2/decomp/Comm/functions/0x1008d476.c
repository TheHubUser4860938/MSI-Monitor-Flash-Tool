// rea decompile_all
// name: FUN_1008d476
// address: 0x1008d476
// body: available
// range: 0x1008d476-0x1008d48a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1008d476(void)

{
  RECT *lprc;
  tagRECT *lpRect;
  LPRECT lprc_00;
  code *pcVar1;
  BOOL BVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  int iVar5;
  int *piVar6;
  int in_ECX;
  int iVar7;
  CObject *pCVar8;
  undefined1 auStack_10 [4];
  int iStack_c;
  CObject *pCStack_8;
  
  if ((*(int *)(in_ECX + 0xb4) == 0) || (*(int *)(*(int *)(in_ECX + 0xb4) + 0x20) == 0)) {
    return;
  }
  if ((*(int *)(in_ECX + 0xb4) != 0) && (*(int *)(*(int *)(in_ECX + 0xb4) + 0x20) != 0)) {
    lprc = (RECT *)(in_ECX + 0x54);
    iStack_c = in_ECX;
    BVar2 = IsRectEmpty(lprc);
    if ((BVar2 == 0) && (*(int *)(in_ECX + 0x7c) != 0)) {
      iVar7 = in_ECX;
      if ((DAT_101d3800 != 0) &&
         ((*(int *)(in_ECX + 0x18) == 0 || (*(int *)(*(int *)(in_ECX + 0x2c) + -0xc) == 0)))) {
        pCVar8 = (CObject *)0x0;
        pHVar3 = GetParent(*(HWND *)(*(int *)(in_ECX + 0xb4) + 0x20));
        pCVar4 = CWnd::FromHandle(pHVar3);
        do {
          if (pCVar4 == (CWnd *)0x0) break;
          pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_101d3640,(CObject *)pCVar4
                                     );
          pHVar3 = GetParent(*(HWND *)(pCVar4 + 0x20));
          pCVar4 = CWnd::FromHandle(pHVar3);
        } while (pCVar8 == (CObject *)0x0);
        iVar7 = iStack_c;
        pCStack_8 = pCVar8;
        if (pCVar8 != (CObject *)0x0) {
          pcVar1 = *(code **)(*(int *)pCVar8 + 0x354);
          guard_check_icall();
          iVar5 = (*pcVar1)();
          if (((*(int *)(in_ECX + 0x58) - *(int *)(in_ECX + 0x60)) + iVar5) / 2 < 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = ((*(int *)(in_ECX + 0x58) - *(int *)(in_ECX + 0x60)) + iVar5) / 2;
          }
          OffsetRect((LPRECT)(iStack_c + 0xa0),0,iVar5);
          OffsetRect((LPRECT)(iStack_c + 0x90),0,iVar5);
          OffsetRect(lprc,0,iVar5);
        }
      }
      CWnd::SetWindowPos(*(CWnd **)(iVar7 + 0xb4),(CWnd *)0x0,lprc->left + 1,*(int *)(iVar7 + 0x58),
                         (*(int *)(in_ECX + 0x5c) - lprc->left) + -2,*(int *)(iVar7 + 0x78),0x14);
      CComboBox::SetEditSel(*(CComboBox **)(iVar7 + 0xb4),-1,0);
      lpRect = (tagRECT *)(iVar7 + 0x90);
      GetWindowRect(*(HWND *)(*(int *)(iVar7 + 0xb4) + 0x20),lpRect);
      CWnd::ScreenToClient(*(CWnd **)(iVar7 + 0xb4),lpRect);
      pHVar3 = GetParent(*(HWND *)(*(int *)(iVar7 + 0xb4) + 0x20));
      pCVar4 = CWnd::FromHandle(pHVar3);
      CWnd::MapWindowPoints(*(CWnd **)(iVar7 + 0xb4),pCVar4,lpRect);
      in_ECX = iVar7;
      if (DAT_101d37fc != 0) {
        *(LONG *)(iVar7 + 0xa0) = lpRect->left;
        *(undefined4 *)(iVar7 + 0xa4) = *(undefined4 *)(iVar7 + 0x94);
        *(undefined4 *)(iVar7 + 0xa8) = *(undefined4 *)(iVar7 + 0x98);
        *(undefined4 *)(iVar7 + 0xac) = *(undefined4 *)(iVar7 + 0x9c);
        piVar6 = (int *)FUN_100796e6(auStack_10);
        lprc_00 = (LPRECT)(iVar7 + 0xa0);
        lprc_00->left = *(int *)(iVar7 + 0xa8) + *piVar6 * -2;
        InflateRect(lprc_00,-2,-2);
        iStack_c = *(int *)(iVar7 + 0x90) + -1;
        *(int *)(iVar7 + 0x54) = iStack_c;
        *(int *)(iVar7 + 0x5c) = *(int *)(iVar7 + 0x98) + 1;
        if ((*(int *)(iVar7 + 0x18) == 0) || (*(int *)(*(int *)(iVar7 + 0x2c) + -0xc) == 0)) {
          *(undefined4 *)(iVar7 + 0x58) = *(undefined4 *)(iVar7 + 0x94);
          *(undefined4 *)(iVar7 + 0x60) = *(undefined4 *)(iVar7 + 0x9c);
        }
        if (*(CWnd **)(iVar7 + 0xb0) == (CWnd *)0x0) {
          return;
        }
        CWnd::SetWindowPos(*(CWnd **)(iVar7 + 0xb0),(CWnd *)0x0,*(int *)(iVar7 + 0x90) + 3,
                           *(int *)(iVar7 + 0x58) + 3,
                           lprc_00->left +
                           ((*(int *)(iVar7 + 0x5c) - *(int *)(iVar7 + 0xa8)) -
                           *(int *)(iVar7 + 0x54)) + -8,
                           (*(int *)(iVar7 + 0x9c) - *(int *)(iVar7 + 0x94)) + -6,0x14);
        return;
      }
      goto LAB_1008bb17;
    }
  }
  SetRectEmpty((LPRECT)(in_ECX + 0x90));
LAB_1008bb17:
  SetRectEmpty((LPRECT)(in_ECX + 0xa0));
  return;
}

