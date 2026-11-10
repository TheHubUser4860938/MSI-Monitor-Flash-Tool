// rea decompile_all
// name: FUN_1018264a
// address: 0x1018264a
// body: available
// range: 0x1018264a-0x101827aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101827aa with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


wchar_t * FUN_1018264a(void)

{
  short *psVar1;
  short sVar2;
  wchar_t wVar3;
  code *pcVar4;
  wchar_t *pwVar5;
  errno_t eVar6;
  short *psVar7;
  wchar_t *pwVar8;
  short *psVar9;
  int iVar10;
  undefined4 *puVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  int iVar14;
  int local_20;
  int local_1c;
  char local_14;
  short *local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  iVar10 = 0;
  local_8 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_20,(__crt_locale_pointers *)0x0);
  iVar14 = 7;
  local_c = (undefined4 *)(*(int *)(local_1c + 0x9c) + 0xd0);
  puVar11 = local_c;
  do {
    psVar9 = (short *)puVar11[-7];
    psVar1 = psVar9 + 1;
    do {
      sVar2 = *psVar9;
      psVar9 = psVar9 + 1;
    } while (sVar2 != (wchar_t)local_8);
    psVar7 = (short *)*puVar11;
    local_10 = psVar7 + 1;
    do {
      sVar2 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar2 != (wchar_t)local_8);
    puVar11 = puVar11 + 1;
    iVar10 = iVar10 + 2 + ((int)psVar7 - (int)local_10 >> 1) + ((int)psVar9 - (int)psVar1 >> 1);
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
  pwVar5 = (wchar_t *)__malloc_base(iVar10 * 2 + 2);
  if (pwVar5 == (wchar_t *)0x0) {
    pwVar5 = (wchar_t *)0x0;
  }
  else {
    local_10 = (short *)0x0;
    pwVar12 = pwVar5;
    do {
      *pwVar12 = L':';
      pwVar13 = pwVar12 + 1;
      eVar6 = _wcscpy_s(pwVar13,(iVar10 - ((int)pwVar13 - (int)pwVar5 >> 1)) + 1,
                        (wchar_t *)local_c[-7]);
      if (eVar6 != 0) {
LAB_1018279e:
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        pcVar4 = (code *)swi(3);
        pwVar5 = (wchar_t *)(*pcVar4)();
        return pwVar5;
      }
      pwVar8 = pwVar13;
      do {
        wVar3 = *pwVar8;
        pwVar8 = pwVar8 + 1;
      } while (wVar3 != (wchar_t)local_8);
      pwVar13 = pwVar13 + ((int)pwVar8 - (int)(pwVar12 + 2) >> 1);
      *pwVar13 = L':';
      pwVar12 = pwVar13 + 1;
      eVar6 = _wcscpy_s(pwVar12,(iVar10 - ((int)pwVar12 - (int)pwVar5 >> 1)) + 1,(wchar_t *)*local_c
                       );
      if (eVar6 != 0) goto LAB_1018279e;
      pwVar8 = pwVar12;
      do {
        wVar3 = *pwVar8;
        pwVar8 = pwVar8 + 1;
      } while (wVar3 != (wchar_t)local_8);
      local_c = local_c + 1;
      pwVar12 = pwVar12 + ((int)pwVar8 - (int)(pwVar13 + 2) >> 1);
      local_10 = (short *)((int)local_10 + 1);
    } while (local_10 < (short *)0x7);
    *pwVar12 = L'\0';
  }
  FID_conflict__free((void *)0x0);
  if (local_14 != '\0') {
    *(uint *)(local_20 + 0x350) = *(uint *)(local_20 + 0x350) & 0xfffffffd;
  }
  return pwVar5;
}

