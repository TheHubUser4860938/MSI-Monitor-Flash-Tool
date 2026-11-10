// rea decompile_all
// name: FUN_10040510
// address: 0x10040510
// body: available
// range: 0x10040510-0x10040599 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10040510(mbstate_t *param_1,char *param_2,char *param_3,uint param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int in_ECX;
  char *pcVar5;
  uint uVar6;
  mbstate_t local_10;
  mbstate_t local_c;
  int local_8;
  
  pcVar2 = param_3;
  local_10 = *param_1;
  uVar6 = 0;
  local_c = param_1[1];
  pcVar5 = param_2;
  local_8 = in_ECX;
  if (param_4 != 0) {
    do {
      if (pcVar5 == pcVar2) {
        return uVar6;
      }
      pcVar3 = (char *)__Mbrtowc((wchar_t *)&param_1,pcVar5,(int)pcVar2 - (int)pcVar5,&local_10,
                                 (_Cvtvec *)(local_8 + 8));
      if (pcVar3 == (char *)0xfffffffe) {
        return uVar6;
      }
      if (pcVar3 == (char *)0xffffffff) {
        return uVar6;
      }
      if ((pcVar3 == (char *)0x0) && ((wchar_t)param_1 == L'\0')) {
        pcVar3 = pcVar5;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        pcVar3 = pcVar3 + (1 - (int)(pcVar5 + 1));
      }
      pcVar4 = (char *)0x0;
      if (pcVar3 != (char *)0xfffffffd) {
        pcVar4 = pcVar3;
      }
      uVar6 = uVar6 + 1;
      pcVar5 = pcVar5 + (int)pcVar4;
    } while (uVar6 < param_4);
  }
  return uVar6;
}

