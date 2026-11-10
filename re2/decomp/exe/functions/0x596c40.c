// rea decompile_all
// name: InternalGetLocaleInfoA
// address: 0x596c40
// body: available
// range: 0x596c40-0x596d3a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl InternalGetLocaleInfoA(struct __crt_locale_pointers * const,wchar_t const *
   const,unsigned long,char * const,int)
   
   Library: Visual Studio 2015 Release */

int __cdecl
InternalGetLocaleInfoA
          (__crt_locale_pointers *param_1,wchar_t *param_2,ulong param_3,char *param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  LPCWSTR lpWideCharStr;
  int local_1c;
  int local_18;
  char local_10;
  UINT local_c;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,param_1);
  local_c = *(UINT *)(local_18 + 8);
  iVar2 = ___acrt_GetLocaleInfoEx_16(param_2,param_3,0,0);
  if (iVar2 == 0) goto LAB_00596d15;
  uVar1 = iVar2 * 2;
  if ((uVar1 + 8 & -(uint)(uVar1 < uVar1 + 8)) == 0) {
    lpWideCharStr = (LPCWSTR)0x0;
LAB_00596cdc:
    if ((lpWideCharStr != (LPCWSTR)0x0) &&
       (iVar2 = ___acrt_GetLocaleInfoEx_16(param_2,param_3,lpWideCharStr,iVar2), iVar2 != 0)) {
      WideCharToMultiByte(local_c,0,lpWideCharStr,-1,(LPSTR)(-(uint)(param_5 != 0) & (uint)param_4),
                          param_5,(LPCSTR)0x0,(LPBOOL)0x0);
    }
  }
  else if ((-(uint)(uVar1 < uVar1 + 8) & uVar1 + 8) < 0x401) {
    puVar3 = (undefined4 *)&stack0xffffffd8;
    lpWideCharStr = (LPCWSTR)&stack0xffffffd8;
    if (&stack0x00000000 != (undefined1 *)0x28) {
LAB_00596cd5:
      lpWideCharStr = (LPCWSTR)(puVar3 + 2);
      goto LAB_00596cdc;
    }
  }
  else {
    puVar3 = (undefined4 *)__malloc_base(-(uint)(uVar1 < uVar1 + 8) & uVar1 + 8);
    lpWideCharStr = (LPCWSTR)0x0;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0xdddd;
      goto LAB_00596cd5;
    }
  }
  __freea_crt(lpWideCharStr);
LAB_00596d15:
  if (local_10 != '\0') {
    *(uint *)(local_1c + 0x350) = *(uint *)(local_1c + 0x350) & 0xfffffffd;
  }
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

