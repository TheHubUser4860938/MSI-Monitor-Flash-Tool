// rea decompile_all
// name: CMFCPopupMenu::OnSetCursor
// address: 0x100b8ad8
// body: available
// range: 0x100b8ad8-0x100b8b6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCPopupMenu::OnSetCursor(class CWnd *,unsigned int,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCPopupMenu::OnSetCursor(CMFCPopupMenu *this,CWnd *param_1,uint param_2,uint param_3)

{
  POINT pt;
  BOOL BVar1;
  AFX_GLOBAL_DATA *pAVar2;
  HCURSOR pHVar3;
  int iVar4;
  tagPOINT local_c;
  
  local_c.x = 0;
  local_c.y = 0;
  GetCursorPos(&local_c);
  ScreenToClient(*(HWND *)(this + 0x20),&local_c);
  pt.y = local_c.y;
  pt.x = local_c.x;
  BVar1 = PtInRect((RECT *)(this + 0x107c),pt);
  if (BVar1 == 0) {
    iVar4 = FUN_100be05d(param_1,param_2,param_3);
  }
  else {
    pAVar2 = GetGlobalData();
    if (*(int *)(pAVar2 + 0xfc) == 0) {
      AfxGetModuleState();
      pHVar3 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f86);
      pAVar2 = GetGlobalData();
      *(HCURSOR *)(pAVar2 + 0xfc) = pHVar3;
    }
    pAVar2 = GetGlobalData();
    SetCursor(*(HCURSOR *)(pAVar2 + 0xfc));
    iVar4 = 1;
  }
  return iVar4;
}

