// rea decompile_all
// name: FUN_005889c6
// address: 0x5889c6
// body: available
// range: 0x5889c6-0x588a96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x588a96 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_005889c6(char *param_1)

{
  code *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  char *_Dst;
  errno_t eVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *local_8;
  
  iVar6 = 0;
  cVar2 = *param_1;
  pcVar5 = param_1;
  while (cVar2 != '\0') {
    if (cVar2 != '=') {
      iVar6 = iVar6 + 1;
    }
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    cVar2 = *pcVar5;
  }
  puVar3 = (undefined4 *)__calloc_base(iVar6 + 1,4);
  local_8 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
LAB_00588a77:
    puVar3 = (undefined4 *)0x0;
  }
  else {
    for (; *param_1 != '\0'; param_1 = param_1 + (int)pcVar5) {
      pcVar5 = param_1;
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      pcVar5 = pcVar5 + (1 - (int)(param_1 + 1));
      if (*param_1 != '=') {
        _Dst = (char *)__calloc_base(pcVar5,1);
        if (_Dst == (char *)0x0) {
          free_environment<>(puVar3);
          FID_conflict__free((void *)0x0);
          goto LAB_00588a77;
        }
        eVar4 = _strcpy_s(_Dst,(rsize_t)pcVar5,param_1);
        if (eVar4 != 0) {
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          pcVar1 = (code *)swi(3);
          puVar3 = (undefined4 *)(*pcVar1)();
          return puVar3;
        }
        *local_8 = _Dst;
        local_8 = local_8 + 1;
        FID_conflict__free((void *)0x0);
      }
    }
  }
  FID_conflict__free((void *)0x0);
  return puVar3;
}

