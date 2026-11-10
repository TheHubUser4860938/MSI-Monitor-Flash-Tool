// rea decompile_all
// name: dllmain_crt_process_attach
// address: 0x10154185
// body: available
// range: 0x10154185-0x10154289 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    int __cdecl dllmain_crt_process_attach(struct HINSTANCE__ * const,void * const)
   
   Library: Visual Studio 2015 Release */

int __cdecl dllmain_crt_process_attach(HINSTANCE__ *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  
  cVar3 = ___scrt_initialize_crt(0);
  if (cVar3 != '\0') {
    ___scrt_acquire_startup_lock();
    bVar2 = true;
    if (DAT_1020cc8c != 0) {
      ___scrt_fastfail(7);
    }
    DAT_1020cc8c = 1;
    cVar3 = ___scrt_dllmain_before_initialize_c();
    if (cVar3 != '\0') {
      __RTC_Initialize();
      _atexit((_func_4879 *)&LAB_10154e09);
      FUN_10154da3();
      _atexit((_func_4879 *)&LAB_10154daf);
      ___scrt_initialize_default_local_stdio_options();
      iVar4 = __initterm_e(&DAT_101a5c38,&DAT_101a5c58);
      if ((iVar4 == 0) && (cVar3 = ___scrt_dllmain_after_initialize_c(), cVar3 != '\0')) {
        __initterm(&DAT_101a5974,&DAT_101a5c34);
        DAT_1020cc8c = 2;
        bVar2 = false;
      }
    }
    FUN_1015428d();
    if (!bVar2) {
      piVar5 = (int *)FUN_10154dd8();
      if ((*piVar5 != 0) && (cVar3 = ___scrt_is_nonwritable_in_current_image(piVar5), cVar3 != '\0')
         ) {
        pcVar1 = (code *)*piVar5;
        guard_check_icall(param_1,2,param_2);
        (*pcVar1)();
      }
      DAT_1020ccdc = DAT_1020ccdc + 1;
      return 1;
    }
  }
  return 0;
}

