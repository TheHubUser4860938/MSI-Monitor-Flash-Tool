// rea decompile_all
// name: CBasePane::GetParentTabbedPane
// address: 0x10048c42
// body: available
// range: 0x10048c42-0x10048c9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CBaseTabbedPane * __thiscall CBasePane::GetParentTabbedPane(void)const 
   
   Library: Visual Studio 2015 Release */

CBaseTabbedPane * __thiscall CBasePane::GetParentTabbedPane(CBasePane *this)

{
  code *pcVar1;
  int iVar2;
  CMFCBaseTabCtrl *pCVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  CObject *pCVar6;
  HWND__ *local_8;
  
  local_8 = (HWND__ *)0x0;
  pcVar1 = *(code **)(*(int *)this + 0x16c);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (((iVar2 != 0) && (pCVar3 = GetParentTabWnd(this,&local_8), local_8 != (HWND__ *)0x0)) &&
     (pCVar3 != (CMFCBaseTabCtrl *)0x0)) {
    pHVar4 = GetParent(*(HWND *)(pCVar3 + 0x20));
    pCVar5 = CWnd::FromHandle(pHVar4);
    pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_10194790,(CObject *)pCVar5);
    return (CBaseTabbedPane *)pCVar6;
  }
  return (CBaseTabbedPane *)0x0;
}

