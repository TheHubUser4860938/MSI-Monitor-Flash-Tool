// rea decompile_all
// name: CWnd::OnDevModeChange
// address: 0x10029517
// body: available
// range: 0x10029517-0x10029562 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CWnd::OnDevModeChange(wchar_t *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CWnd::OnDevModeChange(CWnd *this,wchar_t *param_1)

{
  CWinApp *this_00;
  AFX_MODULE_STATE *pAVar1;
  ulong uVar2;
  int iVar3;
  
  pAVar1 = AfxGetModuleState();
  this_00 = *(CWinApp **)(pAVar1 + 4);
  if ((this_00 != (CWinApp *)0x0) && (*(CWnd **)(this_00 + 0x20) == this)) {
    CWinApp::DevModeChange(this_00,param_1);
  }
  uVar2 = GetExStyle(this);
  if ((uVar2 & 0x40000000) == 0) {
    iVar3 = FUN_100287f1();
    SendMessageToDescendants
              (*(HWND__ **)(this + 0x20),*(uint *)(iVar3 + 4),*(uint *)(iVar3 + 8),
               *(long *)(iVar3 + 0xc),1,1);
  }
  return;
}

