// rea decompile_all
// name: CMFCToolBarsMenuPropertyPage::OnDestroy
// address: 0x10139810
// body: available
// range: 0x10139810-0x10139917 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10139913 to 0x10051a4e CWnd::OnDestroy (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarsMenuPropertyPage::OnDestroy(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBarsMenuPropertyPage::OnDestroy(CMFCToolBarsMenuPropertyPage *this)

{
  code *pcVar1;
  LRESULT LVar2;
  int iVar3;
  
  FUN_10053dc1(1);
  LVar2 = SendMessageW(*(HWND *)(this + 0x460),0x146,0,0);
  DAT_1020f904 = 999;
  if (*(int *)(this + 0x5cc) != LVar2 + -1) {
    DAT_1020f904 = *(int *)(this + 0x5cc);
  }
  if (*(int *)(this + 0x5d4) != 0) {
    *(undefined4 *)(*(int *)(this + 0x5d4) + 0xd88) = 0;
    if (*(int *)(this + 0x5e4) != 0) {
      pcVar1 = *(code **)(**(int **)(this + 0x5d4) + 0x3b0);
      guard_check_icall(0xffffffff);
      (*pcVar1)();
      FUN_100c79a2(*(undefined4 *)(this + 0x5e4),*(undefined4 *)(this + 0x5d4));
    }
    if (*(int *)(this + 0x5e0) != 0) {
      pcVar1 = *(code **)(**(int **)(this + 0x5d4) + 0x434);
      guard_check_icall(*(int *)(this + 0x5e0),0,0);
      (*pcVar1)();
    }
  }
  if (*(int **)(this + 0x5d8) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x5d8) + 0x1c8);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    SendMessageW(*(HWND *)(iVar3 + 0x20),0x1f,0,0);
    SaveMenu(this);
    SendMessageW(*(HWND *)(*(int *)(this + 0x5d8) + 0x20),0x10,0,0);
  }
  DAT_10205f44 = *(undefined4 *)(this + 0x5d0);
  CWnd::OnDestroy((CWnd *)this);
  return;
}

