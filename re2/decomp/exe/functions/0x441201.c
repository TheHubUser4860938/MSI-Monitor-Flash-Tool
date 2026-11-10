// rea decompile_all
// name: COleControlSite::~COleControlSite
// address: 0x441201
// body: available
// range: 0x441201-0x441423 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall COleControlSite::~COleControlSite(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall COleControlSite::~COleControlSite(COleControlSite *this)

{
  code *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  COleControlSite *local_18;
  COleControlSite *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059f1a2;
  local_10 = ExceptionList;
  uVar4 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar5 = *(int *)(this + 0x20);
  *(undefined ***)this = vftable;
  if ((iVar5 != 0) && (*(COleControlSite **)(iVar5 + 0x6c) == this)) {
    *(undefined4 *)(iVar5 + 0x6c) = 0;
  }
  local_18 = this;
  local_14 = this;
  if (*(undefined4 **)(this + 0x90) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(this + 0x90);
    guard_check_icall(1,uVar4);
    (*pcVar1)();
  }
  DetachWindow(this);
  DisconnectSink(this,(_GUID *)(this + 0x40),*(ulong *)(this + 0x60));
  DisconnectSink(this,(_GUID *)&DAT_005dbb10,*(ulong *)(this + 100));
  DisconnectSink(this,(_GUID *)&DAT_005db900,*(ulong *)(this + 0x8c));
  piVar2 = *(int **)(this + 0x5c);
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 8);
    guard_check_icall(piVar2);
    (*pcVar1)();
    *(undefined4 *)(this + 0x5c) = 0;
  }
  piVar2 = *(int **)(this + 0x54);
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 0x14);
    guard_check_icall(piVar2);
    (*pcVar1)();
    pcVar1 = *(code **)(**(int **)(this + 0x54) + 8);
    guard_check_icall(*(int **)(this + 0x54));
    (*pcVar1)();
    *(undefined4 *)(this + 0x54) = 0;
  }
  piVar2 = *(int **)(this + 0x58);
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 8);
    guard_check_icall(piVar2);
    (*pcVar1)();
    *(undefined4 *)(this + 0x58) = 0;
  }
  piVar2 = *(int **)(this + 0x50);
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 0xc);
    guard_check_icall(piVar2,0);
    (*pcVar1)();
    pcVar1 = *(code **)(**(int **)(this + 0x50) + 0x18);
    guard_check_icall(*(int **)(this + 0x50),1);
    (*pcVar1)();
    pcVar1 = *(code **)(**(int **)(this + 0x50) + 8);
    guard_check_icall(*(int **)(this + 0x50));
    (*pcVar1)();
    *(undefined4 *)(this + 0x50) = 0;
  }
  Ordinal_9(this + 0xb0);
  BindProperty(this,-1,(CWnd *)0x0);
  if (((*(int *)(this + 0x9c) != 0) && (*(int *)(this + 0x98) != 0)) &&
     (piVar2 = *(int **)(*(int *)(this + 0x98) + 0x90), piVar2 != (int *)0x0)) {
    pcVar1 = *(code **)(*piVar2 + 0xc);
    guard_check_icall(this,0);
    (*pcVar1)();
  }
  if ((*(int *)(this + 0x20) != 0) && (*(int *)(this + 0x74) != 0)) {
    piVar2 = (int *)(*(int *)(this + 0x20) + 0x74);
    *piVar2 = *piVar2 + -1;
  }
  local_18 = (COleControlSite *)0x0;
  puVar3 = *(undefined4 **)(this + 0xdc);
  guard_check_icall(this + 0xdc,&DAT_005dba30,&local_18);
  iVar5 = (*(code *)*puVar3)();
  if (-1 < iVar5) {
    _AfxReleaseManagedRefs((IUnknown *)local_18);
  }
  local_14 = (COleControlSite *)0x0;
  puVar3 = *(undefined4 **)(this + 0xe0);
  guard_check_icall(this + 0xe0,&DAT_005dba30,&local_14);
  iVar5 = (*(code *)*puVar3)();
  if (-1 < iVar5) {
    _AfxReleaseManagedRefs((IUnknown *)local_14);
  }
  ATL::CComPtrBase<IAccessor>::~CComPtrBase<IAccessor>((CComPtrBase<IAccessor> *)&local_14);
  ATL::CComPtrBase<IAccessor>::~CComPtrBase<IAccessor>((CComPtrBase<IAccessor> *)&local_18);
  local_8 = 0;
  COleDispatchDriver::ReleaseDispatch((COleDispatchDriver *)(this + 0xc0));
  FUN_0040efa0();
  CCmdTarget::~CCmdTarget((CCmdTarget *)this);
  ExceptionList = local_10;
  return;
}

