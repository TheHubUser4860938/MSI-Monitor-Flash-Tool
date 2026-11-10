// rea decompile_all
// name: CMFCOutlookBarPane::PreTranslateMessage
// address: 0x48312e
// body: available
// range: 0x48312e-0x4832cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCOutlookBarPane::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCOutlookBarPane::PreTranslateMessage(CMFCOutlookBarPane *this,tagMSG *param_1)

{
  POINT pt;
  POINT pt_00;
  BOOL BVar1;
  int iVar2;
  tagPOINT local_20;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if (0x1ff < param_1->message) {
    if (0x201 < param_1->message) {
      if (param_1->message != 0x202) goto LAB_004832b3;
      KillTimer(*(HWND *)(this + 0x20),0xec13);
      KillTimer(*(HWND *)(this + 0x20),0xec14);
    }
    local_20.x = 0;
    local_20.y = 0;
    GetCursorPos(&local_20);
    ScreenToClient(*(HWND *)(this + 0x20),&local_20);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x1630),&local_18);
    MapWindowPoints(*(HWND *)(this + 0x1630),*(HWND *)(this + 0x20),(LPPOINT)&local_18,2);
    pt.y = local_20.y;
    pt.x = local_20.x;
    BVar1 = PtInRect(&local_18,pt);
    if ((BVar1 != 0) &&
       (SendMessageW(*(HWND *)(this + 0x1630),param_1->message,param_1->wParam,param_1->wParam),
       param_1->message == 0x201)) {
      SetTimer(*(HWND *)(this + 0x20),0xec14,200,(TIMERPROC)0x0);
      if (*(int *)(this + 0x1ddc) == 0) {
        ScrollDown(this);
      }
      else {
        ScrollPageDown(this);
      }
    }
    GetClientRect(*(HWND *)(this + 0xe88),&local_18);
    MapWindowPoints(*(HWND *)(this + 0xe88),*(HWND *)(this + 0x20),(LPPOINT)&local_18,2);
    pt_00.y = local_20.y;
    pt_00.x = local_20.x;
    BVar1 = PtInRect(&local_18,pt_00);
    if ((BVar1 != 0) &&
       (SendMessageW(*(HWND *)(this + 0xe88),param_1->message,param_1->wParam,param_1->wParam),
       param_1->message == 0x201)) {
      SetTimer(*(HWND *)(this + 0x20),0xec13,200,(TIMERPROC)0x0);
      if (*(int *)(this + 0x1ddc) == 0) {
        ScrollUp(this);
      }
      else {
        ScrollPageUp(this);
      }
    }
  }
LAB_004832b3:
  CMFCToolBar::PreTranslateMessage((CMFCToolBar *)this,param_1);
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

