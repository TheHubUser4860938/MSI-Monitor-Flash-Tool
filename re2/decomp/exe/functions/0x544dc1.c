// rea decompile_all
// name: CMFCImagePaintArea::SetColor
// address: 0x544dc1
// body: available
// range: 0x544dc1-0x544e05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCImagePaintArea::SetColor(unsigned long)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCImagePaintArea::SetColor(CMFCImagePaintArea *this,ulong param_1)

{
  CGdiObject *this_00;
  HPEN pHVar1;
  
  this_00 = (CGdiObject *)(this + 0xd0);
  *(ulong *)(this + 0x90) = param_1;
  if ((this_00 != (CGdiObject *)0x0) && (*(int *)(this + 0xd4) != 0)) {
    CGdiObject::DeleteObject(this_00);
  }
  pHVar1 = CreatePen(0,1,*(COLORREF *)(this + 0x90));
  CMenu::Attach((CMenu *)this_00,(HMENU__ *)pHVar1);
  return;
}

