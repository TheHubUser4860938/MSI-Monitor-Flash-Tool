// rea decompile_all
// name: CMFCToolBarImages::~CMFCToolBarImages
// address: 0x449e58
// body: available
// range: 0x449e58-0x449f5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x449e97 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall CMFCToolBarImages::~CMFCToolBarImages(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBarImages::~CMFCToolBarImages(CMFCToolBarImages *this)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005a914c;
  local_10 = ExceptionList;
  uVar1 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  if ((CDC *)(this + 0x44) == (CDC *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(this + 0x48);
  }
  if (iVar2 == 0) {
    if (this + 0x9c == (CMFCToolBarImages *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(this + 0xa0);
    }
    if ((iVar2 == 0) && (*(int *)(this + 0xa4) == 0)) {
      if (*(int *)(this + 0x28) == 0) {
        FUN_0043b1ac(this + 0x8c);
        FUN_0043b1ac(this + 0x90);
        FUN_0043b1ac(this + 0x94);
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
      *(undefined ***)(this + 0x9c) = CBitmap::vftable;
      FUN_0040ee80();
      FUN_0040efa0();
      CDC::~CDC((CDC *)(this + 0x44));
      ExceptionList = local_10;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127(uVar1);
}

