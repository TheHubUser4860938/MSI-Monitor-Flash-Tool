// rea decompile_all
// name: CMFCPopupMenuBar::OnDragOver
// address: 0x100f008a
// body: available
// range: 0x100f008a-0x100f00f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual unsigned long __thiscall CMFCPopupMenuBar::OnDragOver(class COleDataObject
   *,unsigned long,class CPoint)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCPopupMenuBar::OnDragOver
          (CMFCPopupMenuBar *this,undefined4 param_1,uint param_2,undefined4 param_4,
          undefined4 param_5)

{
  HWND pHVar1;
  CWnd *pCVar2;
  CObject *this_00;
  CMFCToolBar *pCVar3;
  ulong uVar4;
  
  if ((param_2 & 8) == 0) {
    pHVar1 = GetParent(*(HWND *)(this + 0x20));
    pCVar2 = CWnd::FromHandle(pHVar1);
    this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10205bec,(CObject *)pCVar2);
    if (this_00 != (CObject *)0x0) {
      pCVar3 = CMFCPopupMenu::GetParentToolBar((CMFCPopupMenu *)this_00);
      if (((pCVar3 != (CMFCToolBar *)0x0) && (*(int *)(this_00 + 0x158) != 0)) &&
         (*(int *)(this_00 + 0x158) == *(int *)(pCVar3 + 0xd0c))) {
        return 0;
      }
    }
  }
  uVar4 = CMFCToolBar::OnDragOver((CMFCToolBar *)this,param_1,param_2,param_4,param_5);
  return uVar4;
}

