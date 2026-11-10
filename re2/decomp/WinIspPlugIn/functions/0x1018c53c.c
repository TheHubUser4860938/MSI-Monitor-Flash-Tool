// rea decompile_all
// name: Makpat
// address: 0x1018c53c
// body: available
// range: 0x1018c53c-0x1018c585 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: void __thiscall std::_Mpunct<unsigned short>::_Makpat(struct std::money_base::pattern
   &,unsigned int,unsigned int,unsigned int)
    private: void __thiscall std::_Mpunct<wchar_t>::_Makpat(struct std::money_base::pattern
   &,unsigned int,unsigned int,unsigned int)
   
   Library: Visual Studio 2015 Release */

void Makpat(void *param_1,uint param_2,uint param_3,uint param_4)

{
  char *_Src;
  int in_ECX;
  
  if ((((*(char *)(in_ECX + 0x28) == '\0') && (param_2 < 3)) && (param_3 < 2)) && (param_4 < 5)) {
    _Src = "+v$x+v$xv$+xv+$xv$+x+$vx+$vx$v+x+$vx$+vx+v $+v $v $+v +$v $++$ v+$ v$ v++$ v$+ v+xv$+ v$v$ +v+ $v$ ++x$v+ $v$v ++ $v$ +v"
           + ((param_3 + param_2 * 2) * 5 + param_4) * 4;
  }
  else {
    _Src = "$+xv";
  }
  _memcpy_s(param_1,4,_Src,4);
  return;
}

