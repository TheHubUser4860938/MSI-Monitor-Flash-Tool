// rea decompile_all
// name: FUN_10016300
// address: 0x10016300
// body: available
// range: 0x10016300-0x100163ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10016300(mbstate_t *param_1,int param_2,int param_3,int *param_4,int param_5,
                 wchar_t *param_6,int *param_7)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int in_ECX;
  bool bVar4;
  
  *param_4 = param_2;
  *param_7 = param_5;
  bVar4 = *param_4 != param_3;
  if (*param_4 != param_3) {
    while ((wchar_t *)*param_7 != param_6) {
      pcVar2 = (char *)__Mbrtowc((wchar_t *)*param_7,(char *)*param_4,param_3 - *param_4,param_1,
                                 (_Cvtvec *)(in_ECX + 8));
      if (pcVar2 == (char *)0xfffffffe) {
        *param_4 = param_3;
        return bVar4;
      }
      if (pcVar2 == (char *)0xffffffff) {
        return (bool)2;
      }
      if ((pcVar2 == (char *)0x0) && (*(short *)*param_7 == 0)) {
        pcVar2 = (char *)*param_4;
        pcVar3 = pcVar2 + 1;
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        pcVar2 = pcVar2 + (1 - (int)pcVar3);
      }
      pcVar3 = (char *)0x0;
      if (pcVar2 != (char *)0xfffffffd) {
        pcVar3 = pcVar2;
      }
      bVar4 = false;
      *param_4 = (int)(pcVar3 + *param_4);
      *param_7 = *param_7 + 2;
      if (*param_4 == param_3) {
        return false;
      }
    }
  }
  return bVar4;
}

