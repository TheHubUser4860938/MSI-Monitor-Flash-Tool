// rea decompile_all
// name: CMFCBaseTabCtrl::PreTranslateMessage
// address: 0x100a04d2
// body: available
// range: 0x100a04d2-0x100a0652 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCBaseTabCtrl::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCBaseTabCtrl::PreTranslateMessage(CMFCBaseTabCtrl *this,tagMSG *param_1)

{
  uint uVar1;
  code *pcVar2;
  POINT pt;
  BOOL BVar3;
  int iVar4;
  tagPOINT local_20;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x150) == 0) {
    CWnd::PreTranslateMessage((CWnd *)this,param_1);
    goto LAB_100a0640;
  }
  uVar1 = param_1->message;
  if ((uVar1 < 0x100) || (0x109 < uVar1)) {
    if ((uVar1 < 0x200) || (0x20e < uVar1)) goto LAB_100a0640;
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(*(int *)(this + 0x150) + 0x20),&local_18);
    MapWindowPoints(*(HWND *)(*(int *)(this + 0x150) + 0x20),*(HWND *)(this + 0x20),
                    (LPPOINT)&local_18,2);
    local_20.x = 0;
    local_20.y = 0;
    GetCursorPos(&local_20);
    ScreenToClient(*(HWND *)(this + 0x20),&local_20);
    pt.y = local_20.y;
    pt.x = local_20.x;
    BVar3 = PtInRect(&local_18,pt);
    if (BVar3 != 0) {
      SendMessageW(*(HWND *)(*(int *)(this + 0x150) + 0x20),param_1->message,param_1->wParam,
                   param_1->lParam);
      goto LAB_100a0640;
    }
    if (param_1->message == 0x200) goto LAB_100a0640;
  }
  else if (param_1->wParam == 0xd) {
    pcVar2 = *(code **)(*(int *)this + 0x1fc);
    guard_check_icall();
    iVar4 = (*pcVar2)();
    if (iVar4 == 0) {
      MessageBeep(0xffffffff);
      goto LAB_100a0640;
    }
  }
  else if (param_1->wParam != 0x1b) goto LAB_100a0640;
  pcVar2 = *(code **)(**(int **)(this + 0x150) + 0x60);
  guard_check_icall();
  (*pcVar2)();
  if (*(int **)(this + 0x150) != (int *)0x0) {
    pcVar2 = *(code **)(**(int **)(this + 0x150) + 4);
    guard_check_icall(1);
    (*pcVar2)();
  }
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x14c) = 0xffffffff;
  ReleaseCapture();
LAB_100a0640:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

