// rea decompile_all
// name: COleControlContainer::~COleControlContainer
// address: 0x43f5cb
// body: available
// range: 0x43f5cb-0x43f6df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall COleControlContainer::~COleControlContainer(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall COleControlContainer::~COleControlContainer(COleControlContainer *this)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  COleControlSiteOrWnd *pCVar4;
  ulong uVar5;
  int local_18;
  IUnknown *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  local_10 = ExceptionList;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0059f01c;
  uVar2 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  local_18 = *(int *)(this + 0x44);
  while (iVar1 = local_18, local_18 = iVar1, iVar1 != 0) {
    puVar3 = (undefined4 *)FUN_004ead48(&local_18);
    pCVar4 = (COleControlSiteOrWnd *)*puVar3;
    if (((pCVar4 != (COleControlSiteOrWnd *)0x0) && (*(int *)(pCVar4 + 4) != 0)) &&
       (*(int *)(*(int *)(pCVar4 + 4) + 0x90) == 0)) {
      FUN_004d2617(iVar1);
      COleControlSiteOrWnd::~COleControlSiteOrWnd(pCVar4);
      FUN_0055b3de(pCVar4,0xc);
    }
  }
  while (*(int *)(this + 0x4c) != 0) {
    pCVar4 = (COleControlSiteOrWnd *)FUN_004d265a(uVar2);
    if (pCVar4 != (COleControlSiteOrWnd *)0x0) {
      COleControlSiteOrWnd::~COleControlSiteOrWnd(pCVar4);
      FUN_0055b3de(pCVar4,0xc);
    }
  }
  CMapPtrToPtr::RemoveAll((CMapPtrToPtr *)(this + 0x24));
  _AfxRelease((IUnknown **)(this + 100));
  if (0 < *(int *)(this + 4)) {
    local_14 = (IUnknown *)0x0;
    uVar5 = CCmdTarget::InternalQueryInterface((CCmdTarget *)this,&DAT_005dba30,&local_14);
    if (-1 < (int)uVar5) {
      _AfxReleaseManagedRefs(local_14);
    }
    ATL::CComPtrBase<IAccessor>::~CComPtrBase<IAccessor>((CComPtrBase<IAccessor> *)&local_14);
  }
  CPtrList::~CPtrList((CPtrList *)(this + 0x40));
  CMapPtrToPtr::~CMapPtrToPtr((CMapPtrToPtr *)(this + 0x24));
  CCmdTarget::~CCmdTarget((CCmdTarget *)this);
  ExceptionList = local_10;
  return;
}

