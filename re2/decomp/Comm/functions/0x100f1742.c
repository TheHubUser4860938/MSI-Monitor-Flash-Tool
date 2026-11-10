// rea decompile_all
// name: CMFCDropDownToolBar::OnSendCommand
// address: 0x100f1742
// body: available
// range: 0x100f1742-0x100f17c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCDropDownToolBar::OnSendCommand(class CMFCToolBarButton const
   *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCDropDownToolBar::OnSendCommand(CMFCDropDownToolBar *this,CMFCToolBarButton *param_1)

{
  WPARAM wParam;
  code *pcVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  CFrameWnd *pCVar4;
  int iVar5;
  
  if ((((*(uint *)(param_1 + 0x24) & 0x40000) == 0) && (*(int *)(param_1 + 0x20) != 0)) &&
     (*(int *)(param_1 + 0x20) != -1)) {
    pHVar2 = GetParent(*(HWND *)(this + 0x20));
    pCVar3 = CWnd::FromHandle(pHVar2);
    CMFCDropDownToolbarButton::SetDefaultCommand
              (*(CMFCDropDownToolbarButton **)(pCVar3 + 0x134),*(uint *)(param_1 + 0x20));
    pCVar4 = CWnd::GetParentFrame((CWnd *)this);
    wParam = *(WPARAM *)(param_1 + 0x20);
    pCVar3 = CWnd::GetOwner((CWnd *)this);
    PostMessageW(*(HWND *)(pCVar3 + 0x20),0x111,wParam,0);
    pcVar1 = *(code **)(*(int *)pCVar4 + 0x60);
    guard_check_icall();
    (*pcVar1)();
    iVar5 = 1;
  }
  else {
    iVar5 = 0;
  }
  return iVar5;
}

