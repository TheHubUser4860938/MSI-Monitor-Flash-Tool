// rea decompile_all
// name: CMFCVisualManagerOffice2007::~CMFCVisualManagerOffice2007
// address: 0x100c87da
// body: available
// range: 0x100c87da-0x100c8d6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual __thiscall CMFCVisualManagerOffice2007::~CMFCVisualManagerOffice2007(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::~CMFCVisualManagerOffice2007(CMFCVisualManagerOffice2007 *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a65b3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  CMenuImages::SetColor(0,0xffffffff);
  local_8 = 0;
  *(undefined ***)(this + 0xc038) = CMap<HWND__*,HWND__*,int,int>::vftable;
  CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(this + 0xc038));
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_
            (this + 0xbfa8,0x2c,2,CMFCVisualManagerBitmapCache::~CMFCVisualManagerBitmapCache);
  _eh_vector_destructor_iterator_
            (this + 0xbf50,0x2c,2,CMFCVisualManagerBitmapCache::~CMFCVisualManagerBitmapCache);
  _eh_vector_destructor_iterator_
            (this + 0xbef8,0x2c,2,CMFCVisualManagerBitmapCache::~CMFCVisualManagerBitmapCache);
  CMFCVisualManagerBitmapCache::~CMFCVisualManagerBitmapCache
            ((CMFCVisualManagerBitmapCache *)(this + 0xbecc));
  CMFCVisualManagerBitmapCache::~CMFCVisualManagerBitmapCache
            ((CMFCVisualManagerBitmapCache *)(this + 0xbea0));
  CMFCVisualManagerBitmapCache::~CMFCVisualManagerBitmapCache
            ((CMFCVisualManagerBitmapCache *)(this + 0xbe74));
  CMFCVisualManagerBitmapCache::~CMFCVisualManagerBitmapCache
            ((CMFCVisualManagerBitmapCache *)(this + 0xbe48));
  CMFCVisualManagerBitmapCache::~CMFCVisualManagerBitmapCache
            ((CMFCVisualManagerBitmapCache *)(this + 0xbe1c));
  CMFCVisualManagerBitmapCache::~CMFCVisualManagerBitmapCache
            ((CMFCVisualManagerBitmapCache *)(this + 0xbdf0));
  CMFCVisualManagerBitmapCache::~CMFCVisualManagerBitmapCache
            ((CMFCVisualManagerBitmapCache *)(this + 0xbdc4));
  CMFCVisualManagerBitmapCache::~CMFCVisualManagerBitmapCache
            ((CMFCVisualManagerBitmapCache *)(this + 0xbd98));
  CMFCVisualManagerBitmapCache::~CMFCVisualManagerBitmapCache
            ((CMFCVisualManagerBitmapCache *)(this + 0xbd6c));
  CMFCVisualManagerBitmapCache::~CMFCVisualManagerBitmapCache
            ((CMFCVisualManagerBitmapCache *)(this + 0xbd40));
  _eh_vector_destructor_iterator_
            (this + 0x9148,0x648,7,CMFCRibbonContextCategory::~CMFCRibbonContextCategory);
  *(undefined ***)(this + 0x8f48) = CBrush::vftable;
  CImageList::~CImageList((CImageList *)(this + 0x8f48));
  *(undefined ***)(this + 0x8f40) = CBrush::vftable;
  CImageList::~CImageList((CImageList *)(this + 0x8f40));
  *(undefined ***)(this + 0x8f38) = CFont::vftable;
  CImageList::~CImageList((CImageList *)(this + 0x8f38));
  *(undefined ***)(this + 0x8f30) = CPen::vftable;
  CImageList::~CImageList((CImageList *)(this + 0x8f30));
  *(undefined ***)(this + 0x8f28) = CPen::vftable;
  CImageList::~CImageList((CImageList *)(this + 0x8f28));
  _eh_vector_destructor_iterator_(this + 0x8f18,8,2,FUN_1005e0f3);
  _eh_vector_destructor_iterator_(this + 0x8f08,8,2,FUN_1005e0f3);
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x8d90));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x8c18));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x8aa0));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x8928));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x87b0));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x8638));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x84c0));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x8348));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x81d0));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x8058));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x7ee0));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x7d68));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x7bf0));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x7a78));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x7900));
  _eh_vector_destructor_iterator_(this + 0x7498,0x178,3,CMFCControlRenderer::~CMFCControlRenderer);
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x7320));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x71a8));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x7030));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x6eb8));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x6d40));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x6bc8));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x6a50));
  _eh_vector_destructor_iterator_(this + 0x6760,0x178,2,CMFCControlRenderer::~CMFCControlRenderer);
  _eh_vector_destructor_iterator_(this + 0x6470,0x178,2,CMFCControlRenderer::~CMFCControlRenderer);
  _eh_vector_destructor_iterator_(this + 0x6180,0x178,2,CMFCControlRenderer::~CMFCControlRenderer);
  _eh_vector_destructor_iterator_(this + 0x5e90,0x178,2,CMFCControlRenderer::~CMFCControlRenderer);
  _eh_vector_destructor_iterator_(this + 0x5ba0,0x178,2,CMFCControlRenderer::~CMFCControlRenderer);
  _eh_vector_destructor_iterator_(this + 0x58b0,0x178,2,CMFCControlRenderer::~CMFCControlRenderer);
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x5738));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x55c0));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x5448));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x52d0));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x5158));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x4fe0));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x4e68));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x4cf0));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x4b78));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x4a00));
  _eh_vector_destructor_iterator_(this + 0x4710,0x178,2,CMFCControlRenderer::~CMFCControlRenderer);
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x4598));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x4420));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x42a8));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x4130));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x3fb8));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x3e40));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x3cc8));
  _eh_vector_destructor_iterator_(this + 0x39d8,0x178,2,CMFCControlRenderer::~CMFCControlRenderer);
  _eh_vector_destructor_iterator_(this + 0x36e8,0x178,2,CMFCControlRenderer::~CMFCControlRenderer);
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x3570));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x33f8));
  _eh_vector_destructor_iterator_(this + 0x3108,0x178,2,CMFCControlRenderer::~CMFCControlRenderer);
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x2f90));
  _eh_vector_destructor_iterator_(this + 0x2ca0,0x178,2,CMFCControlRenderer::~CMFCControlRenderer);
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x2b28));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x29b0));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x2838));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x26c0));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x2548));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x23d0));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x2258));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x20e0));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x1f68));
  _eh_vector_destructor_iterator_(this + 0x1c78,0x178,2,CMFCControlRenderer::~CMFCControlRenderer);
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x1b00));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x1988));
  CMFCControlRenderer::~CMFCControlRenderer((CMFCControlRenderer *)(this + 0x1810));
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(this + 0x16f8));
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(this + 0x15e0));
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(this + 0x14c8));
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(this + 0x13b0));
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(this + 0x1298));
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(this + 0x1180));
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(this + 0x1068));
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(this + 0xf50));
  _eh_vector_destructor_iterator_(this + 0xd20,0x118,2,CMFCToolBarImages::~CMFCToolBarImages);
  _eh_vector_destructor_iterator_(this + 0xaf0,0x118,2,CMFCToolBarImages::~CMFCToolBarImages);
  _eh_vector_destructor_iterator_(this + 0x8c0,0x118,2,CMFCToolBarImages::~CMFCToolBarImages);
  _eh_vector_destructor_iterator_(this + 0x690,0x118,2,CMFCToolBarImages::~CMFCToolBarImages);
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(this + 0x578));
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(this + 0x460));
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(this + 0x348));
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(this + 0x230));
  CMFCVisualManagerOffice2003::~CMFCVisualManagerOffice2003((CMFCVisualManagerOffice2003 *)this);
  ExceptionList = local_10;
  return;
}

