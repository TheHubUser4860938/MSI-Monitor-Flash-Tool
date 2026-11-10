// rea decompile_all
// name: CMFCRibbonQuickAccessToolBar::Add
// address: 0x10125160
// body: available
// range: 0x10125160-0x101251f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonQuickAccessToolBar::Add(class CMFCRibbonBaseElement *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonQuickAccessToolBar::Add(CMFCRibbonQuickAccessToolBar *this,CMFCRibbonBaseElement *param_1)

{
  code *pcVar1;
  int *piVar2;
  
  pcVar1 = (code *)**(undefined4 **)param_1;
  guard_check_icall();
  (*pcVar1)();
  piVar2 = (int *)FUN_1002505f();
  pcVar1 = *(code **)(*piVar2 + 0x168);
  guard_check_icall(param_1);
  (*pcVar1)();
  piVar2[0x21] = *(int *)(this + 0x84);
  pcVar1 = *(code **)(*piVar2 + 0x170);
  if (*(CMFCRibbonBaseElement **)(param_1 + 0x8c) != (CMFCRibbonBaseElement *)0x0) {
    param_1 = *(CMFCRibbonBaseElement **)(param_1 + 0x8c);
  }
  guard_check_icall(param_1);
  (*pcVar1)();
  piVar2[0x31] = 1;
  FUN_10074cc9(*(int *)(this + 0x114) + -1,piVar2,1);
  RebuildKeys(this);
  return;
}

