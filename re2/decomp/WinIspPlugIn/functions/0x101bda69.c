// rea decompile_all
// name: _LangCountryEnumProc@4
// address: 0x101bda69
// body: available
// range: 0x101bda69-0x101bdcb8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _LangCountryEnumProc@4
   
   Library: Visual Studio 2015 Release */

void _LangCountryEnumProc_4(undefined4 param_1)

{
  short *psVar1;
  short sVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  LCID Locale;
  short *psVar7;
  undefined8 uVar8;
  WCHAR local_f8 [120];
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  iVar5 = FUN_101af88f();
  iVar6 = FUN_101af88f();
  puVar3 = *(uint **)(iVar6 + 0x34c);
  Locale = _LcidFromHexString(param_1);
  iVar6 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(iVar5 + 100) != 0) & 0xfffff005) + 0x1002,local_f8
                         ,0x78);
  if (iVar6 == 0) {
LAB_101bdac7:
    *puVar3 = 0;
    goto LAB_101bdca6;
  }
  iVar6 = __wcsicmp(*(wchar_t **)(iVar5 + 0x54),local_f8);
  if (iVar6 == 0) {
    iVar6 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(iVar5 + 0x60) != 0) & 0xfffff002) + 0x1001,
                           local_f8,0x78);
    if (iVar6 == 0) goto LAB_101bdac7;
    iVar6 = __wcsicmp(*(wchar_t **)(iVar5 + 0x50),local_f8);
    if (iVar6 == 0) {
      *puVar3 = *puVar3 | 0x304;
      puVar3[1] = Locale;
LAB_101bdb9c:
      puVar3[2] = Locale;
    }
    else if ((*puVar3 & 2) == 0) {
      if ((*(int *)(iVar5 + 0x5c) == 0) ||
         (iVar6 = __wcsnicmp(*(wchar_t **)(iVar5 + 0x50),local_f8,*(size_t *)(iVar5 + 0x5c)),
         iVar6 != 0)) {
        if ((*puVar3 & 1) == 0) {
          uVar8 = _TestDefaultCountry(Locale);
          if ((int)uVar8 != 0) {
            *puVar3 = (uint)((ulonglong)uVar8 >> 0x20) | 1;
            goto LAB_101bdb9c;
          }
        }
      }
      else {
        *puVar3 = *puVar3 | 2;
        puVar3[2] = Locale;
        psVar7 = *(short **)(iVar5 + 0x50);
        psVar1 = psVar7 + 1;
        do {
          sVar2 = *psVar7;
          psVar7 = psVar7 + 1;
        } while (sVar2 != 0);
        if ((int)psVar7 - (int)psVar1 >> 1 == *(int *)(iVar5 + 0x5c)) {
          puVar3[1] = Locale;
        }
      }
    }
  }
  if ((*puVar3 & 0x300) == 0x300) goto LAB_101bdca6;
  iVar6 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(iVar5 + 0x60) != 0) & 0xfffff002) + 0x1001,
                         local_f8,0x78);
  if (iVar6 == 0) {
    *puVar3 = 0;
    goto LAB_101bdca6;
  }
  iVar6 = __wcsicmp(*(wchar_t **)(iVar5 + 0x50),local_f8);
  if (iVar6 == 0) {
    *puVar3 = *puVar3 | 0x200;
    if ((*(int *)(iVar5 + 0x60) == 0) && (*(int *)(iVar5 + 0x5c) != 0)) {
      psVar7 = *(short **)(iVar5 + 0x50);
      psVar1 = psVar7 + 1;
      do {
        sVar2 = *psVar7;
        psVar7 = psVar7 + 1;
      } while (sVar2 != 0);
      if ((int)psVar7 - (int)psVar1 >> 1 != *(int *)(iVar5 + 0x5c)) goto LAB_101bdc01;
      iVar5 = _TestDefaultLanguage(Locale,1,puVar3);
      if (iVar5 == 0) goto LAB_101bdca6;
      *puVar3 = *puVar3 | 0x100;
    }
    else {
LAB_101bdc01:
      *puVar3 = *puVar3 | 0x100;
    }
    uVar4 = puVar3[1];
  }
  else {
    if ((((*(int *)(iVar5 + 0x60) != 0) || (*(int *)(iVar5 + 0x5c) == 0)) ||
        (iVar5 = __wcsicmp(*(wchar_t **)(iVar5 + 0x50),local_f8), iVar5 != 0)) ||
       (iVar5 = _TestDefaultLanguage(Locale,0,puVar3), iVar5 == 0)) goto LAB_101bdca6;
    *puVar3 = *puVar3 | 0x100;
    uVar4 = puVar3[1];
  }
  if (uVar4 == 0) {
    puVar3[1] = Locale;
  }
LAB_101bdca6:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

