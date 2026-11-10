// rea decompile_all
// name: FUN_00584ad6
// address: 0x584ad6
// body: available
// range: 0x584ad6-0x584b5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x584b5d with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_00584ad6(undefined1 *param_1,int param_2,int *param_3,rsize_t *param_4,wchar_t param_5)

{
  code *pcVar1;
  errno_t eVar2;
  undefined4 uVar3;
  int local_8;
  
  local_8 = 0;
  if (param_2 == -1) {
    eVar2 = _wctomb_s(&local_8,(char *)*param_3,5,param_5);
    if (eVar2 == 0) {
      *param_3 = *param_3 + local_8;
      *param_4 = *param_4 - local_8;
    }
    else if ((eVar2 == 0x16) || (eVar2 == 0x22)) {
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  else {
    eVar2 = _wctomb_s(&local_8,(char *)*param_3,*param_4,param_5);
    if (eVar2 == 0x22) {
      *param_1 = 0;
      return 0;
    }
    if (0 < local_8) {
      *param_3 = *param_3 + local_8;
      *param_4 = *param_4 - local_8;
    }
  }
  return 1;
}

