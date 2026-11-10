// rea decompile_all
// name: CWinApp::OnIdle
// address: 0x10057bfe
// body: available
// range: 0x10057bfe-0x10057cb8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CWinApp::OnIdle(long)
   
   Library: Visual Studio 2015 Release */

int __thiscall CWinApp::OnIdle(CWinApp *this,long param_1)

{
  code *pcVar1;
  int *piVar2;
  CWinApp *local_8;
  
  local_8 = this;
  if (param_1 < 1) {
    FUN_10058d93(param_1);
    local_8 = (CWinApp *)0x0;
    if (*(int **)(this + 0x5c) != (int *)0x0) {
      pcVar1 = *(code **)(**(int **)(this + 0x5c) + 0x10);
      guard_check_icall();
      local_8 = (CWinApp *)(*pcVar1)();
      while (local_8 != (CWinApp *)0x0) {
        pcVar1 = *(code **)(**(int **)(this + 0x5c) + 0x14);
        guard_check_icall(&local_8);
        piVar2 = (int *)(*pcVar1)();
        pcVar1 = *(code **)(*piVar2 + 0x8c);
        guard_check_icall();
        (*pcVar1)();
      }
    }
    pcVar1 = *(code **)(*(int *)this + 0xfc);
    guard_check_icall();
    piVar2 = (int *)(*pcVar1)();
    if (piVar2 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar2 + 0x2c);
      guard_check_icall(0);
      (*pcVar1)();
    }
  }
  else if (param_1 == 1) {
    FUN_10058d93(1);
  }
  return (uint)(param_1 < 1);
}

