// rea decompile_all
// name: __scrt_common_main_seh
// address: 0x55b25b
// body: available
// range: 0x55b25b-0x55b37f inclusive
// range: 0x55b3bd-0x55b3c2 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    int __cdecl __scrt_common_main_seh(void)
   
   Library: Visual Studio 2015 Release */

int __cdecl __scrt_common_main_seh(void)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  
  cVar3 = ___scrt_initialize_crt(1);
  if (cVar3 != '\0') goto LAB_0055b27a;
  do {
    ___scrt_fastfail();
LAB_0055b27a:
    bVar2 = false;
    uVar4 = ___scrt_acquire_startup_lock();
  } while (DAT_006183e4 == 1);
  if (DAT_006183e4 == 0) {
    DAT_006183e4 = 1;
    iVar5 = __initterm_e(&DAT_005adcb4,&DAT_005adcdc);
    if (iVar5 != 0) {
      return 0xff;
    }
    __initterm(&DAT_005ad9e0,&DAT_005adcb0);
    DAT_006183e4 = 2;
  }
  else {
    bVar2 = true;
  }
  ___scrt_release_startup_lock(uVar4);
  piVar6 = (int *)FUN_0055c11c();
  if ((*piVar6 != 0) && (cVar3 = ___scrt_is_nonwritable_in_current_image(piVar6), cVar3 != '\0')) {
    pcVar1 = (code *)*piVar6;
    guard_check_icall(0,2,0);
    (*pcVar1)();
  }
  piVar6 = (int *)FUN_0055c122();
  if ((*piVar6 != 0) && (cVar3 = ___scrt_is_nonwritable_in_current_image(piVar6), cVar3 != '\0')) {
    __register_thread_local_exe_atexit_callback(*piVar6);
  }
  uVar7 = ___scrt_get_show_window_mode();
  uVar7 = uVar7 & 0xffff;
  uVar8 = __get_wide_winmain_command_line(uVar7);
  iVar5 = FUN_0059b4f0(0x400000,0,uVar8,uVar7);
  cVar3 = ___scrt_is_managed_app();
  if (cVar3 == '\0') {
    _exit(iVar5);
  }
  if (!bVar2) {
    __cexit();
  }
  ___scrt_uninitialize_crt(1,0);
  return iVar5;
}

