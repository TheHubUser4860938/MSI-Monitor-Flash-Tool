// rea decompile_all
// name: translate_utf16_from_console_nolock
// address: 0x59143f
// body: available
// range: 0x59143f-0x5914bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl translate_utf16_from_console_nolock(int,wchar_t * const,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __cdecl translate_utf16_from_console_nolock(int param_1,wchar_t *param_2,uint param_3)

{
  wchar_t *pwVar1;
  byte *pbVar2;
  wchar_t wVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  
  pwVar1 = param_2 + param_3;
  pwVar6 = param_2;
  if (param_2 < pwVar1) {
    pwVar5 = param_2 + 1;
    pwVar4 = param_2;
    do {
      wVar3 = *pwVar4;
      if (wVar3 == L'\x1a') {
        pbVar2 = (byte *)((&DAT_006190a0)[param_1 >> 6] + 0x28 + (param_1 & 0x3fU) * 0x30);
        *pbVar2 = *pbVar2 | 2;
        break;
      }
      if (((wVar3 == L'\r') && (pwVar5 < pwVar1)) && (*pwVar5 == L'\n')) {
        pwVar4 = pwVar4 + 2;
        *pwVar6 = L'\n';
        pwVar5 = pwVar5 + 2;
      }
      else {
        *pwVar6 = wVar3;
        pwVar4 = pwVar4 + 1;
        pwVar5 = pwVar5 + 1;
      }
      pwVar6 = pwVar6 + 1;
    } while (pwVar4 < pwVar1);
  }
  return (int)pwVar6 - (int)param_2 & 0xfffffffe;
}

