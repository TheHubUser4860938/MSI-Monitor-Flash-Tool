// rea decompile_all
// name: ___acrt_stdio_allocate_buffer_nolock
// address: 0x101b02fb
// body: available
// range: 0x101b02fb-0x101b0357 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___acrt_stdio_allocate_buffer_nolock
   
   Library: Visual Studio 2015 Release */

void ___acrt_stdio_allocate_buffer_nolock(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  
  _DAT_10249610 = _DAT_10249610 + 1;
  uVar2 = __malloc_base(0x1000);
  param_1[1] = uVar2;
  FID_conflict__free((void *)0x0);
  puVar1 = param_1 + 3;
  if (param_1[1] == 0) {
    LOCK();
    *puVar1 = *puVar1 | 0x400;
    UNLOCK();
    param_1[6] = 2;
    param_1[1] = param_1 + 5;
  }
  else {
    LOCK();
    *puVar1 = *puVar1 | 0x40;
    UNLOCK();
    param_1[6] = 0x1000;
  }
  param_1[2] = 0;
  *param_1 = param_1[1];
  return;
}

