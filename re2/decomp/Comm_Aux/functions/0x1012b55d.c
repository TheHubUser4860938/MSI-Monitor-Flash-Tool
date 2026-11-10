// rea decompile_all
// name: CDockablePane::OnDestroy
// address: 0x1012b55d
// body: available
// range: 0x1012b55d-0x1012b62a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1012b626 to 0x1008185b FUN_1008185b (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CDockablePane::OnDestroy(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockablePane::OnDestroy(CDockablePane *this)

{
  code *pcVar1;
  int iVar2;
  CWnd *pCVar3;
  CDockingManager *this_00;
  HWND pHVar4;
  CObject *pCVar5;
  
  RemoveCaptionButtons(this);
  pcVar1 = *(code **)(*(int *)this + 0x228);
  guard_check_icall(0);
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    pcVar1 = *(code **)(*(int *)this + 0x240);
    guard_check_icall(1);
    (*pcVar1)();
  }
  else {
    pcVar1 = *(code **)(*(int *)this + 0x308);
    guard_check_icall(0,0);
    (*pcVar1)();
  }
  pcVar1 = *(code **)(*(int *)this + 0x174);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    pcVar1 = *(code **)(*(int *)this + 0x19c);
    guard_check_icall();
    pCVar3 = (CWnd *)(*pcVar1)();
    this_00 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10205db4,pCVar3);
    CDockingManager::RemoveHiddenMDITabbedBar(this_00,this);
    pHVar4 = GetParent(*(HWND *)(this + 0x20));
    pCVar3 = CWnd::FromHandle(pHVar4);
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_101c65bc,(CObject *)pCVar3);
    if (pCVar5 != (CObject *)0x0) {
      PostMessageW(*(HWND *)(pCVar5 + 0x20),0x10,0,0);
    }
  }
  CTooltipManager::DeleteToolTip((CToolTipCtrl **)(this + 0x34c));
  FUN_1008185b();
  return;
}

