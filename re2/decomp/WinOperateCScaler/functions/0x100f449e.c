// rea decompile_all
// name: CMFCImageEditorDialog::~CMFCImageEditorDialog
// address: 0x100f449e
// body: available
// range: 0x100f449e-0x100f44ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f44e6 to 0x100f4477 CDialogEx::~CDialogEx (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall CMFCImageEditorDialog::~CMFCImageEditorDialog(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCImageEditorDialog::~CMFCImageEditorDialog(CMFCImageEditorDialog *this)

{
  CMFCToolBar::~CMFCToolBar((CMFCToolBar *)(this + 0x11e0));
  CMFCColorBar::~CMFCColorBar((CMFCColorBar *)(this + 0x378));
  CMFCImagePaintArea::~CMFCImagePaintArea((CMFCImagePaintArea *)(this + 0x250));
  CStatic::~CStatic((CStatic *)(this + 0x1d0));
  CStatic::~CStatic((CStatic *)(this + 0x150));
  CStatic::~CStatic((CStatic *)(this + 0xd0));
  CDialogEx::~CDialogEx((CDialogEx *)this);
  return;
}

