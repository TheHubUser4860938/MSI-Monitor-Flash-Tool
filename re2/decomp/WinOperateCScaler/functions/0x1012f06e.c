// rea decompile_all
// name: CPaneContainer::GetWindowRect
// address: 0x1012f06e
// body: available
// range: 0x1012f06e-0x1012f27c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPaneContainer::GetWindowRect(class CRect &,int)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall CPaneContainer::GetWindowRect(CPaneContainer *this,CRect *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  BOOL BVar4;
  int iVar5;
  int local_44;
  int local_40;
  int local_3c;
  RECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  local_38.left = 0;
  local_38.top = 0;
  local_38.right = 0;
  local_38.bottom = 0;
  SetRectEmpty((LPRECT)param_1);
  SetRectEmpty(&local_28);
  SetRectEmpty(&local_18);
  iVar2 = CPaneContainerManager::IsAutoHideMode(*(CPaneContainerManager **)(this + 0x1c));
  local_3c = iVar2;
  if ((*(CWnd **)(this + 4) != (CWnd *)0x0) &&
     (((uVar3 = CWnd::GetExStyle(*(CWnd **)(this + 4)), (uVar3 & 0x10000000) != 0 || (param_2 != 0))
      || (iVar2 != 0)))) {
    ::GetWindowRect(*(HWND *)(*(int *)(this + 4) + 0x20),&local_28);
    BVar4 = IsRectEmpty(&local_28);
    if (BVar4 != 0) {
      local_44 = 0;
      local_40 = 0;
      pcVar1 = *(code **)(**(int **)(this + 4) + 0x270);
      guard_check_icall(&local_44);
      (*pcVar1)();
      if (local_28.right == local_28.left) {
        local_28.right = local_28.right + local_44;
      }
      iVar2 = local_3c;
      if (local_28.bottom == local_28.top) {
        local_28.bottom = local_28.bottom + local_40;
      }
    }
  }
  if ((*(CWnd **)(this + 8) != (CWnd *)0x0) &&
     (((uVar3 = CWnd::GetExStyle(*(CWnd **)(this + 8)), (uVar3 & 0x10000000) != 0 || (param_2 != 0))
      || (iVar2 != 0)))) {
    ::GetWindowRect(*(HWND *)(*(int *)(this + 8) + 0x20),&local_18);
    BVar4 = IsRectEmpty(&local_18);
    if (BVar4 != 0) {
      local_44 = 0;
      local_40 = 0;
      pcVar1 = *(code **)(**(int **)(this + 8) + 0x270);
      guard_check_icall(&local_44);
      (*pcVar1)();
      if (local_18.right == local_18.left) {
        local_18.right = local_18.right + local_44;
      }
      if (local_18.bottom == local_18.top) {
        local_18.bottom = local_18.bottom + local_40;
      }
    }
  }
  UnionRect((LPRECT)param_1,&local_28,&local_18);
  if ((*(CPaneContainer **)(this + 0x10) != (CPaneContainer *)0x0) &&
     (((iVar2 = IsVisible(*(CPaneContainer **)(this + 0x10)), iVar2 != 0 || (param_2 != 0)) ||
      (local_3c != 0)))) {
    pcVar1 = *(code **)(**(int **)(this + 0x10) + 0xc);
    guard_check_icall(&local_38,0);
    (*pcVar1)();
    UnionRect((LPRECT)param_1,(RECT *)param_1,&local_38);
  }
  iVar2 = local_3c;
  if ((*(CPaneContainer **)(this + 0x14) != (CPaneContainer *)0x0) &&
     (((iVar5 = IsVisible(*(CPaneContainer **)(this + 0x14)), iVar5 != 0 || (param_2 != 0)) ||
      (iVar2 != 0)))) {
    pcVar1 = *(code **)(**(int **)(this + 0x14) + 0xc);
    guard_check_icall(&local_38,0);
    (*pcVar1)();
    UnionRect((LPRECT)param_1,(RECT *)param_1,&local_38);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

