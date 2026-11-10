// rea decompile_all
// name: CMFCBaseVisualManager::FillReBarPane
// address: 0x100545a0
// body: available
// range: 0x100545a0-0x1005471a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCBaseVisualManager::FillReBarPane(class CDC *,class CBasePane
   *,class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCBaseVisualManager::FillReBarPane
          (CMFCBaseVisualManager *this,int param_1,CWnd *param_2,LONG param_4,LONG param_5,
          int param_6,int param_7)

{
  code *pcVar1;
  AFX_GLOBAL_DATA *pAVar2;
  CWnd *this_00;
  HWND pHVar3;
  int iVar4;
  CFrameWnd *pCVar5;
  HDC hdc;
  HBRUSH hbr;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  hbr = (HBRUSH)0x0;
  if (*(int *)(this + 0xc) == 0) {
    pAVar2 = GetGlobalData();
    if (pAVar2 != (AFX_GLOBAL_DATA *)0xffffff30) {
      hbr = *(HBRUSH *)(pAVar2 + 0xd4);
    }
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_4,hbr);
    goto LAB_10054708;
  }
  this_00 = (CWnd *)AFXGetParentFrame(param_2);
  if ((this_00 == (CWnd *)0x0) || (*(int *)(this_00 + 0x20) == 0)) {
    pHVar3 = GetParent(*(HWND *)(param_2 + 0x20));
    this_00 = CWnd::FromHandle(pHVar3);
  }
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(this_00 + 0x20),&local_18);
  CWnd::ScreenToClient(param_2,&local_18);
  if (param_6 <= local_18.right) {
    param_6 = local_18.right;
  }
  if (param_7 <= local_18.bottom) {
    param_7 = local_18.bottom;
  }
  pcVar1 = *(code **)(*(int *)param_2 + 0x170);
  guard_check_icall();
  iVar4 = (*pcVar1)();
  if (iVar4 == 0) {
    pcVar1 = *(code **)(*(int *)param_2 + 0x228);
    guard_check_icall(0);
    iVar4 = (*pcVar1)();
    if (iVar4 == 0) {
      param_4 = local_18.left;
      param_5 = local_18.top;
      iVar4 = FUN_10019d4f(&PTR_s_CDockSite_101954d4);
      if (iVar4 == 0) {
        pCVar5 = DAT_101dc4c4;
        if (DAT_101dc4c4 == (CFrameWnd *)0x0) {
          pCVar5 = CWnd::GetTopLevelFrame(this_00);
          if (pCVar5 == (CFrameWnd *)0x0) goto LAB_100546e6;
        }
        if (*(int *)(pCVar5 + 0x20) != 0) {
          local_28.left = 0;
          local_28.top = 0;
          local_28.right = 0;
          local_28.bottom = 0;
          GetClientRect(*(HWND *)(pCVar5 + 0x20),&local_28);
          MapWindowPoints(*(HWND *)(pCVar5 + 0x20),*(HWND *)(param_2 + 0x20),(LPPOINT)&local_28,2);
          param_5 = local_28.top;
        }
      }
    }
  }
LAB_100546e6:
  if (param_1 == 0) {
    hdc = (HDC)0x0;
  }
  else {
    hdc = *(HDC *)(param_1 + 4);
  }
  DrawThemeBackground(*(HTHEME *)(this + 0xc),hdc,0,0,(LPCRECT)&param_4,(LPCRECT)0x0);
LAB_10054708:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

