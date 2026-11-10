// rea decompile_all
// name: CMFCColorDialog::~CMFCColorDialog
// address: 0x1013e090
// body: available
// range: 0x1013e090-0x1013e0fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1013e0f9 to 0x101201ed CDialogEx::~CDialogEx (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall CMFCColorDialog::~CMFCColorDialog(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCColorDialog::~CMFCColorDialog(CMFCColorDialog *this)

{
  code *pcVar1;
  
  *(undefined ***)this = vftable;
  if (*(int **)(this + 0xd4) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0xd4) + 4);
    guard_check_icall(1);
    (*pcVar1)();
  }
  if (*(int **)(this + 0xd8) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0xd8) + 4);
    guard_check_icall(1);
    (*pcVar1)();
  }
  CMFCColorPickerCtrl::~CMFCColorPickerCtrl((CMFCColorPickerCtrl *)(this + 0x920));
  CStatic::~CStatic((CStatic *)(this + 0x8a0));
  CMFCButton::~CMFCButton((CMFCButton *)(this + 0xf8));
  CDialogEx::~CDialogEx((CDialogEx *)this);
  return;
}

