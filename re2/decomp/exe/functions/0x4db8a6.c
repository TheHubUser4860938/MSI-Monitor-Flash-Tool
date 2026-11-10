// rea decompile_all
// name: CPaneContainerManager::AddPaneAndPaneDivider
// address: 0x4db8a6
// body: available
// range: 0x4db8a6-0x4dbc64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: int __thiscall CPaneContainerManager::AddPaneAndPaneDivider(class CDockablePane
   *,class CDockablePane *,struct __POSITION *,unsigned long)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CPaneContainerManager::AddPaneAndPaneDivider
          (CPaneContainerManager *this,CDockablePane *param_1,CDockablePane *param_2,
          __POSITION *param_3,ulong param_4)

{
  code *pcVar1;
  CPaneContainerManager *pCVar2;
  ulong uVar3;
  CPaneDivider *pCVar4;
  int iVar5;
  CPaneContainer *this_00;
  uint uVar6;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  CPaneContainerManager *local_5c;
  CDockablePane *local_58;
  CDockablePane *local_54;
  CPaneDivider *local_50;
  CDockablePane *local_4c;
  CDockablePane *local_48;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x60;
  local_8 = 0x4db8b2;
  this_00 = (CPaneContainer *)0x0;
  local_48 = param_1;
  local_4c = param_2;
  local_5c = this;
  if (*(int *)(this + 0x3c) == 0) goto LAB_004dbc5d;
  uVar6 = param_4 & 0xf000;
  if ((uVar6 == 0x1000) || (uVar6 == 0x2000)) {
    CObList::InsertBefore((CObList *)(this + 4),param_3,(CObject *)param_2);
  }
  else {
    if ((uVar6 != 0x4000) && (uVar6 != 0x8000)) goto LAB_004dbc5d;
    CObList::InsertAfter((CObList *)(this + 4),param_3,(CObject *)param_2);
  }
  local_34.left = 0;
  local_34.top = 0;
  pcVar1 = *(code **)(*(int *)param_1 + 0x270);
  local_34.right = 0;
  local_34.bottom = 0;
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  local_44.left = 0;
  local_44.top = 0;
  local_44.right = 0;
  local_44.bottom = 0;
  local_70 = 0;
  local_6c = 0;
  guard_check_icall(&local_70);
  (*pcVar1)();
  local_68 = 0;
  local_64 = 0;
  pcVar1 = *(code **)(*(int *)local_4c + 0x270);
  guard_check_icall(&local_68);
  (*pcVar1)();
  ::GetWindowRect(*(HWND *)(local_48 + 0x20),&local_34);
  ::GetWindowRect(*(HWND *)(local_4c + 0x20),&local_24);
  if (local_24.right - local_24.left < local_68) {
    local_24.right = local_24.left + local_68;
  }
  if (local_24.bottom - local_24.top < local_64) {
    local_24.bottom = local_24.top + local_64;
  }
  if ((param_4 & 0xa000) == 0) {
    local_24.top = local_34.top;
    local_44.top = local_34.top;
    local_24.bottom = local_34.bottom;
    local_44.bottom = local_34.bottom;
    iVar5 = (local_34.right - local_34.left) / 2;
    if (local_24.right - local_24.left <= iVar5) {
      iVar5 = local_24.right - local_24.left;
    }
    local_50 = (CPaneDivider *)0x2;
  }
  else {
    local_24.left = local_34.left;
    local_44.left = local_34.left;
    local_24.right = local_34.right;
    local_44.right = local_34.right;
    iVar5 = (local_34.bottom - local_34.top) / 2;
    if (local_24.bottom - local_24.top <= iVar5) {
      iVar5 = local_24.bottom - local_24.top;
    }
    local_50 = (CPaneDivider *)0x1;
  }
  local_60 = 0;
  local_54 = (CDockablePane *)0x0;
  local_58 = (CDockablePane *)0x0;
  CWnd::ScreenToClient(*(CWnd **)(local_5c + 0x4c),&local_34);
  CWnd::ScreenToClient(*(CWnd **)(local_5c + 0x4c),&local_24);
  CWnd::ScreenToClient(*(CWnd **)(local_5c + 0x4c),&local_44);
  uVar3 = CWnd::GetExStyle(*(CWnd **)(local_5c + 0x4c));
  if (uVar6 == 0x1000) {
    if ((uVar3 & 0x400000) == 0) {
LAB_004dbb43:
      local_24.left = local_34.left;
      local_44.left = local_34.left + iVar5;
      local_44.right = DAT_0060c890 + local_44.left;
      local_54 = local_4c;
      local_58 = local_48;
      local_34.left = local_44.right;
      local_24.right = local_44.left;
    }
    else {
LAB_004dbae3:
      local_24.right = local_34.right;
      local_44.right = local_34.right - iVar5;
      local_44.left = local_44.right - DAT_0060c890;
      local_54 = local_48;
      local_58 = local_4c;
      local_60 = 1;
      local_34.right = local_44.left;
      local_24.left = local_44.right;
    }
  }
  else if (uVar6 == 0x2000) {
    local_24.top = local_34.top;
    local_44.top = local_34.top + iVar5;
    local_44.bottom = DAT_0060c890 + local_44.top;
    local_54 = local_4c;
    local_58 = local_48;
    local_34.top = local_44.bottom;
    local_24.bottom = local_44.top;
  }
  else {
    if (uVar6 == 0x4000) {
      if ((uVar3 & 0x400000) != 0) goto LAB_004dbb43;
      goto LAB_004dbae3;
    }
    if (uVar6 == 0x8000) {
      local_44.bottom = local_34.bottom - iVar5;
      local_24.bottom = local_34.bottom;
      local_44.top = local_44.bottom - DAT_0060c890;
      local_54 = local_48;
      local_50 = (CPaneDivider *)0x1;
      local_58 = local_4c;
      local_60 = 1;
      local_34.bottom = local_44.top;
      local_24.top = local_44.bottom;
    }
  }
  pcVar1 = *(code **)(*(int *)local_48 + 0x238);
  guard_check_icall(0,local_34.left,local_34.top,local_34.right - local_34.left,
                    local_34.bottom - local_34.top,0x14,0);
  (*pcVar1)();
  pcVar1 = *(code **)(*(int *)local_4c + 0x238);
  guard_check_icall(0,local_24.left,local_24.top,local_24.right - local_24.left,
                    local_24.bottom - local_24.top,0x14,0);
  (*pcVar1)();
  pCVar2 = local_5c;
  pCVar4 = CreatePaneDivider(local_5c,local_44.left,local_44.top,local_44.right,local_44.bottom,
                             local_50,0xffffffff);
  local_50 = pCVar4;
  if (pCVar4 != (CPaneDivider *)0x0) {
    if (*(int *)(pCVar2 + 0x40) == 0) {
      local_50 = (CPaneDivider *)FUN_00416408(0x9c);
      local_8 = 0;
      if (local_50 != (CPaneDivider *)0x0) {
        this_00 = (CPaneContainer *)
                  CPaneContainer::CPaneContainer
                            ((CPaneContainer *)local_50,pCVar2,local_54,local_58,pCVar4);
      }
      local_8 = 0xffffffff;
    }
    else {
      this_00 = (CPaneContainer *)FUN_00439696();
      CPaneContainer::SetPaneContainerManager(this_00,pCVar2,0);
      CPaneContainer::SetPane(this_00,local_54,1);
      CPaneContainer::SetPane(this_00,local_58,0);
      *(CPaneDivider **)(this_00 + 0xc) = local_50;
    }
    FUN_004fca35(this_00,local_60);
  }
LAB_004dbc5d:
  iVar5 = FUN_0055bae6();
  return iVar5;
}

