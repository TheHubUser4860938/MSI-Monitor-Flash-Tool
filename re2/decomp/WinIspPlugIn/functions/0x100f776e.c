// rea decompile_all
// name: CMultiPaneFrameWnd::AddRecentPane
// address: 0x100f776e
// body: available
// range: 0x100f776e-0x100f791a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMultiPaneFrameWnd::AddRecentPane(class CDockablePane *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMultiPaneFrameWnd::AddRecentPane(CMultiPaneFrameWnd *this,CDockablePane *param_1)

{
  CDockablePane *pCVar1;
  CWnd *pCVar2;
  int iVar3;
  CMultiPaneFrameWnd *pCVar4;
  code *pcVar5;
  CDockablePane *pCVar6;
  CPaneContainer *local_c;
  CMultiPaneFrameWnd *local_8;
  
  local_c = (CPaneContainer *)this;
  local_8 = this;
  local_8 = (CMultiPaneFrameWnd *)
            CRecentDockSiteInfo::GetRecentPaneContainer((CRecentDockSiteInfo *)(param_1 + 0x1e4),0);
  local_c = CRecentDockSiteInfo::GetRecentTabContainer((CRecentDockSiteInfo *)(param_1 + 0x1e4),0);
  if (local_8 == (CMultiPaneFrameWnd *)0x0) {
    if (local_c == (CPaneContainer *)0x0) {
      return 0;
    }
    CWnd::SetParent((CWnd *)param_1,(CWnd *)this);
    CPaneFrameWnd::AddRemovePaneFromGlobalList((CBasePane *)param_1,1);
    iVar3 = CRecentDockSiteInfo::IsRecentLeftPane((CRecentDockSiteInfo *)(param_1 + 0x1e4),0);
    if (iVar3 == 0) {
      local_8 = *(CMultiPaneFrameWnd **)(local_c + 8);
    }
    else {
      local_8 = *(CMultiPaneFrameWnd **)(local_c + 4);
    }
    if (local_8 != (CMultiPaneFrameWnd *)0x0) {
      local_c = (CPaneContainer *)0x0;
      pcVar5 = *(code **)(*(int *)param_1 + 0x34c);
      guard_check_icall(local_8,2,1,&local_c);
      (*pcVar5)();
      pcVar5 = *(code **)(*(int *)local_8 + 0x224);
      guard_check_icall(1,0,1);
      (*pcVar5)();
      pcVar5 = *(code **)(*(int *)this + 0x1cc);
      guard_check_icall();
      (*pcVar5)();
      goto LAB_100f78f9;
    }
    pcVar5 = *(code **)(*(int *)(this + 400) + 0x20);
    guard_check_icall(param_1,local_c);
    pCVar4 = (CMultiPaneFrameWnd *)(*pcVar5)();
    pcVar5 = *(code **)(*(int *)this + 0x1e8);
  }
  else {
    CWnd::SetParent((CWnd *)param_1,(CWnd *)this);
    CPaneFrameWnd::AddRemovePaneFromGlobalList((CBasePane *)param_1,1);
    pcVar5 = *(code **)(*(int *)(this + 400) + 0x20);
    pCVar6 = param_1;
    pCVar4 = local_8;
    guard_check_icall(param_1,local_8);
    pCVar1 = (CDockablePane *)(*pcVar5)();
    local_8 = (CMultiPaneFrameWnd *)pCVar1;
    pCVar2 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0xd4));
    if ((pCVar1 != (CDockablePane *)0x0) && (pCVar2 == (CWnd *)0x0)) {
      *(int *)(this + 0xd4) = *(int *)(pCVar1 + 0x20);
    }
    pcVar5 = *(code **)(*(int *)(this + 400) + 0x54);
    guard_check_icall(pCVar6,pCVar4);
    iVar3 = (*pcVar5)();
    pCVar4 = local_8;
    if ((iVar3 == 1) && (param_1 == (CDockablePane *)local_8)) {
      CWnd::MoveWindow((CWnd *)this,(tagRECT *)(this + 0xd8),1);
    }
    if (pCVar4 == (CMultiPaneFrameWnd *)0x0) goto LAB_100f78f9;
    pcVar5 = *(code **)(*(int *)this + 0x1e8);
  }
  guard_check_icall(pCVar4,1);
  (*pcVar5)();
LAB_100f78f9:
  pcVar5 = *(code **)(*(int *)this + 500);
  guard_check_icall();
  (*pcVar5)();
  return 1;
}

