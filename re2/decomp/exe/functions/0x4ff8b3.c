// rea decompile_all
// name: CPaneContainer::Serialize
// address: 0x4ff8b3
// body: available
// range: 0x4ff8b3-0x4ffb53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPaneContainer::Serialize(class CArchive &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPaneContainer::Serialize(CPaneContainer *this,CArchive *param_1)

{
  code *pcVar1;
  int iVar2;
  CDockablePane *pCVar3;
  CObject *pCVar4;
  int iVar5;
  CPaneContainer *this_00;
  undefined4 uVar6;
  CPaneContainer *local_8;
  
  local_8 = this;
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    FUN_00450090(this + 0x24);
    if (*(int *)(this + 0x24) == -1) {
      pCVar3 = LoadTabbedPane(this,param_1,(CList<unsigned_int,unsigned_int> *)(this + 100));
      *(CDockablePane **)(this + 4) = pCVar3;
    }
    FUN_00450090(this + 0x28);
    if (*(int *)(this + 0x28) == -1) {
      pCVar3 = LoadTabbedPane(this,param_1,(CList<unsigned_int,unsigned_int> *)(this + 0x80));
      *(CDockablePane **)(this + 8) = pCVar3;
    }
    FUN_00450090(this + 0x2c);
    if (*(int *)(this + 0x2c) != 0) {
      pCVar4 = (CObject *)FUN_00439696();
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneDivider_005c46c4,pCVar4);
      *(CObject **)(this + 0xc) = pCVar4;
      CPaneDivider::Init((CPaneDivider *)pCVar4,0,*(CWnd **)(*(int *)(this + 0x1c) + 0x4c));
      pcVar1 = *(code **)(**(int **)(this + 0xc) + 8);
      guard_check_icall(param_1);
      (*pcVar1)();
      *(undefined4 *)(*(int *)(this + 0xc) + 0x168) = *(undefined4 *)(this + 0x1c);
      CObList::AddTail((CObList *)(*(int *)(this + 0x1c) + 0x20),*(CObject **)(this + 0xc));
    }
    uVar6 = 0;
    local_8 = (CPaneContainer *)0x0;
    FUN_00450090(&local_8);
    iVar2 = *(int *)(*(int *)(this + 0x1c) + 0x40);
    if (local_8 != (CPaneContainer *)0x0) {
      if (iVar2 == 0) {
        local_8 = (CPaneContainer *)FUN_00416408(0x9c);
        if (local_8 != (CPaneContainer *)0x0) {
          uVar6 = CPaneContainer(local_8,*(CPaneContainerManager **)(this + 0x1c),
                                 (CDockablePane *)0x0,(CDockablePane *)0x0,(CPaneDivider *)0x0);
        }
        *(undefined4 *)(this + 0x10) = uVar6;
      }
      else {
        iVar5 = FUN_00439696();
        *(int *)(this + 0x10) = iVar5;
        *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(this + 0x1c);
      }
      pcVar1 = *(code **)(**(int **)(this + 0x10) + 8);
      guard_check_icall(param_1);
      (*pcVar1)();
      *(CPaneContainer **)(*(int *)(this + 0x10) + 0x18) = this;
    }
    uVar6 = 0;
    local_8 = (CPaneContainer *)0x0;
    FUN_00450090(&local_8);
    if (local_8 == (CPaneContainer *)0x0) {
      return;
    }
    if (iVar2 == 0) {
      this_00 = (CPaneContainer *)FUN_00416408(0x9c);
      if (this_00 != (CPaneContainer *)0x0) {
        uVar6 = CPaneContainer(this_00,*(CPaneContainerManager **)(this + 0x1c),(CDockablePane *)0x0
                               ,(CDockablePane *)0x0,(CPaneDivider *)0x0);
      }
      *(undefined4 *)(this + 0x14) = uVar6;
    }
    else {
      iVar2 = FUN_00439696();
      *(int *)(this + 0x14) = iVar2;
      *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(this + 0x1c);
    }
    pcVar1 = *(code **)(**(int **)(this + 0x14) + 8);
    guard_check_icall(param_1);
    (*pcVar1)();
    *(CPaneContainer **)(*(int *)(this + 0x14) + 0x18) = this;
    return;
  }
  if (*(CWnd **)(this + 4) == (CWnd *)0x0) {
    iVar2 = 0;
LAB_004ff8f1:
    FUN_0043e915(iVar2);
  }
  else {
    iVar2 = CWnd::GetDlgCtrlID(*(CWnd **)(this + 4));
    if (iVar2 != -1) goto LAB_004ff8f1;
    SaveTabbedPane(this,param_1,*(CDockablePane **)(this + 4));
  }
  if (*(CWnd **)(this + 8) == (CWnd *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = CWnd::GetDlgCtrlID(*(CWnd **)(this + 8));
    if (iVar2 == -1) {
      SaveTabbedPane(this,param_1,*(CDockablePane **)(this + 8));
      goto LAB_004ff921;
    }
  }
  FUN_0043e915(iVar2);
LAB_004ff921:
  if (*(CWnd **)(this + 0xc) == (CWnd *)0x0) {
    FUN_0043e915(0);
  }
  else {
    iVar2 = CWnd::GetDlgCtrlID(*(CWnd **)(this + 0xc));
    FUN_0043e915(iVar2);
    pcVar1 = *(code **)(**(int **)(this + 0xc) + 8);
    guard_check_icall(param_1);
    (*pcVar1)();
  }
  FUN_0043e915(*(int *)(this + 0x10) != 0);
  local_8 = *(CPaneContainer **)(this + 0x10);
  if (local_8 != (CPaneContainer *)0x0) {
    pcVar1 = *(code **)(*(int *)local_8 + 8);
    guard_check_icall(param_1);
    (*pcVar1)();
  }
  FUN_0043e915(*(int *)(this + 0x14) != 0);
  if (*(int **)(this + 0x14) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x14) + 8);
    guard_check_icall(param_1);
    (*pcVar1)();
  }
  return;
}

