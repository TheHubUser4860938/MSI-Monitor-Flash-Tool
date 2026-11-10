// rea decompile_all
// name: common_exit
// address: 0x588e21
// body: available
// range: 0x588e21-0x588f1f inclusive
// range: 0x588f34-0x588f39 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4_GS replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl common_exit(int,enum _crt_exit_cleanup_mode,enum _crt_exit_return_mode)
   
   Library: Visual Studio 2015 Release */

void __cdecl common_exit(int param_1,_crt_exit_cleanup_mode param_2,_crt_exit_return_mode param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 *local_18;
  
  if (param_3 == 0) {
    cVar3 = ___scrt_is_managed_app();
    if (cVar3 != '\0') {
      try_cor_exit_process(param_1);
    }
  }
  ___acrt_lock(2);
  if (DAT_00618f28 != '\0') goto LAB_00588ef8;
  LOCK();
  DAT_00618f20 = 1;
  UNLOCK();
  if (param_2 == 0) {
    bVar2 = (byte)DAT_0060cff4 & 0x1f;
    bVar1 = 0x20 - bVar2 & 0x1f;
    if (DAT_00618f24 != ((0U >> bVar1 | 0 << 0x20 - bVar1) ^ DAT_0060cff4)) {
      uVar4 = DAT_0060cff4 ^ DAT_00618f24;
      guard_check_icall(0,0,0);
      (*(code *)(uVar4 >> bVar2 | uVar4 << 0x20 - bVar2))();
    }
    puVar5 = &DAT_00618f38;
LAB_00588ebd:
    __execute_onexit_table(puVar5);
  }
  else if (param_2 == 1) {
    puVar5 = &DAT_00618f44;
    goto LAB_00588ebd;
  }
  if (param_2 == 0) {
    __initterm(&DAT_005adce8,&DAT_005adcf8);
  }
  __initterm(&DAT_005adcfc,&DAT_005add00);
  if (param_3 == 0) {
    DAT_00618f28 = '\x01';
  }
LAB_00588ef8:
  FUN_00588f2b();
  if (param_3 == 0) {
    exit_or_terminate_process(param_1);
    atexit_exception_filter(*(ulong *)*local_18);
    return;
  }
  FUN_0055bc99();
  return;
}

