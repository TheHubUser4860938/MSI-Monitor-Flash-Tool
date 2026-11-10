// rea decompile_all
// name: CMFCToolBarImages::CMFCToolBarImages
// address: 0x100590b6
// body: available
// range: 0x100590b6-0x10059168 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCToolBarImages::CMFCToolBarImages(void)
   
   Library: Visual Studio 2015 Release */

CMFCToolBarImages * __thiscall CMFCToolBarImages::CMFCToolBarImages(CMFCToolBarImages *this)

{
  undefined4 uVar1;
  
  *(undefined ***)this = vftable;
  CDC::CDC((CDC *)(this + 0x44));
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  uVar1 = FUN_1001e20a();
  FUN_1001d224(uVar1);
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined ***)(this + 0x9c) = CBitmap::vftable;
  CList<unsigned_int,unsigned_int>::CList<unsigned_int,unsigned_int>
            ((CList<unsigned_int,unsigned_int> *)(this + 0xc0),10);
  CList<>(10);
  CMap<unsigned_int,unsigned_int,int,int>::CMap<unsigned_int,unsigned_int,int,int>
            ((CMap<unsigned_int,unsigned_int,int,int> *)(this + 0xf8),10);
  CommonInit(this,0);
  return this;
}

