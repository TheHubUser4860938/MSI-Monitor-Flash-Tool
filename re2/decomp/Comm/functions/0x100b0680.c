// rea decompile_all
// name: AddPane
// address: 0x100b0680
// body: available
// range: 0x100b0680-0x100b06ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall CFrameWndEx::AddPane(class CBasePane *,int)
    public: int __thiscall CMDIFrameWndEx::AddPane(class CBasePane *,int)
   
   Library: Visual Studio 2015 Release */

void AddPane(CBasePane *param_1,int param_2)

{
  code *pcVar1;
  CObject *pCVar2;
  int iVar3;
  int in_ECX;
  
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonBar_1019ff44,(CObject *)param_1);
  if (pCVar2 != (CObject *)0x0) {
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x340);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) {
      *(CObject **)(in_ECX + 0x230) = pCVar2;
    }
  }
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonStatusBar_1019f38c,
                              (CObject *)param_1);
  if (pCVar2 != (CObject *)0x0) {
    *(CObject **)(in_ECX + 0x234) = pCVar2;
  }
  CDockingManager::AddPane((CDockingManager *)(in_ECX + 0x238),param_1,param_2,0,0);
  return;
}

