// rea decompile_all
// name: CTabbedPane::GetTabArea
// address: 0x100ff176
// body: available
// range: 0x100ff176-0x100ff217 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CTabbedPane::GetTabArea(class CRect &,class CRect &)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall CTabbedPane::GetTabArea(CTabbedPane *this,CRect *param_1,CRect *param_2)

{
  code *pcVar1;
  int iVar2;
  CObject *pCVar3;
  
  SetRectEmpty((LPRECT)param_1);
  SetRectEmpty((LPRECT)param_2);
  pcVar1 = *(code **)(*(int *)this + 0x330);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_101e1714,
                                *(CObject **)(this + 0x370));
    pcVar1 = *(code **)(*(int *)pCVar3 + 0x180);
    guard_check_icall(param_1);
    (*pcVar1)();
    param_2 = param_1;
  }
  else {
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_101e1714,
                                *(CObject **)(this + 0x370));
    pcVar1 = *(code **)(*(int *)pCVar3 + 0x180);
    guard_check_icall(param_2);
    (*pcVar1)();
  }
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_101e1714,
                              *(CObject **)(this + 0x370));
  CWnd::ClientToScreen((CWnd *)pCVar3,(tagRECT *)param_2);
  return;
}

