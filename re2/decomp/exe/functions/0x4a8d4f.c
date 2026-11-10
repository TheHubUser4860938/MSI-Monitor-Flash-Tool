// rea decompile_all
// name: CDockablePane::OnTrackCaptionButtons
// address: 0x4a8d4f
// body: available
// range: 0x4a8d4f-0x4a8e1a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CDockablePane::OnTrackCaptionButtons(class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDockablePane::OnTrackCaptionButtons(CDockablePane *this,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  CMFCCaptionButton *pCVar2;
  int iVar3;
  HWND pHVar4;
  
  if (DAT_00616b18 == 0) {
    uVar1 = *(uint *)(this + 0x358);
    pCVar2 = FindButton(this,param_2,param_3);
    if (pCVar2 == (CMFCCaptionButton *)0x0) {
      *(undefined4 *)(this + 0x358) = 0;
    }
    else {
      iVar3 = FUN_0056922d();
      *(int *)(this + 0x358) = iVar3;
      if ((*(int *)(this + 0x35c) == 0) || (*(int *)(this + 0x35c) == iVar3)) {
        *(undefined4 *)(pCVar2 + 8) = 1;
      }
    }
    if (*(uint *)(this + 0x358) != uVar1) {
      RedrawButton(this,pCVar2);
      pCVar2 = FindButtonByHit(this,uVar1);
      if (pCVar2 != (CMFCCaptionButton *)0x0) {
        *(undefined4 *)(pCVar2 + 8) = 0;
        RedrawButton(this,pCVar2);
      }
    }
    if (*(int *)(this + 0x35c) == 0) {
      if (uVar1 == 0) {
        if (*(int *)(this + 0x358) != 0) {
          pHVar4 = SetCapture(*(HWND *)(this + 0x20));
          CWnd::FromHandle(pHVar4);
          *(undefined4 *)(this + 0x360) = 1;
        }
      }
      else if (*(int *)(this + 0x358) == 0) {
        ReleaseCapture();
        *(undefined4 *)(this + 0x360) = 0;
      }
    }
  }
  return;
}

