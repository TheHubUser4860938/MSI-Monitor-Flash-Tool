// rea decompile_all
// name: FUN_0047b1c9
// address: 0x47b1c9
// body: available
// range: 0x47b1c9-0x47b1cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047b1c9(void)

{
  CMFCRibbonButton *in_ECX;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0059bcc0;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *(undefined ***)in_ECX = CMFCRibbonButton::vftable;
  CMFCRibbonButton::RemoveAllSubItems(in_ECX);
  if ((*(int *)(in_ECX + 0x16c) != 0) && (*(HMENU *)(in_ECX + 0x158) != (HMENU)0x0)) {
    DestroyMenu(*(HMENU *)(in_ECX + 0x158));
  }
  if (*(int *)(in_ECX + 0x17c) != 0) {
    if (*(HICON *)(in_ECX + 0x15c) != (HICON)0x0) {
      DestroyIcon(*(HICON *)(in_ECX + 0x15c));
    }
    if ((*(int *)(in_ECX + 0x17c) != 0) && (*(HICON *)(in_ECX + 0x160) != (HICON)0x0)) {
      DestroyIcon(*(HICON *)(in_ECX + 0x160));
    }
  }
  CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::
  ~CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>
            ((CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *)(in_ECX + 0x1b0));
  CArray<int,int>::~CArray<int,int>((CArray<int,int> *)(in_ECX + 0x19c));
  CMFCRibbonBaseElement::~CMFCRibbonBaseElement((CMFCRibbonBaseElement *)in_ECX);
  ExceptionList = pvStack_10;
  return;
}

