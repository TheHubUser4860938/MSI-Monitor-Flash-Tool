// rea decompile_all
// name: CMFCTabCtrl::OnSetCursor
// address: 0x4f452d
// body: available
// range: 0x4f452d-0x4f4608 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCTabCtrl::OnSetCursor(class CWnd *,unsigned int,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCTabCtrl::OnSetCursor(CMFCTabCtrl *this,CWnd *param_1,uint param_2,uint param_3)

{
  POINT pt;
  POINT pt_00;
  BOOL BVar1;
  AFX_GLOBAL_DATA *pAVar2;
  int iVar3;
  HCURSOR hCursor;
  tagPOINT local_c;
  
  local_c.x = (LONG)this;
  local_c.y = (LONG)this;
  if (*(int *)(this + 0x250) == 0) {
LAB_004f4596:
    BVar1 = IsRectEmpty((RECT *)(this + 0x2fc));
    if (BVar1 == 0) {
      local_c.x = 0;
      local_c.y = 0;
      GetCursorPos(&local_c);
      ScreenToClient(*(HWND *)(this + 0x20),&local_c);
      pt_00.y = local_c.y;
      pt_00.x = local_c.x;
      BVar1 = PtInRect((RECT *)(this + 0x2fc),pt_00);
      if (BVar1 != 0) {
        if (*(int *)(this + 0x29f8) == 1) {
          pAVar2 = GetGlobalData();
          hCursor = *(HCURSOR *)(pAVar2 + 0xf0);
        }
        else {
          pAVar2 = GetGlobalData();
          hCursor = *(HCURSOR *)(pAVar2 + 0xf4);
        }
        goto LAB_004f458b;
      }
    }
    iVar3 = FUN_0042ec70();
  }
  else {
    BVar1 = IsRectEmpty((RECT *)(this + 700));
    if (BVar1 != 0) goto LAB_004f4596;
    local_c.x = 0;
    local_c.y = 0;
    GetCursorPos(&local_c);
    ScreenToClient(*(HWND *)(this + 0x20),&local_c);
    pt.y = local_c.y;
    pt.x = local_c.x;
    BVar1 = PtInRect((RECT *)(this + 700),pt);
    if (BVar1 == 0) goto LAB_004f4596;
    pAVar2 = GetGlobalData();
    hCursor = *(HCURSOR *)(pAVar2 + 0xf0);
LAB_004f458b:
    SetCursor(hCursor);
    iVar3 = 1;
  }
  return iVar3;
}

