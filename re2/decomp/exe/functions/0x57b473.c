// rea decompile_all
// name: thunk_FUN_0057db4f
// address: 0x57b473
// body: available
// range: 0x57b473-0x57b477 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * thunk_FUN_0057db4f(void)

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
  int iStack_2c;
  int iStack_28;
  char cStack_20;
  uint uStack_1c;
  int iStack_18;
  char *pcStack_14;
  void *pvStack_10;
  int iStack_c;
  undefined4 *puStack_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&iStack_2c,(__crt_locale_pointers *)0x0);
  pcStack_14 = (char *)0x0;
  pcVar12 = (char *)0x164;
  iStack_c = 0;
  puStack_8 = *(undefined4 **)(iStack_28 + 0x9c);
  pvStack_10 = (void *)0x0;
  do {
    pcVar13 = pcVar12;
    if (iStack_c == 1) {
      pvVar6 = (void *)__malloc_base(pcVar12);
      pvStack_10 = (void *)0x0;
      if (pvVar6 == (void *)0x0) break;
      pvStack_10 = pvVar6;
      _memset(pvVar6,0,(size_t)pcVar12);
      pcVar13 = (char *)0x164;
      pcStack_14 = pcVar12;
    }
    iStack_18 = (int)pvStack_10 - (int)puStack_8;
    uStack_1c = 0;
    puVar11 = puStack_8;
    do {
      if (iStack_c == 1) {
        *(char **)(iStack_18 + (int)puVar11) = (char *)((int)pvStack_10 + (int)pcVar13);
        eVar7 = _strcpy_s((char *)((int)pvStack_10 + (int)pcVar13),(int)pcStack_14 - (int)pcVar13,
                          (char *)*puVar11);
        if (eVar7 != 0) goto LAB_0057e242;
      }
      pcVar8 = (char *)*puVar11;
      pcVar12 = pcVar8 + 1;
      do {
        cVar3 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar3 != '\0');
      pcVar13 = pcVar8 + (int)(pcVar13 + (1 - (int)pcVar12));
      uStack_1c = uStack_1c + 1;
      puVar11 = puVar11 + 1;
    } while (uStack_1c < 7);
    uStack_1c = 0;
    puVar11 = puStack_8 + 7;
    do {
      if (iStack_c == 1) {
        *(char **)((int)puVar11 + iStack_18) = (char *)((int)pvStack_10 + (int)pcVar13);
        eVar7 = _strcpy_s((char *)((int)pvStack_10 + (int)pcVar13),(int)pcStack_14 - (int)pcVar13,
                          (char *)*puVar11);
        if (eVar7 != 0) goto LAB_0057e242;
      }
      pcVar8 = (char *)*puVar11;
      pcVar12 = pcVar8 + 1;
      do {
        cVar3 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar3 != '\0');
      pcVar13 = pcVar8 + (int)(pcVar13 + (1 - (int)pcVar12));
      puVar11 = puVar11 + 1;
      uStack_1c = uStack_1c + 1;
    } while (uStack_1c < 7);
    uStack_1c = 0;
    puVar11 = puStack_8 + 0xe;
    do {
      if (iStack_c == 1) {
        *(char **)((int)puVar11 + iStack_18) = (char *)((int)pvStack_10 + (int)pcVar13);
        eVar7 = _strcpy_s((char *)((int)pvStack_10 + (int)pcVar13),(int)pcStack_14 - (int)pcVar13,
                          (char *)*puVar11);
        if (eVar7 != 0) goto LAB_0057e242;
      }
      pcVar8 = (char *)*puVar11;
      pcVar12 = pcVar8 + 1;
      do {
        cVar3 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar3 != '\0');
      pcVar13 = pcVar8 + (int)(pcVar13 + (1 - (int)pcVar12));
      puVar11 = puVar11 + 1;
      uStack_1c = uStack_1c + 1;
    } while (uStack_1c < 0xc);
    uStack_1c = 0;
    puVar11 = puStack_8 + 0x1a;
    do {
      if (iStack_c == 1) {
        *(char **)((int)puVar11 + iStack_18) = (char *)((int)pvStack_10 + (int)pcVar13);
        eVar7 = _strcpy_s((char *)((int)pvStack_10 + (int)pcVar13),(int)pcStack_14 - (int)pcVar13,
                          (char *)*puVar11);
        if (eVar7 != 0) goto LAB_0057e242;
      }
      pcVar8 = (char *)*puVar11;
      pcVar12 = pcVar8 + 1;
      do {
        cVar3 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar3 != '\0');
      pcVar13 = pcVar8 + (int)(pcVar13 + (1 - (int)pcVar12));
      puVar11 = puVar11 + 1;
      uStack_1c = uStack_1c + 1;
    } while (uStack_1c < 0xc);
    uStack_1c = 0;
    puVar11 = puStack_8 + 0x26;
    do {
      if (iStack_c == 1) {
        *(char **)((int)puVar11 + iStack_18) = (char *)((int)pvStack_10 + (int)pcVar13);
        eVar7 = _strcpy_s((char *)((int)pvStack_10 + (int)pcVar13),(int)pcStack_14 - (int)pcVar13,
                          (char *)*puVar11);
        if (eVar7 != 0) goto LAB_0057e242;
      }
      pvVar6 = pvStack_10;
      pcVar8 = (char *)*puVar11;
      pcVar12 = pcVar8 + 1;
      do {
        cVar3 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar3 != '\0');
      pcVar13 = pcVar8 + (int)(pcVar13 + (1 - (int)pcVar12));
      puVar11 = puVar11 + 1;
      uStack_1c = uStack_1c + 1;
    } while (uStack_1c < 2);
    if (iStack_c == 1) {
      *(char **)((int)pvStack_10 + 0xa0) = (char *)((int)pvStack_10 + (int)pcVar13);
      eVar7 = _strcpy_s((char *)((int)pvStack_10 + (int)pcVar13),(int)pcStack_14 - (int)pcVar13,
                        (char *)puStack_8[0x28]);
      if (eVar7 != 0) goto LAB_0057e242;
    }
    pcVar8 = (char *)puStack_8[0x28];
    pcVar12 = pcVar8 + 1;
    do {
      cVar3 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar3 != '\0');
    pcVar8 = pcVar8 + (int)(pcVar13 + (1 - (int)pcVar12));
    if (iStack_c == 1) {
      *(char **)((int)pvVar6 + 0xa4) = (char *)((int)pvVar6 + (int)pcVar8);
      eVar7 = _strcpy_s((char *)((int)pvVar6 + (int)pcVar8),(int)pcStack_14 - (int)pcVar8,
                        (char *)puStack_8[0x29]);
      if (eVar7 != 0) goto LAB_0057e242;
    }
    pcVar13 = (char *)puStack_8[0x29];
    pcVar12 = pcVar13 + 1;
    do {
      cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar3 != '\0');
    pcVar13 = pcVar13 + (int)(pcVar8 + (1 - (int)pcVar12));
    if (iStack_c == 1) {
      *(char **)((int)pvVar6 + 0xa8) = (char *)((int)pvVar6 + (int)pcVar13);
      eVar7 = _strcpy_s((char *)((int)pvVar6 + (int)pcVar13),(int)pcStack_14 - (int)pcVar13,
                        (char *)puStack_8[0x2a]);
      if (eVar7 != 0) goto LAB_0057e242;
    }
    pcVar12 = (char *)puStack_8[0x2a];
    pcVar8 = pcVar12 + 1;
    do {
      cVar3 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar3 != '\0');
    pcVar12 = pcVar12 + (int)(pcVar13 + (1 - (int)pcVar8));
    if (iStack_c == 1) {
      *(undefined4 *)((int)pvStack_10 + 0xac) = puStack_8[0x2b];
      *(undefined4 *)((int)pvStack_10 + 0xb0) = 0;
    }
    uStack_1c = 0;
    puVar11 = puStack_8 + 0x2d;
    pvVar6 = pvStack_10;
    iVar10 = iStack_c;
    do {
      for (; ((uint)pcVar12 & 1) != 0; pcVar12 = pcVar12 + 1) {
      }
      if (iVar10 == 1) {
        pwVar2 = (wchar_t *)((int)pvVar6 + ((uint)pcVar12 & 0xfffffffe));
        *(wchar_t **)((int)puVar11 + iStack_18) = pwVar2;
        eVar7 = _wcscpy_s(pwVar2,(uint)((int)pcStack_14 - (int)pcVar12) >> 1,(wchar_t *)*puVar11);
        if (eVar7 != 0) goto LAB_0057e242;
      }
      psVar9 = (short *)*puVar11;
      psVar1 = psVar9 + 1;
      do {
        sVar4 = *psVar9;
        psVar9 = psVar9 + 1;
      } while (sVar4 != 0);
      puVar11 = puVar11 + 1;
      pcVar12 = pcVar12 + ((int)psVar9 - (int)psVar1 >> 1) * 2 + 2;
      uStack_1c = uStack_1c + 1;
      pvVar6 = pvStack_10;
      iVar10 = iStack_c;
    } while (uStack_1c < 7);
    uStack_1c = 0;
    puVar11 = puStack_8 + 0x34;
    do {
      for (; ((uint)pcVar12 & 1) != 0; pcVar12 = pcVar12 + 1) {
      }
      if (iStack_c == 1) {
        pwVar2 = (wchar_t *)((int)pvStack_10 + ((uint)pcVar12 & 0xfffffffe));
        *(wchar_t **)((int)puVar11 + iStack_18) = pwVar2;
        eVar7 = _wcscpy_s(pwVar2,(uint)((int)pcStack_14 - (int)pcVar12) >> 1,(wchar_t *)*puVar11);
        if (eVar7 != 0) goto LAB_0057e242;
      }
      psVar9 = (short *)*puVar11;
      psVar1 = psVar9 + 1;
      do {
        sVar4 = *psVar9;
        psVar9 = psVar9 + 1;
      } while (sVar4 != 0);
      puVar11 = puVar11 + 1;
      pcVar12 = pcVar12 + ((int)psVar9 - (int)psVar1 >> 1) * 2 + 2;
      uStack_1c = uStack_1c + 1;
    } while (uStack_1c < 7);
    uStack_1c = 0;
    puVar11 = puStack_8 + 0x3b;
    do {
      for (; ((uint)pcVar12 & 1) != 0; pcVar12 = pcVar12 + 1) {
      }
      if (iStack_c == 1) {
        pwVar2 = (wchar_t *)((int)pvStack_10 + ((uint)pcVar12 & 0xfffffffe));
        *(wchar_t **)((int)puVar11 + iStack_18) = pwVar2;
        eVar7 = _wcscpy_s(pwVar2,(uint)((int)pcStack_14 - (int)pcVar12) >> 1,(wchar_t *)*puVar11);
        if (eVar7 != 0) goto LAB_0057e242;
      }
      psVar9 = (short *)*puVar11;
      psVar1 = psVar9 + 1;
      do {
        sVar4 = *psVar9;
        psVar9 = psVar9 + 1;
      } while (sVar4 != 0);
      puVar11 = puVar11 + 1;
      pcVar12 = pcVar12 + ((int)psVar9 - (int)psVar1 >> 1) * 2 + 2;
      uStack_1c = uStack_1c + 1;
    } while (uStack_1c < 0xc);
    uStack_1c = 0;
    puVar11 = puStack_8 + 0x47;
    do {
      for (; ((uint)pcVar12 & 1) != 0; pcVar12 = pcVar12 + 1) {
      }
      if (iStack_c == 1) {
        pwVar2 = (wchar_t *)((int)pvStack_10 + ((uint)pcVar12 & 0xfffffffe));
        *(wchar_t **)((int)puVar11 + iStack_18) = pwVar2;
        eVar7 = _wcscpy_s(pwVar2,(uint)((int)pcStack_14 - (int)pcVar12) >> 1,(wchar_t *)*puVar11);
        if (eVar7 != 0) goto LAB_0057e242;
      }
      psVar9 = (short *)*puVar11;
      psVar1 = psVar9 + 1;
      do {
        sVar4 = *psVar9;
        psVar9 = psVar9 + 1;
      } while (sVar4 != 0);
      puVar11 = puVar11 + 1;
      pcVar12 = pcVar12 + ((int)psVar9 - (int)psVar1 >> 1) * 2 + 2;
      uStack_1c = uStack_1c + 1;
    } while (uStack_1c < 0xc);
    uStack_1c = 0;
    puVar11 = puStack_8 + 0x53;
    do {
      for (; ((uint)pcVar12 & 1) != 0; pcVar12 = pcVar12 + 1) {
      }
      if (iStack_c == 1) {
        pwVar2 = (wchar_t *)((int)pvStack_10 + ((uint)pcVar12 & 0xfffffffe));
        *(wchar_t **)((int)puVar11 + iStack_18) = pwVar2;
        eVar7 = _wcscpy_s(pwVar2,(uint)((int)pcStack_14 - (int)pcVar12) >> 1,(wchar_t *)*puVar11);
        if (eVar7 != 0) goto LAB_0057e242;
      }
      pvVar6 = pvStack_10;
      psVar9 = (short *)*puVar11;
      psVar1 = psVar9 + 1;
      do {
        sVar4 = *psVar9;
        psVar9 = psVar9 + 1;
      } while (sVar4 != 0);
      puVar11 = puVar11 + 1;
      pcVar12 = pcVar12 + ((int)psVar9 - (int)psVar1 >> 1) * 2 + 2;
      uStack_1c = uStack_1c + 1;
    } while (uStack_1c < 2);
    for (; ((uint)pcVar12 & 1) != 0; pcVar12 = pcVar12 + 1) {
    }
    if (iStack_c == 1) {
      pwVar2 = (wchar_t *)((int)pvStack_10 + ((uint)pcVar12 & 0xfffffffe));
      *(wchar_t **)((int)pvStack_10 + 0x154) = pwVar2;
      eVar7 = _wcscpy_s(pwVar2,(uint)((int)pcStack_14 - (int)pcVar12) >> 1,
                        (wchar_t *)puStack_8[0x55]);
      if (eVar7 != 0) goto LAB_0057e242;
    }
    psVar9 = (short *)puStack_8[0x55];
    psVar1 = psVar9 + 1;
    do {
      sVar4 = *psVar9;
      psVar9 = psVar9 + 1;
    } while (sVar4 != 0);
    for (pcVar12 = pcVar12 + ((int)psVar9 - (int)psVar1 >> 1) * 2 + 2; ((uint)pcVar12 & 1) != 0;
        pcVar12 = pcVar12 + 1) {
    }
    if (iStack_c == 1) {
      pwVar2 = (wchar_t *)((int)pvVar6 + ((uint)pcVar12 & 0xfffffffe));
      *(wchar_t **)((int)pvVar6 + 0x158) = pwVar2;
      eVar7 = _wcscpy_s(pwVar2,(uint)((int)pcStack_14 - (int)pcVar12) >> 1,
                        (wchar_t *)puStack_8[0x56]);
      if (eVar7 != 0) goto LAB_0057e242;
    }
    psVar9 = (short *)puStack_8[0x56];
    psVar1 = psVar9 + 1;
    do {
      sVar4 = *psVar9;
      psVar9 = psVar9 + 1;
    } while (sVar4 != 0);
    for (pcVar12 = pcVar12 + ((int)psVar9 - (int)psVar1 >> 1) * 2 + 2; ((uint)pcVar12 & 1) != 0;
        pcVar12 = pcVar12 + 1) {
    }
    if (iStack_c == 1) {
      pwVar2 = (wchar_t *)((int)pvVar6 + ((uint)pcVar12 & 0xfffffffe));
      *(wchar_t **)((int)pvVar6 + 0x15c) = pwVar2;
      eVar7 = _wcscpy_s(pwVar2,(uint)((int)pcStack_14 - (int)pcVar12) >> 1,
                        (wchar_t *)puStack_8[0x57]);
      if (eVar7 != 0) goto LAB_0057e242;
    }
    psVar9 = (short *)puStack_8[0x57];
    psVar1 = psVar9 + 1;
    do {
      sVar4 = *psVar9;
      psVar9 = psVar9 + 1;
    } while (sVar4 != 0);
    for (pcVar12 = pcVar12 + ((int)psVar9 - (int)psVar1 >> 1) * 2 + 2; ((uint)pcVar12 & 1) != 0;
        pcVar12 = pcVar12 + 1) {
    }
    if (iStack_c == 1) {
      pwVar2 = (wchar_t *)((int)pvVar6 + ((uint)pcVar12 & 0xfffffffe));
      *(wchar_t **)((int)pvVar6 + 0x160) = pwVar2;
      eVar7 = _wcscpy_s(pwVar2,(uint)((int)pcStack_14 - (int)pcVar12) >> 1,
                        (wchar_t *)puStack_8[0x58]);
      if (eVar7 != 0) {
LAB_0057e242:
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        pcVar5 = (code *)swi(3);
        pvVar6 = (void *)(*pcVar5)();
        return pvVar6;
      }
    }
    psVar9 = (short *)puStack_8[0x58];
    psVar1 = psVar9 + 1;
    do {
      sVar4 = *psVar9;
      psVar9 = psVar9 + 1;
    } while (sVar4 != 0);
    iStack_c = iStack_c + 1;
    pcVar12 = pcVar12 + (((int)psVar9 - (int)psVar1 >> 1) + 1) * 2;
  } while (iStack_c < 2);
  if (cStack_20 != '\0') {
    *(uint *)(iStack_2c + 0x350) = *(uint *)(iStack_2c + 0x350) & 0xfffffffd;
  }
  return pvStack_10;
}

