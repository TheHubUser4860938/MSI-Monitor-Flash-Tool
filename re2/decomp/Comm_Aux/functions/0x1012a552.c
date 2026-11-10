// rea decompile_all
// name: CDockablePane::DockToFrameWindow
// address: 0x1012a552
// body: available
// range: 0x1012a552-0x1012a81a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CDockablePane::DockToFrameWindow(unsigned long,struct tagRECT
   const *,unsigned long,class CBasePane *,int,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CDockablePane::DockToFrameWindow
          (CDockablePane *this,ulong param_1,tagRECT *param_2,ulong param_3,CBasePane *param_4,
          int param_5,int param_6)

{
  code *pcVar1;
  bool bVar2;
  CFrameWnd *pCVar3;
  BOOL BVar4;
  CWnd *pCVar5;
  CPaneDivider *pCVar6;
  int iVar7;
  CRuntimeClass *pCVar8;
  undefined4 uVar9;
  int local_3c;
  int local_38;
  ulong local_34;
  uint local_30;
  CDockingManager *local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_34 = param_1;
  LockWindowUpdate(*(HWND *)(this + 0x20));
  iVar7 = *(int *)this;
  uVar9 = 0;
  pCVar3 = AFXGetParentFrame((CWnd *)this);
  pcVar1 = *(code **)(iVar7 + 0x308);
  guard_check_icall(pCVar3,uVar9);
  (*pcVar1)();
  if ((*(HWND *)(this + 0x350) != (HWND)0x0) &&
     (BVar4 = IsWindow(*(HWND *)(this + 0x350)), BVar4 != 0)) {
    pcVar1 = *(code **)(*(int *)this + 0x240);
    guard_check_icall(0);
    (*pcVar1)();
  }
  pCVar8 = (CRuntimeClass *)0x0;
  pcVar1 = *(code **)(*(int *)this + 0x19c);
  guard_check_icall();
  pCVar5 = (CWnd *)(*pcVar1)();
  pCVar6 = CreateDefaultPaneDivider(param_1,pCVar5,pCVar8);
  if (pCVar6 == (CPaneDivider *)0x0) {
    CWnd::ShowWindow((CWnd *)this,5);
  }
  else {
    *(undefined4 *)(this + 0x350) = *(undefined4 *)(pCVar6 + 0x20);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_18);
    pcVar1 = *(code **)(*(int *)this + 0x19c);
    guard_check_icall();
    pCVar5 = (CWnd *)(*pcVar1)();
    local_2c = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10205db4,pCVar5);
    local_3c = 0;
    local_38 = 0;
    pcVar1 = *(code **)(*(int *)this + 0x270);
    guard_check_icall(&local_3c);
    (*pcVar1)();
    bVar2 = local_18.right - local_18.left < local_3c;
    if (bVar2) {
      local_18.right = local_18.left + local_3c;
    }
    local_30 = (uint)bVar2;
    if (local_18.bottom - local_18.top < local_38) {
      local_18.bottom = local_18.top + local_38;
      local_30 = 1;
    }
    pcVar1 = *(code **)(*(int *)local_2c + 0x5c);
    guard_check_icall(&local_18,local_34);
    iVar7 = (*pcVar1)();
    if ((iVar7 != 0) || (local_30 != 0)) {
      pcVar1 = *(code **)(*(int *)this + 0x238);
      guard_check_icall(0,0,0,local_18.right - local_18.left,local_18.bottom - local_18.top,0x16,0);
      (*pcVar1)();
    }
    pcVar1 = *(code **)(*(int *)pCVar6 + 0x270);
    guard_check_icall(this);
    (*pcVar1)();
    if (param_6 == 0) {
      CBasePane::AddPane((CBasePane *)this,(CBasePane *)this);
      CBasePane::AddPane((CBasePane *)this,(CBasePane *)pCVar6);
    }
    else {
      CDockingManager::AddPane(local_2c,(CBasePane *)pCVar6,0,0,param_6);
      CDockingManager::AddPane(local_2c,(CBasePane *)this,0,0,param_6);
    }
    pcVar1 = *(code **)(*(int *)this + 0x1e0);
    guard_check_icall(local_34);
    (*pcVar1)();
    iVar7 = *(int *)pCVar6;
    pcVar1 = *(code **)(*(int *)this + 0x194);
    guard_check_icall();
    uVar9 = (*pcVar1)();
    pcVar1 = *(code **)(iVar7 + 0x1e0);
    guard_check_icall(uVar9);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)this + 0x194);
    guard_check_icall();
    uVar9 = (*pcVar1)();
    *(undefined4 *)(this + 0x1f8) = uVar9;
    pcVar1 = *(code **)(*(int *)this + 0x1f0);
    guard_check_icall(1);
    (*pcVar1)();
    if (param_2 != (tagRECT *)0x0) {
      CopyRect(&local_28,param_2);
      pcVar1 = *(code **)(*(int *)this + 0x238);
      guard_check_icall(0,0,0,local_28.right - local_28.left,local_28.bottom - local_28.top,0x36,0);
      (*pcVar1)();
    }
    LockWindowUpdate((HWND)0x0);
    pcVar1 = *(code **)(*(int *)this + 0x268);
    guard_check_icall(0);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)this + 0x2fc);
    guard_check_icall(this,0,0);
    (*pcVar1)();
  }
  iVar7 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar7;
}

