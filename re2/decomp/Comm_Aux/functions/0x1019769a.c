// rea decompile_all
// name: write_double_translated_unicode_nolock
// address: 0x1019769a
// body: available
// range: 0x1019769a-0x10197706 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_double_translated_unicode_nolock(char
   const * const,unsigned int)
   
   Library: Visual Studio 2015 Release */

char * __cdecl write_double_translated_unicode_nolock(char *param_1,uint param_2)

{
  wchar_t _WCh;
  wchar_t wVar1;
  wint_t wVar2;
  wchar_t *pwVar3;
  DWORD DVar4;
  int in_stack_0000000c;
  
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  pwVar3 = (wchar_t *)(in_stack_0000000c + param_2);
  while( true ) {
    if (pwVar3 <= param_2) {
      return param_1;
    }
    _WCh = *(wchar_t *)param_2;
    wVar1 = __putwch_nolock(_WCh);
    if (wVar1 != _WCh) break;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 2;
    if (_WCh == L'\n') {
      wVar2 = __putwch_nolock(L'\r');
      if (wVar2 != 0xd) break;
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
    param_2 = param_2 + 2;
  }
  DVar4 = GetLastError();
  *(DWORD *)param_1 = DVar4;
  return param_1;
}

