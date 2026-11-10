// rea decompile_all
// name: FUN_1016be2c
// address: 0x1016be2c
// body: available
// range: 0x1016be2c-0x1016bed3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1016bed3 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1016be2c(undefined4 *param_1,char *param_2,char *param_3,char *param_4)

{
  char cVar1;
  code *pcVar2;
  int *piVar3;
  char *_Src;
  errno_t eVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_1014f4c6();
    return 0x16;
  }
  *param_1 = 0;
  if (param_2 == (char *)0x0) {
    if (param_3 == (char *)0x0) goto LAB_1016be60;
  }
  else if (param_3 != (char *)0x0) {
LAB_1016be60:
    if (param_2 != (char *)0x0) {
      *param_2 = '\0';
    }
    _Src = common_getenv_nolock<char>(param_4);
    if (_Src != (char *)0x0) {
      pcVar6 = _Src;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      *param_1 = pcVar6 + (1 - (int)(_Src + 1));
      if (param_3 != (char *)0x0) {
        if (param_3 < pcVar6 + (1 - (int)(_Src + 1))) {
          return 0x22;
        }
        eVar4 = _strcpy_s(param_2,(rsize_t)param_3,_Src);
        if (eVar4 != 0) {
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return uVar5;
        }
      }
    }
    return 0;
  }
  piVar3 = __errno();
  *piVar3 = 0x16;
  FUN_1014f4c6();
  return 0x16;
}

