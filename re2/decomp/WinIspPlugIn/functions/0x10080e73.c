// rea decompile_all
// name: CBasePane::ShowPane
// address: 0x10080e73
// body: available
// range: 0x10080e73-0x10081092 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CBasePane::ShowPane(int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CBasePane::ShowPane(CBasePane *this,int param_1,int param_2,int param_3)

{
  CMFCBaseTabCtrl *pCVar1;
  int iVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  CObject *this_00;
  ulong uVar5;
  undefined4 uVar6;
  uint uVar7;
  code *pcVar8;
  CMFCBaseTabCtrl *local_8;
  
  uVar7 = -(uint)(param_1 != 0) & 4;
  pcVar8 = *(code **)(*(int *)this + 0x170);
  local_8 = (CMFCBaseTabCtrl *)this;
  guard_check_icall();
  iVar2 = (*pcVar8)();
  if (iVar2 != 0) {
    pcVar8 = *(code **)(*(int *)this + 0x16c);
    guard_check_icall();
    iVar2 = (*pcVar8)();
    if (iVar2 == 0) {
      CWnd::ShowWindow((CWnd *)this,uVar7);
      pHVar3 = GetParent(*(HWND *)(this + 0x20));
      pCVar4 = CWnd::FromHandle(pHVar3);
      if ((param_2 == 0) || (param_1 == 0)) {
        CWnd::ShowWindow(pCVar4,uVar7);
      }
      PostMessageW(*(HWND *)(pCVar4 + 0x20),DAT_102474b0,0,0);
      goto LAB_10081077;
    }
  }
  local_8 = *(CMFCBaseTabCtrl **)(this + 0xb8);
  if (local_8 == (CMFCBaseTabCtrl *)0x0) {
    pcVar8 = *(code **)(*(int *)this + 0x16c);
    guard_check_icall();
    iVar2 = (*pcVar8)();
    if (iVar2 == 0) {
      CWnd::ShowWindow((CWnd *)this,uVar7);
      if (param_2 == 0) {
        pcVar8 = *(code **)(*(int *)this + 0x268);
        guard_check_icall(0);
        (*pcVar8)();
      }
      goto LAB_10081077;
    }
    local_8 = GetParentTabWnd(this,(HWND__ **)&local_8);
    pHVar3 = GetParent(*(HWND *)(local_8 + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar3);
    this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_101eb880,(CObject *)pCVar4)
    ;
    pCVar1 = local_8;
    if (this_00 != (CObject *)0x0) {
      uVar5 = CWnd::GetExStyle((CWnd *)this_00);
      if ((uVar5 & 0x10000000) == 0) {
        pcVar8 = *(code **)(*(int *)this_00 + 0x3a4);
        guard_check_icall();
        iVar2 = (*pcVar8)();
        if ((1 < iVar2) && (param_1 != 0)) {
          pcVar8 = *(code **)(*(int *)this_00 + 0x3c4);
          guard_check_icall(this,1,param_2,param_3);
          (*pcVar8)();
          return;
        }
      }
      pcVar8 = *(code **)(*(int *)this_00 + 0x3c4);
      guard_check_icall(this,param_1,param_2,param_3);
      (*pcVar8)();
      pcVar8 = *(code **)(*(int *)local_8 + 0x1a4);
      guard_check_icall();
      iVar2 = (*pcVar8)();
      if (iVar2 == 0) {
        pcVar8 = *(code **)(*(int *)this_00 + 0x224);
        guard_check_icall(param_1,param_2,param_3);
        (*pcVar8)();
      }
      goto LAB_10081077;
    }
    pcVar8 = *(code **)(*(int *)local_8 + 0x21c);
    guard_check_icall(*(undefined4 *)(this + 0x20));
    uVar6 = (*pcVar8)();
    pcVar8 = *(code **)(*(int *)pCVar1 + 0x1a8);
    guard_check_icall(uVar6,param_1,param_2 == 0,0);
  }
  else {
    pcVar8 = *(code **)(*(int *)local_8 + 0x2a0);
    guard_check_icall(this,param_1,param_2,param_3);
  }
  (*pcVar8)();
LAB_10081077:
  if (*(CDockingPanesRow **)(this + 0xbc) != (CDockingPanesRow *)0x0) {
    CDockingPanesRow::FixupVirtualRects(*(CDockingPanesRow **)(this + 0xbc),false,(CPane *)0x0);
  }
  return;
}

