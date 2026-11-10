// rea decompile_all
// name: CPaneContainer::ResizePartOfPaneContainer
// address: 0x4ff5e0
// body: available
// range: 0x4ff5e0-0x4ff832 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPaneContainer::ResizePartOfPaneContainer(int,int,void * &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CPaneContainer::ResizePartOfPaneContainer
          (CPaneContainer *this,int param_1,int param_2,void **param_3)

{
  int iVar1;
  CWnd *this_00;
  void *pvVar2;
  code *pcVar3;
  int *piVar4;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0xc) == 0) goto LAB_004ff820;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  SetRectEmpty(&local_18);
  local_20 = 0;
  local_1c = 0;
  if (param_2 == 0) {
    if (*(int **)(this + 0x14) == (int *)0x0) {
      if (*(int *)(this + 8) == 0) goto LAB_004ff820;
      ::GetWindowRect(*(HWND *)(*(int *)(this + 8) + 0x20),&local_18);
      piVar4 = *(int **)(this + 8);
      goto LAB_004ff6f1;
    }
    pcVar3 = *(code **)(**(int **)(this + 0x14) + 0xc);
    guard_check_icall(&local_18,0);
    (*pcVar3)();
    pcVar3 = *(code **)(**(int **)(this + 0x14) + 0x10);
    guard_check_icall(&local_20);
    (*pcVar3)();
LAB_004ff6a3:
    iVar1 = IsPaneDividerHorz(this);
    if (iVar1 == 0) {
LAB_004ff75e:
      local_18.left = local_18.left + param_1;
      if (local_18.right - local_18.left < local_20) {
        local_18.left = local_18.right - local_20;
      }
    }
    else {
      local_18.top = local_18.top + param_1;
      if (local_18.bottom - local_18.top < local_1c) {
        local_18.top = local_18.bottom - local_1c;
      }
    }
  }
  else {
    if (*(int **)(this + 0x10) == (int *)0x0) {
      if (*(int *)(this + 4) == 0) goto LAB_004ff820;
      ::GetWindowRect(*(HWND *)(*(int *)(this + 4) + 0x20),&local_18);
      piVar4 = *(int **)(this + 4);
LAB_004ff6f1:
      pcVar3 = *(code **)(*piVar4 + 0x270);
    }
    else {
      pcVar3 = *(code **)(**(int **)(this + 0x10) + 0xc);
      guard_check_icall(&local_18,0);
      (*pcVar3)();
      pcVar3 = *(code **)(**(int **)(this + 0x10) + 0x10);
    }
    guard_check_icall(&local_20);
    (*pcVar3)();
    if (param_2 == 0) goto LAB_004ff6a3;
    iVar1 = IsPaneDividerHorz(this);
    if (iVar1 == 0) {
      iVar1 = IsPaneDividerHorz(this);
      if (iVar1 == 0) {
        local_18.right = local_18.right + param_1;
        if (local_18.right - local_18.left < local_20) {
          local_18.right = local_18.left + local_20;
        }
        goto LAB_004ff779;
      }
      goto LAB_004ff75e;
    }
    local_18.bottom = local_18.bottom + param_1;
    if (local_18.bottom - local_18.top < local_1c) {
      local_18.bottom = local_18.top + local_1c;
    }
  }
LAB_004ff779:
  pcVar3 = *(code **)(**(int **)(this + 0x1c) + 0x74);
  guard_check_icall();
  this_00 = (CWnd *)(*pcVar3)();
  CWnd::ScreenToClient(this_00,&local_18);
  if (param_2 == 0) {
    if (*(int **)(this + 0x14) == (int *)0x0) {
      piVar4 = *(int **)(this + 8);
      goto LAB_004ff7fc;
    }
    iVar1 = **(int **)(this + 0x14);
    guard_check_icall(local_18.left,local_18.top,local_18.right,local_18.bottom,param_3,0);
  }
  else {
    if (*(int **)(this + 0x10) == (int *)0x0) {
      piVar4 = *(int **)(this + 4);
LAB_004ff7fc:
      if (piVar4 != (int *)0x0) {
        pcVar3 = *(code **)(*piVar4 + 0x234);
        guard_check_icall(&local_18,0,*param_3);
        pvVar2 = (void *)(*pcVar3)();
        *param_3 = pvVar2;
      }
      goto LAB_004ff820;
    }
    iVar1 = **(int **)(this + 0x10);
    guard_check_icall(local_18.left,local_18.top,local_18.right,local_18.bottom,param_3,0);
  }
  (**(code **)(iVar1 + 0x48))();
LAB_004ff820:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

