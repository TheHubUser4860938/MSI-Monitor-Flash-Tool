// rea decompile_all
// name: CMDIFrameWndEx::OnWindowPosChanged
// address: 0x498267
// body: available
// range: 0x498267-0x4982f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMDIFrameWndEx::OnWindowPosChanged(struct tagWINDOWPOS *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMDIFrameWndEx::OnWindowPosChanged(CMDIFrameWndEx *this,tagWINDOWPOS *param_1)

{
  CMDIChildWnd *pCVar1;
  int iVar2;
  CMDIFrameWndEx *local_8;
  
  local_8 = this;
  if (((byte)param_1[0x18] & 0x20) != 0) {
    CFrameImpl::OnWindowPosChanging((CFrameImpl *)(this + 0x350),param_1);
  }
  FUN_0042ec70();
  if (*(int *)(this + 0x3fc) != 0) {
    pCVar1 = CMDIFrameWnd::MDIGetActive((CMDIFrameWnd *)this,(int *)&local_8);
    if ((pCVar1 == (CMDIChildWnd *)0x0) || (local_8 == (CMDIFrameWndEx *)0x0)) {
      pCVar1 = (CMDIChildWnd *)0x0;
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
    CMFCMenuBar::SetMaximizeMode(*(CMFCMenuBar **)(this + 0x3fc),iVar2,(CWnd *)pCVar1,1);
  }
  if (*(int *)(this + 0x44c) != 0) {
    pCVar1 = CMDIFrameWnd::MDIGetActive((CMDIFrameWnd *)this,(int *)&local_8);
    if ((pCVar1 == (CMDIChildWnd *)0x0) || (local_8 == (CMDIFrameWndEx *)0x0)) {
      pCVar1 = (CMDIChildWnd *)0x0;
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
    CMFCRibbonBar::SetMaximizeMode(*(CMFCRibbonBar **)(this + 0x44c),iVar2,(CWnd *)pCVar1);
  }
  return;
}

