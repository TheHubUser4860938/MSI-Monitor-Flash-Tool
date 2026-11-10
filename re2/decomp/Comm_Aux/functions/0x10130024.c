// rea decompile_all
// name: CMDIClientAreaWnd::MoveWindowToTabGroup
// address: 0x10130024
// body: available
// range: 0x10130024-0x101301a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CMDIClientAreaWnd::MoveWindowToTabGroup(class CMFCTabCtrl *,class
   CMFCTabCtrl *,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMDIClientAreaWnd::MoveWindowToTabGroup
          (CMDIClientAreaWnd *this,CMFCTabCtrl *param_1,CMFCTabCtrl *param_2,int param_3)

{
  code *pcVar1;
  CMDIClientAreaWnd *this_00;
  CObject *pCVar2;
  int iVar3;
  CFrameWnd *pCVar4;
  undefined4 local_24;
  WPARAM local_20;
  LPARAM local_1c;
  CMDIClientAreaWnd *local_18;
  CObject *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x10130030;
  if (param_1 == (CMFCTabCtrl *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = *(WPARAM *)(param_1 + 0x20);
  }
  if (param_2 == (CMFCTabCtrl *)0x0) {
    local_1c = 0;
  }
  else {
    local_1c = *(LPARAM *)(param_2 + 0x20);
  }
  local_18 = this;
  if (param_3 == -1) {
    pcVar1 = *(code **)(*(int *)param_1 + 0x20c);
    guard_check_icall();
    param_3 = (*pcVar1)();
    if (param_3 == -1) {
      return 0;
    }
  }
  pcVar1 = *(code **)(*(int *)param_1 + 0x1b0);
  guard_check_icall(param_3);
  pCVar2 = (CObject *)(*pcVar1)();
  local_14 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_101c65bc,pCVar2);
  if (local_14 == (CObject *)0x0) {
    return 0;
  }
  pcVar1 = *(code **)(*(int *)local_14 + 0x1dc);
  guard_check_icall(&local_24);
  (*pcVar1)();
  local_8 = 0;
  pcVar1 = *(code **)(*(int *)param_1 + 0x198);
  guard_check_icall(param_3,1);
  (*pcVar1)();
  *(CMFCTabCtrl **)(local_14 + 0x128) = param_2;
  pcVar1 = *(code **)(*(int *)param_2 + 0x18c);
  guard_check_icall(local_14,local_24,0xffffffff,1);
  (*pcVar1)();
  pcVar1 = *(code **)(*(int *)param_1 + 0x1ac);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  this_00 = local_18;
  if (iVar3 == 0) {
    RemoveTabGroup(local_18,param_1,1);
    FUN_10132625(1);
    pcVar1 = *(code **)(*(int *)param_2 + 0x184);
    guard_check_icall();
    (*pcVar1)();
  }
  else {
    AdjustMDIChildren(local_18,param_1);
  }
  AdjustMDIChildren(this_00,param_2);
  SetActiveTab(this_00,*(HWND__ **)(local_14 + 0x20));
  pCVar4 = CWnd::GetParentFrame((CWnd *)this_00);
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_101c56b8,(CObject *)pCVar4);
  if (pCVar2 != (CObject *)0x0) {
    SendMessageW(*(HWND *)(pCVar2 + 0x20),DAT_102106d4,local_20,local_1c);
  }
  FUN_10034f00();
  return 1;
}

