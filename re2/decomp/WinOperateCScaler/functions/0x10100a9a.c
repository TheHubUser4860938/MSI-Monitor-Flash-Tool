// rea decompile_all
// name: CDockablePane::OnLButtonDown
// address: 0x10100a9a
// body: available
// range: 0x10100a9a-0x10100b83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CDockablePane::OnLButtonDown(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDockablePane::OnLButtonDown
          (CDockablePane *this,undefined4 param_1,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  CMFCCaptionButton *pCVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  CWnd *this_00;
  int iVar5;
  
  if (*(uint *)(this + 0x358) == 0) {
    pHVar3 = GetWindow(*(HWND *)(this + 0x20),5);
    pCVar4 = CWnd::FromHandle(pHVar3);
    iVar5 = 0;
    if (pCVar4 != (CWnd *)0x0) {
      do {
        this_00 = pCVar4;
        pHVar3 = GetWindow(*(HWND *)(this_00 + 0x20),2);
        pCVar4 = CWnd::FromHandle(pHVar3);
        iVar5 = iVar5 + 1;
      } while (pCVar4 != (CWnd *)0x0);
      if (iVar5 == 1) {
        CWnd::SetFocus(this_00);
      }
    }
  }
  else {
    pCVar2 = FindButtonByHit(this,*(uint *)(this + 0x358));
    if (pCVar2 != (CMFCCaptionButton *)0x0) {
      CWnd::SetFocus((CWnd *)this);
      *(undefined4 *)(this + 0x35c) = *(undefined4 *)(this + 0x358);
      *(undefined4 *)(pCVar2 + 4) = 1;
      RedrawButton(this,pCVar2);
      return;
    }
  }
  pcVar1 = *(code **)(*(int *)this + 0x1dc);
  guard_check_icall();
  iVar5 = (*pcVar1)();
  if (iVar5 == 0) {
    pcVar1 = *(code **)(*(int *)this + 0x16c);
    guard_check_icall();
    iVar5 = (*pcVar1)();
    if (iVar5 == 0) {
      pcVar1 = *(code **)(*(int *)this + 0x1cc);
      guard_check_icall();
      iVar5 = (*pcVar1)();
      if (iVar5 != 0) {
        this[0x2c8] = (CDockablePane)0x1;
      }
      CPane::OnLButtonDown((CPane *)this,param_1,param_3,param_4);
    }
  }
  CWnd::SetFocus((CWnd *)this);
  return;
}

