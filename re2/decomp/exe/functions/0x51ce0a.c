// rea decompile_all
// name: CMFCToolBarsMenuPropertyPage::OnDestroy
// address: 0x51ce0a
// body: available
// range: 0x51ce0a-0x51cf11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x51cf0d to 0x42fd39 CWnd::OnDestroy (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarsMenuPropertyPage::OnDestroy(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBarsMenuPropertyPage::OnDestroy(CMFCToolBarsMenuPropertyPage *this)

{
  code *pcVar1;
  LRESULT LVar2;
  int iVar3;
  
  FUN_00432070(1);
  LVar2 = SendMessageW(*(HWND *)(this + 0x460),0x146,0,0);
  DAT_00616b28 = 999;
  if (*(int *)(this + 0x5cc) != LVar2 + -1) {
    DAT_00616b28 = *(int *)(this + 0x5cc);
  }
  if (*(int *)(this + 0x5d4) != 0) {
    *(undefined4 *)(*(int *)(this + 0x5d4) + 0xd88) = 0;
    if (*(int *)(this + 0x5e4) != 0) {
      pcVar1 = *(code **)(**(int **)(this + 0x5d4) + 0x3b0);
      guard_check_icall(0xffffffff);
      (*pcVar1)();
      FUN_004b1610(*(undefined4 *)(this + 0x5e4),*(undefined4 *)(this + 0x5d4));
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
  DAT_0060c72c = *(undefined4 *)(this + 0x5d0);
  CWnd::OnDestroy((CWnd *)this);
  return;
}

