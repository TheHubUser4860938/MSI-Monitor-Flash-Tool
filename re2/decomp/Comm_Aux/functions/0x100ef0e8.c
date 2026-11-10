// rea decompile_all
// name: CMFCPopupMenuBar::GetGutterWidth
// address: 0x100ef0e8
// body: available
// range: 0x100ef0e8-0x100ef171 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CMFCPopupMenuBar::GetGutterWidth(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCPopupMenuBar::GetGutterWidth(CMFCPopupMenuBar *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  CObject *pCVar6;
  CMFCVisualManager *pCVar7;
  int *piVar8;
  CMFCPopupMenuBar *local_c;
  CMFCPopupMenuBar *pCStack_8;
  
  bVar2 = false;
  if (*(int *)(this + 0xd40) == 0) {
    local_c = this;
    pCStack_8 = this;
    pHVar4 = GetParent(*(HWND *)(this + 0x20));
    pCVar5 = CWnd::FromHandle(pHVar4);
    if (((pCVar5 != (CWnd *)0x0) &&
        (iVar3 = FUN_1004e58b(&PTR_s_CMFCPopupMenu_10205bec), iVar3 != 0)) &&
       (pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10205bec,(CObject *)pCVar5
                                   ), *(int *)(pCVar6 + 0x1168) == 0)) {
      bVar2 = true;
    }
    pCVar7 = CMFCVisualManager::GetInstance();
    pcVar1 = *(code **)(*(int *)pCVar7 + 0x2dc);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    piVar8 = (int *)FUN_10094c92(&local_c);
    iVar3 = *piVar8 + iVar3 * 2 + 2;
    if (bVar2) {
      iVar3 = iVar3 * 2;
    }
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}

