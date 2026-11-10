// rea decompile_all
// name: CDockablePane::ShowPane
// address: 0x1012e77c
// body: available
// range: 0x1012e77c-0x1012ea86 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CDockablePane::ShowPane(int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockablePane::ShowPane(CDockablePane *this,int param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  CPaneDivider *pCVar4;
  int *piVar5;
  CBaseTabbedPane *pCVar6;
  HWND pHVar7;
  CWnd *pCVar8;
  CObject *pCVar9;
  undefined4 uVar10;
  
  pcVar1 = *(code **)(*(int *)this + 0x1dc);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    pcVar1 = *(code **)(*(int *)this + 0x170);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) {
      pcVar1 = *(code **)(*(int *)this + 0x16c);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      if (iVar2 == 0) {
        pcVar1 = *(code **)(*(int *)this + 0x174);
        guard_check_icall();
        iVar2 = (*pcVar1)();
        if (iVar2 == 0) {
          pCVar4 = GetDefaultPaneDivider(this);
          CWnd::ShowWindow((CWnd *)this,-(uint)(param_1 != 0) & 5);
          if ((param_1 != 0) && (pCVar4 != (CPaneDivider *)0x0)) {
            pcVar1 = *(code **)(*(int *)this + 900);
            guard_check_icall(pCVar4);
            (*pcVar1)();
          }
          pcVar1 = *(code **)(*(int *)this + 0x228);
          guard_check_icall(0);
          piVar5 = (int *)(*pcVar1)();
          if (piVar5 == (int *)0x0) {
            if (pCVar4 != (CPaneDivider *)0x0) {
              if (param_1 != 0) {
                if (*(int *)(this + 0x2d0) < 0x32) {
                  *(int *)(this + 0x2d0) = *(int *)(this + 0x2d0) + 1;
                }
                else {
                  *(undefined4 *)(this + 0x2d0) = 0x32;
                }
              }
              pcVar1 = *(code **)(*(int *)pCVar4 + 0x294);
              guard_check_icall(this,param_1);
              (*pcVar1)();
              if (param_2 == 0) {
                pcVar1 = *(code **)(*(int *)this + 0x268);
                guard_check_icall(0);
                (*pcVar1)();
              }
            }
          }
          else {
            pcVar1 = *(code **)(*piVar5 + 0x1e8);
            guard_check_icall(this,param_1);
            (*pcVar1)();
          }
        }
        else {
          pHVar7 = GetParent(*(HWND *)(this + 0x20));
          pCVar8 = CWnd::FromHandle(pHVar7);
          if (param_1 == 0) {
            SendMessageW(*(HWND *)(pCVar8 + 0x20),0x10,0,0);
          }
          else {
            pcVar1 = *(code **)(*(int *)this + 0x2e0);
            guard_check_icall(1);
            (*pcVar1)();
            CWnd::ShowWindow((CWnd *)this,5);
          }
        }
        goto LAB_1012ea10;
      }
    }
    CBasePane::ShowPane((CBasePane *)this,param_1,param_2,param_3);
    uVar10 = 0;
    pcVar1 = *(code **)(*(int *)this + 0x228);
    guard_check_icall(0);
    piVar5 = (int *)(*pcVar1)();
    if (piVar5 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar5 + 0x1e8);
      guard_check_icall(this,param_1);
      (*pcVar1)();
    }
    pcVar1 = *(code **)(*(int *)this + 0x16c);
    guard_check_icall(uVar10);
    iVar2 = (*pcVar1)();
    if ((iVar2 != 0) && (param_2 != 0)) {
      pCVar6 = CBasePane::GetParentTabbedPane((CBasePane *)this);
      pcVar1 = *(code **)(*(int *)pCVar6 + 0x210);
      guard_check_icall();
      (*pcVar1)();
    }
  }
  else {
    pcVar1 = *(code **)(*(int *)this + 0x36c);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) {
      CMFCAutoHideButton::ShowAttachedWindow(*(CMFCAutoHideButton **)(this + 0x32c),1);
      if ((param_1 != 0) && (param_3 != 0)) {
        CWnd::SetFocus((CWnd *)this);
        *(undefined4 *)(this + 0x2dc) = 1;
      }
    }
    else {
      uVar3 = CWnd::GetExStyle((CWnd *)this);
      if (((uVar3 & 0x10000000) != 0) && (param_1 == 0)) {
        CMFCAutoHideButton::ShowAttachedWindow(*(CMFCAutoHideButton **)(this + 0x32c),0);
      }
      CMFCAutoHideBar::ShowAutoHideWindow(*(CMFCAutoHideBar **)(this + 0x330),this,param_1,param_2);
    }
  }
LAB_1012ea10:
  pcVar1 = *(code **)(*(int *)this + 0x16c);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (((iVar2 != 0) && (param_1 != 0)) && (param_3 != 0)) {
    pHVar7 = GetParent(*(HWND *)(this + 0x20));
    pCVar8 = CWnd::FromHandle(pHVar7);
    pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCBaseTabCtrl_101e0580,(CObject *)pCVar8);
    if (pCVar9 != (CObject *)0x0) {
      iVar2 = *(int *)pCVar9;
      pcVar1 = *(code **)(iVar2 + 0x21c);
      guard_check_icall(*(undefined4 *)(this + 0x20));
      uVar10 = (*pcVar1)();
      pcVar1 = *(code **)(iVar2 + 0x214);
      guard_check_icall(uVar10);
      (*pcVar1)();
    }
  }
  return;
}

