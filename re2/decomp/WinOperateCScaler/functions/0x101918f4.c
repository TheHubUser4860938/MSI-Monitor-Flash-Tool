// rea decompile_all
// name: _LanguageEnumProc@4
// address: 0x101918f4
// body: available
// range: 0x101918f4-0x101919cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _LanguageEnumProc@4
   
   Library: Visual Studio 2015 Release */

void _LanguageEnumProc_4(undefined4 param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  LCID Locale;
  undefined4 uVar4;
  WCHAR local_f8 [120];
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  iVar2 = FUN_101835a3();
  iVar3 = FUN_101835a3();
  puVar1 = *(uint **)(iVar3 + 0x34c);
  Locale = _LcidFromHexString(param_1);
  iVar3 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(iVar2 + 0x60) != 0) & 0xfffff002) + 0x1001,
                         local_f8,0x78);
  if (iVar3 == 0) {
    *puVar1 = 0;
    goto LAB_101919b9;
  }
  iVar3 = __wcsicmp(*(wchar_t **)(iVar2 + 0x50),local_f8);
  if (iVar3 == 0) {
    if (*(int *)(iVar2 + 0x60) == 0) {
      uVar4 = 1;
      goto LAB_10191999;
    }
  }
  else {
    if (((*(int *)(iVar2 + 0x60) != 0) || (*(int *)(iVar2 + 0x5c) == 0)) ||
       (iVar2 = __wcsicmp(*(wchar_t **)(iVar2 + 0x50),local_f8), iVar2 != 0)) goto LAB_101919b9;
    uVar4 = 0;
LAB_10191999:
    iVar2 = _TestDefaultLanguage(Locale,uVar4,puVar1);
    if (iVar2 == 0) goto LAB_101919b9;
  }
  *puVar1 = *puVar1 | 4;
  puVar1[1] = Locale;
  puVar1[2] = Locale;
LAB_101919b9:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

