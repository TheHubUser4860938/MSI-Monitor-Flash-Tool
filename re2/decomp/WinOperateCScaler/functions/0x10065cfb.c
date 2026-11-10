// rea decompile_all
// name: CMFCVisualManager::OnErasePopupWindowButton
// address: 0x10065cfb
// body: available
// range: 0x10065cfb-0x10065dbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnErasePopupWindowButton(class CDC *,class
   CRect,class CMFCDesktopAlertWndButton *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCVisualManager::OnErasePopupWindowButton(CMFCVisualManager *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  AFX_GLOBAL_DATA *pAVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  HBRUSH hbr;
  int in_stack_00000018;
  tagRECT local_18;
  uint local_8;
  
  iVar2 = in_stack_00000018;
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  hbr = (HBRUSH)0x0;
  if (*(int *)(in_stack_00000018 + 0x7a8) == 0) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    pHVar4 = GetParent(*(HWND *)(in_stack_00000018 + 0x20));
    pCVar5 = CWnd::FromHandle(pHVar4);
    GetClientRect(*(HWND *)(pCVar5 + 0x20),&local_18);
    pHVar4 = GetParent(*(HWND *)(iVar2 + 0x20));
    pCVar5 = CWnd::FromHandle(pHVar4);
    MapWindowPoints(*(HWND *)(pCVar5 + 0x20),*(HWND *)(iVar2 + 0x20),(LPPOINT)&local_18,2);
    pcVar1 = *(code **)(*(int *)this + 0x1dc);
    guard_check_icall(param_1,local_18.left,local_18.top,local_18.right,local_18.bottom);
    (*pcVar1)();
  }
  else {
    pAVar3 = GetGlobalData();
    if (pAVar3 != (AFX_GLOBAL_DATA *)0xffffff68) {
      hbr = *(HBRUSH *)(pAVar3 + 0x9c);
    }
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&stack0x00000008,hbr);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

