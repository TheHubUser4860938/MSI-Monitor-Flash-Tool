// rea decompile_all
// name: CDialogImpl::SetActiveMenu
// address: 0x10048041
// body: available
// range: 0x10048041-0x100480a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CDialogImpl::SetActiveMenu(class CMFCPopupMenu *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDialogImpl::SetActiveMenu(CDialogImpl *this,CMFCPopupMenu *param_1)

{
  CDialogImpl *pCVar1;
  DWORD dwThreadId;
  
  DAT_101dc384 = param_1;
  if (param_1 == (CMFCPopupMenu *)0x0) {
    if (DAT_101dade0 != (HHOOK)0x0) {
      UnhookWindowsHookEx(DAT_101dade0);
      DAT_101dade0 = (HHOOK)0x0;
    }
    DAT_101dade4 = (CDialogImpl *)0x0;
    pCVar1 = DAT_101dade4;
  }
  else {
    pCVar1 = this;
    if (DAT_101dade0 == (HHOOK)0x0) {
      dwThreadId = GetCurrentThreadId();
      DAT_101dade0 = SetWindowsHookExW(7,DialogMouseHookProc,(HINSTANCE)0x0,dwThreadId);
      pCVar1 = this;
    }
  }
  DAT_101dade4 = pCVar1;
  return;
}

