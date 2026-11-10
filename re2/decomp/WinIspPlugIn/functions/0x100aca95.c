// rea decompile_all
// name: _AFX_MOUSEANCHORWND::OnTimer
// address: 0x100aca95
// body: available
// range: 0x100aca95-0x100acd03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall _AFX_MOUSEANCHORWND::OnTimer(unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall _AFX_MOUSEANCHORWND::OnTimer(_AFX_MOUSEANCHORWND *this,uint param_1)

{
  code *pcVar1;
  int iVar2;
  CWnd *pCVar3;
  AFX_MODULE_STATE *pAVar4;
  HCURSOR hCursor;
  HWND pHVar5;
  CWnd *pCVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 local_30;
  undefined4 local_2c;
  tagPOINT local_28;
  CWnd *local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_28.x = 0;
  local_28.y = 0;
  GetCursorPos(&local_28);
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x20),&local_18);
  iVar9 = *(int *)(this + 0x9c);
  uVar10 = 0;
  if ((iVar9 == 0x7923) || (iVar9 == 0x7922)) {
    if (local_28.y < local_18.top) {
      uVar10 = 30999;
    }
    else if (local_18.bottom < local_28.y) {
      uVar10 = 0x791d;
    }
  }
  if ((iVar9 == 0x7923) || (iVar9 == 0x7921)) {
    if (local_28.x < local_18.left) {
      if (uVar10 == 0) {
        uVar10 = 0x7919;
      }
      else if (iVar9 == 0x7923) {
        uVar10 = uVar10 - 1;
      }
    }
    else if (local_18.right < local_28.x) {
      if (uVar10 == 0) {
        uVar10 = 0x791b;
      }
      else if (iVar9 == 0x7923) {
        uVar10 = uVar10 + 1;
      }
    }
  }
  if (*(int *)(this + 0x98) == 0) {
    if (uVar10 == 0) {
      SetCursor(*(HCURSOR *)(this + 0xa0));
    }
    else {
      pAVar4 = AfxGetModuleState();
      hCursor = LoadCursorW(*(HINSTANCE *)(pAVar4 + 0xc),(LPCWSTR)(uVar10 & 0xffff));
      SetCursor(hCursor);
      local_1c = local_18.right;
      if ((local_18.right < local_28.x) || (local_1c = local_18.left, local_28.x < local_18.left)) {
        local_1c = local_28.x - local_1c;
      }
      else {
        local_1c = 0;
      }
      if (local_18.bottom < local_28.y) {
        iVar9 = local_28.y - local_18.bottom;
      }
      else if (local_28.y < local_18.top) {
        iVar9 = local_28.y - local_18.top;
      }
      else {
        iVar9 = 0;
      }
      local_20 = CWnd::GetOwner((CWnd *)this);
      iVar2 = *(int *)(this + 0x9c);
      if ((iVar2 == 0x7923) || (iVar2 == 0x7922)) {
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
      }
      if ((iVar2 == 0x7923) || (iVar2 == 0x7921)) {
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
      }
      pcVar1 = *(code **)(*(int *)local_20 + 0x1b4);
      guard_check_icall(&local_30,local_1c,iVar9,uVar7,uVar8);
      pCVar3 = local_20;
      (*pcVar1)();
      CWnd::ShowWindow((CWnd *)this,0);
      pHVar5 = GetParent(*(HWND *)(pCVar3 + 0x20));
      pCVar6 = CWnd::FromHandle(pHVar5);
      local_20 = (CWnd *)AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CSplitterWnd_101e1d78,
                                            (CObject *)pCVar6);
      if (local_20 == (CWnd *)0x0) {
        pcVar1 = *(code **)(*(int *)pCVar3 + 0x16c);
        guard_check_icall();
        (*pcVar1)();
      }
      else {
        pcVar1 = *(code **)(*(int *)local_20 + 0x1b0);
        guard_check_icall(pCVar3,local_30,local_2c,1);
        (*pcVar1)();
      }
      UpdateWindow(*(HWND *)(this + 0x20));
      CWnd::SetWindowPos((CWnd *)this,(CWnd *)&DAT_10245040,*(int *)(this + 0x90) + -0x10,
                         *(int *)(this + 0x94) + -0x10,0,0,0x51);
    }
  }
  else {
    KillTimer(*(HWND *)(this + 0x20),0xec08);
    ReleaseCapture();
    SetCursor((HCURSOR)0x0);
    pCVar3 = CWnd::GetOwner((CWnd *)this);
    pcVar1 = *(code **)(*(int *)this + 0x60);
    guard_check_icall();
    (*pcVar1)();
    if (*(int **)(pCVar3 + 0x88) != (int *)0x0) {
      pcVar1 = *(code **)(**(int **)(pCVar3 + 0x88) + 4);
      guard_check_icall(1);
      (*pcVar1)();
    }
    *(undefined4 *)(pCVar3 + 0x88) = 0;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

