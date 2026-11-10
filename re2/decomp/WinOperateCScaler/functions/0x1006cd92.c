// rea decompile_all
// name: CMFCToolBar::OnDrop
// address: 0x1006cd92
// body: available
// range: 0x1006cd92-0x1006cff9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCToolBar::OnDrop(class COleDataObject *,unsigned long,class
   CPoint)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCToolBar::OnDrop(CMFCToolBar *this,undefined4 param_1,int param_2,undefined4 param_4,
                   undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  CObject *pCVar6;
  int iVar7;
  code *pcVar8;
  int *piVar9;
  
  if (*(int *)(this + 3000) != 0) {
    return 0;
  }
  iVar7 = *(int *)(this + 0xc00);
  if (iVar7 < 0) {
    return 0;
  }
  iVar3 = *(int *)(this + 0xd0c);
  *(undefined4 *)(this + 0xd0c) = 0;
  pcVar8 = *(code **)(*(int *)this + 0x3d4);
  guard_check_icall();
  (*pcVar8)();
  pcVar8 = *(code **)(*(int *)this + 0x390);
  guard_check_icall(param_4,param_5);
  iVar1 = (*pcVar8)();
  if ((-1 < iVar1) && (iVar1 = FUN_1006a5a5(iVar1), iVar3 == iVar1)) {
    return 0;
  }
  pcVar8 = *(code **)(*(int *)this + 0x3fc);
  guard_check_icall(param_1);
  piVar2 = (int *)(*pcVar8)();
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  pcVar8 = *(code **)(*piVar2 + 0x78);
  guard_check_icall(this);
  iVar1 = (*pcVar8)();
  if (iVar1 == 0) {
    pcVar8 = *(code **)(*piVar2 + 4);
LAB_1006ce4e:
    guard_check_icall(1);
    (*pcVar8)();
  }
  else {
    piVar2[7] = 0;
    if ((iVar3 != 0) && (param_2 != 1)) {
      iVar1 = FUN_100686f7(iVar3);
      if ((iVar7 == iVar1) || (iVar7 == iVar1 + 1)) {
        pcVar8 = *(code **)(*(int *)this + 0x414);
        guard_check_icall(iVar3,this + 0xcf4,&param_4);
        (*pcVar8)();
        pcVar8 = *(code **)(*piVar2 + 4);
        goto LAB_1006ce4e;
      }
      pcVar8 = *(code **)(*(int *)this + 0x34c);
      guard_check_icall(iVar1);
      (*pcVar8)();
      if (iVar1 < iVar7) {
        iVar7 = iVar7 + -1;
      }
      if (*(int *)(this + 0xc48) <= iVar7) {
        iVar7 = *(int *)(this + 0xc48);
      }
    }
    pcVar8 = *(code **)(*(int *)this + 0x340);
    piVar9 = piVar2;
    guard_check_icall(piVar2,iVar7);
    iVar3 = (*pcVar8)();
    if (iVar3 == -1) {
      pcVar8 = *(code **)(*piVar2 + 4);
      guard_check_icall(1);
      (*pcVar8)();
      return 0;
    }
    pcVar8 = *(code **)(*(int *)this + 0x20c);
    guard_check_icall(piVar9,iVar7);
    (*pcVar8)();
    pHVar4 = GetParent(*(HWND *)(this + 0x20));
    CWnd::FromHandle(pHVar4);
    iVar7 = FUN_100250d6(&PTR_s_CMFCTabCtrl_101b54cc);
    if (iVar7 != 0) {
      pHVar4 = GetParent(*(HWND *)(this + 0x20));
      pCVar5 = CWnd::FromHandle(pHVar4);
      pHVar4 = GetParent(*(HWND *)(pCVar5 + 0x20));
      pCVar5 = CWnd::FromHandle(pHVar4);
      pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_10201648,(CObject *)pCVar5);
      if (pCVar6 != (CObject *)0x0) {
        pcVar8 = *(code **)(*(int *)pCVar6 + 0x210);
        guard_check_icall();
        (*pcVar8)();
      }
    }
    if (DAT_10209cf4 != 0) {
      pcVar8 = *(code **)(*piVar2 + 0x80);
      guard_check_icall();
      (*pcVar8)();
    }
    *(undefined4 *)(this + 0xbf4) = 0xffffffff;
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x505);
    pHVar4 = GetParent(*(HWND *)(this + 0x20));
    pCVar5 = CWnd::FromHandle(pHVar4);
    pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10201784,(CObject *)pCVar5);
    if (pCVar6 != (CObject *)0x0) {
      RedrawWindow(*(HWND *)(pCVar6 + 0x20),(RECT *)0x0,(HRGN)0x0,0x505);
    }
  }
  return 1;
}

