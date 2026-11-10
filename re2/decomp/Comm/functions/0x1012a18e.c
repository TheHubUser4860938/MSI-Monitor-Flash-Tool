// rea decompile_all
// name: CFrameWnd::ProcessHelpMsg
// address: 0x1012a18e
// body: available
// range: 0x1012a18e-0x1012a3a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CFrameWnd::ProcessHelpMsg(struct tagMSG &,unsigned long *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CFrameWnd::ProcessHelpMsg(CFrameWnd *this,tagMSG *param_1,ulong *param_2)

{
  code *pcVar1;
  tagPOINT tVar2;
  tagPOINT tVar3;
  tagPOINT tVar4;
  HWND__ *hWnd;
  LRESULT LVar5;
  ulong uVar6;
  BOOL BVar7;
  HWND pHVar8;
  int iVar9;
  UINT wMsgFilterMin;
  UINT wMsgFilterMax;
  tagMSG local_2c;
  tagPOINT local_10;
  int local_8;
  
  wMsgFilterMin = param_1->message;
  wMsgFilterMax = wMsgFilterMin;
  if ((wMsgFilterMin == 0x367) || ((wMsgFilterMin == 0x100 && (param_1->wParam == 0x1b)))) {
LAB_1012a391:
    PeekMessageW(param_1,(HWND)0x0,wMsgFilterMin,wMsgFilterMax,1);
    return 0;
  }
  local_10.x = 0;
  local_10.y = 0;
  if (((wMsgFilterMin < 0x200) || (0x209 < wMsgFilterMin)) &&
     ((wMsgFilterMin < 0xa0 || (0xa9 < wMsgFilterMin)))) {
    if ((wMsgFilterMin != 0x112) && ((wMsgFilterMin < 0x100 || (0x109 < wMsgFilterMin)))) {
      BVar7 = PeekMessageW(param_1,(HWND)0x0,wMsgFilterMin,wMsgFilterMin,1);
      if (BVar7 == 0) {
        return 1;
      }
LAB_1012a2ad:
      DispatchMessageW(param_1);
      return 1;
    }
    pHVar8 = GetCapture();
    if (pHVar8 != (HWND)0x0) {
      ReleaseCapture();
      do {
        BVar7 = PeekMessageW(&local_2c,(HWND)0x0,0x200,0x209,3);
      } while (BVar7 != 0);
    }
    BVar7 = PeekMessageW(param_1,(HWND)0x0,param_1->message,param_1->message,0);
    if (BVar7 == 0) goto LAB_1012a36f;
    GetMessageW(param_1,(HWND)0x0,param_1->message,param_1->message);
    pcVar1 = *(code **)(*(int *)this + 0x10c);
    guard_check_icall(param_1);
    iVar9 = (*pcVar1)();
    if ((iVar9 != 0) ||
       ((TranslateMessage(param_1), param_1->message != 0x112 &&
        ((param_1->message < 0x104 || (0x107 < param_1->message)))))) goto LAB_1012a36f;
  }
  else {
    tVar3.x = (param_1->pt).x;
    tVar3.y = (param_1->pt).y;
    hWnd = SetHelpCapture(this,tVar3,&local_8);
    if (hWnd == (HWND__ *)0x0) {
      return 1;
    }
    if (local_8 == 0) {
      PeekMessageW(param_1,(HWND)0x0,param_1->message,param_1->message,1);
      goto LAB_1012a2ad;
    }
    if (param_1->message != 0x201) {
      PeekMessageW(param_1,(HWND)0x0,param_1->message,param_1->message,1);
      return 1;
    }
    LVar5 = SendMessageW(hWnd,0x84,0,CONCAT22((short)(param_1->pt).y,(short)(param_1->pt).x));
    if ((LVar5 != 5) && (LVar5 != 3)) {
      if (LVar5 == 1) {
        tVar4.x = (param_1->pt).x;
        tVar4.y = (param_1->pt).y;
        uVar6 = _AfxMapClientArea(hWnd,tVar4);
      }
      else {
        uVar6 = _AfxMapNonClientArea(LVar5);
      }
      *param_2 = uVar6;
      wMsgFilterMin = param_1->message;
      wMsgFilterMax = param_1->message;
      goto LAB_1012a391;
    }
    ReleaseCapture();
    GetMessageW(param_1,(HWND)0x0,0xa1,0xa1);
  }
  DispatchMessageW(param_1);
LAB_1012a36f:
  GetCursorPos(&local_10);
  tVar2.y = local_10.y;
  tVar2.x = local_10.x;
  SetHelpCapture(this,tVar2,(int *)0x0);
  return 1;
}

