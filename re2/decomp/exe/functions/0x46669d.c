// rea decompile_all
// name: CDockingManager::~CDockingManager
// address: 0x46669d
// body: available
// range: 0x46669d-0x4667bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall CDockingManager::~CDockingManager(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockingManager::~CDockingManager(CDockingManager *this)

{
  code *pcVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005a04b8;
  local_10 = ExceptionList;
  uVar2 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  if (*(int **)(this + 0x1b8) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x1b8) + 4);
    guard_check_icall(1,uVar2);
    (*pcVar1)();
    *(undefined4 *)(this + 0x1b8) = 0;
  }
  FUN_0040efa0();
  local_8 = 0;
  *(undefined ***)(this + 0x1bc) = CMap<unsigned_int,unsigned_int,CPane*,CPane*>::vftable;
  CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(this + 0x1bc));
  local_8 = 1;
  *(undefined ***)(this + 0x19c) = CList<HWND__*,HWND__*&>::vftable;
  CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(this + 0x19c));
  local_8 = 2;
  *(undefined ***)(this + 0x180) = CList<HWND__*,HWND__*&>::vftable;
  CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(this + 0x180));
  local_8 = 3;
  *(undefined ***)(this + 0x164) = CList<HWND__*,HWND__*&>::vftable;
  CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(this + 0x164));
  CObList::~CObList((CObList *)(this + 0x134));
  CObList::~CObList((CObList *)(this + 200));
  local_8 = 4;
  *(undefined ***)(this + 0xac) =
       CList<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&>::vftable;
  CList<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&>::RemoveAll
            ((CList<AFX_AUTOHIDE_DOCKSITE_SAVE_INFO,AFX_AUTOHIDE_DOCKSITE_SAVE_INFO&> *)
             (this + 0xac));
  CObList::~CObList((CObList *)(this + 0x90));
  CObList::~CObList((CObList *)(this + 0x74));
  CObList::~CObList((CObList *)(this + 0x58));
  CObList::~CObList((CObList *)(this + 0x3c));
  CObList::~CObList((CObList *)(this + 0x20));
  ExceptionList = local_10;
  return;
}

