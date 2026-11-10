// rea decompile_all
// name: CMFCBaseTabCtrl::OnRButtonDown
// address: 0x1006ab5e
// body: available
// range: 0x1006ab5e-0x1006ac33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCBaseTabCtrl::OnRButtonDown(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCBaseTabCtrl::OnRButtonDown(CMFCBaseTabCtrl *this)

{
  code *pcVar1;
  int iVar2;
  CWnd *this_00;
  
  FUN_1001d029();
  if (*(int *)(this + 0x8c) != 0) {
    pcVar1 = *(code **)(*(int *)this + 0x218);
    guard_check_icall(&stack0x00000008);
    iVar2 = (*pcVar1)();
    if (iVar2 < 0) {
      if (iVar2 != *(int *)(this + 0xc0)) {
        return;
      }
    }
    else if (iVar2 != *(int *)(this + 0xc0)) {
      *(undefined4 *)(this + 0x1ec) = 0;
      *(undefined4 *)(this + 0x1f0) = 1;
      pcVar1 = *(code **)(*(int *)this + 0x214);
      *(undefined4 *)(this + 0x24c) = 0;
      guard_check_icall(iVar2);
      iVar2 = (*pcVar1)();
      *(undefined4 *)(this + 0x1f0) = 0;
      *(undefined4 *)(this + 0x24c) = 0;
      if (iVar2 == 0) {
        return;
      }
      if (*(int *)(this + 0x1ec) == 0) {
        pcVar1 = *(code **)(*(int *)this + 0x270);
        guard_check_icall(*(undefined4 *)(this + 0xc0));
        (*pcVar1)();
      }
      *(undefined4 *)(this + 0x1ec) = 0;
      return;
    }
    pcVar1 = *(code **)(*(int *)this + 0x1b0);
    guard_check_icall(iVar2);
    this_00 = (CWnd *)(*pcVar1)();
    if ((this_00 != (CWnd *)0x0) && (*(int *)(this_00 + 0x20) != 0)) {
      CWnd::SetFocus(this_00);
    }
  }
  return;
}

