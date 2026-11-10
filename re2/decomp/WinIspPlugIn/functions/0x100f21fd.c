// rea decompile_all
// name: CMFCPopupMenuBar::SetInCommand
// address: 0x100f21fd
// body: available
// range: 0x100f21fd-0x100f226b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPopupMenuBar::SetInCommand(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCPopupMenuBar::SetInCommand(CMFCPopupMenuBar *this,int param_1)

{
  code *pcVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  CObject *this_00;
  CMFCPopupMenu *this_01;
  CMFCPopupMenuBar *this_02;
  
  *(int *)(this + 0xd6c) = param_1;
  pHVar2 = GetParent(*(HWND *)(this + 0x20));
  pCVar3 = CWnd::FromHandle(pHVar2);
  this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_1023d77c,(CObject *)pCVar3);
  if (this_00 != (CObject *)0x0) {
    for (this_01 = CMFCPopupMenu::GetParentPopupMenu((CMFCPopupMenu *)this_00);
        this_01 != (CMFCPopupMenu *)0x0; this_01 = CMFCPopupMenu::GetParentPopupMenu(this_01)) {
      pcVar1 = *(code **)(*(int *)this_01 + 0x1c8);
      guard_check_icall();
      this_02 = (CMFCPopupMenuBar *)(*pcVar1)();
      if (this_02 != (CMFCPopupMenuBar *)0x0) {
        SetInCommand(this_02,param_1);
      }
    }
  }
  return;
}

