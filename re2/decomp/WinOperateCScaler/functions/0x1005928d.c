// rea decompile_all
// name: CMFCToolBarImages::~CMFCToolBarImages
// address: 0x1005928d
// body: available
// range: 0x1005928d-0x1005938f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100592cc to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall CMFCToolBarImages::~CMFCToolBarImages(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBarImages::~CMFCToolBarImages(CMFCToolBarImages *this)

{
  CImageList *this_00;
  uint uVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10198add;
  local_10 = ExceptionList;
  uVar1 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  if ((CDC *)(this + 0x44) == (CDC *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(this + 0x48);
  }
  if (iVar2 == 0) {
    this_00 = (CImageList *)(this + 0x9c);
    if (this_00 == (CImageList *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(this + 0xa0);
    }
    if ((iVar2 == 0) && (*(int *)(this + 0xa4) == 0)) {
      if (*(int *)(this + 0x28) == 0) {
        FUN_1002f6d2(this + 0x8c);
        FUN_1002f6d2(this + 0x90);
        FUN_1002f6d2(this + 0x94);
      }
      local_8 = 0;
      *(undefined ***)(this + 0xf8) = CMap<unsigned_int,unsigned_int,int,int>::vftable;
      CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(this + 0xf8));
      local_8 = 1;
      *(undefined ***)(this + 0xdc) = CList<HINSTANCE__*,HINSTANCE__*>::vftable;
      CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(this + 0xdc));
      local_8 = 2;
      *(undefined ***)(this + 0xc0) = CList<unsigned_int,unsigned_int>::vftable;
      CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(this + 0xc0));
      *(undefined ***)this_00 = CBitmap::vftable;
      CImageList::~CImageList(this_00);
      ATL::CStringData::Release((CStringData *)(*(int *)(this + 0x98) + -0x10));
      CDC::~CDC((CDC *)(this + 0x44));
      ExceptionList = local_10;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1001d023(uVar1);
}

