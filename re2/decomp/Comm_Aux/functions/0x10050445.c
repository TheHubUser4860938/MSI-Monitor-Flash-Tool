// rea decompile_all
// name: CWnd::CenterWindow
// address: 0x10050445
// body: available
// range: 0x10050445-0x10050639 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CWnd::CenterWindow(class CWnd *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CWnd::CenterWindow(CWnd *this,CWnd *param_1)

{
  ulong uVar1;
  HWND pHVar2;
  uint uVar3;
  CWnd *pCVar4;
  HMONITOR pHVar5;
  int iVar6;
  HWND pHVar7;
  int iVar8;
  tagMONITORINFO *ptVar9;
  tagMONITORINFO local_60;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  uVar1 = GetExStyle(this);
  if (param_1 == (CWnd *)0x0) {
    if ((uVar1 & 0x40000000) == 0) {
      pHVar2 = GetWindow(*(HWND *)(this + 0x20),4);
    }
    else {
      pHVar2 = GetParent(*(HWND *)(this + 0x20));
    }
    if (pHVar2 != (HWND)0x0) {
      pHVar7 = (HWND)SendMessageW(pHVar2,0x36b,0,0);
      if (pHVar7 != (HWND)0x0) {
        pHVar2 = pHVar7;
      }
    }
  }
  else {
    pHVar2 = *(HWND *)(param_1 + 0x20);
  }
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x20),&local_28);
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  local_38.left = 0;
  local_38.top = 0;
  local_38.right = 0;
  local_38.bottom = 0;
  if ((uVar1 & 0x40000000) == 0) {
    pHVar7 = (HWND)0x0;
    if (pHVar2 != (HWND)0x0) {
      uVar3 = GetWindowLongW(pHVar2,-0x10);
      pHVar7 = (HWND)((uint)pHVar2 & ~-(uint)((uVar3 & 0x30000000) != 0x10000000));
    }
    local_60.cbSize = 0x28;
    if (pHVar7 == (HWND)0x0) {
      pCVar4 = AfxGetMainWnd();
      pHVar2 = (HWND)0x0;
      if (pCVar4 != (CWnd *)0x0) {
        pHVar2 = *(HWND *)(pCVar4 + 0x20);
      }
      ptVar9 = &local_60;
      pHVar5 = MonitorFromWindow(pHVar2,1);
      GetMonitorInfoW(pHVar5,ptVar9);
      CopyRect(&local_38,&local_60.rcWork);
    }
    else {
      GetWindowRect(pHVar7,&local_38);
      ptVar9 = &local_60;
      pHVar5 = MonitorFromWindow(pHVar7,2);
      GetMonitorInfoW(pHVar5,ptVar9);
    }
    CopyRect(&local_18,&local_60.rcWork);
  }
  else {
    pHVar7 = GetParent(*(HWND *)(this + 0x20));
    GetClientRect(pHVar7,&local_18);
    GetClientRect(pHVar2,&local_38);
    ::MapWindowPoints(pHVar2,pHVar7,(LPPOINT)&local_38,2);
  }
  iVar6 = (local_38.right + local_38.left) / 2 - (local_28.right - local_28.left) / 2;
  iVar8 = (local_38.bottom + local_38.top) / 2 - (local_28.bottom - local_28.top) / 2;
  if (local_18.right < (local_28.right - local_28.left) + iVar6) {
    iVar6 = (local_28.left - local_28.right) + local_18.right;
  }
  if (iVar6 < local_18.left) {
    iVar6 = local_18.left;
  }
  if (local_18.bottom < (local_28.bottom - local_28.top) + iVar8) {
    iVar8 = (local_28.top - local_28.bottom) + local_18.bottom;
  }
  if (iVar8 < local_18.top) {
    iVar8 = local_18.top;
  }
  SetWindowPos(this,(CWnd *)0x0,iVar6,iVar8,-1,-1,0x15);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

