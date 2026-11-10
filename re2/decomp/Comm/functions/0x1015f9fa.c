// rea decompile_all
// name: _mbstowcs_l_helper
// address: 0x1015f9fa
// body: available
// range: 0x1015f9fa-0x1015fb72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    unsigned int __cdecl _mbstowcs_l_helper(wchar_t *,char const *,unsigned int,struct
   __crt_locale_pointers *)
   
   Library: Visual Studio 2015 Release */

uint __cdecl
_mbstowcs_l_helper(wchar_t *param_1,char *param_2,uint param_3,__crt_locale_pointers *param_4)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  DWORD DVar5;
  byte *pbVar6;
  uint uVar7;
  int local_1c;
  localeinfo_struct local_18;
  char local_10;
  uint local_c;
  byte *local_8;
  
  uVar7 = 0;
  if (param_1 != (wchar_t *)0x0) {
    if (param_3 == 0) {
      return 0;
    }
    *param_1 = L'\0';
  }
  if (param_2 == (char *)0x0) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_1014f4c6();
    return 0xffffffff;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,param_4);
  if (param_1 == (wchar_t *)0x0) {
    if ((local_18.locinfo)->locale_name[2] == (wchar_t *)0x0) {
      pcVar1 = param_2 + 1;
      do {
        cVar2 = *param_2;
        param_2 = param_2 + 1;
      } while (cVar2 != '\0');
      uVar7 = (int)param_2 - (int)pcVar1;
      goto LAB_1015fb5a;
    }
    uVar7 = 0xffffffff;
    iVar4 = MultiByteToWideChar((local_18.locinfo)->lc_collate_cp,9,param_2,-1,(LPWSTR)0x0,0);
    if (iVar4 == 0) {
      piVar3 = __errno();
      *piVar3 = 0x2a;
      goto LAB_1015fb5a;
    }
  }
  else {
    if ((local_18.locinfo)->locale_name[2] == (wchar_t *)0x0) {
      if (param_3 != 0) {
        do {
          *param_1 = (ushort)(byte)param_2[uVar7];
          if (param_2[uVar7] == '\0') break;
          uVar7 = uVar7 + 1;
          param_1 = param_1 + 1;
        } while (uVar7 < param_3);
      }
      goto LAB_1015fb5a;
    }
    iVar4 = MultiByteToWideChar((local_18.locinfo)->lc_collate_cp,9,param_2,-1,param_1,param_3);
    if (iVar4 == 0) {
      DVar5 = GetLastError();
      pbVar6 = (byte *)param_2;
      uVar7 = param_3;
      if (DVar5 == 0x7a) {
        while (local_8 = pbVar6, uVar7 != 0) {
          local_c = uVar7 - 1;
          if (*local_8 == 0) break;
          iVar4 = __isleadbyte_l((uint)*local_8,&local_18);
          pbVar6 = local_8;
          if ((iVar4 != 0) && (pbVar6 = local_8 + 1, *pbVar6 == 0)) goto LAB_1015fb03;
          pbVar6 = pbVar6 + 1;
          uVar7 = local_c;
        }
        uVar7 = MultiByteToWideChar((local_18.locinfo)->lc_collate_cp,1,param_2,
                                    (int)local_8 - (int)param_2,param_1,param_3);
        if (uVar7 != 0) goto LAB_1015fb5a;
      }
LAB_1015fb03:
      piVar3 = __errno();
      *piVar3 = 0x2a;
      *param_1 = L'\0';
      uVar7 = 0xffffffff;
      goto LAB_1015fb5a;
    }
  }
  uVar7 = iVar4 - 1;
LAB_1015fb5a:
  if (local_10 != '\0') {
    *(uint *)(local_1c + 0x350) = *(uint *)(local_1c + 0x350) & 0xfffffffd;
  }
  return uVar7;
}

