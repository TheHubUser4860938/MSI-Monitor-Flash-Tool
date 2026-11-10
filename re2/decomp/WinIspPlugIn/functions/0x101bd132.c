// rea decompile_all
// name: FUN_101bd132
// address: 0x101bd132
// body: available
// range: 0x101bd132-0x101bd41b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101bd41b with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_101bd132(short *param_1)

{
  short *psVar1;
  short sVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  wchar_t local_88 [64];
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  iVar4 = FUN_101af88f();
  iVar5 = ___acrt_GetLocaleInfoEx_16
                    (param_1,(-(uint)(*(int *)(iVar4 + 100) != 0) & 0xfffff005) + 0x1002,local_88,
                     0x40);
  if (iVar5 == 0) {
    *(undefined4 *)(iVar4 + 0x58) = 0;
    goto LAB_101bd3ff;
  }
  iVar5 = __wcsicmp(*(wchar_t **)(iVar4 + 0x54),local_88);
  if (iVar5 != 0) goto LAB_101bd285;
  iVar5 = ___acrt_GetLocaleInfoEx_16
                    (param_1,(-(uint)(*(int *)(iVar4 + 0x60) != 0) & 0xfffff002) + 0x1001,local_88,
                     0x40);
  if (iVar5 == 0) {
    *(undefined4 *)(iVar4 + 0x58) = 0;
    goto LAB_101bd3ff;
  }
  iVar5 = __wcsicmp(*(wchar_t **)(iVar4 + 0x50),local_88);
  psVar7 = param_1;
  if (iVar5 == 0) {
    *(uint *)(iVar4 + 0x58) = *(uint *)(iVar4 + 0x58) | 0x304;
    do {
      sVar2 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar2 != 0);
LAB_101bd1fe:
    iVar5 = FUN_101a26b7(iVar4 + 0x2a0,0x55,param_1,((int)psVar7 - (int)(param_1 + 1) >> 1) + 1);
    if (iVar5 != 0) goto LAB_101bd416;
  }
  else if ((*(byte *)(iVar4 + 0x58) & 2) == 0) {
    if ((*(int *)(iVar4 + 0x5c) == 0) ||
       (iVar5 = __wcsnicmp(*(wchar_t **)(iVar4 + 0x50),local_88,*(size_t *)(iVar4 + 0x5c)),
       iVar5 != 0)) {
      if (((*(byte *)(iVar4 + 0x58) & 1) != 0) || (iVar5 = _TestDefaultCountry(param_1), iVar5 == 0)
         ) goto LAB_101bd285;
      *(uint *)(iVar4 + 0x58) = *(uint *)(iVar4 + 0x58) | 1;
      do {
        sVar2 = *psVar7;
        psVar7 = psVar7 + 1;
      } while (sVar2 != 0);
    }
    else {
      *(uint *)(iVar4 + 0x58) = *(uint *)(iVar4 + 0x58) | 2;
      do {
        sVar2 = *psVar7;
        psVar7 = psVar7 + 1;
      } while (sVar2 != 0);
    }
    goto LAB_101bd1fe;
  }
LAB_101bd285:
  if ((*(uint *)(iVar4 + 0x58) & 0x300) == 0x300) goto LAB_101bd3ff;
  iVar5 = ___acrt_GetLocaleInfoEx_16
                    (param_1,(-(uint)(*(int *)(iVar4 + 0x60) != 0) & 0xfffff002) + 0x1001,local_88,
                     0x40);
  if (iVar5 == 0) {
    *(undefined4 *)(iVar4 + 0x58) = 0;
    goto LAB_101bd3ff;
  }
  iVar5 = __wcsicmp(*(wchar_t **)(iVar4 + 0x50),local_88);
  if (iVar5 != 0) goto LAB_101bd3ff;
  *(uint *)(iVar4 + 0x58) = *(uint *)(iVar4 + 0x58) | 0x200;
  psVar7 = param_1;
  if (*(int *)(iVar4 + 0x60) == 0) {
    if (*(int *)(iVar4 + 0x5c) != 0) {
      psVar6 = *(short **)(iVar4 + 0x50);
      psVar1 = psVar6 + 1;
      do {
        sVar2 = *psVar6;
        psVar6 = psVar6 + 1;
      } while (sVar2 != 0);
      if ((int)psVar6 - (int)psVar1 >> 1 == *(int *)(iVar4 + 0x5c)) {
        iVar5 = _TestDefaultCountry(param_1);
        if (iVar5 == 0) {
          psVar6 = *(short **)(iVar4 + 0x50);
          psVar1 = psVar6 + 1;
          do {
            sVar2 = *psVar6;
            psVar6 = psVar6 + 1;
          } while (sVar2 != 0);
          iVar5 = _GetPrimaryLen(*(undefined4 *)(iVar4 + 0x50));
          if (iVar5 == (int)psVar6 - (int)psVar1 >> 1) goto LAB_101bd3ff;
        }
        *(uint *)(iVar4 + 0x58) = *(uint *)(iVar4 + 0x58) | 0x100;
        if (*(short *)(iVar4 + 0x2a0) != 0) goto LAB_101bd3ff;
        do {
          sVar2 = *psVar7;
          psVar7 = psVar7 + 1;
        } while (sVar2 != 0);
        goto LAB_101bd31d;
      }
    }
    *(uint *)(iVar4 + 0x58) = *(uint *)(iVar4 + 0x58) | 0x100;
    if (*(short *)(iVar4 + 0x2a0) != 0) goto LAB_101bd3ff;
    do {
      sVar2 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar2 != 0);
  }
  else {
    *(uint *)(iVar4 + 0x58) = *(uint *)(iVar4 + 0x58) | 0x100;
    if (*(short *)(iVar4 + 0x2a0) != 0) goto LAB_101bd3ff;
    do {
      sVar2 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar2 != 0);
  }
LAB_101bd31d:
  iVar4 = FUN_101a26b7(iVar4 + 0x2a0,0x55,param_1,((int)psVar7 - (int)(param_1 + 1) >> 1) + 1);
  if (iVar4 != 0) {
LAB_101bd416:
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_101bd3ff:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

