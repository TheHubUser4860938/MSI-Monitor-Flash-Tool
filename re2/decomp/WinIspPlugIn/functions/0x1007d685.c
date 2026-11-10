// rea decompile_all
// name: AFX_GLOBAL_DATA::~AFX_GLOBAL_DATA
// address: 0x1007d685
// body: available
// range: 0x1007d685-0x1007d7e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: __thiscall AFX_GLOBAL_DATA::~AFX_GLOBAL_DATA(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall AFX_GLOBAL_DATA::~AFX_GLOBAL_DATA(AFX_GLOBAL_DATA *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_101ce640;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CleanUp(this);
  *(undefined ***)(this + 0x164) = CFont::vftable;
  CImageList::~CImageList((CImageList *)(this + 0x164));
  *(undefined ***)(this + 0x15c) = CFont::vftable;
  CImageList::~CImageList((CImageList *)(this + 0x15c));
  *(undefined ***)(this + 0x154) = CFont::vftable;
  CImageList::~CImageList((CImageList *)(this + 0x154));
  *(undefined ***)(this + 0x14c) = CFont::vftable;
  CImageList::~CImageList((CImageList *)(this + 0x14c));
  *(undefined ***)(this + 0x144) = CFont::vftable;
  CImageList::~CImageList((CImageList *)(this + 0x144));
  *(undefined ***)(this + 0x13c) = CFont::vftable;
  CImageList::~CImageList((CImageList *)(this + 0x13c));
  *(undefined ***)(this + 0x134) = CFont::vftable;
  CImageList::~CImageList((CImageList *)(this + 0x134));
  *(undefined ***)(this + 300) = CFont::vftable;
  CImageList::~CImageList((CImageList *)(this + 300));
  *(undefined ***)(this + 0x124) = CFont::vftable;
  CImageList::~CImageList((CImageList *)(this + 0x124));
  *(undefined ***)(this + 0x11c) = CFont::vftable;
  CImageList::~CImageList((CImageList *)(this + 0x11c));
  *(undefined ***)(this + 0xe8) = CPen::vftable;
  CImageList::~CImageList((CImageList *)(this + 0xe8));
  *(undefined ***)(this + 0xe0) = CPen::vftable;
  CImageList::~CImageList((CImageList *)(this + 0xe0));
  *(undefined ***)(this + 0xd8) = CPen::vftable;
  CImageList::~CImageList((CImageList *)(this + 0xd8));
  *(undefined ***)(this + 0xd0) = CBrush::vftable;
  CImageList::~CImageList((CImageList *)(this + 0xd0));
  *(undefined ***)(this + 200) = CBrush::vftable;
  CImageList::~CImageList((CImageList *)(this + 200));
  *(undefined ***)(this + 0xc0) = CBrush::vftable;
  CImageList::~CImageList((CImageList *)(this + 0xc0));
  *(undefined ***)(this + 0xb8) = CBrush::vftable;
  CImageList::~CImageList((CImageList *)(this + 0xb8));
  *(undefined ***)(this + 0xb0) = CBrush::vftable;
  CImageList::~CImageList((CImageList *)(this + 0xb0));
  *(undefined ***)(this + 0xa8) = CBrush::vftable;
  CImageList::~CImageList((CImageList *)(this + 0xa8));
  *(undefined ***)(this + 0xa0) = CBrush::vftable;
  CImageList::~CImageList((CImageList *)(this + 0xa0));
  *(undefined ***)(this + 0x98) = CBrush::vftable;
  CImageList::~CImageList((CImageList *)(this + 0x98));
  ExceptionList = local_10;
  return;
}

