// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnDrawStatusBarPaneBorder
// address: 0x1014a064
// body: available
// range: 0x1014a064-0x1014a0d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2003::OnDrawStatusBarPaneBorder(class CDC
   *,class CMFCStatusBar *,class CRect,unsigned int,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2003::OnDrawStatusBarPaneBorder
          (CMFCVisualManagerOffice2003 *this,int param_1,undefined4 param_2,LONG param_4,
          LONG param_5,LONG param_6,LONG param_7,undefined4 param_8,uint param_9)

{
  HDC hdc;
  
  if ((DAT_10206100 == 0) || (*(int *)(this + 0x14) == 0)) {
    CMFCVisualManagerOfficeXP::OnDrawStatusBarPaneBorder
              ((CMFCVisualManagerOfficeXP *)this,param_1,param_2,param_4,param_5,param_6,param_7,
               param_8,param_9);
  }
  if ((*(HTHEME *)(this + 0x14) != (HTHEME)0x0) && ((param_9 & 0x100) == 0)) {
    if (param_1 == 0) {
      hdc = (HDC)0x0;
    }
    else {
      hdc = *(HDC *)(param_1 + 4);
    }
    DrawThemeBackground(*(HTHEME *)(this + 0x14),hdc,1,0,(LPCRECT)&param_4,(LPCRECT)0x0);
  }
  return;
}

