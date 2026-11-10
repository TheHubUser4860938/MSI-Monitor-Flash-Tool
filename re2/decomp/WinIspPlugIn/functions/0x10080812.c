// rea decompile_all
// name: CBasePane::OnPaneContextMenu
// address: 0x10080812
// body: available
// range: 0x10080812-0x1008086f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CBasePane::OnPaneContextMenu(class CWnd *,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CBasePane::OnPaneContextMenu(CBasePane *this,int param_1,undefined4 param_3,undefined4 param_4)

{
  LRESULT LVar1;
  CFrameWnd *pCVar2;
  CDockingManager *pCVar3;
  WPARAM wParam;
  
  if (this == (CBasePane *)0x0) {
    wParam = 0;
  }
  else {
    wParam = *(WPARAM *)(this + 0x20);
  }
  LVar1 = SendMessageW(*(HWND *)(param_1 + 0x20),DAT_10245cdc,wParam,
                       CONCAT22((undefined2)param_4,(undefined2)param_3));
  if (LVar1 != 0) {
    pCVar2 = CWnd::GetParentFrame((CWnd *)this);
    pCVar3 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_1023d944,(CWnd *)pCVar2);
    if (pCVar3 != (CDockingManager *)0x0) {
      CDockingManager::OnPaneContextMenu(pCVar3,param_3,param_4);
    }
  }
  return;
}

