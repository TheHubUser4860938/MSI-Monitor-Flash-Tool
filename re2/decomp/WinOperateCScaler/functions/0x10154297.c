// rea decompile_all
// name: dllmain_crt_process_detach
// address: 0x10154297
// body: available
// range: 0x10154297-0x10154304 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    int __cdecl dllmain_crt_process_detach(bool)
   
   Library: Visual Studio 2015 Release */

int __cdecl dllmain_crt_process_detach(bool param_1)

{
  char cVar1;
  uint uVar2;
  undefined3 in_stack_00000005;
  
  if (DAT_1020ccdc < 1) {
    uVar2 = 0;
  }
  else {
    DAT_1020ccdc = DAT_1020ccdc + -1;
    ___scrt_acquire_startup_lock();
    if (DAT_1020cc8c != 2) {
      ___scrt_fastfail(7);
    }
    FUN_10153b8b();
    DAT_1020cc8c = 0;
    FUN_10154305();
    cVar1 = ___scrt_uninitialize_crt(_param_1,0);
    uVar2 = (uint)(cVar1 != '\0');
  }
  return uVar2;
}

