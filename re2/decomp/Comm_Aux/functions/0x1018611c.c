// rea decompile_all
// name: common_timespec_get<_timespec64>
// address: 0x1018611c
// body: available
// range: 0x1018611c-0x1018619a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10186181) */
/* Library Function - Single Match
    int __cdecl common_timespec_get<struct _timespec64>(struct _timespec64 * const,int)
   
   Library: Visual Studio 2015 Release */

int __cdecl common_timespec_get<_timespec64>(_timespec64 *param_1,int param_2)

{
  int *piVar1;
  int extraout_ECX;
  longlong lVar2;
  uint local_c;
  
  if (param_1 == (_timespec64 *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_10184721();
  }
  else if (param_2 == 1) {
    local_c = 0;
    ___acrt_GetSystemTimePreciseAsFileTime_4(&local_c);
    lVar2 = __alldvrm(local_c + 0x2ac18000,-0x19db1de - (uint)(local_c < 0xd53e8000),10000000,0);
    if (lVar2 < 0x793407000) {
      *(longlong *)param_1 = lVar2;
      *(int *)(param_1 + 8) = extraout_ECX * 100;
      return 1;
    }
  }
  return 0;
}

