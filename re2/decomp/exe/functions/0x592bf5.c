// rea decompile_all
// name: __acrt_LCMapStringA_stat
// address: 0x592bf5
// body: available
// range: 0x592bf5-0x592e11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __acrt_LCMapStringA_stat(struct __crt_locale_pointers *,wchar_t const *,unsigned
   long,char const *,int,char *,int,int,int)
   
   Library: Visual Studio 2015 Release */

int __cdecl
__acrt_LCMapStringA_stat
          (__crt_locale_pointers *param_1,wchar_t *param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8,int param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  LPWSTR lpWideCharStr;
  LPCWSTR lpWideCharStr_00;
  
  uVar2 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  iVar4 = param_5;
  if (0 < param_5) {
    iVar3 = ___strncnt(param_4,param_5);
    iVar4 = iVar3 + 1;
    if (param_5 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_8 == 0) {
    param_8 = *(int *)(*(int *)param_1 + 8);
  }
  iVar3 = MultiByteToWideChar(param_8,(uint)(param_9 != 0) * 8 + 1,param_4,iVar4,(LPWSTR)0x0,0);
  if (iVar3 == 0) goto LAB_00592ded;
  uVar1 = iVar3 * 2;
  if ((uVar1 + 8 & -(uint)(uVar1 < uVar1 + 8)) == 0) {
    lpWideCharStr = (LPWSTR)0x0;
LAB_00592cc2:
    if (((lpWideCharStr != (LPWSTR)0x0) &&
        (iVar4 = MultiByteToWideChar(param_8,1,param_4,iVar4,lpWideCharStr,iVar3), iVar4 != 0)) &&
       (iVar4 = ___acrt_LCMapStringEx_36(param_2,param_3,lpWideCharStr,iVar3,0,0,0,0,0), iVar4 != 0)
       ) {
      if ((param_3 & 0x400) == 0) {
        uVar1 = iVar4 * 2;
        if ((uVar1 + 8 & -(uint)(uVar1 < uVar1 + 8)) == 0) {
          lpWideCharStr_00 = (LPCWSTR)0x0;
LAB_00592d9f:
          if ((lpWideCharStr_00 != (LPCWSTR)0x0) &&
             (iVar3 = ___acrt_LCMapStringEx_36
                                (param_2,param_3,lpWideCharStr,iVar3,lpWideCharStr_00,iVar4,0,0,0),
             iVar3 != 0)) {
            if (param_7 == 0) {
              param_7 = 0;
              param_6 = (LPSTR)0x0;
            }
            iVar4 = WideCharToMultiByte(param_8,0,lpWideCharStr_00,iVar4,param_6,param_7,(LPCSTR)0x0
                                        ,(LPBOOL)0x0);
            if (iVar4 != 0) {
              __freea_crt(lpWideCharStr_00);
              goto LAB_00592de4;
            }
          }
        }
        else if ((-(uint)(uVar1 < uVar1 + 8) & uVar1 + 8) < 0x401) {
          puVar5 = (undefined4 *)&stack0xffffffe8;
          lpWideCharStr_00 = (LPCWSTR)&stack0xffffffe8;
          if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_00592d98:
            lpWideCharStr_00 = (LPCWSTR)(puVar5 + 2);
            goto LAB_00592d9f;
          }
        }
        else {
          puVar5 = (undefined4 *)__malloc_base(-(uint)(uVar1 < uVar1 + 8) & uVar1 + 8);
          lpWideCharStr_00 = (LPCWSTR)0x0;
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = 0xdddd;
            goto LAB_00592d98;
          }
        }
        __freea_crt(lpWideCharStr_00);
      }
      else if ((param_7 != 0) && (iVar4 <= param_7)) {
        ___acrt_LCMapStringEx_36(param_2,param_3,lpWideCharStr,iVar3,param_6,param_7,0,0,0);
      }
    }
  }
  else if ((-(uint)(uVar1 < uVar1 + 8) & uVar1 + 8) < 0x401) {
    puVar5 = (undefined4 *)&stack0xffffffe8;
    lpWideCharStr = (LPWSTR)&stack0xffffffe8;
    if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_00592cbb:
      lpWideCharStr = (LPWSTR)(puVar5 + 2);
      goto LAB_00592cc2;
    }
  }
  else {
    puVar5 = (undefined4 *)__malloc_base(-(uint)(uVar1 < uVar1 + 8) & uVar1 + 8);
    lpWideCharStr = (LPWSTR)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0xdddd;
      goto LAB_00592cbb;
    }
  }
LAB_00592de4:
  __freea_crt(lpWideCharStr);
LAB_00592ded:
  iVar4 = __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

