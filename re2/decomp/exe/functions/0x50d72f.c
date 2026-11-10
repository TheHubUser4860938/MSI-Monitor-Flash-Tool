// rea decompile_all
// name: CMFCButton::OnMouseMove
// address: 0x50d72f
// body: available
// range: 0x50d72f-0x50d8b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCButton::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCButton::OnMouseMove(CMFCButton *this,uint param_1,LONG param_3,LONG param_4)

{
  POINT pt;
  POINT Point;
  BOOL BVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  int iVar4;
  bool bVar5;
  tagPOINT local_20;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  *(undefined4 *)(this + 0xbc) = 0;
  param_1 = param_1 & 1;
  if (((param_1 == 0) && (*(int *)(this + 0x80) == 0)) &&
     ((DAT_006176fc == 0 || (*(int *)(this + 0xa4) != 0)))) goto LAB_0050d8a0;
  bVar5 = false;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  local_20.x = param_3;
  local_20.y = param_4;
  ClientToScreen(*(HWND *)(this + 0x20),&local_20);
  pt.y = param_4;
  pt.x = param_3;
  BVar1 = PtInRect(&local_18,pt);
  if (BVar1 == 0) {
LAB_0050d844:
    if (param_1 == 0) {
      if (*(int *)(this + 0xb4) != 0) {
        *(undefined4 *)(this + 0xb4) = 0;
        goto LAB_0050d866;
      }
    }
    else if (*(int *)(this + 0xac) != 0) {
      *(undefined4 *)(this + 0xac) = 0;
LAB_0050d866:
      bVar5 = true;
    }
    if ((*(int *)(this + 0xb8) != 0) && (param_1 == 0)) {
      ReleaseCapture();
      *(undefined4 *)(this + 0xb8) = 0;
LAB_0050d882:
      bVar5 = true;
    }
  }
  else {
    Point.y = local_20.y;
    Point.x = local_20.x;
    pHVar2 = WindowFromPoint(Point);
    pCVar3 = CWnd::FromHandle(pHVar2);
    iVar4 = 0;
    if (pCVar3 != (CWnd *)0x0) {
      iVar4 = *(int *)(pCVar3 + 0x20);
    }
    if (iVar4 != *(int *)(this + 0x20)) goto LAB_0050d844;
    *(undefined4 *)(this + 0xbc) = 1;
    bVar5 = *(int *)(this + 0xb4) == 0;
    if (bVar5) {
      *(undefined4 *)(this + 0xb4) = 1;
    }
    if (((param_1 != 0) && (*(int *)(this + 0xac) == 0)) && (*(int *)(this + 0xb0) != 0)) {
      *(undefined4 *)(this + 0xac) = 1;
      bVar5 = true;
    }
    if (*(int *)(this + 0xb8) == 0) {
      pHVar2 = SetCapture(*(HWND *)(this + 0x20));
      CWnd::FromHandle(pHVar2);
      *(undefined4 *)(this + 0xb8) = 1;
      goto LAB_0050d882;
    }
  }
  if (bVar5) {
    InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
    UpdateWindow(*(HWND *)(this + 0x20));
  }
LAB_0050d8a0:
  FUN_0042ec70();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

