// rea decompile_all
// name: FUN_101912b9
// address: 0x101912b9
// body: available
// range: 0x101912b9-0x10191487 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10191487 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_101912b9(int param_1,uint *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  short *psVar3;
  undefined2 *puVar4;
  short sVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  uint _Val;
  BOOL BVar9;
  undefined4 uVar10;
  short *psVar11;
  
  iVar7 = FUN_101835a3();
  piVar1 = (int *)(iVar7 + 0x50);
  psVar3 = (short *)(iVar7 + 0x2a0);
  *(undefined4 *)(iVar7 + 0x58) = 0;
  *psVar3 = 0;
  piVar2 = (int *)(iVar7 + 0x54);
  *piVar1 = param_1;
  *piVar2 = param_1 + 0x80;
  if (*(short *)(param_1 + 0x80) != 0) {
    _TranslateName(&PTR_u_america_101dc298,0x16,piVar2);
  }
  if (*(short *)*piVar1 == 0) {
    FUN_10190bbb(piVar1);
  }
  else {
    if (*(short *)*piVar2 == 0) {
      _GetLocaleNameFromLanguage();
    }
    else {
      _GetLocaleNameFromLangCountry();
    }
    if ((*(int *)(iVar7 + 0x58) == 0) &&
       (iVar8 = _TranslateName(&PTR_u_american_101dbf88,0x40,piVar1), iVar8 != 0)) {
      if (*(short *)*piVar2 == 0) {
        _GetLocaleNameFromLanguage(piVar1);
      }
      else {
        _GetLocaleNameFromLangCountry();
      }
    }
  }
  if ((((*(int *)(iVar7 + 0x58) != 0) &&
       (_Val = _ProcessCodePage(param_1 + 0x100,piVar1), _Val != 0)) && (_Val != 65000)) &&
     ((_Val != 0xfde9 && (BVar9 = IsValidCodePage(_Val & 0xffff), BVar9 != 0)))) {
    if (param_2 != (uint *)0x0) {
      *param_2 = _Val;
    }
    if (param_3 == 0) {
      return 1;
    }
    puVar4 = (undefined2 *)(param_3 + 0x120);
    *puVar4 = 0;
    psVar11 = psVar3;
    do {
      sVar5 = *psVar11;
      psVar11 = psVar11 + 1;
    } while (sVar5 != 0);
    iVar7 = FUN_101758fc(puVar4,0x55,psVar3,((int)psVar11 - (iVar7 + 0x2a2) >> 1) + 1);
    if (iVar7 != 0) {
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return uVar10;
    }
    iVar7 = ___acrt_GetLocaleInfoEx_16(puVar4,0x1001,param_3,0x40);
    if (iVar7 != 0) {
      iVar7 = param_3 + 0x80;
      iVar8 = ___acrt_GetLocaleInfoEx_16(param_3 + 0x120,0x1002,iVar7,0x40);
      if ((iVar8 != 0) &&
         (((iVar8 = FUN_1016c51b(iVar7,0x5f), iVar8 == 0 &&
           (iVar8 = FUN_1016c51b(iVar7,0x2e), iVar8 == 0)) ||
          (iVar7 = ___acrt_GetLocaleInfoEx_16(param_3 + 0x120,7,iVar7,0x40), iVar7 != 0)))) {
        __itow_s(_Val,(wchar_t *)(param_3 + 0x100),0x10,10);
        return 1;
      }
    }
  }
  return 0;
}

