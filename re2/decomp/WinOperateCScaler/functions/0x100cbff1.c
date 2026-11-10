// rea decompile_all
// name: CMultiPaneFrameWnd::DockPane
// address: 0x100cbff1
// body: available
// range: 0x100cbff1-0x100cc151 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMultiPaneFrameWnd::DockPane(class CDockablePane *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMultiPaneFrameWnd::DockPane(CMultiPaneFrameWnd *this,CDockablePane *param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  CDockablePane *pCVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  CGlobalUtils local_38 [12];
  tagPOINT local_2c;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x100cbffd;
  local_2c.x = 0;
  local_2c.y = 0;
  GetCursorPos(&local_2c);
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14[0] = 0;
  CGlobalUtils::CGlobalUtils(local_38);
  local_8 = 0;
  iVar2 = FUN_100cb48f(this + 400,local_2c.x,local_2c.y,&local_18,local_14,&local_20,&local_1c);
  if (((iVar2 == 0) || (local_18 == 0)) || (local_14[0] == 0)) {
    uVar3 = 1;
  }
  else {
    pcVar1 = *(code **)(*(int *)param_1 + 0x240);
    guard_check_icall(0);
    (*pcVar1)();
    CWnd::SetParent((CWnd *)param_1,(CWnd *)this);
    iVar2 = *(int *)(this + 400);
    uVar8 = 0;
    uVar7 = 0;
    pCVar4 = param_1;
    iVar5 = local_18;
    iVar6 = local_14[0];
    guard_check_icall(param_1,local_18,local_14[0],0,0);
    local_24 = (**(code **)(iVar2 + 0x24))();
    if (local_24 != 0) {
      CPaneFrameWnd::AddRemovePaneFromGlobalList((CBasePane *)param_1,1);
      pcVar1 = *(code **)(*(int *)this + 0x188);
      guard_check_icall(pCVar4,iVar5,iVar6,uVar7,uVar8);
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)this + 0x1cc);
      guard_check_icall();
      (*pcVar1)();
      SendMessageW(*(HWND *)(this + 0x20),0x85,0,0);
    }
    pcVar1 = *(code **)(*(int *)this + 500);
    guard_check_icall(pCVar4,iVar5,iVar6,uVar7,uVar8);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)param_1 + 0x1d8);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      CWnd::SetFocus((CWnd *)param_1);
    }
    pcVar1 = *(code **)(*(int *)this + 0x1cc);
    guard_check_icall();
    (*pcVar1)();
    uVar3 = (uint)(local_24 == 0);
  }
  FUN_100ca8de();
  return uVar3;
}

