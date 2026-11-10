// rea decompile_all
// name: CMFCPopupMenu::CheckArea
// address: 0x10089cf8
// body: available
// range: 0x10089cf8-0x10089e3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: enum CMFCPopupMenu::MENUAREA_TYPE __thiscall CMFCPopupMenu::CheckArea(class CPoint const
   &)const 
   
   Library: Visual Studio 2015 Release */

MENUAREA_TYPE __thiscall CMFCPopupMenu::CheckArea(CMFCPopupMenu *this,CPoint *param_1)

{
  int iVar1;
  BOOL BVar2;
  MENUAREA_TYPE MVar3;
  tagRECT local_38;
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  CWnd::ClientToScreen((CWnd *)this,&local_18);
  BVar2 = PtInRect(&local_18,*(POINT *)param_1);
  if (BVar2 != 0) {
    iVar1 = *(int *)(this + 0xf60);
    local_28.left = local_18.left;
    local_28.top = local_18.top;
    local_28.right = local_18.right;
    local_28.bottom = local_18.bottom;
    if (iVar1 == 0) {
      local_28.right = *(int *)(this + 0xf58) + local_18.left;
    }
    else if (iVar1 == 1) {
      local_28.left = local_18.right - *(int *)(this + 0xf58);
    }
    else if (iVar1 == 2) {
      local_28.bottom = *(int *)(this + 0xf58) + local_18.top;
    }
    else if (iVar1 == 3) {
      local_28.top = local_18.bottom - *(int *)(this + 0xf58);
    }
    BVar2 = PtInRect(&local_28,*(POINT *)param_1);
    if (((BVar2 == 0) && (*(int *)param_1 <= local_18.right - *(int *)(this + 0x105c))) &&
       (*(int *)(param_1 + 4) <= local_18.bottom - *(int *)(this + 0x105c))) {
      BVar2 = IsRectEmpty((RECT *)(this + 0x107c));
      if (BVar2 == 0) {
        local_38.left = ((RECT *)(this + 0x107c))->left;
        local_38.top = *(LONG *)(this + 0x1080);
        local_38.right = *(LONG *)(this + 0x1084);
        local_38.bottom = *(LONG *)(this + 0x1088);
        CWnd::ClientToScreen((CWnd *)this,&local_38);
        PtInRect(&local_38,*(POINT *)param_1);
      }
    }
  }
  MVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return MVar3;
}

