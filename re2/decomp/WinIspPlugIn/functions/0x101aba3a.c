// rea decompile_all
// name: common_exit
// address: 0x101aba3a
// body: available
// range: 0x101aba3a-0x101abb38 inclusive
// range: 0x101abb4d-0x101abb52 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4_GS replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl common_exit(int,enum _crt_exit_cleanup_mode,enum _crt_exit_return_mode)
   
   Library: Visual Studio 2015 Release */

void __cdecl common_exit(int param_1,_crt_exit_cleanup_mode param_2,_crt_exit_return_mode param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 *local_18;
  
  if (param_3 == 0) {
    bVar3 = is_managed_app();
    if (bVar3) {
      try_cor_exit_process(param_1);
    }
  }
  ___acrt_lock(2);
  if (DAT_10249650 != '\0') goto LAB_101abb11;
  LOCK();
  DAT_10249648 = 1;
  UNLOCK();
  if (param_2 == 0) {
    bVar2 = (byte)DAT_1023dfec & 0x1f;
    bVar1 = 0x20 - bVar2 & 0x1f;
    if (DAT_1024964c != ((0U >> bVar1 | 0 << 0x20 - bVar1) ^ DAT_1023dfec)) {
      uVar4 = DAT_1023dfec ^ DAT_1024964c;
      guard_check_icall(0,0,0);
      (*(code *)(uVar4 >> bVar2 | uVar4 << 0x20 - bVar2))();
    }
    puVar5 = &DAT_10249770;
LAB_101abad6:
    __execute_onexit_table(puVar5);
  }
  else if (param_2 == 1) {
    puVar5 = &DAT_1024977c;
    goto LAB_101abad6;
  }
  if (param_2 == 0) {
    __initterm(&DAT_101d3d50,&DAT_101d3d60);
  }
  __initterm(&DAT_101d3d64,&DAT_101d3d68);
  if (param_3 == 0) {
    DAT_10249650 = '\x01';
  }
LAB_101abb11:
  FUN_101abb44();
  if (param_3 == 0) {
    exit_or_terminate_process(param_1);
    atexit_exception_filter(*(ulong *)*local_18);
    return;
  }
  FUN_10180309();
  return;
}

