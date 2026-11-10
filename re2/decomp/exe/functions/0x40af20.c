// rea decompile_all
// name: FUN_0040af20
// address: 0x40af20
// body: available
// range: 0x40af20-0x40afa6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0040af20(uint param_1)

{
  uint uVar1;
  int iVar2;
  basic_filebuf<char,std::char_traits<char>_> *in_ECX;
  
  uVar1 = **(uint **)(in_ECX + 0x1c);
  if (((uVar1 != 0) && (**(uint **)(in_ECX + 0xc) < uVar1)) &&
     ((param_1 == 0xffffffff || (*(byte *)(uVar1 - 1) == param_1)))) {
    **(int **)(in_ECX + 0x2c) = **(int **)(in_ECX + 0x2c) + 1;
    **(int **)(in_ECX + 0x1c) = **(int **)(in_ECX + 0x1c) + -1;
    uVar1 = 0;
    if (param_1 != 0xffffffff) {
      uVar1 = param_1;
    }
    return uVar1;
  }
  if ((*(FILE **)(in_ECX + 0x4c) != (FILE *)0x0) && (param_1 != 0xffffffff)) {
    if ((*(int *)(in_ECX + 0x38) == 0) &&
       (iVar2 = _ungetc(param_1 & 0xff,*(FILE **)(in_ECX + 0x4c)), iVar2 != -1)) {
      return param_1;
    }
    if ((basic_filebuf<char,std::char_traits<char>_> *)**(int **)(in_ECX + 0x1c) != in_ECX + 0x3c) {
      in_ECX[0x3c] = SUB41(param_1,0);
      std::basic_filebuf<char,std::char_traits<char>_>::_Set_back(in_ECX);
      return param_1;
    }
  }
  return 0xffffffff;
}

