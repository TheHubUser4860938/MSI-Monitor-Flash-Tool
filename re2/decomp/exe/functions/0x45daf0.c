// rea decompile_all
// name: CPaneFrameWnd::OnCancelMode
// address: 0x45daf0
// body: available
// range: 0x45daf0-0x45dc84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPaneFrameWnd::OnCancelMode(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPaneFrameWnd::OnCancelMode(CPaneFrameWnd *this)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  BOOL BVar4;
  CWnd *pCVar5;
  CObject *pCVar6;
  HWND pHVar7;
  int iVar8;
  CDockingManager *pCVar9;
  
  pcVar1 = *(code **)(*(int *)this + 0x238);
  guard_check_icall();
  (*pcVar1)();
  if (this[0xa5] == (CPaneFrameWnd)0x0) goto LAB_0045dc77;
  pcVar1 = *(code **)(*(int *)this + 0x1b0);
  guard_check_icall();
  uVar3 = (*pcVar1)();
  if ((uVar3 & 2) == 0) {
    pcVar1 = *(code **)(*(int *)this + 0x1b0);
    guard_check_icall();
    cVar2 = (*pcVar1)();
    if (cVar2 < '\0') {
      pCVar9 = *(CDockingManager **)(this + 0x184);
      if (pCVar9 == (CDockingManager *)0x0) {
        pCVar5 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 200));
        pCVar9 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_0060c45c,pCVar5);
        if (pCVar9 == (CDockingManager *)0x0) goto LAB_0045dc55;
      }
      iVar8 = *(int *)(pCVar9 + 0x1b8);
      if (((iVar8 != 0) && (*(int *)(iVar8 + 8) != 0)) && (*(int *)(iVar8 + 4) != 0)) {
        CMFCDragFrameImpl::RemoveTabPreDocking
                  ((CMFCDragFrameImpl *)(this + 300),(CDockablePane *)0x0);
        if (*(CSmartDockingManager **)(pCVar9 + 0x1b8) != (CSmartDockingManager *)0x0) {
          CSmartDockingManager::Stop(*(CSmartDockingManager **)(pCVar9 + 0x1b8));
        }
      }
    }
    else {
      pcVar1 = *(code **)(*(int *)this + 0x1b0);
      guard_check_icall();
      (*pcVar1)();
    }
  }
  else {
    FUN_004f833e(1);
    BVar4 = IsWindowVisible(*(HWND *)(this + 0x20));
    if (BVar4 == 0) {
      pCVar5 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0xd4));
      pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_005b83cc,(CObject *)pCVar5);
      if (pCVar6 != (CObject *)0x0) {
        pHVar7 = GetParent(*(HWND *)(pCVar6 + 0x20));
        pCVar5 = CWnd::FromHandle(pHVar7);
        if (pCVar5 == (CWnd *)this) {
          pcVar1 = *(code **)(*(int *)pCVar6 + 0x1f8);
          guard_check_icall(pCVar6,0,2);
          iVar8 = (*pcVar1)();
          pcVar1 = *(code **)(*(int *)pCVar6 + 0x224);
          guard_check_icall(1,0,1);
          (*pcVar1)();
          if (iVar8 == 0) {
            return;
          }
        }
      }
    }
  }
LAB_0045dc55:
  ReleaseCapture();
  this[0xa5] = (CPaneFrameWnd)0x0;
  pcVar1 = *(code **)(*(int *)this + 0x20c);
  guard_check_icall(0);
  (*pcVar1)();
LAB_0045dc77:
  FUN_0042ec70();
  return;
}

