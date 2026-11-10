// rea decompile_all
// name: CFrameImpl::OnTrackCaptionButtons
// address: 0x101189ef
// body: available
// range: 0x101189ef-0x10118a9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CFrameImpl::OnTrackCaptionButtons(class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CFrameImpl::OnTrackCaptionButtons(CFrameImpl *this,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  CMFCCaptionButtonEx *pCVar3;
  undefined4 uVar4;
  HWND pHVar5;
  
  if (DAT_1024709c == 0) {
    uVar1 = *(uint *)(this + 0x10);
    uVar2 = OnNcHitTest(this,param_2,param_3);
    pCVar3 = GetSysButton(this,uVar2);
    if ((pCVar3 == (CMFCCaptionButtonEx *)0x0) || (*(int *)(pCVar3 + 0x10) == 0)) {
      *(undefined4 *)(this + 0x10) = 0;
    }
    else {
      uVar4 = FUN_1018d6f4();
      *(undefined4 *)(this + 0x10) = uVar4;
      *(undefined4 *)(pCVar3 + 8) = 1;
    }
    if (*(uint *)(this + 0x10) != uVar1) {
      RedrawCaptionButton(this,pCVar3);
      pCVar3 = GetSysButton(this,uVar1);
      if (pCVar3 != (CMFCCaptionButtonEx *)0x0) {
        *(undefined4 *)(pCVar3 + 8) = 0;
        RedrawCaptionButton(this,pCVar3);
      }
    }
    if (*(int *)(this + 0x14) == 0) {
      if (uVar1 == 0) {
        if (*(int *)(this + 0x10) != 0) {
          pHVar5 = SetCapture(*(HWND *)(*(int *)(this + 0xb0) + 0x20));
          CWnd::FromHandle(pHVar5);
        }
      }
      else if (*(int *)(this + 0x10) == 0) {
        ReleaseCapture();
      }
    }
  }
  return;
}

