// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnDrawRibbonSliderChannel
// address: 0x101497f9
// body: available
// range: 0x101497f9-0x1014987f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2003::OnDrawRibbonSliderChannel(class CDC
   *,class CMFCRibbonSlider *,class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2003::OnDrawRibbonSliderChannel
          (CMFCVisualManagerOffice2003 *this,int param_1,undefined4 param_2,LONG param_4,
          LONG param_5,LONG param_6,LONG param_7)

{
  AFX_GLOBAL_DATA *pAVar1;
  int iVar2;
  HDC hdc;
  
  if ((*(int *)(this + 0x48) != 0) && (pAVar1 = GetGlobalData(), 8 < *(int *)(pAVar1 + 0x1ac))) {
    pAVar1 = GetGlobalData();
    iVar2 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar1);
    if (iVar2 == 0) {
      InflateRect((LPRECT)&param_4,0,1);
      hdc = (HDC)0x0;
      if (param_1 != 0) {
        hdc = *(HDC *)(param_1 + 4);
      }
      DrawThemeBackground(*(HTHEME *)(this + 0x48),hdc,1,1,(LPCRECT)&param_4,(LPCRECT)0x0);
      return;
    }
  }
  CMFCVisualManager::OnDrawRibbonSliderChannel
            ((CMFCVisualManager *)this,param_1,param_2,param_4,param_5,param_6,param_7);
  return;
}

