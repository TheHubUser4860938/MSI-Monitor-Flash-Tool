// rea decompile_all
// name: CDockingManager::GetSmartDockingManager
// address: 0x100b0924
// body: available
// range: 0x100b0924-0x100b09b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: class CSmartDockingManager * __thiscall CDockingManager::GetSmartDockingManager(void)
   
   Library: Visual Studio 2015 Release */

CSmartDockingManager * __thiscall CDockingManager::GetSmartDockingManager(CDockingManager *this)

{
  code *pcVar1;
  CSmartDockingManager *this_00;
  undefined4 uVar2;
  
  if (DAT_1020b52c != 0) {
    if (*(int **)(this + 0x1b8) != (int *)0x0) {
      pcVar1 = *(code **)(**(int **)(this + 0x1b8) + 4);
      guard_check_icall(1);
      (*pcVar1)();
      *(undefined4 *)(this + 0x1b8) = 0;
    }
    DAT_1020b52c = 0;
  }
  if (*(int *)(this + 0x1b8) == 0) {
    this_00 = (CSmartDockingManager *)FUN_1001cfa0(0x118);
    if (this_00 == (CSmartDockingManager *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = CSmartDockingManager::CSmartDockingManager(this_00);
    }
    *(undefined4 *)(this + 0x1b8) = uVar2;
    FUN_100d29c3(*(undefined4 *)(this + 0xe4),0,0);
  }
  return *(CSmartDockingManager **)(this + 0x1b8);
}

