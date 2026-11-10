// rea decompile_all
// name: FID_conflict:common_gmtime<long>
// address: 0x1019fc26
// body: available
// range: 0x1019fc26-0x1019fc4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Different Base Names
    struct tm * __cdecl common_gmtime<long>(long const * const)
    struct tm * __cdecl common_gmtime<__int64>(__int64 const * const)
    struct tm * __cdecl common_localtime<long>(long const * const)
    struct tm * __cdecl common_localtime<__int64>(__int64 const * const)
     8 names - too many to list
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

tm * __cdecl FID_conflict_common_gmtime<long>(__time32_t *_Time)

{
  tm *ptVar1;
  int iVar2;
  tm *ptVar3;
  
  ptVar1 = ___getgmtimebuf();
  ptVar3 = (tm *)0x0;
  if (ptVar1 != (tm *)0x0) {
    iVar2 = FUN_1019f99c(ptVar1,_Time);
    ptVar3 = (tm *)(~-(uint)(iVar2 != 0) & (uint)ptVar1);
  }
  return ptVar3;
}

