// rea decompile_all
// name: CMFCOutlookBarPane::CMFCOutlookBarPane
// address: 0x10078856
// body: available
// range: 0x10078856-0x10078944 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCOutlookBarPane::CMFCOutlookBarPane(void)
   
   Library: Visual Studio 2015 Release */

CMFCOutlookBarPane * __thiscall CMFCOutlookBarPane::CMFCOutlookBarPane(CMFCOutlookBarPane *this)

{
  AFX_GLOBAL_DATA *pAVar1;
  
  CMFCToolBar::CMFCToolBar((CMFCToolBar *)this);
  *(undefined ***)this = vftable;
  CMFCToolBarImages::CMFCToolBarImages((CMFCToolBarImages *)(this + 0xd50));
  CMFCButton::CMFCButton((CMFCButton *)(this + 0xe68));
  CMFCButton::CMFCButton((CMFCButton *)(this + 0x1610));
  CMFCToolBarImages::Initialize((CMFCToolBarImages *)&DAT_1020a7e8);
  *(undefined4 *)(this + 0x1dbc) = 0xffffffff;
  *(undefined4 *)(this + 0xd40) = 0xffffffff;
  *(undefined4 *)(this + 0x1dc0) = 0;
  *(undefined4 *)(this + 0x1dc4) = 0;
  *(undefined4 *)(this + 0x1dd0) = 0;
  pAVar1 = GetGlobalData();
  *(undefined4 *)(this + 0xd48) = *(undefined4 *)(pAVar1 + 0x20);
  *(undefined4 *)(this + 0xd44) = 0xff00ff;
  CMFCToolBarImages::SetTransparentColor((CMFCToolBarImages *)&DAT_1020a7e8,0xff00ff);
  *(undefined4 *)(this + 0x1db8) = 0;
  *(undefined4 *)(this + 0xee8) = 0;
  *(undefined4 *)(this + 0xefc) = 0;
  *(undefined4 *)(this + 0x1690) = 0;
  *(undefined4 *)(this + 0x16a4) = 0;
  *(undefined4 *)(this + 0x1dd4) = 0;
  *(undefined4 *)(this + 0xbb0) = 0;
  *(undefined4 *)(this + 0x1dc8) = 0;
  *(undefined4 *)(this + 0x1dcc) = 0;
  *(undefined4 *)(this + 0x1ddc) = 0;
  *(undefined4 *)(this + 0x1dd8) = 0;
  *(undefined4 *)(this + 0xb78) = 1;
  return this;
}

