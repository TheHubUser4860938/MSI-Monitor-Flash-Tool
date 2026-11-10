// rea decompile_all
// name: CPaneFrameWnd::OnLButtonUp
// address: 0x45e7ea
// body: available
// range: 0x45e7ea-0x45ea5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPaneFrameWnd::OnLButtonUp(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPaneFrameWnd::OnLButtonUp(CPaneFrameWnd *this)

{
  code *pcVar1;
  SHORT SVar2;
  CDockingManager *pCVar3;
  CObject *pCVar4;
  int iVar5;
  tagPOINT local_14;
  CObject *local_c;
  int local_8;
  
  local_8 = *(int *)(this + 0xb0);
  *(undefined4 *)(this + 0x88) = 0;
  if (local_8 == 0) {
    if (this[0xa5] == (CPaneFrameWnd)0x0) goto LAB_0045e861;
  }
  else if (this[0xa5] == (CPaneFrameWnd)0x0) {
    iVar5 = *(int *)(this + 0xb4);
    pcVar1 = *(code **)(*(int *)this + 0x238);
    guard_check_icall();
    (*pcVar1)();
    if (iVar5 == local_8) {
      if (local_8 == 9) {
        *(uint *)(this + 0x94) = (uint)(*(int *)(this + 0x94) == 0);
      }
      else {
        if (local_8 == 0x14) {
          pcVar1 = *(code **)(*(int *)this + 0x224);
          guard_check_icall();
          (*pcVar1)();
          return;
        }
        if (DAT_00614ed8 == 0) {
          pcVar1 = *(code **)(*(int *)this + 0x228);
          guard_check_icall(local_8);
          (*pcVar1)();
        }
      }
    }
    goto LAB_0045e861;
  }
  ReleaseCapture();
  this[0xa5] = (CPaneFrameWnd)0x0;
  pcVar1 = *(code **)(*(int *)this + 0x20c);
  guard_check_icall(0);
  (*pcVar1)();
  local_8 = 0;
  pCVar3 = *(CDockingManager **)(this + 0x184);
  if (pCVar3 == (CDockingManager *)0x0) {
    pCVar3 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_0060c45c,(CWnd *)this);
  }
  iVar5 = *(int *)(pCVar3 + 0x1b8);
  SVar2 = GetKeyState(0x11);
  if (((((-1 < SVar2) && (iVar5 != 0)) && (*(int *)(iVar5 + 8) != 0)) &&
      ((*(int *)(iVar5 + 4) != 0 && (*(int *)(iVar5 + 0x110) == 8)))) &&
     ((pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_005bad18,
                                   *(CObject **)(pCVar3 + 0xe4)), pCVar4 != (CObject *)0x0 &&
      (iVar5 = CMDIFrameWndEx::AreMDITabs((CMDIFrameWndEx *)pCVar4,(int *)0x0), iVar5 != 0)))) {
    local_14.x = 0;
    local_14.y = 0;
    GetCursorPos(&local_14);
    pcVar1 = *(code **)(*(int *)pCVar3 + 0x14);
    guard_check_icall(local_14.x,local_14.y,this,0);
    iVar5 = (*pcVar1)();
    if (iVar5 == 0) {
      pcVar1 = *(code **)(*(int *)this + 0x1ac);
      guard_check_icall();
      pCVar4 = (CObject *)(*pcVar1)();
      local_c = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_0060c780,pCVar4);
      iVar5 = *(int *)pCVar3;
      guard_check_icall(local_14.x,local_14.y,DAT_0060c608,1,0,1,local_c);
      pCVar4 = (CObject *)(**(code **)(iVar5 + 0x10))();
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_0060c780,pCVar4);
      if ((pCVar4 == (CObject *)0x0) && (local_c != (CObject *)0x0)) {
        pcVar1 = *(code **)(*(int *)this + 0x200);
        guard_check_icall();
        (*pcVar1)();
        CMFCDragFrameImpl::ResetState((CMFCDragFrameImpl *)(this + 300));
        if (*(CSmartDockingManager **)(pCVar3 + 0x1b8) == (CSmartDockingManager *)0x0) {
          return;
        }
        CSmartDockingManager::Stop(*(CSmartDockingManager **)(pCVar3 + 0x1b8));
        return;
      }
    }
  }
  pcVar1 = *(code **)(*(int *)this + 0x184);
  guard_check_icall(&local_8);
  iVar5 = (*pcVar1)();
  if (iVar5 == 0) {
    if (local_8 == 0) {
      CMFCDragFrameImpl::ResetState((CMFCDragFrameImpl *)(this + 300));
LAB_0045e861:
      FUN_0042ec70();
      return;
    }
  }
  else if (local_8 == 0) {
    return;
  }
  CGlobalUtils::ForceAdjustLayout((CGlobalUtils *)&PTR_vftable_0060c45c,pCVar3,0,0);
  return;
}

