// rea decompile_all
// name: FUN_10007540
// address: 0x10007540
// body: available
// range: 0x10007540-0x10007634 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10007540(void)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  
  FUN_10006fe0();
  DAT_10065a10 = 1;
  if ((DAT_100659f8 == (HMODULE)0x0) || (DAT_10065a00 == (code *)0x0)) {
    uVar1 = 0xfffffffc;
  }
  else if (DAT_10065a34 == 0) {
    pcVar2 = (code *)(*DAT_10065a00)(0xd22bdd7e,0);
    if (pcVar2 == (code *)0x0) {
      uVar1 = 0xfffffffd;
    }
    else {
      iVar3 = (*pcVar2)();
      if (iVar3 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_100659e0);
        DAT_10065a00 = (code *)0x0;
        FreeLibrary(DAT_100659f8);
        DAT_100659f8 = (HMODULE)0x0;
        DAT_10065a08 = 0;
        DAT_10065a0c = 0;
        _DAT_10065a14 = 0;
        _DAT_10065a18 = 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_100659e0);
        uVar1 = 0;
      }
      else {
        uVar1 = 0xffffffff;
      }
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  DAT_10065a10 = 0;
  return uVar1;
}

