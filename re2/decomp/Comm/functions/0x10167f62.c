// rea decompile_all
// name: ___acrt_GetStringTypeA
// address: 0x10167f62
// body: available
// range: 0x10167f62-0x1016807e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    ___acrt_GetStringTypeA
   
   Library: Visual Studio 2015 Release */

void ___acrt_GetStringTypeA
               (__crt_locale_pointers *param_1,DWORD param_2,LPCSTR param_3,int param_4,
               LPWORD param_5,UINT param_6,int param_7)

{
  uint _Size;
  undefined4 *puVar1;
  int cchSrc;
  LPCWSTR lpWideCharStr;
  int local_1c;
  int local_18;
  char local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,param_1);
  if (param_6 == 0) {
    param_6 = *(UINT *)(local_18 + 8);
  }
  local_c = MultiByteToWideChar(param_6,(uint)(param_7 != 0) * 8 + 1,param_3,param_4,(LPWSTR)0x0,0);
  if (local_c == 0) goto LAB_10168059;
  _Size = local_c * 2;
  if ((_Size + 8 & -(uint)(_Size < _Size + 8)) == 0) {
    lpWideCharStr = (LPCWSTR)0x0;
LAB_1016801a:
    if (lpWideCharStr != (LPCWSTR)0x0) {
      _memset(lpWideCharStr,0,_Size);
      cchSrc = MultiByteToWideChar(param_6,1,param_3,param_4,lpWideCharStr,local_c);
      if (cchSrc != 0) {
        GetStringTypeW(param_2,lpWideCharStr,cchSrc,param_5);
      }
    }
  }
  else if ((-(uint)(_Size < _Size + 8) & _Size + 8) < 0x401) {
    puVar1 = (undefined4 *)&stack0xffffffd8;
    lpWideCharStr = (LPCWSTR)&stack0xffffffd8;
    if (&stack0x00000000 != (undefined1 *)0x28) {
LAB_10168013:
      lpWideCharStr = (LPCWSTR)(puVar1 + 2);
      goto LAB_1016801a;
    }
  }
  else {
    puVar1 = (undefined4 *)__malloc_base(-(uint)(_Size < _Size + 8) & _Size + 8);
    lpWideCharStr = (LPCWSTR)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0xdddd;
      goto LAB_10168013;
    }
  }
  __freea_crt(lpWideCharStr);
LAB_10168059:
  if (local_10 != '\0') {
    *(uint *)(local_1c + 0x350) = *(uint *)(local_1c + 0x350) & 0xfffffffd;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

