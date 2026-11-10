// rea decompile_all
// name: CFrameWnd::SetHelpCapture
// address: 0x4394ac
// body: available
// range: 0x4394ac-0x4395c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: struct HWND__ * __thiscall CFrameWnd::SetHelpCapture(struct tagPOINT,int *)
   
   Library: Visual Studio 2015 Release */

HWND__ * __thiscall CFrameWnd::SetHelpCapture(CFrameWnd *this,tagPOINT param_1,int *param_2)

{
  HWND pHVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  DWORD DVar6;
  int iVar7;
  HCURSOR hCursor;
  DWORD local_c;
  int local_8;
  
  if (*(int *)(this + 0x94) == 0) {
    return (HWND__ *)0x0;
  }
  pHVar1 = GetCapture();
  pHVar2 = WindowFromPoint(param_1);
  pCVar3 = CWnd::FromHandle(pHVar2);
  if (pCVar3 == (CWnd *)0x0) {
    pHVar2 = (HWND)0x0;
  }
  else {
    pHVar2 = *(HWND *)(pCVar3 + 0x20);
  }
  pCVar3 = CWnd::GetTopLevelParent(pCVar3);
  pHVar4 = GetActiveWindow();
  pCVar5 = CWnd::FromHandle(pHVar4);
  pCVar5 = CWnd::GetTopLevelParent(pCVar5);
  local_8 = 0;
  DVar6 = GetCurrentThreadId();
  if (pHVar2 == (HWND)0x0) {
    local_c = 0;
  }
  else {
    local_c = GetWindowThreadProcessId(pHVar2,(LPDWORD)0x0);
  }
  if ((pCVar5 == (CWnd *)0x0) || (pHVar4 = GetDesktopWindow(), pHVar2 == pHVar4)) {
    hCursor = DAT_006161f8;
    if (pHVar1 == *(HWND *)(this + 0x20)) {
      ReleaseCapture();
      hCursor = DAT_006161f8;
    }
LAB_004395a8:
    SetCursor(hCursor);
    goto LAB_004395b1;
  }
  if (pHVar2 == (HWND)0x0) {
LAB_00439580:
    if (DVar6 != local_c) goto LAB_00439588;
  }
  else {
    if (DVar6 == local_c) {
      iVar7 = AfxIsDescendant(*(HWND__ **)(this + 0x20),pHVar2);
      if (iVar7 != 0) {
        local_8 = 1;
        if (pCVar5 != pCVar3) {
          pHVar2 = (HWND__ *)0x0;
          local_8 = 1;
          goto LAB_004395b1;
        }
        hCursor = DAT_006161fc;
        if (pHVar1 != *(HWND *)(this + 0x20)) {
          SetCapture(*(HWND *)(this + 0x20));
          hCursor = DAT_006161fc;
        }
        goto LAB_004395a8;
      }
      goto LAB_00439580;
    }
LAB_00439588:
    pHVar2 = (HWND)0x0;
  }
  if (pHVar1 == *(HWND *)(this + 0x20)) {
    ReleaseCapture();
  }
LAB_004395b1:
  if (param_2 != (int *)0x0) {
    *param_2 = local_8;
  }
  return pHVar2;
}

