// rea decompile_all
// name: CMFCTasksPane::~CMFCTasksPane
// address: 0x10177d45
// body: available
// range: 0x10177d45-0x10177e58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall CMFCTasksPane::~CMFCTasksPane(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCTasksPane::~CMFCTasksPane(CMFCTasksPane *this)

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
  puStack_c = &LAB_101d0d42;
  uVar3 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = *(int *)(this + 0x470);
  *(undefined ***)this = vftable;
  while (iVar1 != 0) {
    piVar4 = (int *)FUN_10065bec(uVar3);
    if (piVar4 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar4 + 4);
      guard_check_icall(1);
      (*pcVar2)();
    }
    iVar1 = *(int *)(this + 0x470);
  }
  CMFCToolBar::~CMFCToolBar((CMFCToolBar *)(this + 0x548));
  CArray<int,int>::~CArray<int,int>((CArray<int,int> *)(this + 0x528));
  CImageList::~CImageList((CImageList *)(this + 0x520));
  CScrollBar::~CScrollBar((CScrollBar *)(this + 0x4a0));
  FUN_100476d0();
  CObList::~CObList((CObList *)(this + 0x480));
  CObList::~CObList((CObList *)(this + 0x464));
  local_8 = 0;
  *(undefined ***)(this + 0x454) = CMenu::vftable;
  CMenu::DestroyMenu((CMenu *)(this + 0x454));
  *(undefined ***)(this + 0x3ec) = CFont::vftable;
  CImageList::~CImageList((CImageList *)(this + 0x3ec));
  *(undefined ***)(this + 0x3e4) = CFont::vftable;
  CImageList::~CImageList((CImageList *)(this + 0x3e4));
  *(undefined ***)(this + 0x3dc) = CFont::vftable;
  CImageList::~CImageList((CImageList *)(this + 0x3dc));
  CDockablePane::~CDockablePane((CDockablePane *)this);
  ExceptionList = local_10;
  return;
}

