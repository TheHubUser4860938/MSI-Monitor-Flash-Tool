// rea decompile_all
// name: CDockablePane::CDockablePane
// address: 0x4a4afb
// body: available
// range: 0x4a4afb-0x4a4c36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CDockablePane::CDockablePane(void)
   
   Library: Visual Studio 2015 Release */

CDockablePane * __thiscall CDockablePane::CDockablePane(CDockablePane *this)

{
  CPane::CPane((CPane *)this);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x2b8) = 0;
  *(undefined4 *)(this + 700) = 0;
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x2c4) = 0;
  ((LPRECT)(this + 0x2e8))->left = 0;
  *(undefined4 *)(this + 0x2ec) = 0;
  *(undefined4 *)(this + 0x2f0) = 0;
  *(undefined4 *)(this + 0x2f4) = 0;
  ((LPRECT)(this + 0x30c))->left = 0;
  *(undefined4 *)(this + 0x310) = 0;
  *(undefined4 *)(this + 0x314) = 0;
  *(undefined4 *)(this + 0x318) = 0;
  CObArray::CObArray((CObArray *)(this + 0x334));
  *(undefined ***)(this + 0x334) = CTypedPtrArray<CObArray,CMFCCaptionButton*>::vftable;
  *(undefined2 *)(this + 0x2c8) = 0;
  *(undefined ***)(this + 0x348) = &PTR_s_CTabbedPane_0060c64c;
  *(undefined4 *)(this + 0x350) = 0;
  *(undefined4 *)(this + 0x2cc) = 0;
  *(undefined4 *)(this + 0x2d8) = 0;
  *(undefined4 *)(this + 0x2d4) = 0;
  *(undefined4 *)(this + 0x2e4) = 0;
  *(undefined4 *)(this + 0x2dc) = 0;
  *(undefined4 *)(this + 0x2e0) = 1;
  *(undefined4 *)(this + 0x2f8) = 0;
  *(undefined4 *)(this + 0x2fc) = 0;
  *(undefined4 *)(this + 0x300) = 0;
  *(undefined4 *)(this + 0x304) = 0;
  *(undefined4 *)(this + 0x308) = 0;
  *(undefined4 *)(this + 0x32c) = 0;
  *(undefined4 *)(this + 0x330) = 0;
  *(undefined4 *)(this + 0x328) = DAT_0060c604;
  *(undefined4 *)(this + 0x31c) = 0;
  *(undefined4 *)(this + 0x324) = 0;
  *(undefined4 *)(this + 800) = 0;
  *(undefined4 *)(this + 0x2d0) = 100;
  SetRectEmpty((LPRECT)(this + 0x2e8));
  SetRectEmpty((LPRECT)(this + 0x30c));
  *(undefined4 *)(this + 0x358) = 0;
  *(undefined4 *)(this + 0x35c) = 0;
  *(undefined4 *)(this + 0x360) = 0;
  *(undefined4 *)(this + 0x354) = 0;
  *(undefined4 *)(this + 0x34c) = 0;
  return this;
}

