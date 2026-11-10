// rea decompile_all
// name: CVSToolsListBox::OnSelectionChanged
// address: 0x54775b
// body: available
// range: 0x54775b-0x54788b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
      FUN_00415f50(local_8 + 0x14);
      FUN_00415f50(local_8 + 8);
      FUN_00415f50(local_8 + 0xc);
      goto LAB_00547814;
    }
  }
  FUN_00415d60();
  FUN_00415d60();
  FUN_00415d60();
LAB_00547814:
  pcVar1 = *(code **)(**(int **)(*(int *)(this + 0x1f8) + 0x1460) + 0x184);
  guard_check_icall(*(undefined4 *)(*(int *)(this + 0x1f8) + 0x145c));
  (*pcVar1)();
  *(int *)(*(int *)(this + 0x1f8) + 0x145c) = local_8;
  FUN_00432070(0);
  CMFCToolBarsToolsPropertyPage::EnableControls(*(CMFCToolBarsToolsPropertyPage **)(this + 0x1f8));
  pcVar1 = *(code **)(**(int **)(*(int *)(this + 0x1f8) + 0x1460) + 0x188);
  guard_check_icall(*(undefined4 *)(*(int *)(this + 0x1f8) + 0x145c));
  (*pcVar1)();
  return;
}

