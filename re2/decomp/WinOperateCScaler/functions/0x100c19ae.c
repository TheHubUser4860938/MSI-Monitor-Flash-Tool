// rea decompile_all
// name: CMDIChildWndEx::OnNcPaint
// address: 0x100c19ae
// body: available
// range: 0x100c19ae-0x100c1a0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c1a05 to 0x100283ad FUN_100283ad (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMDIChildWndEx::OnNcPaint(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMDIChildWndEx::OnNcPaint(CMDIChildWndEx *this)

{
  code *pcVar1;
  BOOL BVar2;
  CMFCVisualManager *pCVar3;
  int iVar4;
  
  if ((*(int *)(this + 0x448) == 0) || (*(int *)(*(int *)(this + 0x448) + 0x2f88) == 0)) {
    BVar2 = IsZoomed(*(HWND *)(this + 0x20));
    if (BVar2 == 0) {
      pCVar3 = CMFCVisualManager::GetInstance();
      pcVar1 = *(code **)(*(int *)pCVar3 + 500);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      if (iVar4 != 0) {
        iVar4 = CFrameImpl::OnNcPaint((CFrameImpl *)(this + 0x150));
        if (iVar4 != 0) {
          return;
        }
      }
    }
  }
  FUN_100283ad();
  return;
}

