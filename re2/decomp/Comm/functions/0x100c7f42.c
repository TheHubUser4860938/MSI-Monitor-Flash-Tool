// rea decompile_all
// name: CTabbedPane::FloatTab
// address: 0x100c7f42
// body: available
// range: 0x100c7f42-0x100c7f93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CTabbedPane::FloatTab(class CWnd *,int,enum AFX_DOCK_METHOD,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CTabbedPane::FloatTab
          (CTabbedPane *this,CWnd *param_1,int param_2,AFX_DOCK_METHOD param_3,int param_4)

{
  code *pcVar1;
  CObject *pCVar2;
  int iVar3;
  
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_1018a624,
                              *(CObject **)(this + 0x370));
  pcVar1 = *(code **)(*(int *)pCVar2 + 0x1ac);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 < 2) {
    iVar3 = 0;
  }
  else {
    iVar3 = CBaseTabbedPane::FloatTab((CBaseTabbedPane *)this,param_1,param_2,param_3,param_4);
  }
  return iVar3;
}

