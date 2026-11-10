// rea decompile_all
// name: CMFCPropertyGridToolTipCtrl::PreTranslateMessage
// address: 0x1009b2a4
// body: available
// range: 0x1009b2a4-0x1009b32d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCPropertyGridToolTipCtrl::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCPropertyGridToolTipCtrl::PreTranslateMessage(CMFCPropertyGridToolTipCtrl *this,tagMSG *param_1)

{
  HWND hWndTo;
  int iVar1;
  tagPOINT local_c;
  
  local_c.x = (LONG)this;
  local_c.y = (LONG)this;
  if ((param_1->message < 0x200) || (0x20e < param_1->message)) {
    iVar1 = CWnd::PreTranslateMessage((CWnd *)this,param_1);
  }
  else {
    if (param_1->message != 0x200) {
      Hide(this);
    }
    local_c.x = (LONG)(ushort)param_1->lParam;
    local_c.y = (LONG)*(ushort *)((int)&param_1->lParam + 2);
    hWndTo = (HWND)0x0;
    if (*(int *)(this + 0x9c) != 0) {
      hWndTo = *(HWND *)(*(int *)(this + 0x9c) + 0x20);
    }
    MapWindowPoints(*(HWND *)(this + 0x20),hWndTo,&local_c,1);
    SendMessageW(*(HWND *)(*(int *)(this + 0x9c) + 0x20),param_1->message,param_1->wParam,
                 CONCAT22((undefined2)local_c.y,(undefined2)local_c.x));
    iVar1 = 1;
  }
  return iVar1;
}

