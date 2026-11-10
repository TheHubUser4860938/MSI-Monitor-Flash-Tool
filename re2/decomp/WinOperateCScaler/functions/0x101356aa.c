// rea decompile_all
// name: CFrameWnd::SetHelpCapture
// address: 0x101356aa
// body: available
// range: 0x101356aa-0x101357c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
    hCursor = DAT_10207860;
    if (pHVar1 == *(HWND *)(this + 0x20)) {
      ReleaseCapture();
      hCursor = DAT_10207860;
    }
LAB_101357a6:
    SetCursor(hCursor);
    goto LAB_101357af;
  }
  if (pHVar2 == (HWND)0x0) {
LAB_1013577e:
    if (DVar6 != local_c) goto LAB_10135786;
  }
  else {
    if (DVar6 == local_c) {
      iVar7 = AfxIsDescendant(*(HWND__ **)(this + 0x20),pHVar2);
      if (iVar7 != 0) {
        local_8 = 1;
        if (pCVar5 != pCVar3) {
          pHVar2 = (HWND__ *)0x0;
          local_8 = 1;
          goto LAB_101357af;
        }
        hCursor = DAT_10207864;
        if (pHVar1 != *(HWND *)(this + 0x20)) {
          SetCapture(*(HWND *)(this + 0x20));
          hCursor = DAT_10207864;
        }
        goto LAB_101357a6;
      }
      goto LAB_1013577e;
    }
LAB_10135786:
    pHVar2 = (HWND)0x0;
  }
  if (pHVar1 == *(HWND *)(this + 0x20)) {
    ReleaseCapture();
  }
LAB_101357af:
  if (param_2 != (int *)0x0) {
    *param_2 = local_8;
  }
  return pHVar2;
}

