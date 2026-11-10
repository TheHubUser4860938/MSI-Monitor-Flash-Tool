// rea decompile_all
// name: CMDIClientAreaWnd::OnMDIDestroy
// address: 0x100fa40b
// body: available
// range: 0x100fa40b-0x100fa754 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMDIClientAreaWnd::OnMDIDestroy(class CWnd *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMDIClientAreaWnd::OnMDIDestroy(CMDIClientAreaWnd *this,CWnd *param_1)

{
  CMDIClientAreaWnd *pCVar1;
  CObject *pCVar2;
  code *pcVar3;
  CFrameWnd *pCVar4;
  CObject *pCVar5;
  CObject *pCVar6;
  int iVar7;
  int iVar8;
  AFX_MODULE_STATE *pAVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  BOOL BVar13;
  HWND pHVar14;
  CWnd *pCVar15;
  undefined4 uVar16;
  bool bVar17;
  HWND local_14;
  CObject *local_8;
  
  pCVar4 = CWnd::GetParentFrame((CWnd *)this);
  pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10192540,(CObject *)pCVar4);
  pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_10193444,(CObject *)param_1);
  bVar17 = false;
  local_8 = pCVar6;
  if ((*(int *)(pCVar5 + 0x154) == 0) && (DAT_101d3914 == 0)) {
    SendMessageW(*(HWND *)(this + 0x20),0xb,0,0);
  }
  local_14 = (HWND)0x0;
  if (pCVar6 == (CObject *)0x0) goto LAB_100fa60a;
  pCVar2 = *(CObject **)(pCVar6 + 0x128);
  *(undefined4 *)(pCVar6 + 0x128) = 0;
  if (pCVar2 == (CObject *)0x0) goto LAB_100fa60a;
  pcVar3 = *(code **)(*(int *)pCVar2 + 0x17c);
  guard_check_icall();
  iVar7 = (*pcVar3)();
  if (param_1 == (CWnd *)0x0) {
    uVar16 = 0;
  }
  else {
    uVar16 = *(undefined4 *)(param_1 + 0x20);
  }
  pcVar3 = *(code **)(*(int *)pCVar2 + 0x21c);
  guard_check_icall(uVar16);
  iVar8 = (*pcVar3)();
  if (-1 < iVar8) {
    *(int *)(local_8 + 300) = 1;
  }
  pAVar9 = AfxGetModuleState();
  pcVar3 = *(code **)(**(int **)(pAVar9 + 4) + 0xfc);
  guard_check_icall(uVar16);
  piVar10 = (int *)(*pcVar3)();
  if (piVar10 == (int *)0x0) {
LAB_100fa50b:
    uVar16 = 1;
  }
  else {
    pcVar3 = *(code **)(*piVar10 + 0x30);
    guard_check_icall();
    iVar11 = (*pcVar3)();
    if (iVar11 == 0) goto LAB_100fa50b;
    uVar16 = 0;
  }
  pcVar3 = *(code **)(*(int *)pCVar2 + 0x198);
  guard_check_icall(iVar8,uVar16);
  (*pcVar3)();
  pcVar3 = *(code **)(*(int *)pCVar2 + 0x1ac);
  guard_check_icall();
  iVar8 = (*pcVar3)();
  if (iVar8 == 0) {
    local_8 = (CObject *)CObList::Find((CObList *)(this + 11000),pCVar2,(__POSITION *)0x0);
    if (local_8 != (CObject *)0x0) {
      if ((1 < *(int *)(this + 0x2b04)) && (*(int *)(pCVar2 + 0x298) != 0)) {
        FUN_1002466e(&local_8);
        pCVar6 = local_8;
        if ((local_8 != (CObject *)0x0) ||
           (pCVar6 = *(CObject **)(this + 0x2afc), pCVar6 != (CObject *)0x0)) {
          local_8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_1018a624,
                                       *(CObject **)(pCVar6 + 8));
          if (local_8 != (CObject *)0x0) {
            pcVar3 = *(code **)(*(int *)local_8 + 0x20c);
            guard_check_icall();
            uVar12 = (*pcVar3)();
            pcVar3 = *(code **)(*(int *)local_8 + 0x1b0);
            guard_check_icall(-(uint)(uVar12 != 0xffffffff) & uVar12);
            iVar7 = (*pcVar3)();
            if (iVar7 != 0) {
              local_14 = *(HWND *)(iVar7 + 0x20);
            }
          }
        }
      }
      RemoveTabGroup(this,(CMFCTabCtrl *)pCVar2,1);
    }
  }
  else {
    pcVar3 = *(code **)(*(int *)pCVar2 + 0x17c);
    guard_check_icall();
    iVar8 = (*pcVar3)();
    bVar17 = iVar7 != iVar8;
  }
LAB_100fa60a:
  pCVar1 = this + 0x80;
  if ((pCVar1 != (CMDIClientAreaWnd *)0x0) && (*(int *)(this + 0xa0) != 0)) {
    pcVar3 = *(code **)(*(int *)pCVar1 + 0x17c);
    guard_check_icall();
    iVar7 = (*pcVar3)();
    if (param_1 == (CWnd *)0x0) {
      uVar16 = 0;
    }
    else {
      uVar16 = *(undefined4 *)(param_1 + 0x20);
    }
    pcVar3 = *(code **)(*(int *)pCVar1 + 0x21c);
    guard_check_icall(uVar16);
    iVar8 = (*pcVar3)();
    if (-1 < iVar8) {
      pcVar3 = *(code **)(*(int *)pCVar1 + 0x1b0);
      guard_check_icall(iVar8);
      pCVar6 = (CObject *)(*pcVar3)();
      pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_10193444,pCVar6);
      if (pCVar6 != (CObject *)0x0) {
        *(undefined4 *)(pCVar6 + 300) = 1;
      }
      pcVar3 = *(code **)(*(int *)pCVar1 + 0x198);
      guard_check_icall(iVar8,1);
      (*pcVar3)();
    }
    pcVar3 = *(code **)(*(int *)pCVar1 + 0x17c);
    guard_check_icall(uVar16);
    iVar8 = (*pcVar3)();
    bVar17 = iVar7 != iVar8;
  }
  FUN_1001d029();
  if (bVar17) {
    pcVar3 = *(code **)(*(int *)pCVar5 + 0x178);
    guard_check_icall(1);
    (*pcVar3)();
  }
  if (*(int *)(pCVar5 + 0x154) == 0) {
    BVar13 = IsWindow(local_14);
    if (BVar13 != 0) {
      SetActiveTab(this,local_14);
    }
    if ((*(int *)(pCVar5 + 0x154) == 0) && (DAT_101d3914 == 0)) {
      SendMessageW(*(HWND *)(this + 0x20),0xb,1,0);
      pHVar14 = GetParent(*(HWND *)(this + 0x20));
      pCVar15 = CWnd::FromHandle(pHVar14);
      RedrawWindow(*(HWND *)(pCVar15 + 0x20),(RECT *)0x0,(HRGN)0x0,0x185);
    }
  }
  return;
}

