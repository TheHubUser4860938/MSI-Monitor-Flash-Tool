// rea decompile_all
// name: CMFCPropertyGridCtrl::OnSetCursor
// address: 0x53a412
// body: available
// range: 0x53a412-0x53a513 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCPropertyGridCtrl::OnSetCursor(class CWnd *,unsigned int,unsigned
   int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCPropertyGridCtrl::OnSetCursor
          (CMFCPropertyGridCtrl *this,CWnd *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  POINT pt;
  long lVar2;
  AFX_GLOBAL_DATA *pAVar3;
  CMFCPropertyGridProperty *pCVar4;
  BOOL BVar5;
  int iVar6;
  HCURSOR hCursor;
  tagPOINT local_10;
  int local_8;
  
  if (param_2 == 1) {
    local_10.x = 0;
    local_10.y = 0;
    GetCursorPos(&local_10);
    ScreenToClient(*(HWND *)(this + 0x20),&local_10);
    if ((*(int *)(this + 0x2fc) != 0) &&
       (lVar2 = _labs((local_10.y - *(int *)(this + 0x334)) + -4), lVar2 < 3)) {
      pAVar3 = GetGlobalData();
      hCursor = *(HCURSOR *)(pAVar3 + 0xf4);
LAB_0053a471:
      SetCursor(hCursor);
      return 1;
    }
    if (local_10.y <= *(int *)(this + 0x334)) {
      lVar2 = _labs((local_10.x - *(int *)(this + 0x358)) - *(int *)(this + 0x328));
      if (lVar2 < 3) {
        pAVar3 = GetGlobalData();
        hCursor = *(HCURSOR *)(pAVar3 + 0xf0);
        goto LAB_0053a471;
      }
      pCVar4 = HitTest(this,local_10.x,local_10.y,&local_8,0);
      if ((((pCVar4 != (CMFCPropertyGridProperty *)0x0) &&
           (pCVar4 == *(CMFCPropertyGridProperty **)(this + 0x3d8))) && (local_8 == 2)) &&
         (pt.y = local_10.y, pt.x = local_10.x, BVar5 = PtInRect((RECT *)(pCVar4 + 0x40),pt),
         BVar5 == 0)) {
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x50);
        guard_check_icall();
        iVar6 = (*pcVar1)();
        if (iVar6 != 0) {
          return 1;
        }
      }
    }
  }
  iVar6 = FUN_0042ec70();
  return iVar6;
}

