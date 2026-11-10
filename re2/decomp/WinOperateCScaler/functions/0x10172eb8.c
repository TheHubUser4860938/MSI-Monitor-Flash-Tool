// rea decompile_all
// name: common_tox_l<&bool___cdecl_internal_islower_l(int,struct___crt_locale_pointers*_const),&int___cdecl_internal_map_upper(int,struct___crt_locale_pointers*_const)>
// address: 0x10172eb8
// body: available
// range: 0x10172eb8-0x10173001 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl common_tox_l<&bool __cdecl internal_islower_l(int,struct __crt_locale_pointers *
   const),&int __cdecl internal_map_upper(int,struct __crt_locale_pointers * const)>(int,unsigned
   long,struct __crt_locale_pointers * const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
common_tox_l<&bool___cdecl_internal_islower_l(int,struct___crt_locale_pointers*_const),&int___cdecl_internal_map_upper(int,struct___crt_locale_pointers*_const)>
          (int param_1,ulong param_2,__crt_locale_pointers *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int local_20;
  localeinfo_struct local_1c;
  char local_14;
  uint local_10;
  undefined2 local_c;
  undefined1 local_a;
  undefined2 local_8;
  undefined1 local_6;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_20,param_3);
  if ((uint)param_1 < 0x100) {
    bVar2 = internal_islower_l(param_1,(__crt_locale_pointers *)&local_1c);
    if (bVar2) {
      bVar1 = (local_1c.locinfo)->pcumap[param_1];
      if (local_14 == '\0') {
        return (uint)bVar1;
      }
      *(uint *)(local_20 + 0x350) = *(uint *)(local_20 + 0x350) & 0xfffffffd;
      return (uint)bVar1;
    }
    if (local_14 == '\0') {
      return param_1;
    }
    *(uint *)(local_20 + 0x350) = *(uint *)(local_20 + 0x350) & 0xfffffffd;
    return param_1;
  }
  local_8 = 0;
  local_6 = 0;
  if (1 < (int)(local_1c.locinfo)->lc_codepage) {
    local_10 = param_1 >> 8;
    iVar3 = __isleadbyte_l(local_10 & 0xff,&local_1c);
    if (iVar3 != 0) {
      local_8 = CONCAT11((byte)param_1,(char)local_10);
      local_6 = 0;
      uVar5 = 2;
      goto LAB_10172f78;
    }
  }
  piVar4 = __errno();
  *piVar4 = 0x2a;
  uVar5 = 1;
  local_8 = (ushort)(byte)param_1;
LAB_10172f78:
  local_c = 0;
  local_a = 0;
  iVar3 = ___acrt_LCMapStringA
                    (&local_1c,(local_1c.locinfo)->locale_name[2],param_2,&local_8,uVar5,&local_c,3,
                     (local_1c.locinfo)->lc_collate_cp,1);
  if (iVar3 == 0) {
    if (local_14 != '\0') {
      *(uint *)(local_20 + 0x350) = *(uint *)(local_20 + 0x350) & 0xfffffffd;
    }
  }
  else if (iVar3 == 1) {
    param_1 = (int)(byte)local_c;
    if (local_14 != '\0') {
      *(uint *)(local_20 + 0x350) = *(uint *)(local_20 + 0x350) & 0xfffffffd;
    }
  }
  else {
    param_1 = (int)CONCAT11((byte)local_c,local_c._1_1_);
    if (local_14 != '\0') {
      *(uint *)(local_20 + 0x350) = *(uint *)(local_20 + 0x350) & 0xfffffffd;
    }
  }
  return param_1;
}

