// rea decompile_all
// name: FUN_00593c72
// address: 0x593c72
// body: available
// range: 0x593c72-0x593cc1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00593c72(void)

{
  int iVar1;
  LPWCH pWVar2;
  wchar_t *pwVar3;
  int iVar4;
  
  pWVar2 = GetEnvironmentStringsW();
  if (pWVar2 == (LPWCH)0x0) {
    iVar4 = 0;
  }
  else {
    pwVar3 = find_end_of_double_null_terminated_sequence(pWVar2);
    iVar1 = ((int)pwVar3 - (int)pWVar2 >> 1) * 2;
    iVar4 = __malloc_base(iVar1);
    if (iVar4 != 0) {
      FUN_005734b0(iVar4,pWVar2,iVar1);
    }
    FID_conflict__free((void *)0x0);
    FreeEnvironmentStringsW(pWVar2);
  }
  return iVar4;
}

