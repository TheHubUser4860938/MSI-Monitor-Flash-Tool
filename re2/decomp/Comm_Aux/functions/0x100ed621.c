// rea decompile_all
// name: CMDIChildWndEx::OnWindowPosChanged
// address: 0x100ed621
// body: available
// range: 0x100ed621-0x100ed677 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMDIChildWndEx::OnWindowPosChanged(struct tagWINDOWPOS *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMDIChildWndEx::OnWindowPosChanged(CMDIChildWndEx *this,tagWINDOWPOS *param_1)

{
  if (((byte)param_1[0x18] & 0x20) != 0) {
    if ((*(int *)(this + 0x448) == 0) || (*(int *)(*(int *)(this + 0x448) + 0x2f88) != 0)) {
      if (*(int *)(this + 0x170) != 0) {
        *(undefined4 *)(this + 0x170) = 0;
        SetWindowRgn(*(HWND *)(this + 0x20),(HRGN)0x0,1);
      }
    }
    else {
      CFrameImpl::OnWindowPosChanging((CFrameImpl *)(this + 0x150),param_1);
    }
  }
  FUN_100509af();
  return;
}

