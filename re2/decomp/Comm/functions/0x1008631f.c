// rea decompile_all
// name: CFrameWnd::OnDestroy
// address: 0x1008631f
// body: available
// range: 0x1008631f-0x1008637c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10086378 to 0x1001e10e CWnd::OnDestroy (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnDestroy(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CFrameWnd::OnDestroy(CFrameWnd *this)

{
  HMENU hMenu;
  int iVar1;
  HMENU pHVar2;
  AFX_MODULE_STATE *pAVar3;
  
  DestroyDockBars(this);
  if (*(int *)(this + 0x88) != 0) {
    hMenu = *(HMENU *)(this + 0x88);
    pHVar2 = ::GetMenu(*(HWND *)(this + 0x20));
    if (pHVar2 != hMenu) {
      SetMenu(*(HWND *)(this + 0x20),hMenu);
    }
  }
  pAVar3 = AfxGetModuleState();
  iVar1 = *(int *)(pAVar3 + 4);
  if (((iVar1 != 0) && (*(CFrameWnd **)(iVar1 + 0x20) == this)) && (*(int *)(iVar1 + 0x70) == 0)) {
    WinHelpW(*(HWND *)(this + 0x20),(LPCWSTR)0x0,2,0);
  }
  CWnd::OnDestroy((CWnd *)this);
  return;
}

