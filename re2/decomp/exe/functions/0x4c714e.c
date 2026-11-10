// rea decompile_all
// name: CMDIChildWndEx::OnSize
// address: 0x4c714e
// body: available
// range: 0x4c714e-0x4c730d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMDIChildWndEx::OnSize(unsigned int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMDIChildWndEx::OnSize(CMDIChildWndEx *this,uint param_1,int param_2,int param_3)

{
  code *pcVar1;
  CMFCVisualManager *pCVar2;
  int iVar3;
  CFrameWnd *pCVar4;
  CObject *this_00;
  tagWINDOWPOS local_34 [8];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 300) != 0) goto LAB_004c72fd;
  InvalidateIconicBitmaps(this);
  *(uint *)(this + 0x134) = (uint)(param_1 == 1);
  pCVar2 = CMFCVisualManager::GetInstance();
  pcVar1 = *(code **)(*(int *)pCVar2 + 500);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 != 0) {
    if ((*(int *)(this + 0x448) == 0) || (*(int *)(*(int *)(this + 0x448) + 0x2f88) != 0)) {
      if (*(int *)(this + 0x170) != 0) {
        *(undefined4 *)(this + 0x170) = 0;
        SetWindowRgn(*(HWND *)(this + 0x20),(HRGN)0x0,1);
      }
    }
    else {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetWindowRect(*(HWND *)(this + 0x20),&local_18);
      local_24 = local_18.right - local_18.left;
      local_20 = local_18.bottom - local_18.top;
      local_2c = local_18.left;
      local_1c = 0x20;
      local_28 = local_18.top;
      CFrameImpl::OnWindowPosChanging((CFrameImpl *)(this + 0x150),local_34);
    }
  }
  if (((*(int *)(this + 0x134) == 0) && (param_1 != 2)) && (*(int *)(this + 0x130) == 0)) {
    *(undefined4 *)(this + 0x260) = 1;
    CMDIChildWnd::OnSize((CMDIChildWnd *)this,param_1,param_2,param_3);
    pcVar1 = *(code **)(*(int *)this + 0x1cc);
    guard_check_icall(0);
    (*pcVar1)();
    *(undefined4 *)(this + 0x260) = 0;
  }
  else {
    CMDIChildWnd::OnSize((CMDIChildWnd *)this,param_1,param_2,param_3);
    if ((param_1 == 2) || ((param_1 == 0 && (*(int *)(this + 0x130) != 0)))) {
      pcVar1 = *(code **)(*(int *)this + 0x178);
      guard_check_icall(1);
      (*pcVar1)();
      if ((*(int *)(this + 0xac) != 0) && (param_1 == 0)) {
        pCVar4 = CWnd::GetParentFrame((CWnd *)this);
        this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_005bad18,
                                     (CObject *)pCVar4);
        if (this_00 != (CObject *)0x0) {
          iVar3 = CMDIFrameWndEx::AreMDITabs((CMDIFrameWndEx *)this_00,(int *)0x0);
          if (iVar3 != 0) goto LAB_004c72e2;
        }
        CWnd::ModifyStyle((CWnd *)this,0,0xcf0000,0);
      }
    }
LAB_004c72e2:
    *(uint *)(this + 0x130) = (uint)(param_1 == 2);
  }
  CFrameImpl::UpdateCaption((CFrameImpl *)(this + 0x150));
LAB_004c72fd:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

