// rea decompile_all
// name: CVSListBox::PreTranslateMessage
// address: 0x53ef89
// body: available
// range: 0x53ef89-0x53f176 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CVSListBox::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CVSListBox::PreTranslateMessage(CVSListBox *this,tagMSG *param_1)

{
  code *pcVar1;
  bool bVar2;
  CEdit *pCVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  uint uVar6;
  WPARAM wParam;
  LRESULT LVar7;
  long lVar8;
  int iVar9;
  tagPOINT local_10;
  uint local_8;
  
  bVar2 = false;
  if (((param_1->message == 0x201) && (*(CListCtrl **)(this + 0x110) != (CListCtrl *)0x0)) &&
     (pCVar3 = CListCtrl::GetEditControl(*(CListCtrl **)(this + 0x110)), pCVar3 == (CEdit *)0x0)) {
    if (*(int *)(this + 0x110) == 0) {
      local_8 = 0;
    }
    else {
      local_8 = *(uint *)(*(int *)(this + 0x110) + 0x20);
    }
    pHVar4 = GetFocus();
    pCVar5 = CWnd::FromHandle(pHVar4);
    if (pCVar5 == (CWnd *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(pCVar5 + 0x20);
    }
    if (local_8 == uVar6) {
      *(undefined4 *)(this + 0x114) = 0xffffffff;
      *(undefined4 *)(this + 0x118) = 0xffffffff;
      local_10.x = (param_1->pt).x;
      local_10.y = (param_1->pt).y;
      ScreenToClient(*(HWND *)(*(int *)(this + 0x110) + 0x20),&local_10);
      wParam = CListCtrl::HitTest(*(CListCtrl **)(this + 0x110),local_10.x,local_10.y,&local_8);
      if (((-1 < (int)wParam) && ((local_8 & 4) != 0)) &&
         (LVar7 = SendMessageW(*(HWND *)(*(int *)(this + 0x110) + 0x20),0x102c,wParam,3),
         ((byte)LVar7 & 3) == 3)) {
        *(LONG *)(this + 0x114) = local_10.x;
        *(LONG *)(this + 0x118) = local_10.y;
        pHVar4 = SetCapture(*(HWND *)(this + 0x20));
        CWnd::FromHandle(pHVar4);
        return 1;
      }
      goto LAB_0053f166;
    }
  }
  if ((param_1->message == 0x202) &&
     (iVar9 = CSize::operator!=((CSize *)(this + 0x114),(tagSIZE)0xffffffffffffffff), iVar9 != 0)) {
    ReleaseCapture();
    local_10.x = (param_1->pt).x;
    local_10.y = (param_1->pt).y;
    ScreenToClient(*(HWND *)(*(int *)(this + 0x110) + 0x20),&local_10);
    local_8 = CListCtrl::HitTest(*(CListCtrl **)(this + 0x110),local_10.x,local_10.y,0);
    if (-1 < (int)local_8) {
      lVar8 = _labs(local_10.x - *(int *)(this + 0x114));
      iVar9 = GetSystemMetrics(0x44);
      if (lVar8 < iVar9) {
        lVar8 = _labs(local_10.y - *(int *)(this + 0x118));
        iVar9 = GetSystemMetrics(0x45);
        if (lVar8 < iVar9) {
          bVar2 = true;
        }
      }
    }
    *(undefined4 *)(this + 0x114) = 0xffffffff;
    *(undefined4 *)(this + 0x118) = 0xffffffff;
    if (bVar2) {
      pcVar1 = *(code **)(*(int *)this + 400);
      guard_check_icall(local_8);
      (*pcVar1)();
    }
    return 1;
  }
LAB_0053f166:
  iVar9 = CWnd::PreTranslateMessage((CWnd *)this,param_1);
  return iVar9;
}

