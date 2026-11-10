// rea decompile_all
// name: CRecentDockSiteInfo::StoreDockInfo
// address: 0x100c49d2
// body: available
// range: 0x100c49d2-0x100c4b14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CRecentDockSiteInfo::StoreDockInfo(class CPaneContainer *,class
   CDockablePane *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CRecentDockSiteInfo::StoreDockInfo
          (CRecentDockSiteInfo *this,CPaneContainer *param_1,CDockablePane *param_2)

{
  code *pcVar1;
  CObject *pCVar2;
  CPaneDivider *pCVar3;
  CWnd *pCVar4;
  CWnd *pCVar5;
  CObject *pCVar6;
  undefined4 uVar7;
  CDockablePane *this_00;
  tagRECT *ptVar8;
  
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_101d3b9c,
                              *(CObject **)(this + 0xb0));
  this_00 = param_2;
  if (param_2 == (CDockablePane *)0x0) {
    this_00 = (CDockablePane *)pCVar2;
  }
  pCVar3 = CDockablePane::GetDefaultPaneDivider(this_00);
  pcVar1 = *(code **)(*(int *)pCVar2 + 0x228);
  guard_check_icall(0);
  pCVar4 = (CWnd *)(*pcVar1)();
  if (pCVar4 == (CWnd *)0x0) {
    if (pCVar3 == (CPaneDivider *)0x0) {
      *(undefined4 *)(this + 0x2c) = 0;
      pcVar1 = *(code **)(*(int *)(this + 0x70) + 0xc);
      guard_check_icall(0,pCVar2,0);
      (*pcVar1)();
    }
    else {
      pcVar1 = *(code **)(*(int *)(this + 0x30) + 0xc);
      guard_check_icall(param_1,pCVar2,param_2);
      (*pcVar1)();
      ptVar8 = (tagRECT *)(this + 0x34);
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x19c);
      guard_check_icall();
      pCVar4 = (CWnd *)(*pcVar1)();
      CWnd::ScreenToClient(pCVar4,ptVar8);
      *(undefined4 *)(this + 0x28) = *(undefined4 *)(pCVar3 + 0x20);
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x194);
      guard_check_icall();
      uVar7 = (*pcVar1)();
      *(undefined4 *)(this + 0x14) = uVar7;
    }
  }
  else {
    pCVar5 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0x2c));
    pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101d38dc,(CObject *)pCVar5);
    pcVar1 = *(code **)(*(int *)(this + 0x70) + 0xc);
    *(undefined4 *)(this + 0x2c) = *(undefined4 *)(pCVar4 + 0x20);
    guard_check_icall(param_1,pCVar2,param_2);
    (*pcVar1)();
    CWnd::ScreenToClient(pCVar4,(tagRECT *)(this + 0x74));
    GetWindowRect(*(HWND *)(pCVar4 + 0x20),(LPRECT)(this + 4));
    if (pCVar6 != (CObject *)0x0) {
      PostMessageW(*(HWND *)(pCVar6 + 0x20),DAT_101dc798,0,0);
    }
  }
  return;
}

