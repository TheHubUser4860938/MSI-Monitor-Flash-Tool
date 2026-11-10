// rea decompile_all
// name: CMFCBaseTabCtrl::~CMFCBaseTabCtrl
// address: 0x484518
// body: available
// range: 0x484518-0x4845d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall CMFCBaseTabCtrl::~CMFCBaseTabCtrl(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCBaseTabCtrl::~CMFCBaseTabCtrl(CMFCBaseTabCtrl *this)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005a11d8;
  local_10 = ExceptionList;
  uVar1 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  CAccessibilityData::~CAccessibilityData((CAccessibilityData *)(this + 0x210));
  CArray<unsigned_long,unsigned_long>::~CArray<unsigned_long,unsigned_long>
            ((CArray<unsigned_long,unsigned_long> *)(this + 0x1c8));
  FUN_0050eae1(uVar1);
  local_8 = 0;
  *(undefined ***)(this + 0x168) = CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo>::vftable;
  CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo>::RemoveAll
            ((CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo> *)(this + 0x168));
  *(undefined ***)(this + 0x144) = CBrush::vftable;
  FUN_0040ee80();
  local_8 = 1;
  *(undefined ***)(this + 0xdc) = CMap<HICON__*,HICON__*,int,int>::vftable;
  CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(this + 0xdc));
  CImageList::~CImageList((CImageList *)(this + 200));
  CArray<int,int>::~CArray<int,int>((CArray<int,int> *)(this + 0xa8));
  CPtrArray::~CPtrArray((CPtrArray *)(this + 0x94));
  CWnd::~CWnd((CWnd *)this);
  ExceptionList = local_10;
  return;
}

