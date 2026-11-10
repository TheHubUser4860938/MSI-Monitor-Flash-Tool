// rea decompile_all
// name: CDataSourceControl::~CDataSourceControl
// address: 0x440f46
// body: available
// range: 0x440f46-0x4411e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall CDataSourceControl::~CDataSourceControl(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDataSourceControl::~CDataSourceControl(CDataSourceControl *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  CDynamicAccessor *pCVar5;
  IRowset *pIVar6;
  CRowset<ATL::CAccessorBase> *this_00;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  CDataSourceControl *local_18;
  CDataSourceControl *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0059f181;
  local_10 = ExceptionList;
  uVar7 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  local_18 = this;
  local_14 = this;
  if ((*(int *)(this + 0x58) != 0) && (*(undefined4 **)(this + 0x50) != (undefined4 *)0x0)) {
    puVar1 = (undefined4 *)**(undefined4 **)(this + 0x50);
    puVar2 = (undefined4 *)*puVar1;
    guard_check_icall(puVar1,&DAT_005dbab0,&local_18,uVar7);
    iVar8 = (*(code *)*puVar2)();
    if ((-1 < iVar8) && (local_18 != (CDataSourceControl *)0x0)) {
      local_14 = (CDataSourceControl *)0x0;
      iVar8 = *(int *)local_18;
      guard_check_icall(local_18,&DAT_005dbbc0,&local_14);
      iVar8 = (**(code **)(iVar8 + 0x10))();
      if ((-1 < iVar8) && (local_14 != (CDataSourceControl *)0x0)) {
        pcVar3 = *(code **)(*(int *)local_14 + 0x18);
        guard_check_icall(local_14,*(undefined4 *)(this + 0x58));
        (*pcVar3)();
        pcVar3 = *(code **)(*(int *)local_14 + 8);
        guard_check_icall(local_14);
        (*pcVar3)();
      }
      pcVar3 = *(code **)(*(int *)local_18 + 8);
      guard_check_icall(local_18);
      (*pcVar3)();
    }
  }
  while (((*(int *)(this + 0x24) != 0 &&
          (piVar9 = *(int **)(*(int *)(this + 0x1c) + 8), piVar9 != (int *)0x0)) &&
         (local_18 = (CDataSourceControl *)*piVar9, local_18 != (CDataSourceControl *)0x0))) {
    pcVar3 = *(code **)(*(int *)local_18 + 0xbc);
    guard_check_icall(piVar9[2],0);
    (*pcVar3)();
    *(undefined4 *)(*piVar9 + 0x98) = 0;
  }
  iVar8 = 0;
  CObList::RemoveAll((CObList *)(this + 0x18));
  if (*(int *)(this + 0x40) != 0) {
    iVar10 = 0;
    iVar4 = *(int *)(this + 0x38);
    if (0 < iVar4) {
      do {
        Ordinal_9(*(int *)(this + 0x40) + iVar8);
        iVar10 = iVar10 + 1;
        iVar8 = iVar8 + 0x10;
      } while (iVar10 < *(int *)(this + 0x38));
      iVar4 = *(int *)(this + 0x38);
    }
    if (iVar4 != 0) {
      FID_conflict__free(*(void **)(this + 0x3c));
      FID_conflict__free(*(void **)(this + 0x40));
    }
  }
  iVar8 = 0;
  piVar9 = *(int **)(this + 8);
  if (piVar9 != (int *)0x0) {
    pcVar3 = *(code **)(*piVar9 + 8);
    guard_check_icall(piVar9);
    (*pcVar3)();
  }
  piVar9 = *(int **)(this + 0xc);
  if (piVar9 != (int *)0x0) {
    pcVar3 = *(code **)(*piVar9 + 8);
    guard_check_icall(piVar9);
    (*pcVar3)();
  }
  if (*(int *)(this + 0x14) != 0) {
    local_14 = (CDataSourceControl *)0x0;
    if (0 < *(int *)(this + 0x10)) {
      do {
        local_18 = *(CDataSourceControl **)(*(int *)(iVar8 + 0x24 + *(int *)(this + 0x14)) + 4);
        while (local_18 != (CDataSourceControl *)0x0) {
          piVar9 = (int *)FUN_004ead48(&local_18);
          *(undefined4 *)(*piVar9 + 0x98) = 0;
        }
        CObList::RemoveAll(*(CObList **)(iVar8 + 0x24 + *(int *)(this + 0x14)));
        local_18 = *(CDataSourceControl **)(iVar8 + 0x24 + *(int *)(this + 0x14));
        if (local_18 != (CDataSourceControl *)0x0) {
          pcVar3 = *(code **)(*(int *)local_18 + 4);
          guard_check_icall(1);
          (*pcVar3)();
        }
        iVar8 = iVar8 + 0x28;
        local_14 = local_14 + 1;
      } while ((int)local_14 < *(int *)(this + 0x10));
    }
    CoTaskMemFree(*(LPVOID *)(this + 0x14));
  }
  if (*(int *)(this + 0x34) != 0) {
    CoTaskMemFree(*(LPVOID *)(this + 0x34));
  }
  pCVar5 = *(CDynamicAccessor **)(this + 0x54);
  if (pCVar5 != (CDynamicAccessor *)0x0) {
    pIVar6 = (IRowset *)**(undefined4 **)(this + 0x50);
    ATL::CDynamicAccessor::FreeRecordMemory(pCVar5,pIVar6);
    ATL::CAccessorBase::ReleaseAccessors((CAccessorBase *)pCVar5,(IUnknown *)pIVar6);
    ATL::CDynamicAccessor::Close(*(CDynamicAccessor **)(this + 0x54));
  }
  pCVar5 = *(CDynamicAccessor **)(this + 0x54);
  if (pCVar5 != (CDynamicAccessor *)0x0) {
    ATL::CDynamicAccessor::Close(pCVar5);
    FUN_0055b3de(pCVar5,0x28);
  }
  this_00 = *(CRowset<ATL::CAccessorBase> **)(this + 0x50);
  if (this_00 != (CRowset<ATL::CAccessorBase> *)0x0) {
    ATL::CRowset<ATL::CAccessorBase>::~CRowset<ATL::CAccessorBase>(this_00);
    FUN_0055b3de(this_00,0x14);
  }
  piVar9 = *(int **)(this + 0x4c);
  if (piVar9 != (int *)0x0) {
    pcVar3 = *(code **)(*piVar9 + 8);
    guard_check_icall(piVar9);
    (*pcVar3)();
  }
  piVar9 = *(int **)(this + 0x48);
  if (piVar9 != (int *)0x0) {
    pcVar3 = *(code **)(*piVar9 + 8);
    guard_check_icall(piVar9);
    (*pcVar3)();
  }
  CPtrList::~CPtrList((CPtrList *)(this + 0x18));
  ExceptionList = local_10;
  return;
}

