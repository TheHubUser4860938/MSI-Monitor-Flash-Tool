// rea decompile_all
// name: CMDIFrameWndEx::OnSize
// address: 0x100e92f8
// body: available
// range: 0x100e92f8-0x100e9498 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMDIFrameWndEx::OnSize(unsigned int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMDIFrameWndEx::OnSize(CMDIFrameWndEx *this,uint param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  tagWINDOWPOS local_38 [8];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x154) != 0) {
    CMDIFrameWnd::OnSize((CMDIFrameWnd *)this,param_1,param_2,param_3);
    goto LAB_100e9487;
  }
  *(uint *)(this + 0x150) = (uint)(param_1 == 1);
  if (*(int *)(this + 0x44c) == 0) {
    iVar2 = CFrameImpl::IsOwnerDrawCaption((CFrameImpl *)(this + 0x350));
    if (iVar2 != 0) goto LAB_100e934f;
  }
  else {
LAB_100e934f:
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_18);
    local_28 = local_18.right - local_18.left;
    local_30 = local_18.left;
    local_24 = local_18.bottom - local_18.top;
    local_20 = 0x20;
    local_2c = local_18.top;
    CFrameImpl::OnWindowPosChanging((CFrameImpl *)(this + 0x350),local_38);
  }
  pcVar1 = *(code **)(*(int *)(this + 0x160) + 0x58);
  guard_check_icall(*(int *)(this + 0x150) == 0);
  (*pcVar1)();
  if (((*(int *)(this + 0x150) == 0) && (param_1 != 2)) && (*(int *)(this + 0x14c) == 0)) {
    *(undefined4 *)(this + 0x16c) = 1;
    pcVar1 = *(code **)(*(int *)this + 0x1c8);
    guard_check_icall(0);
    (*pcVar1)();
    CMDIFrameWnd::OnSize((CMDIFrameWnd *)this,param_1,param_2,param_3);
    *(undefined4 *)(this + 0x16c) = 0;
    local_1c = 0;
    SystemParametersInfoW(0x26,0,&local_1c,0);
    if (local_1c == 0) {
      pcVar1 = *(code **)(*(int *)this + 0x178);
      guard_check_icall(1);
      (*pcVar1)();
    }
  }
  else {
    CMDIFrameWnd::OnSize((CMDIFrameWnd *)this,param_1,param_2,param_3);
    if ((param_1 == 2) || ((param_1 == 0 && (*(int *)(this + 0x14c) != 0)))) {
      pcVar1 = *(code **)(*(int *)this + 0x178);
      guard_check_icall(1);
      (*pcVar1)();
    }
    *(uint *)(this + 0x14c) = (uint)(param_1 == 2);
  }
  CFrameImpl::UpdateCaption((CFrameImpl *)(this + 0x350));
LAB_100e9487:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

