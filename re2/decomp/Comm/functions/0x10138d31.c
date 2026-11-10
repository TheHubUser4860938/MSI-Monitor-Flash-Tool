// rea decompile_all
// name: CVSToolsListBox::OnSelectionChanged
// address: 0x10138d31
// body: available
// range: 0x10138d31-0x10138e61 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CVSToolsListBox::OnSelectionChanged(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CVSToolsListBox::OnSelectionChanged(CVSToolsListBox *this)

{
  code *pcVar1;
  int iVar2;
  int local_8;
  
  pcVar1 = *(code **)(*(int *)this + 0x178);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 < 0) {
    local_8 = 0;
  }
  else {
    pcVar1 = *(code **)(*(int *)this + 0x188);
    guard_check_icall(iVar2);
    local_8 = (*pcVar1)();
    if (local_8 != 0) {
      FUN_100030d0(local_8 + 0x14);
      FUN_100030d0(local_8 + 8);
      FUN_100030d0(local_8 + 0xc);
      goto LAB_10138dea;
    }
  }
  FUN_10003400();
  FUN_10003400();
  FUN_10003400();
LAB_10138dea:
  pcVar1 = *(code **)(**(int **)(*(int *)(this + 0x1f8) + 0x1460) + 0x184);
  guard_check_icall(*(undefined4 *)(*(int *)(this + 0x1f8) + 0x145c));
  (*pcVar1)();
  *(int *)(*(int *)(this + 0x1f8) + 0x145c) = local_8;
  FUN_1002044a(0);
  CMFCToolBarsToolsPropertyPage::EnableControls(*(CMFCToolBarsToolsPropertyPage **)(this + 0x1f8));
  pcVar1 = *(code **)(**(int **)(*(int *)(this + 0x1f8) + 0x1460) + 0x188);
  guard_check_icall(*(undefined4 *)(*(int *)(this + 0x1f8) + 0x145c));
  (*pcVar1)();
  return;
}

