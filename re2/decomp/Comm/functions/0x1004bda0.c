// rea decompile_all
// name: CPane::OnAfterFloat
// address: 0x1004bda0
// body: available
// range: 0x1004bda0-0x1004be0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPane::OnAfterFloat(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPane::OnAfterFloat(CPane *this)

{
  code *pcVar1;
  CWnd *this_00;
  
  pcVar1 = *(code **)(*(int *)this + 0x1e0);
  guard_check_icall(0x2000);
  (*pcVar1)();
  pcVar1 = *(code **)(*(int *)this + 0x228);
  guard_check_icall(0);
  this_00 = (CWnd *)(*pcVar1)();
  if (this_00 != (CWnd *)0x0) {
    *(undefined4 *)(this_00 + 0x94) = *(undefined4 *)(this + 0x17c);
    CWnd::SetWindowPos(this_00,(CWnd *)0x0,-1,-1,-1,-1,0x37);
  }
  if (DAT_101dae50 != 0) {
    SetWindowRgn(*(HWND *)(this + 0x20),(HRGN)0x0,1);
  }
  return;
}

