// rea decompile_all
// name: FUN_101aebf8
// address: 0x101aebf8
// body: available
// range: 0x101aebf8-0x101af2f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101af2f5 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_101aebf8(void)

{
  short *psVar1;
  wchar_t *pwVar2;
  char cVar3;
  short sVar4;
  code *pcVar5;
  void *pvVar6;
  errno_t eVar7;
  char *pcVar8;
  short *psVar9;
  int iVar10;
  undefined4 *puVar11;
  char *pcVar12;
  char *pcVar13;
  int local_2c;
  int local_28;
  char local_20;
  uint local_1c;
  int local_18;
  char *local_14;
  void *local_10;
  int local_c;
  undefined4 *local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_2c,(__crt_locale_pointers *)0x0);
  local_14 = (char *)0x0;
  pcVar12 = (char *)0x164;
  local_c = 0;
  local_8 = *(undefined4 **)(local_28 + 0x9c);
  local_10 = (void *)0x0;
  do {
    pcVar13 = pcVar12;
    if (local_c == 1) {
      pvVar6 = (void *)__malloc_base(pcVar12);
      local_10 = (void *)0x0;
      if (pvVar6 == (void *)0x0) break;
      local_10 = pvVar6;
      _memset(pvVar6,0,(size_t)pcVar12);
      pcVar13 = (char *)0x164;
      local_14 = pcVar12;
    }
    local_18 = (int)local_10 - (int)local_8;
    local_1c = 0;
    puVar11 = local_8;
    do {
      if (local_c == 1) {
        *(char **)(local_18 + (int)puVar11) = (char *)((int)local_10 + (int)pcVar13);
        eVar7 = _strcpy_s((char *)((int)local_10 + (int)pcVar13),(int)local_14 - (int)pcVar13,
                          (char *)*puVar11);
        if (eVar7 != 0) goto LAB_101af2eb;
      }
      pcVar8 = (char *)*puVar11;
      pcVar12 = pcVar8 + 1;
      do {
        cVar3 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar3 != '\0');
      pcVar13 = pcVar8 + (int)(pcVar13 + (1 - (int)pcVar12));
      local_1c = local_1c + 1;
      puVar11 = puVar11 + 1;
    } while (local_1c < 7);
    local_1c = 0;
    puVar11 = local_8 + 7;
    do {
      if (local_c == 1) {
        *(char **)((int)puVar11 + local_18) = (char *)((int)local_10 + (int)pcVar13);
        eVar7 = _strcpy_s((char *)((int)local_10 + (int)pcVar13),(int)local_14 - (int)pcVar13,
                          (char *)*puVar11);
        if (eVar7 != 0) goto LAB_101af2eb;
      }
      pcVar8 = (char *)*puVar11;
      pcVar12 = pcVar8 + 1;
      do {
        cVar3 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar3 != '\0');
      pcVar13 = pcVar8 + (int)(pcVar13 + (1 - (int)pcVar12));
      puVar11 = puVar11 + 1;
      local_1c = local_1c + 1;
    } while (local_1c < 7);
    local_1c = 0;
    puVar11 = local_8 + 0xe;
    do {
      if (local_c == 1) {
        *(char **)((int)puVar11 + local_18) = (char *)((int)local_10 + (int)pcVar13);
        eVar7 = _strcpy_s((char *)((int)local_10 + (int)pcVar13),(int)local_14 - (int)pcVar13,
                          (char *)*puVar11);
        if (eVar7 != 0) goto LAB_101af2eb;
      }
      pcVar8 = (char *)*puVar11;
      pcVar12 = pcVar8 + 1;
      do {
        cVar3 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar3 != '\0');
      pcVar13 = pcVar8 + (int)(pcVar13 + (1 - (int)pcVar12));
      puVar11 = puVar11 + 1;
      local_1c = local_1c + 1;
    } while (local_1c < 0xc);
    local_1c = 0;
    puVar11 = local_8 + 0x1a;
    do {
      if (local_c == 1) {
        *(char **)((int)puVar11 + local_18) = (char *)((int)local_10 + (int)pcVar13);
        eVar7 = _strcpy_s((char *)((int)local_10 + (int)pcVar13),(int)local_14 - (int)pcVar13,
                          (char *)*puVar11);
        if (eVar7 != 0) goto LAB_101af2eb;
      }
      pcVar8 = (char *)*puVar11;
      pcVar12 = pcVar8 + 1;
      do {
        cVar3 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar3 != '\0');
      pcVar13 = pcVar8 + (int)(pcVar13 + (1 - (int)pcVar12));
      puVar11 = puVar11 + 1;
      local_1c = local_1c + 1;
    } while (local_1c < 0xc);
    local_1c = 0;
    puVar11 = local_8 + 0x26;
    do {
      if (local_c == 1) {
        *(char **)((int)puVar11 + local_18) = (char *)((int)local_10 + (int)pcVar13);
        eVar7 = _strcpy_s((char *)((int)local_10 + (int)pcVar13),(int)local_14 - (int)pcVar13,
                          (char *)*puVar11);
        if (eVar7 != 0) goto LAB_101af2eb;
      }
      pvVar6 = local_10;
      pcVar8 = (char *)*puVar11;
      pcVar12 = pcVar8 + 1;
      do {
        cVar3 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar3 != '\0');
      pcVar13 = pcVar8 + (int)(pcVar13 + (1 - (int)pcVar12));
      puVar11 = puVar11 + 1;
      local_1c = local_1c + 1;
    } while (local_1c < 2);
    if (local_c == 1) {
      *(char **)((int)local_10 + 0xa0) = (char *)((int)local_10 + (int)pcVar13);
      eVar7 = _strcpy_s((char *)((int)local_10 + (int)pcVar13),(int)local_14 - (int)pcVar13,
                        (char *)local_8[0x28]);
      if (eVar7 != 0) goto LAB_101af2eb;
    }
    pcVar8 = (char *)local_8[0x28];
    pcVar12 = pcVar8 + 1;
    do {
      cVar3 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar3 != '\0');
    pcVar8 = pcVar8 + (int)(pcVar13 + (1 - (int)pcVar12));
    if (local_c == 1) {
      *(char **)((int)pvVar6 + 0xa4) = (char *)((int)pvVar6 + (int)pcVar8);
      eVar7 = _strcpy_s((char *)((int)pvVar6 + (int)pcVar8),(int)local_14 - (int)pcVar8,
                        (char *)local_8[0x29]);
      if (eVar7 != 0) goto LAB_101af2eb;
    }
    pcVar13 = (char *)local_8[0x29];
    pcVar12 = pcVar13 + 1;
    do {
      cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar3 != '\0');
    pcVar13 = pcVar13 + (int)(pcVar8 + (1 - (int)pcVar12));
    if (local_c == 1) {
      *(char **)((int)pvVar6 + 0xa8) = (char *)((int)pvVar6 + (int)pcVar13);
      eVar7 = _strcpy_s((char *)((int)pvVar6 + (int)pcVar13),(int)local_14 - (int)pcVar13,
                        (char *)local_8[0x2a]);
      if (eVar7 != 0) goto LAB_101af2eb;
    }
    pcVar12 = (char *)local_8[0x2a];
    pcVar8 = pcVar12 + 1;
    do {
      cVar3 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar3 != '\0');
    pcVar12 = pcVar12 + (int)(pcVar13 + (1 - (int)pcVar8));
    if (local_c == 1) {
      *(undefined4 *)((int)local_10 + 0xac) = local_8[0x2b];
      *(undefined4 *)((int)local_10 + 0xb0) = 0;
    }
    local_1c = 0;
    puVar11 = local_8 + 0x2d;
    pvVar6 = local_10;
    iVar10 = local_c;
    do {
      for (; ((uint)pcVar12 & 1) != 0; pcVar12 = pcVar12 + 1) {
      }
      if (iVar10 == 1) {
        pwVar2 = (wchar_t *)((int)pvVar6 + ((uint)pcVar12 & 0xfffffffe));
        *(wchar_t **)((int)puVar11 + local_18) = pwVar2;
        eVar7 = _wcscpy_s(pwVar2,(uint)((int)local_14 - (int)pcVar12) >> 1,(wchar_t *)*puVar11);
        if (eVar7 != 0) goto LAB_101af2eb;
      }
      psVar9 = (short *)*puVar11;
      psVar1 = psVar9 + 1;
      do {
        sVar4 = *psVar9;
        psVar9 = psVar9 + 1;
      } while (sVar4 != 0);
      puVar11 = puVar11 + 1;
      pcVar12 = pcVar12 + ((int)psVar9 - (int)psVar1 >> 1) * 2 + 2;
      local_1c = local_1c + 1;
      pvVar6 = local_10;
      iVar10 = local_c;
    } while (local_1c < 7);
    local_1c = 0;
    puVar11 = local_8 + 0x34;
    do {
      for (; ((uint)pcVar12 & 1) != 0; pcVar12 = pcVar12 + 1) {
      }
      if (local_c == 1) {
        pwVar2 = (wchar_t *)((int)local_10 + ((uint)pcVar12 & 0xfffffffe));
        *(wchar_t **)((int)puVar11 + local_18) = pwVar2;
        eVar7 = _wcscpy_s(pwVar2,(uint)((int)local_14 - (int)pcVar12) >> 1,(wchar_t *)*puVar11);
        if (eVar7 != 0) goto LAB_101af2eb;
      }
      psVar9 = (short *)*puVar11;
      psVar1 = psVar9 + 1;
      do {
        sVar4 = *psVar9;
        psVar9 = psVar9 + 1;
      } while (sVar4 != 0);
      puVar11 = puVar11 + 1;
      pcVar12 = pcVar12 + ((int)psVar9 - (int)psVar1 >> 1) * 2 + 2;
      local_1c = local_1c + 1;
    } while (local_1c < 7);
    local_1c = 0;
    puVar11 = local_8 + 0x3b;
    do {
      for (; ((uint)pcVar12 & 1) != 0; pcVar12 = pcVar12 + 1) {
      }
      if (local_c == 1) {
        pwVar2 = (wchar_t *)((int)local_10 + ((uint)pcVar12 & 0xfffffffe));
        *(wchar_t **)((int)puVar11 + local_18) = pwVar2;
        eVar7 = _wcscpy_s(pwVar2,(uint)((int)local_14 - (int)pcVar12) >> 1,(wchar_t *)*puVar11);
        if (eVar7 != 0) goto LAB_101af2eb;
      }
      psVar9 = (short *)*puVar11;
      psVar1 = psVar9 + 1;
      do {
        sVar4 = *psVar9;
        psVar9 = psVar9 + 1;
      } while (sVar4 != 0);
      puVar11 = puVar11 + 1;
      pcVar12 = pcVar12 + ((int)psVar9 - (int)psVar1 >> 1) * 2 + 2;
      local_1c = local_1c + 1;
    } while (local_1c < 0xc);
    local_1c = 0;
    puVar11 = local_8 + 0x47;
    do {
      for (; ((uint)pcVar12 & 1) != 0; pcVar12 = pcVar12 + 1) {
      }
      if (local_c == 1) {
        pwVar2 = (wchar_t *)((int)local_10 + ((uint)pcVar12 & 0xfffffffe));
        *(wchar_t **)((int)puVar11 + local_18) = pwVar2;
        eVar7 = _wcscpy_s(pwVar2,(uint)((int)local_14 - (int)pcVar12) >> 1,(wchar_t *)*puVar11);
        if (eVar7 != 0) goto LAB_101af2eb;
      }
      psVar9 = (short *)*puVar11;
      psVar1 = psVar9 + 1;
      do {
        sVar4 = *psVar9;
        psVar9 = psVar9 + 1;
      } while (sVar4 != 0);
      puVar11 = puVar11 + 1;
      pcVar12 = pcVar12 + ((int)psVar9 - (int)psVar1 >> 1) * 2 + 2;
      local_1c = local_1c + 1;
    } while (local_1c < 0xc);
    local_1c = 0;
    puVar11 = local_8 + 0x53;
    do {
      for (; ((uint)pcVar12 & 1) != 0; pcVar12 = pcVar12 + 1) {
      }
      if (local_c == 1) {
        pwVar2 = (wchar_t *)((int)local_10 + ((uint)pcVar12 & 0xfffffffe));
        *(wchar_t **)((int)puVar11 + local_18) = pwVar2;
        eVar7 = _wcscpy_s(pwVar2,(uint)((int)local_14 - (int)pcVar12) >> 1,(wchar_t *)*puVar11);
        if (eVar7 != 0) goto LAB_101af2eb;
      }
      pvVar6 = local_10;
      psVar9 = (short *)*puVar11;
      psVar1 = psVar9 + 1;
      do {
        sVar4 = *psVar9;
        psVar9 = psVar9 + 1;
      } while (sVar4 != 0);
      puVar11 = puVar11 + 1;
      pcVar12 = pcVar12 + ((int)psVar9 - (int)psVar1 >> 1) * 2 + 2;
      local_1c = local_1c + 1;
    } while (local_1c < 2);
    for (; ((uint)pcVar12 & 1) != 0; pcVar12 = pcVar12 + 1) {
    }
    if (local_c == 1) {
      pwVar2 = (wchar_t *)((int)local_10 + ((uint)pcVar12 & 0xfffffffe));
      *(wchar_t **)((int)local_10 + 0x154) = pwVar2;
      eVar7 = _wcscpy_s(pwVar2,(uint)((int)local_14 - (int)pcVar12) >> 1,(wchar_t *)local_8[0x55]);
      if (eVar7 != 0) goto LAB_101af2eb;
    }
    psVar9 = (short *)local_8[0x55];
    psVar1 = psVar9 + 1;
    do {
      sVar4 = *psVar9;
      psVar9 = psVar9 + 1;
    } while (sVar4 != 0);
    for (pcVar12 = pcVar12 + ((int)psVar9 - (int)psVar1 >> 1) * 2 + 2; ((uint)pcVar12 & 1) != 0;
        pcVar12 = pcVar12 + 1) {
    }
    if (local_c == 1) {
      pwVar2 = (wchar_t *)((int)pvVar6 + ((uint)pcVar12 & 0xfffffffe));
      *(wchar_t **)((int)pvVar6 + 0x158) = pwVar2;
      eVar7 = _wcscpy_s(pwVar2,(uint)((int)local_14 - (int)pcVar12) >> 1,(wchar_t *)local_8[0x56]);
      if (eVar7 != 0) goto LAB_101af2eb;
    }
    psVar9 = (short *)local_8[0x56];
    psVar1 = psVar9 + 1;
    do {
      sVar4 = *psVar9;
      psVar9 = psVar9 + 1;
    } while (sVar4 != 0);
    for (pcVar12 = pcVar12 + ((int)psVar9 - (int)psVar1 >> 1) * 2 + 2; ((uint)pcVar12 & 1) != 0;
        pcVar12 = pcVar12 + 1) {
    }
    if (local_c == 1) {
      pwVar2 = (wchar_t *)((int)pvVar6 + ((uint)pcVar12 & 0xfffffffe));
      *(wchar_t **)((int)pvVar6 + 0x15c) = pwVar2;
      eVar7 = _wcscpy_s(pwVar2,(uint)((int)local_14 - (int)pcVar12) >> 1,(wchar_t *)local_8[0x57]);
      if (eVar7 != 0) goto LAB_101af2eb;
    }
    psVar9 = (short *)local_8[0x57];
    psVar1 = psVar9 + 1;
    do {
      sVar4 = *psVar9;
      psVar9 = psVar9 + 1;
    } while (sVar4 != 0);
    for (pcVar12 = pcVar12 + ((int)psVar9 - (int)psVar1 >> 1) * 2 + 2; ((uint)pcVar12 & 1) != 0;
        pcVar12 = pcVar12 + 1) {
    }
    if (local_c == 1) {
      pwVar2 = (wchar_t *)((int)pvVar6 + ((uint)pcVar12 & 0xfffffffe));
      *(wchar_t **)((int)pvVar6 + 0x160) = pwVar2;
      eVar7 = _wcscpy_s(pwVar2,(uint)((int)local_14 - (int)pcVar12) >> 1,(wchar_t *)local_8[0x58]);
      if (eVar7 != 0) {
LAB_101af2eb:
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        pcVar5 = (code *)swi(3);
        pvVar6 = (void *)(*pcVar5)();
        return pvVar6;
      }
    }
    psVar9 = (short *)local_8[0x58];
    psVar1 = psVar9 + 1;
    do {
      sVar4 = *psVar9;
      psVar9 = psVar9 + 1;
    } while (sVar4 != 0);
    local_c = local_c + 1;
    pcVar12 = pcVar12 + (((int)psVar9 - (int)psVar1 >> 1) + 1) * 2;
  } while (local_c < 2);
  if (local_20 != '\0') {
    *(uint *)(local_2c + 0x350) = *(uint *)(local_2c + 0x350) & 0xfffffffd;
  }
  return local_10;
}

