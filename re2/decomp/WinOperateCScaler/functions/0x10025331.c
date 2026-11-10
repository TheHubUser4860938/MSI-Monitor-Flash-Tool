// rea decompile_all
// name: CCmdTarget::InternalRelease
// address: 0x10025331
// body: available
// range: 0x10025331-0x10025383 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: unsigned long __thiscall CCmdTarget::InternalRelease(void)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall CCmdTarget::InternalRelease(CCmdTarget *this)

{
  CCmdTarget *pCVar1;
  int iVar2;
  code *pcVar3;
  ulong uVar4;
  
  pCVar1 = this + 4;
  if (*(int *)pCVar1 == 0) {
    uVar4 = 0;
  }
  else {
    LOCK();
    iVar2 = *(int *)pCVar1;
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    UNLOCK();
    uVar4 = iVar2 - 1;
    if (uVar4 == 0) {
      FUN_10024293(*(undefined4 *)(this + 0x1c));
      pcVar3 = *(code **)(*(int *)this + 0x10);
      guard_check_icall();
      (*pcVar3)();
      guard_check_icall();
    }
  }
  return uVar4;
}

