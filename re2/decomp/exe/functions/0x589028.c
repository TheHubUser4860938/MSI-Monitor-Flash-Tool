// rea decompile_all
// name: __register_thread_local_exe_atexit_callback
// address: 0x589028
// body: available
// range: 0x589028-0x58905f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4_GS replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    __register_thread_local_exe_atexit_callback
   
   Library: Visual Studio 2015 Release */

void __register_thread_local_exe_atexit_callback(undefined4 param_1)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  
  bVar2 = 0x20 - ((byte)DAT_0060cff4 & 0x1f) & 0x1f;
  if (DAT_00618f24 == ((0U >> bVar2 | 0 << 0x20 - bVar2) ^ DAT_0060cff4)) {
    DAT_00618f24 = __crt_fast_encode_pointer<>(param_1);
    return;
  }
  iVar3 = FUN_0058c5ff();
  pcVar1 = *(code **)(iVar3 + 0xc);
  if (pcVar1 != (code *)0x0) {
    guard_check_icall();
    (*pcVar1)();
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}

