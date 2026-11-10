// rea decompile_all
// name: CMFCRibbonKeyTip::Show
// address: 0x505949
// body: available
// range: 0x505949-0x505b9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5059c4 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCRibbonKeyTip::Show(int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCRibbonKeyTip::Show(CMFCRibbonKeyTip *this,int param_1)

{
  code *pcVar1;
  POINT pt;
  AFX_GLOBAL_DATA *pAVar2;
  BOOL BVar3;
  int iVar4;
  HMONITOR hMonitor;
  HCURSOR pHVar5;
  CMFCVisualManager *pCVar6;
  int dx;
  undefined4 uVar7;
  tagMONITORINFO *lpmi;
  undefined4 uVar8;
  CClientDC local_78 [20];
  CWnd *local_64;
  CPen *local_60;
  tagMONITORINFO local_5c;
  tagRECT local_34;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x68;
  local_8 = 0x505955;
  if (((this != (CMFCRibbonKeyTip *)0x0) && (*(int *)(this + 0x20) != 0)) && (param_1 == 0)) {
    CWnd::ShowWindow((CWnd *)this,4);
    goto LAB_00505a13;
  }
  pcVar1 = *(code **)(**(int **)(this + 0x80) + 0xa4);
  guard_check_icall();
  local_64 = (CWnd *)(*pcVar1)();
  if ((local_64 == (CWnd *)0x0) || (*(int *)(local_64 + 0x20) == 0)) goto LAB_00505a13;
  CClientDC::CClientDC(local_78,(CWnd *)0x0);
  local_8 = 0;
  pAVar2 = GetGlobalData();
  local_60 = CDC::SelectObject((CDC *)local_78,(CPen *)(pAVar2 + 0x11c));
  if (local_60 == (CPen *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  pcVar1 = *(code **)(**(int **)(this + 0x80) + 0x1d8);
  guard_check_icall(&local_24,local_78,*(undefined4 *)(this + 0x94));
  (*pcVar1)();
  CDC::SelectObject((CDC *)local_78,local_60);
  BVar3 = IsRectEmpty(&local_24);
  if (BVar3 == 0) {
    CWnd::ClientToScreen(local_64,&local_24);
    lpmi = &local_5c;
    local_5c.cbSize = 0x28;
    local_34.left = 0;
    local_34.top = 0;
    local_34.right = 0;
    local_34.bottom = 0;
    pt.y = local_24.top;
    pt.x = local_24.left;
    hMonitor = MonitorFromPoint(pt,2);
    BVar3 = GetMonitorInfoW(hMonitor,lpmi);
    if (BVar3 == 0) {
      SystemParametersInfoW(0x30,0,&local_34,0);
    }
    else {
      CopyRect(&local_34,&local_5c.rcWork);
    }
    if (local_34.right < local_24.right) {
      iVar4 = local_34.right - local_24.right;
LAB_00505a8f:
      OffsetRect(&local_24,iVar4,0);
    }
    else if (local_24.left < local_34.left) {
      iVar4 = local_34.left - local_24.left;
      goto LAB_00505a8f;
    }
    if (local_34.bottom < local_24.bottom) {
      iVar4 = local_34.bottom - local_24.bottom;
      dx = 0;
LAB_00505ab7:
      OffsetRect(&local_24,dx,iVar4);
    }
    else if (local_24.top < local_34.top) {
      dx = local_34.top - local_24.top;
      iVar4 = 0;
      goto LAB_00505ab7;
    }
    uVar8 = 0;
    uVar7 = 0x10;
    pHVar5 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
    uVar7 = AfxRegisterWndClass(0x800,pHVar5,uVar7,uVar8);
    FUN_00415ad0(uVar7);
    local_60 = (CPen *)0x88;
    pcVar1 = *(code **)(**(int **)(this + 0x80) + 0xdc);
    guard_check_icall();
    iVar4 = (*pcVar1)();
    if (iVar4 != 0) {
      pCVar6 = CMFCVisualManager::GetInstance();
      pcVar1 = *(code **)(*(int *)pCVar6 + 0x2b0);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      if (iVar4 != 0) {
        local_60 = (CPen *)0x80088;
      }
    }
    iVar4 = *(int *)this;
    guard_check_icall(local_60,DAT_00617560,&PTR_005e8934,0x80000000,&local_24,0,0,0);
    iVar4 = (**(code **)(iVar4 + 0x58))();
    if (iVar4 != 0) {
      *(LONG *)(this + 0x84) = local_24.left;
      *(LONG *)(this + 0x88) = local_24.top;
      *(LONG *)(this + 0x8c) = local_24.right;
      *(LONG *)(this + 0x90) = local_24.bottom;
      if (((uint)local_60 & 0x80000) != 0) {
        SetLayeredWindowAttributes(*(HWND *)(this + 0x20),0,0x80,2);
      }
      CWnd::ShowWindow((CWnd *)this,4);
      CClientDC::~CClientDC(local_78);
      goto LAB_00505a13;
    }
  }
  CClientDC::~CClientDC(local_78);
LAB_00505a13:
  iVar4 = FUN_0055bae6();
  return iVar4;
}

