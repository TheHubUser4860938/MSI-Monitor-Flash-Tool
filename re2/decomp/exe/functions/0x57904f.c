// rea decompile_all
// name: internal_wcsrtombs
// address: 0x57904f
// body: available
// range: 0x57904f-0x5791bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _internal_wcsrtombs
   
   Library: Visual Studio 2015 Release */

void __cdecl internal_wcsrtombs(char *param_1,int *param_2,uint param_3,_Mbstatet *param_4)

{
  uint uVar1;
  int *piVar2;
  wchar_t *pwVar3;
  int local_34;
  int local_30 [2];
  char local_28;
  int *local_24;
  char *local_20;
  _Mbstatet *local_1c;
  uint local_18;
  undefined4 local_14;
  char local_10 [8];
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_24 = param_2;
  local_1c = param_4;
  if (param_2 == (int *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_0057662d();
  }
  else {
    local_18 = 0;
    pwVar3 = (wchar_t *)*param_2;
    local_14 = pwVar3;
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_34,(__crt_locale_pointers *)0x0);
    if (param_1 == (char *)0x0) {
      _wcrtomb_s_l((int *)&local_18,local_10,5,*pwVar3,local_1c,(__crt_locale_pointers *)local_30);
      while ((0 < (int)local_18 && (local_10[local_18 - 1] != '\0'))) {
        pwVar3 = pwVar3 + 1;
        _wcrtomb_s_l((int *)&local_18,local_10,5,*pwVar3,local_1c,(__crt_locale_pointers *)local_30)
        ;
      }
    }
    else {
      for (; param_3 != 0; param_3 = param_3 - uVar1) {
        local_20 = param_1;
        if (param_3 < *(uint *)(local_30[0] + 4)) {
          local_20 = local_10;
        }
        _wcrtomb_s_l((int *)&local_18,local_20,5,*pwVar3,local_1c,(__crt_locale_pointers *)local_30)
        ;
        uVar1 = local_18;
        pwVar3 = local_14;
        if ((int)local_18 < 1) break;
        if (param_1 != local_20) {
          if (param_3 < local_18) break;
          _memcpy_s(param_1,param_3,local_10,local_18);
        }
        param_1 = param_1 + uVar1;
        if (param_1[-1] == '\0') {
          *local_24 = 0;
          goto LAB_00579199;
        }
        pwVar3 = local_14 + 1;
        local_14 = pwVar3;
      }
      *local_24 = (int)pwVar3;
    }
LAB_00579199:
    if (local_28 != '\0') {
      *(uint *)(local_34 + 0x350) = *(uint *)(local_34 + 0x350) & 0xfffffffd;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

