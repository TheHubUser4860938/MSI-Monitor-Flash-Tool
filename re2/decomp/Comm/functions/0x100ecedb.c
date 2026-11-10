// rea decompile_all
// name: CMFCCustomizeButton::OnChangeParentWnd
// address: 0x100ecedb
// body: available
// range: 0x100ecedb-0x100ecf39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCCustomizeButton::OnChangeParentWnd(class CWnd *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCCustomizeButton::OnChangeParentWnd(CMFCCustomizeButton *this,CWnd *param_1)

{
  CObject *pCVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  
  CMFCToolBarButton::OnChangeParentWnd((CMFCToolBarButton *)this,param_1);
  pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_101d3640,(CObject *)param_1);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(CObject **)(this + 0xf8) = pCVar1;
  *(CWnd **)(this + 0x6c) = param_1;
  pHVar2 = GetParent(*(HWND *)(param_1 + 0x20));
  pCVar3 = CWnd::FromHandle(pHVar2);
  pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CReBar_101973e0,(CObject *)pCVar3);
  *(uint *)(this + 0x108) = (uint)(pCVar1 != (CObject *)0x0);
  return;
}

