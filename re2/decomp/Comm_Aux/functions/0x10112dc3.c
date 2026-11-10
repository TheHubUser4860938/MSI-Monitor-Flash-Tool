// rea decompile_all
// name: CMFCToolBarMenuButton::SaveBarState
// address: 0x10112dc3
// body: available
// range: 0x10112dc3-0x10112e27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarMenuButton::SaveBarState(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBarMenuButton::SaveBarState(CMFCToolBarMenuButton *this)

{
  code *pcVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  CObject *pCVar4;
  CObject *pCVar5;
  
  if (*(int *)(this + 0x6c) != 0) {
    pHVar2 = GetParent(*(HWND *)(*(int *)(this + 0x6c) + 0x20));
    pCVar3 = CWnd::FromHandle(pHVar2);
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10205bec,(CObject *)pCVar3);
    if (pCVar4 != (CObject *)0x0) {
      pHVar2 = *(HWND *)(pCVar4 + 0x20);
      while( true ) {
        pHVar2 = GetParent(pHVar2);
        pCVar3 = CWnd::FromHandle(pHVar2);
        pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10205bec,(CObject *)pCVar3
                                   );
        if (pCVar5 == (CObject *)0x0) break;
        pHVar2 = *(HWND *)(pCVar5 + 0x20);
        pCVar4 = pCVar5;
      }
      pcVar1 = *(code **)(*(int *)pCVar4 + 0x1e0);
      guard_check_icall();
      (*pcVar1)();
    }
  }
  return;
}

