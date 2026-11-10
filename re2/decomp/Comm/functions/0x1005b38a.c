// rea decompile_all
// name: CMFCVisualManager::OnFillToolTip
// address: 0x1005b38a
// body: available
// range: 0x1005b38a-0x1005b409 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnFillToolTip(class CDC *,class
   CMFCToolTipCtrl *,class CRect,unsigned long &,unsigned long &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCVisualManager::OnFillToolTip(CMFCVisualManager *this,int param_1)

{
  COLORREF *pColor;
  COLORREF *pColor_00;
  HBRUSH hbr;
  HDC pHVar1;
  COLORREF *in_stack_0000001c;
  COLORREF *in_stack_00000020;
  
  pColor_00 = in_stack_00000020;
  pColor = in_stack_0000001c;
  if (*(int *)(this + 0x44) == 0) {
    if (param_1 == 0) {
      pHVar1 = (HDC)0x0;
    }
    else {
      pHVar1 = *(HDC *)(param_1 + 4);
    }
    hbr = GetSysColorBrush(0x18);
    FillRect(pHVar1,(RECT *)&stack0x0000000c,hbr);
  }
  else {
    pHVar1 = (HDC)0x0;
    if (param_1 != 0) {
      pHVar1 = *(HDC *)(param_1 + 4);
    }
    DrawThemeBackground(*(HTHEME *)(this + 0x44),pHVar1,1,0,(LPCRECT)&stack0x0000000c,(LPCRECT)0x0);
    GetThemeColor(*(HTHEME *)(this + 0x44),1,0,0xedb,pColor);
    GetThemeColor(*(HTHEME *)(this + 0x44),1,0,0xedf,pColor_00);
  }
  return;
}

