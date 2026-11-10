// rea decompile_all
// name: FUN_0045c7f0
// address: 0x45c7f0
// body: available
// range: 0x45c7f0-0x45caaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45caab to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045c7f0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  byte bVar3;
  CObject *pCVar4;
  CDockingManager *pCVar5;
  int iVar6;
  CObject *pCVar7;
  CWnd *pCVar8;
  CFrameWnd *pCVar9;
  int *piVar10;
  BOOL BVar11;
  CWnd *in_ECX;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  pcVar1 = *(code **)(*(int *)in_ECX + 0x1a8);
  guard_check_icall();
  pCVar4 = (CObject *)(*pcVar1)();
  pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_0060c780,pCVar4);
  *param_1 = 0;
  pcVar1 = *(code **)(*(int *)in_ECX + 0x1b0);
  guard_check_icall();
  bVar3 = (*pcVar1)();
  pCVar5 = *(CDockingManager **)(in_ECX + 0x184);
  if ((pCVar5 != (CDockingManager *)0x0) ||
     (pCVar5 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_0060c45c,in_ECX),
     pCVar5 != (CDockingManager *)0x0)) {
    iVar6 = *(int *)(pCVar5 + 0x1b8);
    if (((bVar3 & 1) == 0) ||
       (((((char)bVar3 < '\0' && (iVar6 != 0)) && (*(int *)(iVar6 + 8) != 0)) &&
        (*(int *)(iVar6 + 4) != 0)))) {
      if ((bVar3 & 0x82) != 0) {
        local_18.left = *(LONG *)(in_ECX + 0x138);
        local_18.top = *(LONG *)(in_ECX + 0x13c);
        local_18.right = *(LONG *)(in_ECX + 0x140);
        local_18.bottom = *(LONG *)(in_ECX + 0x144);
        if (pCVar4 != (CObject *)0x0) {
          FUN_004f833e(1);
        }
        pCVar9 = AFXGetParentFrame(in_ECX);
        uVar2 = DAT_00616000;
        DAT_00616000 = 1;
        pcVar1 = *(code **)(*(int *)in_ECX + 0x22c);
        guard_check_icall(param_1);
        piVar10 = (int *)(*pcVar1)();
        DAT_00616000 = uVar2;
        if (*(CSmartDockingManager **)(pCVar5 + 0x1b8) != (CSmartDockingManager *)0x0) {
          CSmartDockingManager::Stop(*(CSmartDockingManager **)(pCVar5 + 0x1b8));
        }
        if (pCVar9 != (CFrameWnd *)0x0) {
          pcVar1 = *(code **)(*(int *)pCVar9 + 0x178);
          guard_check_icall(1);
          (*pcVar1)();
        }
        pcVar1 = *(code **)(*(int *)pCVar5 + 0x38);
        guard_check_icall(0);
        (*pcVar1)();
        BVar11 = IsRectEmpty(&local_18);
        if (BVar11 == 0) {
          if (piVar10 != (int *)0x0) {
            pcVar1 = *(code **)(*piVar10 + 0x228);
            guard_check_icall(0);
            pCVar8 = (CWnd *)(*pcVar1)();
            if (pCVar8 != in_ECX) goto LAB_0045ca98;
          }
          if (*param_1 == 0) {
            CWnd::SetWindowPos(in_ECX,(CWnd *)0x0,local_18.left,local_18.top,
                               local_18.right - local_18.left,local_18.bottom - local_18.top,0x104);
            BVar11 = IsWindowVisible(*(HWND *)(in_ECX + 0x20));
            if (BVar11 == 0) {
              pcVar1 = *(code **)(*(int *)in_ECX + 0x1a4);
              guard_check_icall();
              iVar6 = (*pcVar1)();
              if (0 < iVar6) {
                CWnd::ShowWindow(in_ECX,5);
              }
            }
          }
        }
      }
    }
    else {
      if (*(int *)(in_ECX + 0x188) == 1) {
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x2a0);
        guard_check_icall(*(undefined4 *)(in_ECX + 0x128));
        iVar6 = (*pcVar1)();
        *param_1 = iVar6;
      }
      else if (((*(int *)(in_ECX + 0x188) == 2) && (*(CObject **)(in_ECX + 0x128) != (CObject *)0x0)
               ) && ((pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_0060c780,
                                                  *(CObject **)(in_ECX + 0x128)),
                     pCVar4 != (CObject *)0x0 && (pCVar7 != (CObject *)0x0)))) {
        *param_1 = 1;
        pCVar5 = *(CDockingManager **)(in_ECX + 0x184);
        if (pCVar5 == (CDockingManager *)0x0) {
          pCVar8 = CWnd::FromHandlePermanent(*(HWND__ **)(in_ECX + 200));
          pCVar5 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_0060c45c,pCVar8);
          if (pCVar5 == (CDockingManager *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00429127();
          }
        }
        if (*(CSmartDockingManager **)(pCVar5 + 0x1b8) != (CSmartDockingManager *)0x0) {
          CSmartDockingManager::Stop(*(CSmartDockingManager **)(pCVar5 + 0x1b8));
        }
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x34c);
        guard_check_icall(pCVar7,1,1,0);
        (*pcVar1)();
        goto LAB_0045ca98;
      }
      if (*(CSmartDockingManager **)(pCVar5 + 0x1b8) != (CSmartDockingManager *)0x0) {
        CSmartDockingManager::Stop(*(CSmartDockingManager **)(pCVar5 + 0x1b8));
      }
      *(undefined4 *)(in_ECX + 0x188) = 0;
    }
  }
LAB_0045ca98:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

