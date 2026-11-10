// rea decompile_all
// name: CMFCRibbonTab::OnLButtonDblClk
// address: 0x100d81de
// body: available
// range: 0x100d81de-0x100d82a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonTab::OnLButtonDblClk(class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonTab::OnLButtonDblClk(CMFCRibbonTab *this)

{
  CWnd *this_00;
  code *pcVar1;
  clock_t cVar2;
  UINT UVar3;
  int iVar4;
  CFrameWnd *pCVar5;
  CMFCRibbonCategory *this_01;
  
  if (*(int *)(*(int *)(this + 0x88) + 100) != 0) {
    if (*(int *)(*(int *)(this + 0x88) + 0x570) != -1) {
      cVar2 = _clock();
      iVar4 = *(int *)(*(int *)(this + 0x88) + 0x570);
      UVar3 = GetDoubleClickTime();
      if (cVar2 - iVar4 < (int)UVar3) {
        return;
      }
    }
    this_01 = *(CMFCRibbonCategory **)(this + 0x88);
    this_00 = *(CWnd **)(this_01 + 0x53c);
    if (((byte)this_00[0x330] & 1) == 0) {
      iVar4 = 0;
    }
    else {
      pcVar1 = *(code **)(*(int *)this + 0xe4);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      if (iVar4 != 0) {
        pcVar1 = *(code **)(*(int *)this + 0x198);
        guard_check_icall();
        (*pcVar1)();
      }
      this_01 = *(CMFCRibbonCategory **)(this + 0x88);
      iVar4 = 1;
    }
    CMFCRibbonCategory::ShowElements(this_01,iVar4);
    pCVar5 = CWnd::GetParentFrame(this_00);
    pcVar1 = *(code **)(*(int *)pCVar5 + 0x178);
    guard_check_icall(1);
    (*pcVar1)();
    RedrawWindow(*(HWND *)(this_00 + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
  }
  return;
}

