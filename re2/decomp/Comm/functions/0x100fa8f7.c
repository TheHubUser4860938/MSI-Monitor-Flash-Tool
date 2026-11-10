// rea decompile_all
// name: CMDIClientAreaWnd::OnMDIRefreshMenu
// address: 0x100fa8f7
// body: available
// range: 0x100fa8f7-0x100fa969 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: struct HMENU__ * __thiscall CMDIClientAreaWnd::OnMDIRefreshMenu(void)
   
   Library: Visual Studio 2015 Release */

HMENU__ * __thiscall CMDIClientAreaWnd::OnMDIRefreshMenu(CMDIClientAreaWnd *this)

{
  code *pcVar1;
  HMENU__ *pHVar2;
  CFrameWnd *pCVar3;
  CObject *this_00;
  undefined4 uVar4;
  CMDIChildWnd *pCVar5;
  
  pHVar2 = (HMENU__ *)FUN_1001d029();
  pCVar3 = CWnd::GetParentFrame((CWnd *)this);
  this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10192540,(CObject *)pCVar3);
  if (this_00 != (CObject *)0x0) {
    if (*(int *)(this_00 + 0x3fc) != 0) {
      pcVar1 = *(code **)(*(int *)this_00 + 0x1c4);
      guard_check_icall(*(undefined4 *)(*(int *)(this_00 + 0x3fc) + 0xd4c));
      uVar4 = (*pcVar1)();
      *(undefined4 *)(this_00 + 300) = uVar4;
    }
    if (*(int *)(this_00 + 0x44c) != 0) {
      pCVar5 = CMDIFrameWnd::MDIGetActive((CMDIFrameWnd *)this_00,(int *)0x0);
      CMFCRibbonBar::SetActiveMDIChild(*(CMFCRibbonBar **)(this_00 + 0x44c),(CWnd *)pCVar5);
    }
  }
  return pHVar2;
}

