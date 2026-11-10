// rea decompile_all
// name: CMFCPopupMenu::PreTranslateMessage
// address: 0x1008d3cd
// body: available
// range: 0x1008d3cd-0x1008d495 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCPopupMenu::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCPopupMenu::PreTranslateMessage(CMFCPopupMenu *this,tagMSG *param_1)

{
  POINT pt;
  POINT pt_00;
  BOOL BVar1;
  int iVar2;
  tagPOINT local_c;
  
  local_c.x = (LONG)this;
  local_c.y = (LONG)this;
  if ((this != (CMFCPopupMenu *)0xffffef70) && (*(int *)(this + 0x10b0) != 0)) {
    SendMessageW(*(HWND *)(this + 0x10b0),0x407,0,(LPARAM)param_1);
  }
  if (param_1->message == 0x200) {
    BVar1 = IsRectEmpty((RECT *)(this + 0xf84));
    if (BVar1 != 0) {
      BVar1 = IsRectEmpty((RECT *)(this + 0xf94));
      if (BVar1 != 0) goto LAB_1008d485;
    }
    local_c.x = 0;
    local_c.y = 0;
    GetCursorPos(&local_c);
    ScreenToClient(*(HWND *)(this + 0x20),&local_c);
    pt.y = local_c.y;
    pt.x = local_c.x;
    BVar1 = PtInRect((RECT *)(this + 0xf84),pt);
    if (BVar1 == 0) {
      pt_00.y = local_c.y;
      pt_00.x = local_c.x;
      BVar1 = PtInRect((RECT *)(this + 0xf94),pt_00);
      if (BVar1 == 0) goto LAB_1008d485;
    }
    OnMouseMove(this,param_1->wParam,local_c.x,local_c.y);
    iVar2 = 1;
  }
  else {
LAB_1008d485:
    iVar2 = FUN_100928f6(param_1);
  }
  return iVar2;
}

