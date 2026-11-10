// rea decompile_all
// name: CMFCOutlookBarTabCtrl::EnableScrollButtons
// address: 0x10133dc0
// body: available
// range: 0x10133dc0-0x10133ea6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCOutlookBarTabCtrl::EnableScrollButtons(int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCOutlookBarTabCtrl::EnableScrollButtons
          (CMFCOutlookBarTabCtrl *this,int param_1,int param_2,int param_3)

{
  CWnd *pCVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = IsMode2003(this);
  uVar2 = *(uint *)(this + 0x264);
  uVar5 = ~-(uint)(iVar4 != 0) & param_1;
  *(uint *)(this + 0x264) = uVar5;
  if (uVar5 == 0) {
    CWnd::ShowWindow((CWnd *)(this + 0x1010),0);
    CWnd::ShowWindow((CWnd *)(this + 0x17b8),0);
  }
  else {
    pCVar1 = (CWnd *)(this + 0x1010);
    CWnd::ShowWindow(pCVar1,4);
    CWnd::EnableWindow(pCVar1,param_2);
    CMFCButton::SetStdImage((CMFCButton *)pCVar1,0x18,(uint)(param_2 == 0),0);
    pCVar1 = (CWnd *)(this + 0x17b8);
    CWnd::ShowWindow(pCVar1,4);
    CWnd::EnableWindow(pCVar1,param_3);
    CMFCButton::SetStdImage((CMFCButton *)pCVar1,0xd,(uint)(param_3 == 0),0);
  }
  RedrawWindow(*(HWND *)(this + 0x1030),(RECT *)0x0,(HRGN)0x0,0x105);
  RedrawWindow(*(HWND *)(this + 0x17d8),(RECT *)0x0,(HRGN)0x0,0x105);
  if (uVar2 != uVar5) {
    pcVar3 = *(code **)(*(int *)this + 0x184);
    guard_check_icall();
    (*pcVar3)();
  }
  return;
}

