// rea decompile_all
// name: __acrt_stdio_allocate_stream
// address: 0x590a3e
// body: available
// range: 0x590a3e-0x590a90 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    class __crt_stdio_stream __cdecl __acrt_stdio_allocate_stream(void)
   
   Library: Visual Studio 2015 Release */

undefined4 * __cdecl __acrt_stdio_allocate_stream(void)

{
  undefined4 *puVar1;
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = 0;
  ___acrt_lock(8);
  puVar1 = (undefined4 *)find_or_allocate_unused_stream_nolock();
  puVar1 = (undefined4 *)*puVar1;
  *in_stack_00000004 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    puVar1[7] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0xffffffff;
  }
  FUN_00590a94();
  return in_stack_00000004;
}

