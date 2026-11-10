// rea decompile_all
// name: CMFCToolBarsKeyboardPropertyPage::~CMFCToolBarsKeyboardPropertyPage
// address: 0x10144be8
// body: available
// range: 0x10144be8-0x10144c96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10144c92 to 0x10037a94 CPropertyPage::~CPropertyPage (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall
   CMFCToolBarsKeyboardPropertyPage::~CMFCToolBarsKeyboardPropertyPage(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarsKeyboardPropertyPage::~CMFCToolBarsKeyboardPropertyPage
          (CMFCToolBarsKeyboardPropertyPage *this)

{
  *(undefined ***)this = vftable;
  if (*(void **)(this + 0x564) != (void *)0x0) {
    FID_conflict__free(*(void **)(this + 0x564));
  }
  ATL::CStringData::Release((CStringData *)(*(int *)(this + 0x580) + -0x10));
  ATL::CStringData::Release((CStringData *)(*(int *)(this + 0x55c) + -0x10));
  ATL::CStringData::Release((CStringData *)(*(int *)(this + 0x558) + -0x10));
  CButton::~CButton((CButton *)(this + 0x4d8));
  CComboBox::~CComboBox((CComboBox *)(this + 0x458));
  CListBox::~CListBox((CListBox *)(this + 0x3d8));
  CListBox::~CListBox((CListBox *)(this + 0x358));
  CButton::~CButton((CButton *)(this + 0x2d8));
  CStatic::~CStatic((CStatic *)(this + 600));
  CComboBox::~CComboBox((CComboBox *)(this + 0x1d8));
  CMFCAcceleratorKeyAssignCtrl::~CMFCAcceleratorKeyAssignCtrl
            ((CMFCAcceleratorKeyAssignCtrl *)(this + 0x140));
  CStatic::~CStatic((CStatic *)(this + 0xc0));
  CPropertyPage::~CPropertyPage((CPropertyPage *)this);
  return;
}

