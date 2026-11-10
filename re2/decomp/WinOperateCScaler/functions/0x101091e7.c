// rea decompile_all
// name: CMFCOutlookBarTabCtrl::IsMode2003
// address: 0x101091e7
// body: available
// range: 0x101091e7-0x10109214 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CMFCOutlookBarTabCtrl::IsMode2003(void)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCOutlookBarTabCtrl::IsMode2003(CMFCOutlookBarTabCtrl *this)

{
  HWND pHVar1;
  CWnd *pCVar2;
  CObject *pCVar3;
  int iVar4;
  
  pHVar1 = GetParent(*(HWND *)(this + 0x20));
  pCVar2 = CWnd::FromHandle(pHVar1);
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCOutlookBar_10201670,(CObject *)pCVar2);
  iVar4 = 0;
  if ((pCVar3 != (CObject *)0x0) && (*(int *)(pCVar3 + 0x3a4) != 0)) {
    iVar4 = 1;
  }
  return iVar4;
}

