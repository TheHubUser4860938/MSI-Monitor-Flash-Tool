// rea decompile_all
// name: CMFCBaseTabCtrl::ApplyRestoredTabInfo
// address: 0x1009f3f8
// body: available
// range: 0x1009f3f8-0x1009f7a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCBaseTabCtrl::ApplyRestoredTabInfo(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCBaseTabCtrl::ApplyRestoredTabInfo(CMFCBaseTabCtrl *this,int param_1)

{
  code *pcVar1;
  CFrameWnd *pCVar2;
  CMFCRestoredTabInfo *pCVar3;
  CMFCTabInfo *pCVar4;
  CWnd *pCVar5;
  int iVar6;
  HWND pHVar7;
  CWnd *pCVar8;
  CObject *pCVar9;
  undefined4 *puVar10;
  CDockingManager *pCVar11;
  int iVar12;
  CMFCRestoredTabInfo local_38 [4];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 *local_20;
  CMFCTabInfo *local_1c;
  CMFCTabInfo *local_18;
  CObject *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x1009f404;
  pCVar2 = AFXGetParentFrame((CWnd *)this);
  local_18 = (CMFCTabInfo *)
             CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_1023d944,(CWnd *)pCVar2);
  local_14 = *(CObject **)(this + 0x16c);
  pCVar11 = (CDockingManager *)local_18;
  while (local_14 != (CObject *)0x0) {
    pCVar3 = (CMFCRestoredTabInfo *)((int)local_14 + 8);
    local_14 = (CObject *)*(undefined4 **)local_14;
    CMFCRestoredTabInfo::CMFCRestoredTabInfo(local_38,pCVar3);
    local_8 = 0;
    local_1c = (CMFCTabInfo *)0x0;
    FindTabInfo(this,local_30,&local_1c);
    if (local_1c == (CMFCTabInfo *)0x0) {
      pcVar1 = *(code **)(*(int *)pCVar11 + 0x24);
      guard_check_icall(local_30,1);
      pCVar9 = (CObject *)(*pcVar1)();
      pCVar4 = (CMFCTabInfo *)
               AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1023db9c,pCVar9);
      local_1c = pCVar4;
      if (pCVar4 != (CMFCTabInfo *)0x0) {
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x16c);
        guard_check_icall();
        iVar12 = (*pcVar1)();
        if (iVar12 != 0) {
          pHVar7 = GetParent(*(HWND *)(pCVar4 + 0x20));
          pCVar8 = CWnd::FromHandle(pHVar7);
          pHVar7 = GetParent(*(HWND *)(pCVar8 + 0x20));
          pCVar8 = CWnd::FromHandle(pHVar7);
          pHVar7 = GetParent(*(HWND *)(this + 0x20));
          pCVar5 = CWnd::FromHandle(pHVar7);
          pCVar4 = local_1c;
          CWnd::SetParent((CWnd *)local_1c,pCVar5);
          pcVar1 = *(code **)(*(int *)pCVar8 + 0x3c0);
          guard_check_icall(pCVar4);
          (*pcVar1)();
          pCVar4 = local_1c;
          iVar12 = FUN_10051e53(&PTR_s_CDockablePane_1023db9c);
          if (iVar12 != 0) {
            pcVar1 = *(code **)(*(int *)pCVar4 + 0x1f0);
            guard_check_icall(1);
            (*pcVar1)();
          }
          CWnd::ShowWindow((CWnd *)pCVar4,5);
        }
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x1dc);
        guard_check_icall();
        iVar12 = (*pcVar1)();
        if (iVar12 != 0) {
          pcVar1 = *(code **)(*(int *)pCVar4 + 0x368);
          guard_check_icall(0,0xf000,0,1);
          (*pcVar1)();
        }
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x228);
        guard_check_icall(0);
        local_1c = (CMFCTabInfo *)(*pcVar1)();
        if (local_1c != (CMFCTabInfo *)0x0) {
          pcVar1 = *(code **)(*(int *)local_1c + 0x17c);
          guard_check_icall(pCVar4,0,0);
          (*pcVar1)();
        }
        pHVar7 = GetParent(*(HWND *)(this + 0x20));
        pCVar8 = CWnd::FromHandle(pHVar7);
        CWnd::SetParent((CWnd *)pCVar4,pCVar8);
        pHVar7 = GetParent(*(HWND *)(this + 0x20));
        pCVar8 = CWnd::FromHandle(pHVar7);
        pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_101eb880,
                                    (CObject *)pCVar8);
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x34c);
        guard_check_icall(pCVar9,3,0,0);
        (*pcVar1)();
      }
      local_8 = 0xffffffff;
      FUN_100476d0();
      pCVar11 = (CDockingManager *)local_18;
    }
    else {
      local_8 = 0xffffffff;
      FUN_100476d0();
    }
  }
  iVar12 = 0;
  local_14 = (CObject *)0x0;
  puVar10 = *(undefined4 **)(this + 0x16c);
  if (*(undefined4 **)(this + 0x16c) != (undefined4 *)0x0) {
    do {
      pCVar9 = local_14;
      local_20 = (undefined4 *)*puVar10;
      CMFCRestoredTabInfo::CMFCRestoredTabInfo(local_38,(CMFCRestoredTabInfo *)(puVar10 + 2));
      local_18 = (CMFCTabInfo *)0x0;
      local_8 = 1;
      local_1c = (CMFCTabInfo *)FindTabInfo(this,local_30,&local_18);
      pCVar4 = local_18;
      if (local_18 != (CMFCTabInfo *)0x0) {
        FUN_100475f0(local_38);
        *(int *)(pCVar4 + 0x2c) = local_28;
        *(int *)(pCVar4 + 0x30) = local_24;
        *(int *)(pCVar4 + 0x44) = local_2c;
        pcVar1 = *(code **)(*(int *)this + 0x1a8);
        guard_check_icall(local_1c,local_34,0,0);
        (*pcVar1)();
        if (local_34 != 0) {
          iVar12 = iVar12 + 1;
        }
        pCVar9 = local_14;
        if ((param_1 != 0) && (local_1c != (CMFCTabInfo *)local_14)) {
          pcVar1 = *(code **)(*(int *)this + 0x260);
          guard_check_icall(local_1c,local_14);
          (*pcVar1)();
          pCVar9 = local_14;
          if ((*(CWnd **)(local_18 + 0x20) != (CWnd *)0x0) &&
             (local_14 == *(CObject **)(this + 0x184))) {
            CWnd::ShowWindow(*(CWnd **)(local_18 + 0x20),5);
          }
          if (0 < iVar12) {
            pcVar1 = *(code **)(*(int *)this + 0x214);
            guard_check_icall(local_1c);
            (*pcVar1)();
            pCVar9 = local_14;
          }
        }
      }
      local_8 = 0xffffffff;
      FUN_100476d0();
      local_14 = pCVar9 + 1;
      puVar10 = local_20;
    } while (local_20 != (undefined4 *)0x0);
    if (0 < iVar12) {
      pcVar1 = *(code **)(*(int *)this + 0x214);
      guard_check_icall(*(undefined4 *)(this + 0x184));
      iVar6 = (*pcVar1)();
      if (iVar6 == 0) {
        pcVar1 = *(code **)(*(int *)this + 0x214);
        guard_check_icall(0);
        (*pcVar1)();
      }
    }
    if (iVar12 != 0) goto LAB_1009f787;
  }
  pHVar7 = GetParent(*(HWND *)(this + 0x20));
  pCVar8 = CWnd::FromHandle(pHVar7);
  pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_101eb880,(CObject *)pCVar8);
  if (pCVar9 != (CObject *)0x0) {
    pcVar1 = *(code **)(*(int *)pCVar9 + 0x224);
    guard_check_icall(0,0,0);
    (*pcVar1)();
  }
LAB_1009f787:
  pcVar1 = *(code **)(*(int *)this + 0x184);
  guard_check_icall();
  (*pcVar1)();
  return;
}

