// rea decompile_all
// name: CMFCRibbonPanelMenu::CMFCRibbonPanelMenu
// address: 0x10155589
// body: available
// range: 0x10155589-0x10155631 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCRibbonPanelMenu::CMFCRibbonPanelMenu(class CMFCRibbonGallery *)
   
   Library: Visual Studio 2015 Release */

CMFCRibbonPanelMenu * __thiscall
CMFCRibbonPanelMenu::CMFCRibbonPanelMenu(CMFCRibbonPanelMenu *this,CMFCRibbonGallery *param_1)

{
  int iVar1;
  int iVar2;
  int local_1c;
  int local_18;
  
  CMFCPopupMenu::CMFCPopupMenu((CMFCPopupMenu *)this);
  *(undefined ***)this = vftable;
  CMFCRibbonPanelMenuBar::CMFCRibbonPanelMenuBar((CMFCRibbonPanelMenuBar *)(this + 0x1178),param_1);
  *(undefined4 *)(this + 0x2038) = 0;
  *(undefined4 *)(this + 0xf7c) = 1;
  if (*(int *)(param_1 + 0x35c) != 0) {
    CMFCRibbonPanel::GetPaltteMinSize(*(CMFCRibbonPanel **)(this + 0x201c));
    if ((0 < local_1c) && (0 < local_18)) {
      iVar2 = GetBorderSize(this);
      iVar1 = local_18 + (short)((uint)iVar2 >> 0x10) * 2;
      if (*(int *)(param_1 + 0x360) == 0) {
        CMFCPopupMenu::EnableResize((CMFCPopupMenu *)this,local_1c + (short)iVar2 * 2,iVar1);
      }
      else {
        CMFCPopupMenu::EnableVertResize((CMFCPopupMenu *)this,iVar1);
      }
    }
  }
  return this;
}

