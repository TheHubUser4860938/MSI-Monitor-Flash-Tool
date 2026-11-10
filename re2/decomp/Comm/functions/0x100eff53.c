// rea decompile_all
// name: CMFCToolBarSystemMenuButton::OnAfterCreatePopupMenu
// address: 0x100eff53
// body: available
// range: 0x100eff53-0x100effd2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarSystemMenuButton::OnAfterCreatePopupMenu(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarSystemMenuButton::OnAfterCreatePopupMenu(CMFCToolBarSystemMenuButton *this)

{
  BOOL BVar1;
  CFrameWnd *pCVar2;
  int iVar3;
  HWND pHVar4;
  CObject *this_00;
  CMDIChildWnd *pCVar5;
  
  if (*(int *)(this + 0x8c) == 0) {
    return;
  }
  BVar1 = IsWindow(*(HWND *)(*(int *)(this + 0x8c) + 0x20));
  if (BVar1 != 0) {
    pCVar2 = DAT_101dc4c4;
    if (((DAT_101dc4c4 != (CFrameWnd *)0x0) ||
        (pCVar2 = CWnd::GetTopLevelFrame(*(CWnd **)(this + 0x8c)), pCVar2 != (CFrameWnd *)0x0)) &&
       (iVar3 = FUN_10019d4f(&PTR_s_CMiniDockFrameWnd_1019ccbc), iVar3 != 0)) {
      pHVar4 = GetParent(*(HWND *)(pCVar2 + 0x20));
      pCVar2 = (CFrameWnd *)CWnd::FromHandle(pHVar4);
    }
    this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWnd_1019dfb4,(CObject *)pCVar2);
    if (this_00 != (CObject *)0x0) {
      pCVar5 = CMDIFrameWnd::MDIGetActive((CMDIFrameWnd *)this_00,(int *)0x0);
      *(CMDIChildWnd **)(*(int *)(this + 0x8c) + 0x134) = pCVar5;
    }
    return;
  }
  return;
}

