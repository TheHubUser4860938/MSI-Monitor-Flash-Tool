// rea decompile_all
// name: CMFCPopupMenuBar::OnLButtonDown
// address: 0x48b7b9
// body: available
// range: 0x48b7b9-0x48b886 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPopupMenuBar::OnLButtonDown(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCPopupMenuBar::OnLButtonDown(CMFCPopupMenuBar *this,WPARAM param_1,LONG param_3,LONG param_4)

{
  POINT pt;
  BOOL BVar1;
  CMFCToolBar *pCVar2;
  tagPOINT local_20;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  *(undefined4 *)(this + 0xd60) = 0;
  local_18.bottom = 0;
  *(undefined4 *)(this + 0xd74) = 1;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  if (((DAT_00614ed8 == 0) &&
      (pt.y = param_4, pt.x = param_3, BVar1 = PtInRect(&local_18,pt), BVar1 == 0)) &&
     (pCVar2 = FindDestintationToolBar(this,param_3,param_4), pCVar2 != (CMFCToolBar *)0x0)) {
    local_20.x = param_3;
    local_20.y = param_4;
    MapWindowPoints(*(HWND *)(this + 0x20),*(HWND *)(pCVar2 + 0x20),&local_20,1);
    SendMessageW(*(HWND *)(pCVar2 + 0x20),0x201,param_1,
                 CONCAT22((undefined2)local_20.y,(undefined2)local_20.x));
  }
  CMFCToolBar::OnLButtonDown((CMFCToolBar *)this,param_1,param_3,param_4);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

