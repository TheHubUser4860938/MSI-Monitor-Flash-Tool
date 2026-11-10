// rea decompile_all
// name: CPaneContainerManager::AddPaneAndPaneContainer
// address: 0x4db666
// body: available
// range: 0x4db666-0x4db8a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: int __thiscall CPaneContainerManager::AddPaneAndPaneContainer(class CDockablePane
   *,class CPaneContainer *,unsigned long)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CPaneContainerManager::AddPaneAndPaneContainer
          (CPaneContainerManager *this,CDockablePane *param_1,CPaneContainer *param_2,ulong param_3)

{
  code *pcVar1;
  CPaneContainerManager *pCVar2;
  ulong uVar3;
  CPaneDivider *pCVar4;
  CPaneContainer *pCVar5;
  int iVar6;
  uint uVar7;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  CPaneContainer *local_54;
  CPaneContainerManager *local_50;
  CPaneContainer *local_4c;
  CDockablePane *local_48;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x5c;
  local_8 = 0x4db672;
  local_48 = param_1;
  local_54 = param_2;
  local_50 = this;
  if (*(int *)(this + 0x3c) != 0) {
    local_34.left = 0;
    local_34.top = 0;
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
    local_50 = this;
    SetRectEmpty(&local_44);
    local_64 = 0;
    local_60 = 0;
    pcVar1 = *(code **)(*(int *)param_1 + 0x270);
    guard_check_icall(&local_64);
    (*pcVar1)();
    local_5c = 0;
    local_58 = 0;
    pcVar1 = *(code **)(*(int *)param_2 + 0x10);
    guard_check_icall(&local_5c);
    (*pcVar1)();
    ::GetWindowRect(*(HWND *)(local_48 + 0x20),&local_34);
    pcVar1 = *(code **)(*(int *)param_2 + 0xc);
    guard_check_icall(&local_24,0);
    (*pcVar1)();
    local_4c = (CPaneContainer *)0x1;
    CWnd::ScreenToClient(*(CWnd **)(this + 0x4c),&local_34);
    CWnd::ScreenToClient(*(CWnd **)(this + 0x4c),&local_24);
    CWnd::ScreenToClient(*(CWnd **)(this + 0x4c),&local_44);
    uVar3 = CWnd::GetExStyle(*(CWnd **)(this + 0x4c));
    CalcRects(this,&local_34,&local_24,&local_44,&local_4c,param_3,local_64,local_60,local_5c,
              local_58);
    pcVar1 = *(code **)(*(int *)local_48 + 0x234);
    guard_check_icall(&local_34,1,0);
    (*pcVar1)();
    iVar6 = *(int *)param_2;
    local_68 = 0;
    guard_check_icall(local_24.left,local_24.top,local_24.right,local_24.bottom,&local_68,0);
    pCVar5 = local_54;
    (**(code **)(iVar6 + 0x48))();
    pcVar1 = *(code **)(*(int *)pCVar5 + 0x30);
    guard_check_icall(local_24.left,local_24.top);
    (*pcVar1)();
    pCVar2 = local_50;
    pCVar4 = CreatePaneDivider(local_50,local_44.left,local_44.top,local_44.right,local_44.bottom,
                               local_4c,0xffffffff);
    local_50 = (CPaneContainerManager *)pCVar4;
    if (pCVar4 != (CPaneDivider *)0x0) {
      if (*(int *)(pCVar2 + 0x40) == 0) {
        local_4c = (CPaneContainer *)FUN_00416408(0x9c);
        local_8 = 0;
        if (local_4c == (CPaneContainer *)0x0) {
          pCVar5 = (CPaneContainer *)0x0;
        }
        else {
          pCVar5 = (CPaneContainer *)
                   CPaneContainer::CPaneContainer
                             (local_4c,(CPaneContainerManager *)0x0,(CDockablePane *)0x0,
                              (CDockablePane *)0x0,(CPaneDivider *)0x0);
        }
        local_8 = 0xffffffff;
      }
      else {
        pCVar5 = (CPaneContainer *)FUN_00439696();
      }
      CPaneContainer::SetPaneContainerManager(pCVar5,pCVar2,0);
      *(CPaneDivider **)(pCVar5 + 0xc) = pCVar4;
      uVar7 = (uint)((param_3 & 0xc000) != 0);
      if ((uVar3 & 0x400000) != 0) {
        uVar7 = param_3 & 0x1000;
      }
      CPaneContainer::SetPane(pCVar5,local_48,uVar7);
      CPaneContainer::SetPaneContainer(pCVar5,local_54,(uint)(uVar7 == 0));
      BringWindowToTop(*(HWND *)(local_50 + 0x20));
      FUN_004fca35(pCVar5,uVar7);
    }
  }
  iVar6 = FUN_0055bae6();
  return iVar6;
}

