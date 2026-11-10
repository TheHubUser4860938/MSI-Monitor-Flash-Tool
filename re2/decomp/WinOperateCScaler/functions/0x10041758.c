// rea decompile_all
// name: CMFCButton::PreTranslateMessage
// address: 0x10041758
// body: available
// range: 0x10041758-0x100418ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCButton::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCButton::PreTranslateMessage(CMFCButton *this,tagMSG *param_1)

{
  HWND pHVar1;
  CWnd *pCVar2;
  uint uVar3;
  HWND hWnd;
  int iVar4;
  LPARAM lParam;
  
  hWnd = (HWND)0x0;
  iVar4 = *(int *)(this + 0x78c);
  if (((iVar4 != 0) && (*(int *)(iVar4 + 0x20) != 0)) &&
     ((param_1->message == 0x201 || ((param_1->message == 0x202 || (param_1->message == 0x200))))))
  {
    SendMessageW(*(HWND *)(iVar4 + 0x20),0x407,0,(LPARAM)param_1);
  }
  if (param_1->message == 0x100) {
    if ((param_1->wParam == 0xd) && (DAT_1020b0e4 == 0)) {
      pHVar1 = GetParent(*(HWND *)(this + 0x20));
      pCVar2 = CWnd::FromHandle(pHVar1);
      if (pCVar2 != (CWnd *)0x0) {
        lParam = *(LPARAM *)(this + 0x20);
        uVar3 = CWnd::GetDlgCtrlID((CWnd *)this);
        hWnd = *(HWND *)(pCVar2 + 0x20);
        goto LAB_100417eb;
      }
    }
    if ((param_1->message == 0x100) && (*(int *)(this + 0xcc) != 0)) {
      pHVar1 = GetParent(*(HWND *)(this + 0x20));
      pCVar2 = CWnd::FromHandle(pHVar1);
      if (pCVar2 != (CWnd *)0x0) {
        uVar3 = param_1->wParam;
        if (uVar3 == 0x20) {
          if (*(int *)(this + 0xc4) != 0) {
            *(uint *)(this + 0xc0) = (uint)(*(int *)(this + 0xc0) == 0);
            RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
            pHVar1 = GetParent(*(HWND *)(this + 0x20));
            pCVar2 = CWnd::FromHandle(pHVar1);
            if (pCVar2 != (CWnd *)0x0) {
              hWnd = *(HWND *)(pCVar2 + 0x20);
            }
            lParam = *(LPARAM *)(this + 0x20);
            uVar3 = GetWindowLongW(*(HWND *)(this + 0x20),-0xc);
LAB_100417eb:
            SendMessageW(hWnd,0x111,uVar3 & 0xffff,lParam);
            return 1;
          }
        }
        else if (0x24 < uVar3) {
          if (uVar3 < 0x27) {
            iVar4 = 0;
          }
          else {
            if (0x28 < uVar3) goto LAB_10041841;
            iVar4 = 1;
          }
          iVar4 = CheckNextPrevRadioButton(this,iVar4);
          if (iVar4 != 0) {
            return 1;
          }
        }
      }
    }
  }
LAB_10041841:
  iVar4 = CWnd::PreTranslateMessage((CWnd *)this,param_1);
  return iVar4;
}

