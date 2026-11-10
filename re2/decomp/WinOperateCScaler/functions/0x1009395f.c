// rea decompile_all
// name: CMFCColorBar::CMFCColorBar
// address: 0x1009395f
// body: available
// range: 0x1009395f-0x10093a71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: __thiscall CMFCColorBar::CMFCColorBar(void)
   
   Library: Visual Studio 2015 Release */

CMFCColorBar * __thiscall CMFCColorBar::CMFCColorBar(CMFCColorBar *this)

{
  undefined4 uVar1;
  
  CMFCPopupMenuBar::CMFCPopupMenuBar((CMFCPopupMenuBar *)this);
  *(undefined ***)this = vftable;
  CArray<unsigned_long,unsigned_long>::CArray<unsigned_long,unsigned_long>
            ((CArray<unsigned_long,unsigned_long> *)(this + 0xe08));
  CList<unsigned_long,unsigned_long>::CList<unsigned_long,unsigned_long>
            ((CList<unsigned_long,unsigned_long> *)(this + 0xe1c),10);
  *(undefined4 *)(this + 0xe38) = 0;
  *(undefined4 *)(this + 0xe3c) = 0;
  *(undefined4 *)(this + 0xe44) = 0;
  *(undefined ***)(this + 0xe40) = CPalette::vftable;
  uVar1 = FUN_1001e20a();
  FUN_1001d224(uVar1);
  uVar1 = FUN_1001e20a();
  FUN_1001d224(uVar1);
  uVar1 = FUN_1001e20a();
  FUN_1001d224(uVar1);
  *(undefined4 *)(this + 0xe48) = 0xffffffff;
  *(undefined4 *)(this + 0xe4c) = 0xffffffff;
  *(undefined4 *)(this + 0xdf8) = 1;
  *(undefined4 *)(this + 0xb78) = 1;
  *(undefined4 *)(this + 0xdf4) = 1;
  *(undefined4 *)(this + 0xdd0) = 0;
  *(undefined4 *)(this + 0xdd4) = 0;
  *(undefined4 *)(this + 0xdd8) = 0;
  *(undefined4 *)(this + 0xe38) = 0;
  *(undefined4 *)(this + 0xe3c) = 0;
  *(undefined4 *)(this + 0xde4) = 0;
  *(undefined4 *)(this + 0xe04) = 0;
  *(undefined4 *)(this + 0xdf0) = 0;
  *(undefined4 *)(this + 0xdfc) = 0;
  *(undefined4 *)(this + 0xe5c) = 0;
  *(undefined4 *)(this + 0xe64) = 0;
  *(undefined4 *)(this + 0xe60) = 0;
  *(undefined4 *)(this + 0xde0) = 0;
  *(undefined4 *)(this + 0xddc) = 0;
  *(undefined4 *)(this + 0xe00) = 0;
  *(undefined4 *)(this + 0xde8) = 4;
  *(undefined4 *)(this + 0xdec) = 4;
  return this;
}

