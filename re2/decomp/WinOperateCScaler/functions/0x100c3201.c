// rea decompile_all
// name: CMFCPopupMenuBar::CMFCPopupMenuBar
// address: 0x100c3201
// body: available
// range: 0x100c3201-0x100c32f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCPopupMenuBar::CMFCPopupMenuBar(void)
   
   Library: Visual Studio 2015 Release */

CMFCPopupMenuBar * __thiscall CMFCPopupMenuBar::CMFCPopupMenuBar(CMFCPopupMenuBar *this)

{
  CMFCToolBar::CMFCToolBar((CMFCToolBar *)this);
  *(undefined4 *)(this + 0xd58) = 0xffffffff;
  *(undefined4 *)(this + 0xd5c) = 0xffffffff;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0xd48) = 0;
  *(undefined4 *)(this + 0xd4c) = 0;
  *(undefined4 *)(this + 0xd50) = 0;
  *(undefined4 *)(this + 0xd54) = 0;
  *(undefined4 *)(this + 0xd60) = 1;
  *(undefined4 *)(this + 0xd64) = 1;
  *(undefined4 *)(this + 0xd68) = 1;
  *(undefined4 *)(this + 0xd6c) = 0;
  *(undefined4 *)(this + 0xd70) = 0;
  *(undefined4 *)(this + 0xd90) = 0;
  *(undefined4 *)(this + 0xd94) = 0;
  CUIntArray::CUIntArray((CUIntArray *)(this + 0xd98));
  *(undefined4 *)(this + 0xdac) = 0;
  *(undefined4 *)(this + 0xdb0) = 0;
  CMap<unsigned_int,unsigned_int,unsigned_int,unsigned_int>::
  CMap<unsigned_int,unsigned_int,unsigned_int,unsigned_int>
            ((CMap<unsigned_int,unsigned_int,unsigned_int,unsigned_int> *)(this + 0xdb4),10);
  *(undefined4 *)(this + 0xd90) = 0xffffffff;
  *(undefined4 *)(this + 0xd94) = 0xffffffff;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0xd40) = 0;
  *(undefined4 *)(this + 0xd78) = 0;
  *(undefined4 *)(this + 0xd44) = 0;
  *(undefined4 *)(this + 0xd80) = 0;
  *(undefined4 *)(this + 0xd88) = 0;
  *(undefined4 *)(this + 0xd8c) = 0;
  *(undefined4 *)(this + 0xd84) = 0;
  *(undefined4 *)(this + 0xbac) = 1;
  *(undefined4 *)(this + 0xd74) = 1;
  *(undefined4 *)(this + 0xd7c) = 1;
  return this;
}

