// rea decompile_all
// name: ___acrt_get_qualified_locale_downlevel
// address: 0x10191bf1
// body: available
// range: 0x10191bf1-0x10191df7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___acrt_get_qualified_locale_downlevel
   
   Library: Visual Studio 2015 Release */

void ___acrt_get_qualified_locale_downlevel(int param_1,uint *param_2,LPWSTR param_3)

{
  int *piVar1;
  short *psVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint _Val;
  BOOL BVar7;
  int local_14;
  LCID local_10;
  LCID local_c;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  iVar4 = FUN_101835a3();
  piVar5 = (int *)(iVar4 + 0x50);
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  iVar6 = FUN_101835a3();
  *(int **)(iVar6 + 0x34c) = &local_14;
  psVar2 = (short *)(param_1 + 0x80);
  *piVar5 = param_1;
  piVar1 = (int *)(iVar4 + 0x54);
  *piVar1 = (int)psVar2;
  if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
    _TranslateName(&PTR_u_america_101dc298,0x16,piVar1);
  }
  local_14 = 0;
  if (((short *)*piVar5 == (short *)0x0) || (*(short *)*piVar5 == 0)) {
    if (((short *)*piVar1 == (short *)0x0) || (*(short *)*piVar1 == 0)) {
      local_14 = 0x104;
      local_10 = GetUserDefaultLCID();
      local_c = local_10;
    }
    else {
      _GetLcidFromCountry(&local_14);
    }
LAB_10191d0b:
    if (local_14 == 0) goto LAB_10191d13;
  }
  else {
    if (((short *)*piVar1 == (short *)0x0) || (*(short *)*piVar1 == 0)) {
      _GetLcidFromLanguage(&local_14);
    }
    else {
      _GetLcidFromLangCountry(&local_14);
    }
    if (local_14 == 0) {
      cVar3 = _TranslateName(&PTR_u_american_101dbf88,0x40,piVar5);
      if (cVar3 != '\0') {
        if (((short *)*piVar1 == (short *)0x0) || (*(short *)*piVar1 == 0)) {
          _GetLcidFromLanguage(&local_14);
        }
        else {
          _GetLcidFromLangCountry(&local_14);
        }
      }
      goto LAB_10191d0b;
    }
  }
  _Val = _ProcessCodePage(-(uint)(param_1 != 0) & param_1 + 0x100U,&local_14);
  if ((((_Val != 0) && (_Val != 65000)) && (_Val != 0xfde9)) &&
     ((BVar7 = IsValidCodePage(_Val & 0xffff), BVar7 != 0 &&
      (BVar7 = IsValidLocale(local_10,1), BVar7 != 0)))) {
    if (param_2 != (uint *)0x0) {
      *param_2 = _Val;
    }
    ___acrt_LCIDToLocaleName_16(local_10,iVar4 + 0x2a0,0x55,0);
    if (param_3 != (LPWSTR)0x0) {
      ___acrt_LCIDToLocaleName_16(local_10,param_3 + 0x90,0x55,0);
      iVar4 = GetLocaleInfoW(local_10,0x1001,param_3,0x40);
      if ((iVar4 != 0) && (iVar4 = GetLocaleInfoW(local_c,0x1002,param_3 + 0x40,0x40), iVar4 != 0))
      {
        __itow_s(_Val,param_3 + 0x80,0x10,10);
      }
    }
  }
LAB_10191d13:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

