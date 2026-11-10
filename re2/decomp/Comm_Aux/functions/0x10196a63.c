// rea decompile_all
// name: _iswctype
// address: 0x10196a63
// body: available
// range: 0x10196a63-0x10196ac1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _iswctype
   
   Library: Visual Studio 2015 Release */

int __cdecl _iswctype(wint_t _C,wctype_t _Type)

{
  uint uVar1;
  BOOL BVar2;
  uint in_ECX;
  WCHAR local_c;
  undefined2 uStack_a;
  uint local_8;
  
  if (_C == 0xffff) {
LAB_10196a78:
    uVar1 = 0;
  }
  else {
    if (_C < 0x100) {
      local_8._0_2_ = *(ushort *)(PTR_DAT_102066f8 + (uint)_C * 2);
    }
    else {
      _local_c = CONCAT22((short)(in_ECX >> 0x10),_C);
      local_8 = in_ECX & 0xffff0000;
      BVar2 = GetStringTypeW(1,&local_c,1,(LPWORD)&local_8);
      if (BVar2 == 0) goto LAB_10196a78;
    }
    uVar1 = (uint)((ushort)local_8 & _Type);
  }
  return uVar1;
}

