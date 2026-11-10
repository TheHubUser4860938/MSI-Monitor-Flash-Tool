// rea decompile_all
// name: CFullScreenImpl::RestoreState
// address: 0x1012a69b
// body: available
// range: 0x1012a69b-0x1012a8dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CFullScreenImpl::RestoreState(class CFrameWnd *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CFullScreenImpl::RestoreState(CFullScreenImpl *this,CFrameWnd *param_1)

{
  code *pcVar1;
  AFX_MODULE_STATE *pAVar2;
  CObject *pCVar3;
  int *piVar4;
  CObject *pCVar5;
  int iVar6;
  CObject *pCVar7;
  BOOL BVar8;
  undefined4 uVar9;
  
  if (*(int *)(this + 0x34) == -1) {
    return;
  }
  pAVar2 = AfxGetModuleState();
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CWinAppEx_1018df08,*(CObject **)(pAVar2 + 4));
  if (pCVar3 == (CObject *)0x0) {
    return;
  }
  uVar9 = 0;
  pcVar1 = *(code **)(**(int **)(this + 0x14) + 0x228);
  guard_check_icall(0);
  piVar4 = (int *)(*pcVar1)();
  if (piVar4 == (int *)0x0) {
    piVar4 = *(int **)(this + 0x14);
  }
  pcVar1 = *(code **)(*piVar4 + 0x60);
  guard_check_icall(uVar9);
  (*pcVar1)();
  if (*(int **)(this + 0x14) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x14) + 4);
    guard_check_icall(1);
    (*pcVar1)();
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10192540,(CObject *)param_1);
  CWnd::SetWindowPos((CWnd *)param_1,(CWnd *)0x0,*(int *)(this + 0x20),*(int *)(this + 0x24),
                     *(int *)(this + 0x28) - *(int *)(this + 0x20),
                     *(int *)(this + 0x2c) - *(int *)(this + 0x24),4);
  SendMessageW(*(HWND *)(param_1 + 0x20),0xb,0,0);
  *(undefined4 *)(pCVar3 + 0xcc) = 0;
  *(undefined4 *)(pCVar3 + 0xd0) = 1;
  if (pCVar5 == (CObject *)0x0) {
    pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_10191fb0,(CObject *)param_1);
    if (pCVar7 != (CObject *)0x0) {
      LoadState(pCVar7,*(undefined4 *)(this + 0x3c));
    }
  }
  else {
    LoadState(pCVar5,*(undefined4 *)(this + 0x3c));
  }
  SendMessageW(*(HWND *)(param_1 + 0x20),0xb,1,0);
  RedrawWindow(*(HWND *)(param_1 + 0x20),(RECT *)0x0,(HRGN)0x0,0x185);
  if (*(int *)(this + 0x1c) == 0) {
    if (pCVar5 == (CObject *)0x0) {
      pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_10191fb0,(CObject *)param_1);
      if ((pCVar7 == (CObject *)0x0) || (piVar4 = *(int **)(pCVar7 + 0x1e0), piVar4 == (int *)0x0))
      goto LAB_1012a879;
      ShowPane(piVar4,1,0,0);
      pcVar1 = *(code **)(*piVar4 + 0x170);
      guard_check_icall();
      iVar6 = (*pcVar1)();
      if (iVar6 == 0) goto LAB_1012a879;
LAB_1012a854:
      CWnd::SetFocus((CWnd *)pCVar7);
    }
    else {
      piVar4 = *(int **)(pCVar5 + 0x3fc);
      if (piVar4 != (int *)0x0) {
        ShowPane(piVar4,1,0,0);
        pcVar1 = *(code **)(*piVar4 + 0x170);
        guard_check_icall();
        iVar6 = (*pcVar1)();
        pCVar7 = pCVar5;
        if (iVar6 != 0) goto LAB_1012a854;
      }
    }
  }
  if ((pCVar5 != (CObject *)0x0) && (*(int *)(pCVar5 + 0x2f88) != 0)) {
    pcVar1 = *(code **)(*(int *)pCVar5 + 0x210);
    guard_check_icall();
    (*pcVar1)();
  }
LAB_1012a879:
  if ((((*(int *)(this + 0x30) != 0) && (iVar6 = *(int *)(*(int *)(this + 0x30) + 0xfc), iVar6 != 0)
       ) && (BVar8 = IsWindowVisible(*(HWND *)(iVar6 + 0x20)), BVar8 != 0)) &&
     (*(int *)(*(int *)(*(CFrameImpl **)(this + 0x30) + 0xfc) + 0x328) != 0)) {
    CFrameImpl::OnChangeVisualManager(*(CFrameImpl **)(this + 0x30));
    pcVar1 = *(code **)(**(int **)(*(int *)(this + 0x30) + 0xfc) + 0x34c);
    guard_check_icall();
    (*pcVar1)();
  }
  *(undefined4 *)(pCVar3 + 0xd0) = 0;
  return;
}

