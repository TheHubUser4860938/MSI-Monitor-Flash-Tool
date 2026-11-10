// rea decompile_all
// name: CWnd::GetParentFrame
// address: 0x10028a06
// body: available
// range: 0x10028a06-0x10028a4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CFrameWnd * __thiscall CWnd::GetParentFrame(void)const 
   
   Library: Visual Studio 2015 Release */

CFrameWnd * __thiscall CWnd::GetParentFrame(CWnd *this)

{
  code *pcVar1;
  int iVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  
  if ((this != (CWnd *)0x0) && (*(int *)(this + 0x20) != 0)) {
    pHVar3 = *(HWND *)(this + 0x20);
    while( true ) {
      pHVar3 = GetParent(pHVar3);
      pCVar4 = FromHandle(pHVar3);
      if (pCVar4 == (CWnd *)0x0) break;
      pcVar1 = *(code **)(*(int *)pCVar4 + 0x150);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      if (iVar2 != 0) {
        return (CFrameWnd *)pCVar4;
      }
      pHVar3 = *(HWND *)(pCVar4 + 0x20);
    }
  }
  return (CFrameWnd *)0x0;
}

