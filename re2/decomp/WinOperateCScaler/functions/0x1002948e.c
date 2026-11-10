// rea decompile_all
// name: CWnd::OnDestroy
// address: 0x1002948e
// body: available
// range: 0x1002948e-0x10029516 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10029512 to 0x100283ad FUN_100283ad (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CWnd::OnDestroy(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CWnd::OnDestroy(CWnd *this)

{
  code *pcVar1;
  int *piVar2;
  
  if (*(int **)(this + 0x70) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x70) + 4);
    guard_check_icall(1);
    (*pcVar1)();
  }
  piVar2 = *(int **)(this + 0x2c);
  *(undefined4 *)(this + 0x70) = 0;
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 0xc);
    guard_check_icall(piVar2,0,0);
    (*pcVar1)();
  }
  piVar2 = *(int **)(this + 0x28);
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 8);
    guard_check_icall(piVar2);
    (*pcVar1)();
    *(undefined4 *)(this + 0x28) = 0;
  }
  if (*(int *)(this + 0x38) != 0) {
    FUN_1002ae70(0,0);
  }
  if (*(int **)(this + 0x7c) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x7c) + 4);
    guard_check_icall(1);
    (*pcVar1)();
    *(undefined4 *)(this + 0x7c) = 0;
  }
  FUN_100283ad();
  return;
}

