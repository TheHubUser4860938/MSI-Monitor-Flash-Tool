// rea decompile_all
// name: CPaneContainer::OnMoveInternalPaneDivider
// address: 0x4fe310
// body: available
// range: 0x4fe310-0x4fe5c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CPaneContainer::OnMoveInternalPaneDivider(int,void * &)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CPaneContainer::OnMoveInternalPaneDivider(CPaneContainer *this,int param_1,void **param_2)

{
  code *pcVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  BOOL BVar4;
  int iVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  undefined8 uVar6;
  tagRECT *ptVar7;
  int *piVar8;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  CPaneContainer *local_30;
  void **local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_2c = param_2;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  local_30 = this;
  SetRectEmpty(&local_18);
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  SetRectEmpty(&local_28);
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  if (*(int *)(this + 4) != 0) {
    ::GetWindowRect(*(HWND *)(*(int *)(this + 4) + 0x20),&local_18);
    pcVar1 = *(code **)(**(int **)(this + 4) + 0x270);
    guard_check_icall(&local_40);
    (*pcVar1)();
  }
  if (*(int **)(this + 0x10) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x10) + 0xc);
    guard_check_icall(&local_18,0);
    (*pcVar1)();
    pcVar1 = *(code **)(**(int **)(this + 0x10) + 0x10);
    guard_check_icall(&local_40);
    (*pcVar1)();
  }
  if (*(int *)(this + 8) != 0) {
    ::GetWindowRect(*(HWND *)(*(int *)(this + 8) + 0x20),&local_28);
    pcVar1 = *(code **)(**(int **)(this + 8) + 0x270);
    guard_check_icall(&local_38);
    (*pcVar1)();
  }
  if (*(int **)(this + 0x14) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x14) + 0xc);
    guard_check_icall(&local_28,0);
    (*pcVar1)();
    pcVar1 = *(code **)(**(int **)(this + 0x14) + 0x10);
    guard_check_icall(&local_38);
    (*pcVar1)();
  }
  ptVar7 = &local_18;
  pHVar2 = GetParent(*(HWND *)(*(int *)(this + 0xc) + 0x20));
  pCVar3 = CWnd::FromHandle(pHVar2);
  CWnd::ScreenToClient(pCVar3,ptVar7);
  ptVar7 = &local_28;
  pHVar2 = GetParent(*(HWND *)(*(int *)(this + 0xc) + 0x20));
  pCVar3 = CWnd::FromHandle(pHVar2);
  CWnd::ScreenToClient(pCVar3,ptVar7);
  BVar4 = IsRectEmpty(&local_18);
  if (BVar4 == 0) {
    iVar5 = IsPaneDividerHorz(this);
    if (iVar5 == 0) {
      local_18.right = local_18.right + param_1;
      if (local_18.right - local_18.left < local_40) {
        local_18.right = local_18.left + local_40;
      }
    }
    else {
      local_18.bottom = local_18.bottom + param_1;
      if (local_18.bottom - local_18.top < local_3c) {
        local_18.bottom = local_18.top + local_3c;
      }
    }
  }
  BVar4 = IsRectEmpty(&local_28);
  iVar5 = extraout_EDX;
  if (BVar4 == 0) {
    iVar5 = IsPaneDividerHorz(this);
    if (iVar5 == 0) {
      local_28.left = local_28.left + param_1;
      iVar5 = local_28.right;
      if (local_28.right - local_28.left < local_38) {
        iVar5 = local_28.right - local_38;
        local_28.left = iVar5;
      }
    }
    else {
      local_28.top = local_28.top + param_1;
      iVar5 = local_28.bottom;
      if (local_28.bottom - local_28.top < local_34) {
        iVar5 = local_28.bottom - local_34;
        local_28.top = iVar5;
      }
    }
  }
  if (*(int **)(this + 4) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 4) + 0x234);
    guard_check_icall(&local_18,1,*local_2c);
    uVar6 = (*pcVar1)();
    iVar5 = (int)((ulonglong)uVar6 >> 0x20);
    *local_2c = (void *)uVar6;
  }
  piVar8 = *(int **)(this + 0x10);
  if (piVar8 != (int *)0x0) {
    iVar5 = *piVar8;
    guard_check_icall(local_18.left,local_18.top,local_18.right,local_18.bottom,local_2c,0);
    (**(code **)(iVar5 + 0x48))();
    iVar5 = extraout_EDX_00;
    this = local_30;
  }
  if (*(int **)(this + 8) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 8) + 0x234);
    guard_check_icall(&local_28,1,*local_2c);
    uVar6 = (*pcVar1)();
    iVar5 = (int)((ulonglong)uVar6 >> 0x20);
    *local_2c = (void *)uVar6;
  }
  local_30 = *(CPaneContainer **)(this + 0x14);
  if (local_30 != (CPaneContainer *)0x0) {
    iVar5 = *(int *)local_30;
    guard_check_icall(local_28.left,local_28.top,local_28.right,local_28.bottom,local_2c,0);
    (**(code **)(iVar5 + 0x48))();
    iVar5 = extraout_EDX_01;
  }
  iVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,iVar5,piVar8);
  return iVar5;
}

