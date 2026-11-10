// rea decompile_all
// name: compute_iso_week_internal
// address: 0x1018626c
// body: available
// range: 0x1018626c-0x10186300 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl compute_iso_week_internal(int,int,int)
   
   Library: Visual Studio 2015 Release */

int __cdecl compute_iso_week_internal(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = ((param_3 - (param_2 + 6) % 7) + 7) / 7;
  bVar1 = __crt_time_is_leap_year<int>(param_1);
  iVar5 = param_3 - (uint)bVar1;
  iVar3 = ((param_2 - param_3) + 0x173) % 7;
  iVar4 = (int)(bVar1 + 0x16d + iVar3) % 7;
  if ((((iVar5 < 0x16c) || (iVar4 != 2)) && ((iVar5 < 0x16b || (iVar4 != 3)))) &&
     ((iVar5 < 0x16a || (iVar4 != 4)))) {
    if ((iVar3 == 2) || ((iVar3 == 3 || (iVar3 == 4)))) {
      iVar2 = iVar2 + 1;
    }
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}

