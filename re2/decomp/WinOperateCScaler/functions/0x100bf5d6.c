// rea decompile_all
// name: OnPaneCheck
// address: 0x100bf5d6
// body: available
// range: 0x100bf5d6-0x100bf613 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall CFrameWndEx::OnPaneCheck(unsigned int)
    protected: int __thiscall COleDocIPFrameWndEx::OnPaneCheck(unsigned int)
    protected: int __thiscall COleIPFrameWndEx::OnPaneCheck(unsigned int)
   
   Library: Visual Studio 2015 Release */

bool OnPaneCheck(undefined4 param_1)

{
  CWnd *this;
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  this = (CWnd *)GetPane(param_1);
  if (this != (CWnd *)0x0) {
    uVar3 = 0;
    uVar2 = 0;
    uVar1 = CWnd::GetExStyle(this);
    ShowPane(this,~(uVar1 >> 0x1c) & 1,uVar2,uVar3);
  }
  return this != (CWnd *)0x0;
}

