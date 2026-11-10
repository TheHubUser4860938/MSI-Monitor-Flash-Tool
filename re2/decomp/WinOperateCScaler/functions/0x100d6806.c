// rea decompile_all
// name: CMFCRibbonButton::~CMFCRibbonButton
// address: 0x100d6806
// body: available
// range: 0x100d6806-0x100d68b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall CMFCRibbonButton::~CMFCRibbonButton(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonButton::~CMFCRibbonButton(CMFCRibbonButton *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_101957f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  RemoveAllSubItems(this);
  if ((*(int *)(this + 0x16c) != 0) && (*(HMENU *)(this + 0x158) != (HMENU)0x0)) {
    DestroyMenu(*(HMENU *)(this + 0x158));
  }
  if (*(int *)(this + 0x17c) != 0) {
    if (*(HICON *)(this + 0x15c) != (HICON)0x0) {
      DestroyIcon(*(HICON *)(this + 0x15c));
    }
    if ((*(int *)(this + 0x17c) != 0) && (*(HICON *)(this + 0x160) != (HICON)0x0)) {
      DestroyIcon(*(HICON *)(this + 0x160));
    }
  }
  CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::
  ~CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>
            ((CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *)(this + 0x1b0));
  CArray<int,int>::~CArray<int,int>((CArray<int,int> *)(this + 0x19c));
  CMFCRibbonBaseElement::~CMFCRibbonBaseElement((CMFCRibbonBaseElement *)this);
  ExceptionList = local_10;
  return;
}

