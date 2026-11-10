// rea decompile_all
// name: __Strftime_l
// address: 0x1019f84e
// body: available
// range: 0x1019f84e-0x1019f97c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __Strftime_l
   
   Library: Visual Studio 2015 Release */

int __Strftime_l(LPSTR param_1,int param_2,LPCSTR param_3,int param_4,undefined4 param_5,
                __crt_locale_pointers *param_6)

{
  int *piVar1;
  DWORD DVar2;
  LPWSTR lpWideCharStr;
  int iVar3;
  LPCWSTR lpWideCharStr_00;
  int iVar4;
  int iVar5;
  int local_1c;
  int local_18;
  char local_10;
  int local_c;
  UINT local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,param_6);
  iVar4 = 0;
  local_8 = *(UINT *)(local_18 + 0x14);
  iVar5 = iVar4;
  if ((((param_1 == (LPSTR)0x0) || (param_2 == 0)) || (*param_1 = '\0', param_3 == (LPCSTR)0x0)) ||
     (param_4 == 0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_1019ab61();
  }
  else {
    local_c = MultiByteToWideChar(local_8,0,param_3,-1,(LPWSTR)0x0,0);
    if (local_c == 0) {
      DVar2 = GetLastError();
      ___acrt_errno_map_os_error(DVar2);
    }
    else {
      lpWideCharStr = (LPWSTR)__malloc_base(local_c * 2);
      if (lpWideCharStr != (LPWSTR)0x0) {
        iVar3 = MultiByteToWideChar(local_8,0,param_3,-1,lpWideCharStr,local_c);
        if (iVar3 == 0) {
          DVar2 = GetLastError();
          ___acrt_errno_map_os_error(DVar2);
        }
        else {
          lpWideCharStr_00 = (LPCWSTR)__malloc_base(param_2 * 2);
          if (((lpWideCharStr_00 != (LPCWSTR)0x0) &&
              (local_c = __Wcsftime_l(lpWideCharStr_00,param_2,lpWideCharStr,param_4,param_5,param_6
                                     ), local_c != 0)) &&
             (iVar3 = WideCharToMultiByte(local_8,0,lpWideCharStr_00,-1,param_1,param_2,(LPCSTR)0x0,
                                          (LPBOOL)0x0), iVar5 = local_c, iVar3 == 0)) {
            DVar2 = GetLastError();
            ___acrt_errno_map_os_error(DVar2);
            iVar5 = iVar4;
          }
          FID_conflict__free(lpWideCharStr_00);
        }
      }
      FID_conflict__free(lpWideCharStr);
    }
  }
  if (local_10 != '\0') {
    *(uint *)(local_1c + 0x350) = *(uint *)(local_1c + 0x350) & 0xfffffffd;
  }
  return iVar5;
}

