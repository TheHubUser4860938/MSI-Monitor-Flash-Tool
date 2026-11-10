// rea decompile_all
// name: store_number_without_lead_zeroes
// address: 0x57d386
// body: available
// range: 0x57d386-0x57d3ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __cdecl store_number_without_lead_zeroes(int,wchar_t * * const,unsigned int * const)
   
   Library: Visual Studio 2015 Release */

void __cdecl store_number_without_lead_zeroes(int param_1,wchar_t **param_2,uint *param_3)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  pwVar2 = *param_2;
  if (*param_3 < 2) {
    *param_2 = *param_2 + -*param_3;
    *param_3 = 0;
  }
  else {
    do {
      pwVar3 = pwVar2;
      *pwVar3 = (short)(param_1 % 10) + L'0';
      *param_3 = *param_3 - 1;
      if (param_1 / 10 < 1) break;
      pwVar2 = pwVar3 + 1;
      param_1 = param_1 / 10;
    } while (1 < *param_3);
    pwVar2 = *param_2;
    *param_2 = pwVar3 + 1;
    for (; pwVar2 < pwVar3; pwVar2 = pwVar2 + 1) {
      wVar1 = *pwVar3;
      *pwVar3 = *pwVar2;
      pwVar3 = pwVar3 + -1;
      *pwVar2 = wVar1;
    }
  }
  return;
}

