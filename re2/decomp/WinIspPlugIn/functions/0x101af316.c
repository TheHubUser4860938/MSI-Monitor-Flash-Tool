// rea decompile_all
// name: __Wcsftime_l
// address: 0x101af316
// body: available
// range: 0x101af316-0x101af496 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __Wcsftime_l
   
   Library: Visual Studio 2015 Release */

int __Wcsftime_l(ushort *param_1,int param_2,ushort *param_3,int param_4,int param_5,
                __crt_locale_pointers *param_6)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  ushort *puVar7;
  int local_28;
  int local_24 [2];
  char local_1c;
  uint local_18;
  uint local_14;
  ushort *local_10;
  int local_c [2];
  
  if ((param_1 == (ushort *)0x0) || (param_2 == 0)) {
    piVar5 = __errno();
    *piVar5 = 0x16;
    FUN_1019ab61();
    return 0;
  }
  *param_1 = 0;
  if (param_3 == (ushort *)0x0) {
    piVar5 = __errno();
    *piVar5 = 0x16;
    FUN_1019ab61();
    return 0;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_6);
  if (param_5 == 0) {
    param_5 = *(int *)(local_24[0] + 0x9c);
  }
  iVar6 = 0;
  local_10 = param_1;
  local_c[0] = param_2;
  if (param_2 != 0) {
    do {
      uVar1 = *param_3;
      local_14 = (uint)uVar1;
      if (local_14 == 0) break;
      if (uVar1 == 0x25) {
        if (param_4 == 0) goto LAB_101af46e;
        puVar7 = param_3 + 1;
        uVar3 = local_18 >> 8;
        local_18 = local_18 & 0xffffff00;
        if (*puVar7 == 0x23) {
          local_18 = CONCAT31((int3)uVar3,1);
          puVar7 = param_3 + 2;
        }
        if ((*puVar7 == 0x45) || (*puVar7 == 0x4f)) {
          puVar7 = puVar7 + 1;
        }
        cVar4 = FUN_101ad891(local_24,*puVar7,param_4,&local_10,local_c,param_5,local_18);
        if (cVar4 == '\0') {
          if (local_c[0] == 0) goto LAB_101af452;
          bVar2 = true;
          goto LAB_101af454;
        }
      }
      else {
        *local_10 = uVar1;
        local_10 = local_10 + 1;
        local_c[0] = local_c[0] + -1;
        puVar7 = param_3;
      }
      param_3 = puVar7 + 1;
    } while (local_c[0] != 0);
    if (local_c[0] != 0) {
      *local_10 = 0;
      iVar6 = param_2 - local_c[0];
      goto LAB_101af47e;
    }
  }
LAB_101af452:
  bVar2 = false;
LAB_101af454:
  *param_1 = 0;
  if ((bVar2) || (local_c[0] != 0)) {
LAB_101af46e:
    piVar5 = __errno();
    *piVar5 = 0x16;
    FUN_1019ab61();
  }
  else {
    piVar5 = __errno();
    *piVar5 = 0x22;
  }
LAB_101af47e:
  if (local_1c != '\0') {
    *(uint *)(local_28 + 0x350) = *(uint *)(local_28 + 0x350) & 0xfffffffd;
  }
  return iVar6;
}

