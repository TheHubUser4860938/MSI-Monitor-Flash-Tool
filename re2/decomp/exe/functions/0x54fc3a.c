// rea decompile_all
// name: CMFCTasksPane::OnCancel
// address: 0x54fc3a
// body: available
// range: 0x54fc3a-0x54fcf0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x54fce9 to 0x4348df CWnd::SetFocus (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCTasksPane::OnCancel(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCTasksPane::OnCancel(CMFCTasksPane *this)

{
  code *pcVar1;
  int iVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  BOOL BVar5;
  CWnd *pCVar6;
  CFrameWnd *this_00;
  
  pcVar1 = *(code **)(*(int *)this + 0x3c4);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    return;
  }
  pHVar3 = GetFocus();
  pCVar4 = CWnd::FromHandle(pHVar3);
  if ((pCVar4 != (CWnd *)0x0) &&
     (BVar5 = IsChild(*(HWND *)(this + 0x20),*(HWND *)(pCVar4 + 0x20)), BVar5 != 0)) {
    while (pCVar4 != (CWnd *)this) {
      pHVar3 = GetParent(*(HWND *)(pCVar4 + 0x20));
      pCVar6 = CWnd::FromHandle(pHVar3);
      if (pCVar6 == (CWnd *)this) {
        iVar2 = FUN_0042f0a4();
        SendMessageW(*(HWND *)(pCVar4 + 0x20),0x111,*(WPARAM *)(iVar2 + 8),*(LPARAM *)(iVar2 + 0xc))
        ;
        break;
      }
      pHVar3 = GetParent(*(HWND *)(pCVar4 + 0x20));
      pCVar4 = CWnd::FromHandle(pHVar3);
    }
  }
  this_00 = DAT_0061620c;
  if (DAT_0061620c == (CFrameWnd *)0x0) {
    this_00 = CWnd::GetTopLevelFrame((CWnd *)this);
    pHVar3 = (HWND)0x0;
    if (this_00 == (CFrameWnd *)0x0) goto LAB_0054fcda;
  }
  pHVar3 = *(HWND *)(this_00 + 0x20);
LAB_0054fcda:
  BVar5 = IsWindow(pHVar3);
  if (BVar5 == 0) {
    return;
  }
  CWnd::SetFocus((CWnd *)this_00);
  return;
}

