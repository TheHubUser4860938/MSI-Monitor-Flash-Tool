// rea decompile_all
// name: CMFCToolBarsListPropertyPage::OnDblClkToolBarList
// address: 0x5460f5
// body: available
// range: 0x5460f5-0x546183 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarsListPropertyPage::OnDblClkToolBarList(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarsListPropertyPage::OnDblClkToolBarList(CMFCToolBarsListPropertyPage *this)

{
  code *pcVar1;
  WPARAM wParam;
  int *piVar2;
  int iVar3;
  
  wParam = SendMessageW(*(HWND *)(this + 0x360),0x188,0,0);
  if (wParam != 0xffffffff) {
    piVar2 = (int *)SendMessageW(*(HWND *)(this + 0x360),0x199,wParam,0);
    *(int **)(this + 0x3e4) = piVar2;
    pcVar1 = *(code **)(*piVar2 + 0x1c8);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) {
      MessageBeep(0xffffffff);
    }
    else {
      iVar3 = CCheckListBox::GetCheck((CCheckListBox *)(this + 0x340),wParam);
      CCheckListBox::SetCheck((CCheckListBox *)(this + 0x340),wParam,(uint)(iVar3 == 0));
    }
  }
  OnSelchangeToolbarList(this);
  return;
}

