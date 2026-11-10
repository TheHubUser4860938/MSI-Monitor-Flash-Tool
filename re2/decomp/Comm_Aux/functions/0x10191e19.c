// rea decompile_all
// name: __towlower_l
// address: 0x10191e19
// body: available
// range: 0x10191e19-0x10191ee1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __towlower_l
   
   Library: Visual Studio 2015 Release */

wint_t __cdecl __towlower_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  undefined2 in_stack_00000006;
  int local_1c;
  int local_18;
  char local_10;
  ushort local_8 [2];
  
  if (_C == 0xffff) {
    return 0xffff;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,(__crt_locale_pointers *)_Locale);
  if (*(int *)(local_18 + 0xa8) == 0) {
    if ((ushort)(_C - 0x41) < 0x1a) {
      __C = (uint)(ushort)(_C + 0x20);
    }
  }
  else {
    if (0xff < _C) {
      iVar1 = ___acrt_LCMapStringW(*(int *)(local_18 + 0xa8),0x100,&_C,1,local_8);
      if (iVar1 == 0) {
        local_8[0] = (ushort)__C;
      }
      goto LAB_10191ece;
    }
    iVar1 = _iswctype(_C,1);
    if (iVar1 != 0) {
      local_8[0] = (ushort)*(byte *)(*(int *)(local_18 + 0x94) + (__C & 0xffff));
      goto LAB_10191ece;
    }
  }
  local_8[0] = (ushort)__C;
LAB_10191ece:
  if (local_10 != '\0') {
    *(uint *)(local_1c + 0x350) = *(uint *)(local_1c + 0x350) & 0xfffffffd;
  }
  return local_8[0];
}

