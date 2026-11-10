// rea decompile_all
// name: ___acrt_wcstok_s_novalidation
// address: 0x10196bba
// body: available
// range: 0x10196bba-0x10196c62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___acrt_wcstok_s_novalidation
   
   Library: Visual Studio 2015 Release */

uint ___acrt_wcstok_s_novalidation(short *param_1,short *param_2,undefined4 *param_3)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  short sVar4;
  
  if (param_1 == (short *)0x0) {
    param_1 = (short *)*param_3;
  }
  sVar4 = *param_1;
  if (sVar4 != 0) {
    sVar1 = *param_2;
    psVar2 = param_2;
    do {
      while ((sVar1 != 0 && (sVar1 != sVar4))) {
        sVar1 = psVar2[1];
        psVar2 = psVar2 + 1;
      }
      if (*psVar2 == 0) break;
      param_1 = param_1 + 1;
      sVar4 = *param_1;
      sVar1 = *param_2;
      psVar2 = param_2;
    } while (sVar4 != 0);
  }
  psVar2 = param_1;
  if (*param_1 != 0) {
    do {
      psVar3 = param_2;
      if (*param_2 != 0) {
        sVar4 = *param_2;
        do {
          if (sVar4 == *psVar2) break;
          psVar3 = psVar3 + 1;
          sVar4 = *psVar3;
        } while (sVar4 != 0);
      }
      if (*psVar3 != 0) {
        *psVar2 = 0;
        psVar2 = psVar2 + 1;
        break;
      }
      psVar2 = psVar2 + 1;
    } while (*psVar2 != 0);
  }
  *param_3 = psVar2;
  return -(uint)(psVar2 != param_1) & (uint)param_1;
}

