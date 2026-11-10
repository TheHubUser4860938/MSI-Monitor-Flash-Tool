// rea decompile_all
// name: CMFCButton::OnTimer
// address: 0x50da35
// body: available
// range: 0x50da35-0x50da97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCButton::OnTimer(unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCButton::OnTimer(CMFCButton *this,uint param_1)

{
  LPARAM lParam;
  HWND pHVar1;
  CWnd *pCVar2;
  uint uVar3;
  
  if (((param_1 == 0xec0d) && (*(int *)(this + 0xac) != 0)) && (*(int *)(this + 0xb4) != 0)) {
    pHVar1 = GetParent(*(HWND *)(this + 0x20));
    pCVar2 = CWnd::FromHandle(pHVar1);
    if (pCVar2 != (CWnd *)0x0) {
      lParam = *(LPARAM *)(this + 0x20);
      uVar3 = CWnd::GetDlgCtrlID((CWnd *)this);
      SendMessageW(*(HWND *)(pCVar2 + 0x20),0x111,uVar3 & 0xffff,lParam);
    }
  }
  FUN_0042ec70();
  return;
}

