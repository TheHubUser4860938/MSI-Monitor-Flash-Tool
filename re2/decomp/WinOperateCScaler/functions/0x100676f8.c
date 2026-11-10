// rea decompile_all
// name: CMFCToolBar::~CMFCToolBar
// address: 0x100676f8
// body: available
// range: 0x100676f8-0x10067873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall CMFCToolBar::~CMFCToolBar(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBar::~CMFCToolBar(CMFCToolBar *this)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a2cf6;
  uVar3 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = *(int *)(this + 0xc64);
  *(undefined ***)this = vftable;
  while (iVar1 != 0) {
    piVar4 = (int *)FUN_100350dd(uVar3);
    if (piVar4 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar4 + 4);
      guard_check_icall(1);
      (*pcVar2)();
    }
    iVar1 = *(int *)(this + 0xc64);
  }
  iVar1 = *(int *)(this + 0xc80);
  while (iVar1 != 0) {
    piVar4 = (int *)FUN_100350dd(uVar3);
    if (piVar4 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar4 + 4);
      guard_check_icall(1);
      (*pcVar2)();
    }
    iVar1 = *(int *)(this + 0xc80);
  }
  RemoveAllButtons(this);
  local_8 = 0;
  *(undefined ***)(this + 0xd20) =
       CMap<unsigned_int,unsigned_int&,CMFCToolBarButton*,CMFCToolBarButton*&>::vftable;
  CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(this + 0xd20));
  *(undefined ***)(this + 0xcec) = CPen::vftable;
  CImageList::~CImageList((CImageList *)(this + 0xcec));
  FUN_100f1d34();
  CObList::~CObList((CObList *)(this + 0xc74));
  CObList::~CObList((CObList *)(this + 0xc58));
  CObList::~CObList((CObList *)(this + 0xc3c));
  FUN_10099c88();
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(this + 0xa60));
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(this + 0x948));
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(this + 0x830));
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(this + 0x718));
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(this + 0x600));
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(this + 0x4e8));
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(this + 0x3d0));
  CMFCToolBarImages::~CMFCToolBarImages((CMFCToolBarImages *)(this + 0x2b8));
  FUN_10067131();
  ExceptionList = local_10;
  return;
}

