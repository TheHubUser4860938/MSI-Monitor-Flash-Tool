// rea decompile_all
// name: __crt_time_elapsed_leap_years<__int64>
// address: 0x101a8b59
// body: available
// range: 0x101a8b59-0x101a8bbe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __int64 __cdecl __crt_time_elapsed_leap_years<__int64>(__int64)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

__int64 __cdecl __crt_time_elapsed_leap_years<__int64>(__int64 param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = param_1._4_4_ - (uint)((int)param_1 == 0);
  lVar3 = __alldiv(param_1 + 299,400,0);
  lVar4 = __alldiv((int)param_1 + -1,iVar2,100,0);
  lVar5 = __alldiv((int)param_1 + -1,iVar2,4,0);
  lVar5 = (lVar3 - lVar4) + lVar5;
  uVar1 = (uint)lVar5;
  return CONCAT44((int)((ulonglong)lVar5 >> 0x20) - (uint)(uVar1 < 0x11),uVar1 - 0x11);
}

