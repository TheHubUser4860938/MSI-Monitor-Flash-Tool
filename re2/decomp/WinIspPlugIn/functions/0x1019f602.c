// rea decompile_all
// name: FUN_1019f602
// address: 0x1019f602
// body: available
// range: 0x1019f602-0x1019f709 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1019f709 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_1019f602(__crt_locale_pointers *param_1)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  errno_t eVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  int local_1c;
  int local_18;
  char local_10;
  char *local_c;
  int local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,param_1);
  local_c = (char *)0x0;
  uVar7 = 0;
  local_8 = *(int *)(local_18 + 0x9c);
  do {
    pcVar6 = *(char **)(local_8 + uVar7 * 4);
    pcVar3 = pcVar6 + 1;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    pcVar5 = *(char **)(local_8 + 0x1c + uVar7 * 4);
    pcVar8 = pcVar5 + 1;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    local_c = pcVar6 + (int)(pcVar5 + (int)(local_c + (-(int)pcVar8 - (int)pcVar3) + 2));
    uVar7 = uVar7 + 1;
  } while (uVar7 < 7);
  pcVar3 = (char *)__malloc_base(local_c + 1);
  if (pcVar3 != (char *)0x0) {
    uVar7 = 0;
    pcVar6 = pcVar3;
    do {
      *pcVar6 = ':';
      pcVar8 = pcVar6 + 1;
      eVar4 = _strcpy_s(pcVar8,(rsize_t)(pcVar3 + (int)(local_c + (1 - (int)pcVar8))),
                        *(char **)(local_8 + uVar7 * 4));
      if (eVar4 != 0) {
LAB_1019f6fd:
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        pcVar2 = (code *)swi(3);
        pcVar3 = (char *)(*pcVar2)();
        return pcVar3;
      }
      pcVar5 = pcVar8;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pcVar8 = pcVar8 + ((int)pcVar5 - (int)(pcVar6 + 2));
      *pcVar8 = ':';
      pcVar6 = pcVar8 + 1;
      eVar4 = _strcpy_s(pcVar6,(rsize_t)(pcVar3 + (int)(local_c + (1 - (int)pcVar6))),
                        *(char **)(local_8 + 0x1c + uVar7 * 4));
      if (eVar4 != 0) goto LAB_1019f6fd;
      pcVar5 = pcVar6;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + ((int)pcVar5 - (int)(pcVar8 + 2));
      uVar7 = uVar7 + 1;
    } while (uVar7 < 7);
    *pcVar6 = '\0';
  }
  FID_conflict__free((void *)0x0);
  if (local_10 != '\0') {
    *(uint *)(local_1c + 0x350) = *(uint *)(local_1c + 0x350) & 0xfffffffd;
  }
  return pcVar3;
}

