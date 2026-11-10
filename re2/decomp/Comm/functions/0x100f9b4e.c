// rea decompile_all
// name: CMDIClientAreaWnd::GetMDITabsContextMenuAllowedItems
// address: 0x100f9b4e
// body: available
// range: 0x100f9b4e-0x100f9c16 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: unsigned long __thiscall CMDIClientAreaWnd::GetMDITabsContextMenuAllowedItems(void)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall CMDIClientAreaWnd::GetMDITabsContextMenuAllowedItems(CMDIClientAreaWnd *this)

{
  code *pcVar1;
  CMFCTabCtrl *pCVar2;
  int iVar3;
  CObject *pCVar4;
  CFrameWnd *pCVar5;
  CObject *pCVar6;
  uint uVar7;
  
  pCVar2 = FindActiveTabWndByActiveChild(this);
  uVar7 = 0;
  if (pCVar2 != (CMFCTabCtrl *)0x0) {
    uVar7 = 0;
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x1ac);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (1 < iVar3) {
      if (*(int *)(this + 0x2b04) < 2) {
        uVar7 = 3;
      }
      else {
        uVar7 = (*(int *)(this + 0x2b90) != 1) + 1;
      }
    }
    if (pCVar2 != *(CMFCTabCtrl **)(*(int *)(this + 0x2afc) + 8)) {
      uVar7 = uVar7 | 4;
    }
    if (pCVar2 != *(CMFCTabCtrl **)(*(int *)(this + 0x2b00) + 8)) {
      uVar7 = uVar7 | 8;
    }
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x210);
    guard_check_icall();
    pCVar4 = (CObject *)(*pcVar1)();
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_10193444,pCVar4);
    pCVar5 = CWnd::GetParentFrame((CWnd *)this);
    pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10192540,(CObject *)pCVar5);
    if ((((pCVar4 != (CObject *)0x0) && (*(int *)(pCVar4 + 0x444) != 0)) &&
        (pCVar6 != (CObject *)0x0)) && (*(int *)(pCVar6 + 0x420) == 0)) {
      uVar7 = uVar7 | 0x10;
    }
  }
  return uVar7;
}

