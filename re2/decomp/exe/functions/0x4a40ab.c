// rea decompile_all
// name: FUN_004a40ab
// address: 0x4a40ab
// body: available
// range: 0x4a40ab-0x4a4493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4a448f to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004a40ab(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  HMENU pHVar4;
  bool bVar5;
  HMENU__ *pHVar6;
  CObject *pCVar7;
  AFX_MODULE_STATE *pAVar8;
  CObject *pCVar9;
  CMDIChildWnd *pCVar10;
  int iVar11;
  CMultiDocTemplate *pCVar12;
  HMENU pHVar13;
  BOOL BVar14;
  CFrameWnd *pCVar15;
  CMFCMenuBar *in_ECX;
  int *piVar16;
  CObject *local_24;
  int local_14;
  CMultiDocTemplate *local_10;
  HMENU__ *local_c;
  int *local_8;
  
  local_c = *(HMENU__ **)(in_ECX + 0xd4c);
  if (local_c != (HMENU__ *)0x0) {
    FUN_004b1610(local_c);
  }
  local_24 = (CObject *)0x0;
  if (*(undefined4 **)(in_ECX + 0xd14) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(in_ECX + 0xd14);
    guard_check_icall();
    (*pcVar1)();
    pCVar7 = (CObject *)FUN_00439696();
    local_24 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCCustomizeButton_0060c918,pCVar7);
    pcVar1 = *(code **)(*(int *)local_24 + 0x14);
    guard_check_icall(*(undefined4 *)(in_ECX + 0xd14));
    (*pcVar1)();
  }
  pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_005bad18,
                              *(CObject **)(in_ECX + 0xd48));
  if (DAT_0061775c != 0) {
    FUN_00514436(0);
  }
  iVar2 = *(int *)(in_ECX + 0xd70);
  bVar5 = false;
  local_10 = (CMultiDocTemplate *)0x0;
  CMFCMenuBar::SetMaximizeMode(in_ECX,0,(CWnd *)0x0,1);
  pAVar8 = AfxGetModuleState();
  piVar16 = *(int **)(*(int *)(pAVar8 + 4) + 0x5c);
  local_8 = piVar16;
  if (piVar16 != (int *)0x0) {
    pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWnd_005cbecc,
                                *(CObject **)(in_ECX + 0xd48));
    if ((pCVar9 != (CObject *)0x0) &&
       (pCVar10 = CMDIFrameWnd::MDIGetActive((CMDIFrameWnd *)pCVar9,(int *)0x0),
       pCVar10 != (CMDIChildWnd *)0x0)) {
      pCVar10 = CMDIFrameWnd::MDIGetActive((CMDIFrameWnd *)pCVar9,(int *)0x0);
      pcVar1 = *(code **)(*(int *)pCVar10 + 0x16c);
      guard_check_icall();
      iVar11 = (*pcVar1)();
      piVar16 = local_8;
      if (iVar11 != 0) {
        local_10 = *(CMultiDocTemplate **)(iVar11 + 0x28);
      }
    }
    pcVar1 = *(code **)(*piVar16 + 0x10);
    guard_check_icall();
    local_14 = (*pcVar1)();
    while (local_14 != 0) {
      pcVar1 = *(code **)(*piVar16 + 0x14);
      guard_check_icall(&local_14);
      pCVar12 = (CMultiDocTemplate *)(*pcVar1)();
      iVar11 = FUN_0043970d(&PTR_s_CMultiDocTemplate_005cddb8);
      piVar16 = local_8;
      if ((iVar11 != 0) && (*(int *)(pCVar12 + 0x88) != 0)) {
        uVar3 = *(uint *)(pCVar12 + 0x54);
        if (uVar3 == 0) goto LAB_004a448f;
        pAVar8 = AfxGetModuleState();
        pHVar4 = *(HMENU *)(pCVar12 + 0x88);
        pHVar13 = LoadMenuW(*(HINSTANCE *)(pAVar8 + 0xc),(LPCWSTR)(uVar3 & 0xffff));
        *(HMENU *)(pCVar12 + 0x88) = pHVar13;
        pcVar1 = *(code **)(*(int *)in_ECX + 0x434);
        guard_check_icall(pHVar13,0,0);
        (*pcVar1)();
        FUN_004b1610(*(undefined4 *)(pCVar12 + 0x88));
        if (local_10 == pCVar12) {
          local_c = *(HMENU__ **)(pCVar12 + 0x88);
          bVar5 = true;
        }
        CMFCMenuBar::UpdateMDIChildrenMenus(pCVar12);
        piVar16 = local_8;
        if (pHVar4 != (HMENU)0x0) {
          BVar14 = IsMenu(pHVar4);
          if (BVar14 == 0) goto LAB_004a448f;
          CMenuHash::RemoveMenu((CMenuHash *)&DAT_006168f0,pHVar4);
          DestroyMenu(pHVar4);
          piVar16 = local_8;
        }
      }
    }
  }
  if (*(int *)(in_ECX + 0xd5c) != 0) {
    pAVar8 = AfxGetModuleState();
    pHVar4 = *(HMENU *)(in_ECX + 0xd50);
    pHVar13 = LoadMenuW(*(HINSTANCE *)(pAVar8 + 0xc),(LPCWSTR)(uint)*(ushort *)(in_ECX + 0xd5c));
    *(HMENU *)(in_ECX + 0xd50) = pHVar13;
    pcVar1 = *(code **)(*(int *)in_ECX + 0x43c);
    guard_check_icall(pHVar13);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)in_ECX + 0x434);
    guard_check_icall(*(undefined4 *)(in_ECX + 0xd50),1,0);
    (*pcVar1)();
    FUN_004b1610(*(undefined4 *)(in_ECX + 0xd50));
    if (!bVar5) {
      local_c = *(HMENU__ **)(in_ECX + 0xd50);
    }
    if (pCVar7 != (CObject *)0x0) {
      *(undefined4 *)(pCVar7 + 0x88) = *(undefined4 *)(in_ECX + 0xd50);
      *(undefined4 *)(pCVar7 + 0x390) = *(undefined4 *)(in_ECX + 0xd50);
    }
    pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_005c363c,
                                *(CObject **)(in_ECX + 0xd48));
    if (pCVar9 != (CObject *)0x0) {
      *(undefined4 *)(pCVar9 + 0x88) = *(undefined4 *)(in_ECX + 0xd50);
    }
    if (pHVar4 != (HMENU)0x0) {
      BVar14 = IsMenu(pHVar4);
      if (BVar14 == 0) {
LAB_004a448f:
                    /* WARNING: Subroutine does not return */
        FUN_00429127();
      }
      CMenuHash::RemoveMenu((CMenuHash *)&DAT_006168f0,pHVar4);
      DestroyMenu(pHVar4);
    }
  }
  pHVar6 = local_c;
  iVar11 = CMenuHash::LoadMenuBar((CMenuHash *)&DAT_006168f0,local_c,(CMFCToolBar *)in_ECX);
  if ((iVar11 != 0) && (*(HMENU__ **)(in_ECX + 0xd4c) = pHVar6, iVar2 == 0)) {
    pCVar15 = CWnd::GetParentFrame((CWnd *)in_ECX);
    pcVar1 = *(code **)(*(int *)pCVar15 + 0x178);
    guard_check_icall(1);
    (*pcVar1)();
    InvalidateRect(*(HWND *)(in_ECX + 0x20),(RECT *)0x0,1);
    UpdateWindow(*(HWND *)(in_ECX + 0x20));
  }
  if (pCVar7 != (CObject *)0x0) {
    pcVar1 = *(code **)(*(int *)pCVar7 + 0x1a8);
    guard_check_icall(*(undefined4 *)(in_ECX + 0xd4c));
    (*pcVar1)();
  }
  if (iVar2 != 0) {
    CMFCMenuBar::RestoreMaximizeMode(in_ECX,1);
  }
  if (*(CMFCToolBarsMenuPropertyPage **)(in_ECX + 0xd88) != (CMFCToolBarsMenuPropertyPage *)0x0) {
    CMFCToolBarsMenuPropertyPage::SelectMenu
              (*(CMFCToolBarsMenuPropertyPage **)(in_ECX + 0xd88),(CDocTemplate *)local_10,0);
  }
  if (local_24 != (CObject *)0x0) {
    pcVar1 = *(code **)(*(int *)in_ECX + 0x340);
    guard_check_icall(local_24,0xffffffff);
    (*pcVar1)();
    *(CObject **)(in_ECX + 0xd14) = local_24;
    pcVar1 = *(code **)(*(int *)in_ECX + 0x20c);
    guard_check_icall();
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)in_ECX + 0x2d4);
    guard_check_icall(1);
    (*pcVar1)();
  }
  return 1;
}

