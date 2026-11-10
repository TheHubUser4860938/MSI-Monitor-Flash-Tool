// rea decompile_all
// name: CMFCPopupMenuBar::FindDestintationToolBar
// address: 0x489c7e
// body: available
// range: 0x489c7e-0x489d87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CMFCToolBar * __thiscall CMFCPopupMenuBar::FindDestintationToolBar(class CPoint)
   
   Library: Visual Studio 2015 Release */

CMFCToolBar * __thiscall
CMFCPopupMenuBar::FindDestintationToolBar(CMFCPopupMenuBar *this,LONG param_2,LONG param_3)

{
  code *pcVar1;
  POINT pt;
  POINT pt_00;
  HWND pHVar2;
  CWnd *pCVar3;
  CObject *this_00;
  int iVar4;
  BOOL BVar5;
  CMFCPopupMenu *pCVar6;
  CMFCToolBar *pCVar7;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ScreenToClient(*(HWND *)(this + 0x20),(LPPOINT)&param_2);
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  pHVar2 = GetParent(*(HWND *)(this + 0x20));
  pCVar3 = CWnd::FromHandle(pHVar2);
  this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_0060c808,(CObject *)pCVar3);
  if (this_00 != (CObject *)0x0) {
    do {
      pCVar6 = CMFCPopupMenu::GetParentPopupMenu((CMFCPopupMenu *)this_00);
      if (pCVar6 == (CMFCPopupMenu *)0x0) {
        pCVar7 = CMFCPopupMenu::GetParentToolBar((CMFCPopupMenu *)this_00);
        if (pCVar7 != (CMFCToolBar *)0x0) {
          GetClientRect(*(HWND *)(pCVar7 + 0x20),&local_18);
          MapWindowPoints(*(HWND *)(pCVar7 + 0x20),*(HWND *)(this + 0x20),(LPPOINT)&local_18,2);
          pt_00.y = param_3;
          pt_00.x = param_2;
          PtInRect(&local_18,pt_00);
        }
        break;
      }
      pcVar1 = *(code **)(*(int *)pCVar6 + 0x1c8);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      GetClientRect(*(HWND *)(iVar4 + 0x20),&local_18);
      MapWindowPoints(*(HWND *)(iVar4 + 0x20),*(HWND *)(this + 0x20),(LPPOINT)&local_18,2);
      pt.y = param_3;
      pt.x = param_2;
      BVar5 = PtInRect(&local_18,pt);
      this_00 = (CObject *)pCVar6;
    } while (BVar5 == 0);
  }
  pCVar7 = (CMFCToolBar *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar7;
}

