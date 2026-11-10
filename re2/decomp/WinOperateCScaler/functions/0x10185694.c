// rea decompile_all
// name: FUN_10185694
// address: 0x10185694
// body: available
// range: 0x10185694-0x10185a0a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10185a0a with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10185694(wchar_t *param_1,wchar_t *param_2,rsize_t param_3,short *param_4,
                 undefined4 param_5,uint *param_6)

{
  wchar_t wVar1;
  short sVar2;
  code *pcVar3;
  uint *puVar4;
  char cVar5;
  int iVar6;
  short *psVar7;
  errno_t eVar8;
  uint uVar9;
  wchar_t *pwVar10;
  int iVar11;
  wchar_t *pwVar12;
  short *psVar13;
  uint uVar14;
  bool bVar15;
  uint local_1e8;
  wchar_t *local_1e4;
  short *local_1e0;
  uint *local_1dc;
  wchar_t *local_1d8;
  undefined1 local_1d4 [288];
  wchar_t local_b4;
  undefined1 local_b2 [170];
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_1e0 = param_4;
  if (param_1 == (wchar_t *)0x0) goto LAB_101856d0;
  iVar6 = FUN_101835a3();
  local_1dc = (uint *)(iVar6 + 0x68);
  local_1e4 = (wchar_t *)(iVar6 + 0x6c);
  local_1d8 = (wchar_t *)(iVar6 + 0x172);
  psVar7 = (short *)(iVar6 + 0x2a0);
  local_1e8 = 0;
  iVar6 = FUN_101758fc(param_4,param_5,psVar7,0x55);
  if (iVar6 != 0) goto LAB_10185a05;
  if ((*param_1 == L'C') && (param_1[1] == L'\0')) {
    eVar8 = _wcscpy_s(param_2,param_3,L"C");
    if (eVar8 == 0) {
      if (param_6 != (uint *)0x0) {
        *param_6 = 0;
      }
      goto LAB_101856d0;
    }
    goto LAB_10185a05;
  }
  pwVar10 = param_1;
  do {
    wVar1 = *pwVar10;
    pwVar10 = pwVar10 + 1;
  } while (wVar1 != L'\0');
  uVar14 = (int)pwVar10 - (int)(param_1 + 1) >> 1;
  pwVar10 = local_1d8;
  pwVar12 = param_1;
  if (uVar14 < 0x83) {
    do {
      wVar1 = *pwVar10;
      bVar15 = (ushort)wVar1 < (ushort)*pwVar12;
      if (wVar1 != *pwVar12) {
LAB_101857ba:
        uVar9 = -(uint)bVar15 | 1;
        goto LAB_101857bf;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar10[1];
      bVar15 = (ushort)wVar1 < (ushort)pwVar12[1];
      if (wVar1 != pwVar12[1]) goto LAB_101857ba;
      pwVar10 = pwVar10 + 2;
      pwVar12 = pwVar12 + 2;
    } while (wVar1 != L'\0');
    uVar9 = 0;
LAB_101857bf:
    pwVar10 = local_1e4;
    pwVar12 = param_1;
    if (uVar9 != 0) {
      do {
        wVar1 = *pwVar10;
        bVar15 = (ushort)wVar1 < (ushort)*pwVar12;
        if (wVar1 != *pwVar12) {
LAB_101857f5:
          uVar9 = -(uint)bVar15 | 1;
          goto LAB_101857fa;
        }
        if (wVar1 == L'\0') break;
        wVar1 = pwVar10[1];
        bVar15 = (ushort)wVar1 < (ushort)pwVar12[1];
        if (wVar1 != pwVar12[1]) goto LAB_101857f5;
        pwVar10 = pwVar10 + 2;
        pwVar12 = pwVar12 + 2;
      } while (wVar1 != L'\0');
      uVar9 = 0;
LAB_101857fa:
      if (uVar9 != 0) goto LAB_10185802;
    }
  }
  else {
LAB_10185802:
    cVar5 = FUN_10184084();
    iVar6 = FUN_10185536(local_1d4,param_1);
    puVar4 = local_1dc;
    if (iVar6 == 0) {
      if (cVar5 == '\0') {
        iVar6 = ___acrt_get_qualified_locale_downlevel();
      }
      else {
        iVar6 = FUN_101912b9(local_1d4,local_1dc,local_1d4);
      }
      if (iVar6 == 0) goto LAB_101858b5;
      FUN_101854c6(local_1d8,0x83,local_1d4);
      if (local_1e0 != (short *)0x0) {
        pwVar10 = &local_b4;
        do {
          wVar1 = *pwVar10;
          pwVar10 = pwVar10 + 1;
        } while (wVar1 != L'\0');
        iVar6 = ((int)pwVar10 - (int)local_b2 >> 1) + 1;
        psVar7 = local_1e0;
        pwVar10 = &local_b4;
        goto LAB_10185937;
      }
    }
    else {
LAB_101858b5:
      iVar6 = ___acrt_IsValidLocaleName_4(param_1);
      if (iVar6 == 0) {
        psVar13 = local_1e0;
        do {
          sVar2 = *psVar13;
          psVar13 = psVar13 + 1;
        } while (sVar2 != 0);
        iVar6 = FUN_101758fc(psVar7,0x55,local_1e0,((int)psVar13 - (int)(local_1e0 + 1) >> 1) + 1);
        if (iVar6 != 0) goto LAB_10185a05;
        goto LAB_101856d0;
      }
      iVar6 = ___acrt_GetLocaleInfoEx_16(param_1,0x20001004,&local_1e8,2);
      if ((iVar6 == 0) || (local_1e8 == 0)) {
        local_1e8 = GetACP();
      }
      *puVar4 = local_1e8 & 0xffff;
      iVar6 = uVar14 + 1;
      iVar11 = FUN_101758fc(local_1d8,0x83,param_1,iVar6);
      if ((iVar11 != 0) || (iVar11 = FUN_101758fc(local_1e0,param_5,param_1,iVar6), iVar11 != 0))
      goto LAB_10185a05;
      param_5 = 0x55;
      pwVar10 = param_1;
LAB_10185937:
      iVar6 = FUN_101758fc(psVar7,param_5,pwVar10,iVar6);
      if (iVar6 != 0) goto LAB_10185a05;
    }
    if ((*param_1 == L'\0') || (0x82 < uVar14)) {
      *local_1e4 = L'\0';
    }
    else {
      iVar6 = FUN_101758fc(local_1e4,0x83,param_1,uVar14 + 1);
      if (iVar6 != 0) goto LAB_10185a05;
    }
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = *local_1dc;
  }
  eVar8 = _wcscpy_s(param_2,param_3,local_1d8);
  if (eVar8 == 0) {
LAB_101856d0:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_10185a05:
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

