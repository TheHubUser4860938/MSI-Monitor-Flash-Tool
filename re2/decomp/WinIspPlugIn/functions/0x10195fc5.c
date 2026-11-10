// rea decompile_all
// name: ___crtCompareStringA
// address: 0x10195fc5
// body: available
// range: 0x10195fc5-0x10196256 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    ___crtCompareStringA
   
   Library: Visual Studio 2015 Release */

int __cdecl
___crtCompareStringA
          (_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwCmpFlags,LPCSTR _LpString1,
          int _CchCount1,LPCSTR _LpString2,int _CchCount2,int _Code_page)

{
  uint uVar1;
  uint uVar2;
  BOOL BVar3;
  LPCWSTR pWVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  BYTE *pBVar9;
  LPWSTR lpWideCharStr;
  LPCWSTR local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  if ((int)_LpString1 < 1) {
    if ((int)_LpString1 < -1) goto LAB_10196243;
  }
  else {
    _LpString1 = (LPCSTR)___strncnt(_DwCmpFlags,_LpString1);
  }
  if ((int)_LpString2 < 1) {
    if ((int)_LpString2 < -1) goto LAB_10196243;
  }
  else {
    _LpString2 = (LPCSTR)___strncnt(_CchCount1,_LpString2);
  }
  if ((_LpString1 == (LPCSTR)0x0) || (_LpString2 == (LPCSTR)0x0)) {
    if ((_LpString1 == _LpString2) ||
       (((1 < (int)_LpString2 || (1 < (int)_LpString1)) ||
        (BVar3 = GetCPInfo(_CchCount2,&local_1c), BVar3 == 0)))) goto LAB_10196243;
    if (0 < (int)_LpString1) {
      if (1 < local_1c.MaxCharSize) {
        pBVar9 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar9[1] != 0)) &&
               ((*(byte *)_DwCmpFlags < *pBVar9 || (pBVar9[1] < *(byte *)_DwCmpFlags))))) {
          pBVar9 = pBVar9 + 2;
          local_1c.LeadByte[0] = *pBVar9;
        }
      }
      goto LAB_10196243;
    }
    if (0 < (int)_LpString2) {
      if (1 < local_1c.MaxCharSize) {
        pBVar9 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar9[1] != 0)) &&
               ((*(byte *)_CchCount1 < *pBVar9 || (pBVar9[1] < *(byte *)_CchCount1))))) {
          pBVar9 = pBVar9 + 2;
          local_1c.LeadByte[0] = *pBVar9;
        }
      }
      goto LAB_10196243;
    }
  }
  iVar8 = MultiByteToWideChar(_CchCount2,9,(LPCSTR)_DwCmpFlags,(int)_LpString1,(LPWSTR)0x0,0);
  if (iVar8 == 0) goto LAB_10196243;
  uVar2 = iVar8 * 2;
  uVar1 = uVar2 + 8;
  if ((uVar1 & -(uint)(uVar2 < uVar1)) == 0) {
    local_20 = (LPCWSTR)0x0;
LAB_10196159:
    if (((local_20 != (LPCWSTR)0x0) &&
        (iVar5 = MultiByteToWideChar(_CchCount2,1,(LPCSTR)_DwCmpFlags,(int)_LpString1,local_20,iVar8
                                    ), iVar5 != 0)) &&
       (iVar5 = MultiByteToWideChar(_CchCount2,9,(LPCSTR)_CchCount1,(int)_LpString2,(LPWSTR)0x0,0),
       iVar5 != 0)) {
      uVar2 = iVar5 * 2;
      uVar1 = uVar2 + 8;
      if ((uVar1 & -(uint)(uVar2 < uVar1)) == 0) {
        lpWideCharStr = (LPWSTR)0x0;
      }
      else if ((-(uint)(uVar2 < uVar1) & uVar1) < 0x401) {
        puVar6 = (undefined4 *)&stack0xffffffc4;
        lpWideCharStr = (LPWSTR)&stack0xffffffc4;
        if (&stack0x00000000 != (undefined1 *)0x3c) {
LAB_101961eb:
          lpWideCharStr = (LPWSTR)(puVar6 + 2);
        }
      }
      else {
        puVar6 = (undefined4 *)__malloc_base(-(uint)(uVar2 < uVar2 + 8) & uVar2 + 8);
        lpWideCharStr = (LPWSTR)0x0;
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = 0xdddd;
          goto LAB_101961eb;
        }
      }
      if ((lpWideCharStr != (LPWSTR)0x0) &&
         (iVar7 = MultiByteToWideChar(_CchCount2,1,(LPCSTR)_CchCount1,(int)_LpString2,lpWideCharStr,
                                      iVar5), iVar7 != 0)) {
        ___crtCompareStringEx
                  ((LPCWSTR)_Plocinfo,(DWORD)_LocaleName,local_20,iVar8,lpWideCharStr,iVar5);
      }
      __freea_crt(lpWideCharStr);
    }
  }
  else if ((-(uint)(uVar2 < uVar1) & uVar1) < 0x401) {
    pWVar4 = (LPCWSTR)&stack0xffffffc4;
    local_20 = (LPCWSTR)&stack0xffffffc4;
    if (&stack0x00000000 != (undefined1 *)0x3c) {
LAB_1019614c:
      local_20 = pWVar4 + 4;
      goto LAB_10196159;
    }
  }
  else {
    pWVar4 = (LPCWSTR)__malloc_base(-(uint)(uVar2 < uVar2 + 8) & uVar2 + 8);
    local_20 = pWVar4;
    if (pWVar4 != (LPCWSTR)0x0) {
      pWVar4[0] = L'\xdddd';
      pWVar4[1] = L'\0';
      goto LAB_1019614c;
    }
  }
  __freea_crt(local_20);
LAB_10196243:
  iVar8 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar8;
}

