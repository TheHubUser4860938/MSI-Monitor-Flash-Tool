// rea decompile_all
// name: CMDIClientAreaWnd::~CMDIClientAreaWnd
// address: 0x50f70f
// body: available
// range: 0x50f70f-0x50f898 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall CMDIClientAreaWnd::~CMDIClientAreaWnd(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMDIClientAreaWnd::~CMDIClientAreaWnd(CMDIClientAreaWnd *this)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  CObject *pCVar4;
  undefined1 local_1c [4];
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005a711a;
  uVar3 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = *(int *)(this + 0x2b04);
  *(undefined ***)this = vftable;
  while (iVar1 != 0) {
    pCVar4 = CObList::RemoveTail((CObList *)(this + 11000));
    if (pCVar4 != (CObject *)0x0) {
      pcVar2 = *(code **)(*(int *)pCVar4 + 4);
      guard_check_icall(1);
      (*pcVar2)();
    }
    iVar1 = *(int *)(this + 0x2b04);
  }
  iVar1 = *(int *)(this + 0x2b48);
  while (iVar1 != 0) {
    pCVar4 = CObList::RemoveTail((CObList *)(this + 0x2b3c));
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_005c65ac,pCVar4);
    if (pCVar4 != (CObject *)0x0) {
      pcVar2 = *(code **)(*(int *)pCVar4 + 4);
      guard_check_icall(1);
      (*pcVar2)();
    }
    iVar1 = *(int *)(this + 0x2b48);
  }
  if (*(int *)(this + 0x2b20) != 0) {
    local_18 = -1;
    do {
      local_14 = (int *)0x0;
      FUN_0045cffa(&local_18,local_1c,&local_14);
      if (local_14 != (int *)0x0) {
        pcVar2 = *(code **)(*local_14 + 4);
        guard_check_icall(1,uVar3);
        (*pcVar2)();
      }
    } while (local_18 != 0);
    CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(this + 0x2b14));
  }
  CStringList::~CStringList((CStringList *)(this + 0x2b74));
  CObList::~CObList((CObList *)(this + 0x2b3c));
  local_8 = 0;
  *(undefined ***)(this + 0x2b14) = CMap<CWnd*,CWnd*,CImageList*,CImageList*>::vftable;
  CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(this + 0x2b14));
  CObList::~CObList((CObList *)(this + 11000));
  local_8 = 1;
  *(undefined ***)(this + 0x2aac) = CMap<HICON__*,HICON__*,int,int>::vftable;
  CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(this + 0x2aac));
  CImageList::~CImageList((CImageList *)(this + 0x2aa4));
  CMFCTabCtrl::~CMFCTabCtrl((CMFCTabCtrl *)(this + 0x80));
  CWnd::~CWnd((CWnd *)this);
  ExceptionList = local_10;
  return;
}

