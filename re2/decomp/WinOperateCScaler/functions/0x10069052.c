// rea decompile_all
// name: CMFCToolBar::Deactivate
// address: 0x10069052
// body: available
// range: 0x10069052-0x100690b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBar::Deactivate(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBar::Deactivate(CMFCToolBar *this)

{
  int iVar1;
  code *pcVar2;
  CWnd *pCVar3;
  
  iVar1 = *(int *)(this + 0xbf0);
  if ((-1 < iVar1) && (iVar1 < *(int *)(this + 0xc48))) {
    *(undefined4 *)(this + 0xbf8) = 0xffffffff;
    *(undefined4 *)(this + 0xbf0) = 0xffffffff;
    InvalidateButton(this,iVar1);
    UpdateWindow(*(HWND *)(this + 0x20));
    pCVar3 = CWnd::GetOwner((CWnd *)this);
    SendMessageW(*(HWND *)(pCVar3 + 0x20),0x362,0xe001,0);
  }
  pcVar2 = *(code **)(*(int *)this + 0x364);
  guard_check_icall();
  (*pcVar2)();
  return;
}

