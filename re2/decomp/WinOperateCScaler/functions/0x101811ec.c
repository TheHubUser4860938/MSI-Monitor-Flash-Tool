// rea decompile_all
// name: FUN_101811ec
// address: 0x101811ec
// body: available
// range: 0x101811ec-0x10181301 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10181301 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_101811ec(__crt_locale_pointers *param_1)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  errno_t eVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int iVar10;
  int local_1c;
  int local_18;
  char local_10;
  char *local_c;
  undefined4 *local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,param_1);
  pcVar8 = (char *)0x0;
  iVar10 = 0xc;
  local_8 = (undefined4 *)(*(int *)(local_18 + 0x9c) + 0x68);
  puVar9 = local_8;
  do {
    pcVar5 = (char *)puVar9[-0xc];
    pcVar3 = pcVar5 + 1;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    pcVar7 = (char *)*puVar9;
    local_c = pcVar7 + 1;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    puVar9 = puVar9 + 1;
    pcVar8 = pcVar5 + (int)(pcVar7 + (int)(pcVar8 + (-(int)local_c - (int)pcVar3) + 2));
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  pcVar3 = (char *)__malloc_base(pcVar8 + 1);
  if (pcVar3 != (char *)0x0) {
    local_c = (char *)0x0;
    pcVar5 = pcVar3;
    do {
      *pcVar5 = ':';
      pcVar7 = pcVar5 + 1;
      eVar4 = _strcpy_s(pcVar7,(rsize_t)(pcVar3 + (int)(pcVar8 + (1 - (int)pcVar7))),
                        (char *)local_8[-0xc]);
      if (eVar4 != 0) {
LAB_101812f5:
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        pcVar2 = (code *)swi(3);
        pcVar8 = (char *)(*pcVar2)();
        return pcVar8;
      }
      pcVar6 = pcVar7;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + ((int)pcVar6 - (int)(pcVar5 + 2));
      *pcVar7 = ':';
      pcVar5 = pcVar7 + 1;
      eVar4 = _strcpy_s(pcVar5,(rsize_t)(pcVar3 + (int)(pcVar8 + (1 - (int)pcVar5))),
                        (char *)*local_8);
      if (eVar4 != 0) goto LAB_101812f5;
      pcVar6 = pcVar5;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      pcVar5 = pcVar5 + ((int)pcVar6 - (int)(pcVar7 + 2));
      local_8 = local_8 + 1;
      local_c = local_c + 1;
    } while (local_c < (char *)0xc);
    *pcVar5 = '\0';
  }
  FID_conflict__free((void *)0x0);
  if (local_10 != '\0') {
    *(uint *)(local_1c + 0x350) = *(uint *)(local_1c + 0x350) & 0xfffffffd;
  }
  return pcVar3;
}

