// rea decompile_all
// name: CFrameImpl::OnLButtonUp
// address: 0x10117ebf
// body: available
// range: 0x10117ebf-0x10117f6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CFrameImpl::OnLButtonUp(class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall CFrameImpl::OnLButtonUp(CFrameImpl *this)

{
  int iVar1;
  int iVar2;
  WPARAM wParam;
  BOOL BVar3;
  ulong uVar4;
  
  iVar2 = IsOwnerDrawCaption(this);
  if (((iVar2 != 0) && (*(int *)(this + 0x1c) == 0)) &&
     ((iVar2 = *(int *)(this + 0x14), iVar2 == 0x13 || (iVar2 - 0x1aU < 2)))) {
    iVar1 = *(int *)(this + 0x10);
    StopCaptionButtonsTracking(this);
    if (iVar1 == iVar2) {
      wParam = 0;
      if (iVar1 == 0x13) {
        wParam = 0xf060;
      }
      else if (iVar1 == 0x1a) {
        uVar4 = CWnd::GetExStyle(*(CWnd **)(this + 0xb0));
        wParam = (-(uint)((uVar4 & 0x1000000) != 0) & 0xf0) + 0xf030;
      }
      else if (iVar1 == 0x1b) {
        BVar3 = IsIconic(*(HWND *)(*(int *)(this + 0xb0) + 0x20));
        wParam = (-(uint)(BVar3 != 0) & 0x100) + 0xf020;
      }
      PostMessageW(*(HWND *)(*(int *)(this + 0xb0) + 0x20),0x112,wParam,0);
    }
  }
  return;
}

