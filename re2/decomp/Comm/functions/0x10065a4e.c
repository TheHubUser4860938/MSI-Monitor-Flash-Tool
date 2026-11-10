// rea decompile_all
// name: CMFCToolBar::SetHot
// address: 0x10065a4e
// body: available
// range: 0x10065a4e-0x10065aea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CMFCToolBar::SetHot(class CMFCToolBarButton *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCToolBar::SetHot(CMFCToolBar *this,CMFCToolBarButton *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  CMFCToolBar *local_8;
  
  iVar4 = 0;
  local_8 = this;
  local_8 = (CMFCToolBar *)GetDroppedDownMenu(this,(int *)0x0);
  if (local_8 != (CMFCToolBar *)0x0) {
    pcVar1 = *(code **)(*(int *)local_8 + 0xec);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      return 1;
    }
  }
  if (param_1 == (CMFCToolBarButton *)0x0) {
    *(undefined4 *)(this + 0xbf8) = 0xffffffff;
  }
  else {
    local_8 = *(CMFCToolBar **)(this + 0xc40);
    while( true ) {
      if (local_8 == (CMFCToolBar *)0x0) {
        return 0;
      }
      piVar3 = (int *)FUN_1002466e(&local_8);
      if (param_1 == (CMFCToolBarButton *)*piVar3) break;
      iVar4 = iVar4 + 1;
    }
    if (*(int *)(this + 0xbf8) != iVar4) {
      pcVar1 = *(code **)(*(int *)this + 0x3b0);
      guard_check_icall(iVar4);
      (*pcVar1)();
    }
  }
  return 1;
}

