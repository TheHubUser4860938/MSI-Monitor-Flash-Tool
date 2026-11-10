// rea decompile_all
// name: InternalCompareStringA
// address: 0x1019f6ba
// body: available
// range: 0x1019f6ba-0x1019f961 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl InternalCompareStringA(struct __crt_locale_pointers *,wchar_t const *,unsigned
   long,char const *,int,char const *,int,int)
   
   Library: Visual Studio 2015 Release */

int __cdecl
InternalCompareStringA
          (__crt_locale_pointers *param_1,wchar_t *param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8)

{
  uint uVar1;
  BOOL BVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  BYTE *pBVar7;
  LPWSTR pWVar8;
  LPWSTR local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  if (param_5 < 1) {
    if (param_5 < -1) goto LAB_1019f94e;
  }
  else {
    param_5 = ___strncnt(param_4,param_5);
  }
  if (param_7 < 1) {
    if (param_7 < -1) goto LAB_1019f94e;
  }
  else {
    param_7 = ___strncnt(param_6,param_7);
  }
  if (param_8 == 0) {
    param_8 = *(int *)(*(int *)param_1 + 8);
  }
  if ((param_5 == 0) || (param_7 == 0)) {
    if ((param_5 == param_7) ||
       (((1 < param_7 || (1 < param_5)) || (BVar2 = GetCPInfo(param_8,&local_1c), BVar2 == 0))))
    goto LAB_1019f94e;
    if (0 < param_5) {
      if (1 < local_1c.MaxCharSize) {
        pBVar7 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar7[1] != 0)) &&
               (((byte)*param_4 < *pBVar7 || (pBVar7[1] < (byte)*param_4))))) {
          pBVar7 = pBVar7 + 2;
          local_1c.LeadByte[0] = *pBVar7;
        }
      }
      goto LAB_1019f94e;
    }
    if (0 < param_7) {
      if (1 < local_1c.MaxCharSize) {
        pBVar7 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar7[1] != 0)) &&
               (((byte)*param_6 < *pBVar7 || (pBVar7[1] < (byte)*param_6))))) {
          pBVar7 = pBVar7 + 2;
          local_1c.LeadByte[0] = *pBVar7;
        }
      }
      goto LAB_1019f94e;
    }
  }
  iVar6 = MultiByteToWideChar(param_8,9,param_4,param_5,(LPWSTR)0x0,0);
  if (iVar6 == 0) goto LAB_1019f94e;
  uVar1 = iVar6 * 2;
  if ((uVar1 + 8 & -(uint)(uVar1 < uVar1 + 8)) == 0) {
    local_20 = (LPWSTR)0x0;
LAB_1019f866:
    if (((local_20 != (LPWSTR)0x0) &&
        (iVar3 = MultiByteToWideChar(param_8,1,param_4,param_5,local_20,iVar6), iVar3 != 0)) &&
       (iVar3 = MultiByteToWideChar(param_8,9,param_6,param_7,(LPWSTR)0x0,0), iVar3 != 0)) {
      uVar1 = iVar3 * 2;
      if ((uVar1 + 8 & -(uint)(uVar1 < uVar1 + 8)) == 0) {
        pWVar8 = (LPWSTR)0x0;
LAB_1019f8fe:
        if ((pWVar8 != (LPWSTR)0x0) &&
           (iVar5 = MultiByteToWideChar(param_8,1,param_6,param_7,pWVar8,iVar3), iVar5 != 0)) {
          ___acrt_CompareStringEx_36(param_2,param_3,local_20,iVar6,pWVar8,iVar3,0,0,0);
        }
      }
      else if ((-(uint)(uVar1 < uVar1 + 8) & uVar1 + 8) < 0x401) {
        puVar4 = (undefined4 *)&stack0xffffffc4;
        pWVar8 = (LPWSTR)&stack0xffffffc4;
        if (&stack0x00000000 != (undefined1 *)0x3c) {
LAB_1019f8f7:
          pWVar8 = (LPWSTR)(puVar4 + 2);
          goto LAB_1019f8fe;
        }
      }
      else {
        puVar4 = (undefined4 *)__malloc_base(-(uint)(uVar1 < uVar1 + 8) & uVar1 + 8);
        pWVar8 = (LPWSTR)0x0;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0xdddd;
          goto LAB_1019f8f7;
        }
      }
      __freea_crt(pWVar8);
    }
  }
  else if ((-(uint)(uVar1 < uVar1 + 8) & uVar1 + 8) < 0x401) {
    pWVar8 = (LPWSTR)&stack0xffffffc4;
    local_20 = (LPWSTR)&stack0xffffffc4;
    if (&stack0x00000000 != (undefined1 *)0x3c) {
LAB_1019f859:
      local_20 = pWVar8 + 4;
      goto LAB_1019f866;
    }
  }
  else {
    pWVar8 = (LPWSTR)__malloc_base(-(uint)(uVar1 < uVar1 + 8) & uVar1 + 8);
    local_20 = pWVar8;
    if (pWVar8 != (LPWSTR)0x0) {
      pWVar8[0] = L'\xdddd';
      pWVar8[1] = L'\0';
      goto LAB_1019f859;
    }
  }
  __freea_crt(local_20);
LAB_1019f94e:
  iVar6 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar6;
}

