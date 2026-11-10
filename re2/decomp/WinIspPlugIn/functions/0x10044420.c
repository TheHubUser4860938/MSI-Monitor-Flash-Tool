// rea decompile_all
// name: FUN_10044420
// address: 0x10044420
// body: available
// range: 0x10044420-0x100444b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10044420(ushort param_1)

{
  wint_t wVar1;
  uint uVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar3;
  FILE *_File;
  int in_ECX;
  
  uVar2 = **(uint **)(in_ECX + 0x1c);
  if (((uVar2 != 0) && (**(uint **)(in_ECX + 0xc) < uVar2)) &&
     ((param_1 == 0xffff || (*(ushort *)(uVar2 - 2) == param_1)))) {
    **(int **)(in_ECX + 0x2c) = **(int **)(in_ECX + 0x2c) + 1;
    **(int **)(in_ECX + 0x1c) = **(int **)(in_ECX + 0x1c) + -2;
    uVar2 = (uint)param_1;
    if (param_1 == 0xffff) {
      uVar2 = 0;
    }
    return uVar2;
  }
  _File = *(FILE **)(in_ECX + 0x4c);
  if ((_File != (FILE *)0x0) && (param_1 != 0xffff)) {
    if (*(int *)(in_ECX + 0x38) == 0) {
      wVar1 = _ungetwc(param_1,_File);
      uVar3 = extraout_var;
      if (wVar1 != 0xffff) goto LAB_1004449d;
    }
    _File = *(FILE **)(in_ECX + 0x1c);
    if ((ushort *)_File->_ptr != (ushort *)(in_ECX + 0x3c)) {
      *(ushort *)(in_ECX + 0x3c) = param_1;
      Set_back();
      uVar3 = extraout_var_00;
LAB_1004449d:
      return CONCAT22(uVar3,param_1);
    }
  }
  return CONCAT22((short)((uint)_File >> 0x10),0xffff);
}

