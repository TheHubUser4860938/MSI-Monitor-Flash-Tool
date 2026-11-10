// rea decompile_all
// name: _wcstombs_l_helper
// address: 0x101b5783
// body: available
// range: 0x101b5783-0x101b5a03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    unsigned int __cdecl _wcstombs_l_helper(char *,wchar_t const *,unsigned int,struct
   __crt_locale_pointers *)
   
   Library: Visual Studio 2015 Release */

uint __cdecl
_wcstombs_l_helper(char *param_1,wchar_t *param_2,uint param_3,__crt_locale_pointers *param_4)

{
  char cVar1;
  wchar_t wVar2;
  int *piVar3;
  wchar_t *pwVar4;
  int iVar5;
  DWORD DVar6;
  uint uVar7;
  uint uVar8;
  int local_30;
  int local_2c;
  char local_24;
  int local_20;
  char *local_1c;
  wchar_t *local_18;
  BOOL local_14;
  CHAR local_10 [8];
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  uVar8 = 0;
  local_1c = param_1;
  local_14 = 0;
  local_18 = param_2;
  if ((param_1 != (char *)0x0) && (param_3 == 0)) goto LAB_101b59f3;
  if (param_2 == (wchar_t *)0x0) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_1019ab61();
    goto LAB_101b59f3;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_30,param_4);
  if (local_1c == (LPSTR)0x0) {
    if (*(int *)(local_2c + 0xa8) == 0) {
      wVar2 = *param_2;
      while (wVar2 != L'\0') {
        if (0xff < (ushort)wVar2) goto LAB_101b59d3;
        param_2 = param_2 + 1;
        wVar2 = *param_2;
      }
    }
    else {
      iVar5 = WideCharToMultiByte(*(UINT *)(local_2c + 8),0,param_2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,
                                  &local_14);
      if ((iVar5 == 0) || (local_14 != 0)) {
LAB_101b59d3:
        piVar3 = __errno();
        *piVar3 = 0x2a;
      }
    }
  }
  else if (*(int *)(local_2c + 0xa8) == 0) {
    if (param_3 != 0) {
      do {
        if (0xff < (ushort)*param_2) goto LAB_101b5974;
        local_1c[uVar8] = (CHAR)*param_2;
        wVar2 = *param_2;
        param_2 = param_2 + 1;
      } while ((wVar2 != L'\0') && (uVar8 = uVar8 + 1, uVar8 < param_3));
    }
  }
  else if (*(int *)(local_2c + 4) == 1) {
    if (param_3 != 0) {
      local_18 = (wchar_t *)param_3;
      pwVar4 = param_2;
      do {
        if (*pwVar4 == L'\0') break;
        pwVar4 = pwVar4 + 1;
        local_18 = (wchar_t *)((int)local_18 + -1);
      } while (local_18 != (wchar_t *)0x0);
      if ((local_18 != (wchar_t *)0x0) && (*pwVar4 == L'\0')) {
        param_3 = ((int)pwVar4 - (int)param_2 >> 1) + 1;
      }
    }
    iVar5 = WideCharToMultiByte(*(UINT *)(local_2c + 8),0,param_2,param_3,local_1c,param_3,
                                (LPCSTR)0x0,&local_14);
    if (iVar5 != 0) {
joined_r0x101b58b2:
      if (local_14 == 0) goto LAB_101b59e1;
    }
LAB_101b5974:
    piVar3 = __errno();
    *piVar3 = 0x2a;
  }
  else {
    iVar5 = WideCharToMultiByte(*(UINT *)(local_2c + 8),0,param_2,-1,local_1c,param_3,(LPCSTR)0x0,
                                &local_14);
    if (iVar5 != 0) goto joined_r0x101b58b2;
    if ((local_14 != 0) || (DVar6 = GetLastError(), DVar6 != 0x7a)) goto LAB_101b5974;
    if (param_3 != 0) {
      uVar8 = 0;
      do {
        iVar5 = *(int *)(local_2c + 4);
        if (5 < iVar5) {
          iVar5 = 5;
        }
        uVar7 = WideCharToMultiByte(*(UINT *)(local_2c + 8),0,local_18,1,local_10,iVar5,(LPCSTR)0x0,
                                    &local_14);
        if ((((uVar7 == 0) || (local_14 != 0)) || ((int)uVar7 < 0)) || (5 < uVar7))
        goto LAB_101b59d3;
        if (param_3 < uVar7 + uVar8) break;
        local_20 = 0;
        if (0 < (int)uVar7) {
          do {
            cVar1 = local_10[local_20];
            local_1c[uVar8] = cVar1;
            if (cVar1 == '\0') goto LAB_101b59e1;
            local_20 = local_20 + 1;
            uVar8 = uVar8 + 1;
          } while (local_20 < (int)uVar7);
        }
        local_18 = local_18 + 1;
      } while (uVar8 < param_3);
    }
  }
LAB_101b59e1:
  if (local_24 != '\0') {
    *(uint *)(local_30 + 0x350) = *(uint *)(local_30 + 0x350) & 0xfffffffd;
  }
LAB_101b59f3:
  uVar8 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return uVar8;
}

