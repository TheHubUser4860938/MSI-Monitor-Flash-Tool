// rea decompile_all
// name: ___acrt_locale_initialize_ctype
// address: 0x1015d51b
// body: available
// range: 0x1015d51b-0x1015d8b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___acrt_locale_initialize_ctype
   
   Library: Visual Studio 2015 Release */

void ___acrt_locale_initialize_ctype(undefined4 *param_1)

{
  BYTE *pBVar1;
  undefined4 *puVar2;
  byte bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  void *pvVar7;
  BOOL BVar8;
  BYTE *pBVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined2 *puVar12;
  undefined4 *puVar13;
  undefined4 *local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  void *local_34;
  uint local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_40 = param_1;
  local_20 = (undefined4 *)0x0;
  local_24 = (undefined4 *)0x0;
  local_28 = (undefined4 *)0x0;
  local_34 = (void *)0x0;
  local_4c = param_1;
  local_48 = 0;
  if (param_1[0x2a] == 0) {
    piVar4 = (int *)param_1[0x23];
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      UNLOCK();
    }
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    *param_1 = &DAT_101ad598;
    param_1[0x25] = &DAT_101ad818;
    param_1[0x26] = &DAT_101ad998;
    param_1[1] = 1;
    goto LAB_1015d8a8;
  }
  local_2c = (undefined4 *)0x0;
  if ((param_1[2] == 0) &&
     (iVar6 = FUN_10167db0(&local_4c,0,param_1[0x2a],0x1004,param_1 + 2), iVar6 != 0)) {
LAB_1015d839:
    FID_conflict__free(local_2c);
    FID_conflict__free(local_20);
    FID_conflict__free(local_24);
    FID_conflict__free(local_28);
  }
  else {
    local_2c = (undefined4 *)__calloc_base(1,4);
    FID_conflict__free((void *)0x0);
    local_20 = (undefined4 *)__calloc_base(0x180,2);
    FID_conflict__free((void *)0x0);
    local_24 = (undefined4 *)__calloc_base(0x180,1);
    FID_conflict__free((void *)0x0);
    local_28 = (undefined4 *)__calloc_base(0x180,1);
    FID_conflict__free((void *)0x0);
    pvVar7 = (void *)__calloc_base(0x101,1);
    local_34 = pvVar7;
    FID_conflict__free((void *)0x0);
    if ((local_2c == (undefined4 *)0x0) ||
       ((((local_20 == (undefined4 *)0x0 || (pvVar7 == (void *)0x0)) ||
         (local_24 == (undefined4 *)0x0)) || (local_28 == (undefined4 *)0x0)))) goto LAB_1015d839;
    iVar6 = 0;
    do {
      *(char *)(iVar6 + (int)pvVar7) = (char)iVar6;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x100);
    BVar8 = GetCPInfo(param_1[2],&local_1c);
    if ((BVar8 == 0) || (5 < local_1c.MaxCharSize)) goto LAB_1015d839;
    local_30 = local_1c.MaxCharSize & 0xffff;
    iVar6 = ___acrt_LCMapStringA
                      (0,param_1[0x2a],0x100,(int)pvVar7 + 1,0xff,(int)local_24 + 0x81,0xff,
                       param_1[2],0);
    if ((iVar6 == 0) ||
       (iVar6 = ___acrt_LCMapStringA
                          (0,param_1[0x2a],0x200,(int)pvVar7 + 1,0xff,(int)local_28 + 0x81,0xff,
                           param_1[2],0), iVar6 == 0)) goto LAB_1015d839;
    if ((1 < (int)local_30) && (local_1c.LeadByte[0] != '\0')) {
      pBVar9 = local_1c.LeadByte + 1;
      do {
        bVar3 = *pBVar9;
        if (bVar3 == 0) break;
        for (uVar10 = (uint)pBVar9[-1]; (int)uVar10 <= (int)(uint)bVar3; uVar10 = uVar10 + 1) {
          *(undefined1 *)(uVar10 + (int)pvVar7) = 0x20;
          bVar3 = *pBVar9;
        }
        pBVar1 = pBVar9 + 1;
        pBVar9 = pBVar9 + 2;
      } while (*pBVar1 != 0);
    }
    local_3c = local_20 + 0x40;
    iVar6 = ___acrt_GetStringTypeA(0,1,pvVar7,0x100,local_3c,param_1[2],0);
    puVar5 = local_40;
    if (iVar6 == 0) goto LAB_1015d839;
    puVar2 = (undefined4 *)((int)local_20 + 0xfe);
    *(undefined2 *)puVar2 = 0;
    *(undefined1 *)((int)local_24 + 0x7f) = 0;
    local_44 = local_24 + 0x20;
    *(undefined1 *)((int)local_28 + 0x7f) = 0;
    *(undefined1 *)local_44 = 0;
    local_38 = local_28 + 0x20;
    *(undefined1 *)local_38 = 0;
    if ((1 < (int)local_30) && (local_1c.LeadByte[0] != '\0')) {
      pBVar9 = local_1c.LeadByte + 1;
      do {
        if (*pBVar9 == 0) break;
        uVar10 = (uint)pBVar9[-1];
        if (uVar10 <= *pBVar9) {
          puVar12 = (undefined2 *)((int)local_20 + uVar10 * 2 + 0x100);
          do {
            uVar10 = uVar10 + 1;
            *puVar12 = 0x8000;
            puVar12 = puVar12 + 1;
          } while ((int)uVar10 <= (int)(uint)*pBVar9);
        }
        pBVar1 = pBVar9 + 1;
        pBVar9 = pBVar9 + 2;
      } while (*pBVar1 != 0);
    }
    puVar11 = local_20 + 0x80;
    for (iVar6 = 0x3f; iVar6 != 0; iVar6 = iVar6 + -1) {
      *local_20 = *puVar11;
      puVar11 = puVar11 + 1;
      local_20 = local_20 + 1;
    }
    *(undefined2 *)local_20 = *(undefined2 *)puVar11;
    puVar11 = local_24 + 0x40;
    puVar13 = local_24;
    for (iVar6 = 0x1f; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    *(undefined2 *)puVar13 = *(undefined2 *)puVar11;
    *(undefined1 *)((int)puVar13 + 2) = *(undefined1 *)((int)puVar11 + 2);
    puVar11 = local_28 + 0x40;
    puVar13 = local_28;
    for (iVar6 = 0x1f; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    *(undefined2 *)puVar13 = *(undefined2 *)puVar11;
    *(undefined1 *)((int)puVar13 + 2) = *(undefined1 *)((int)puVar11 + 2);
    piVar4 = (int *)local_40[0x23];
    local_20 = puVar2;
    if (piVar4 != (int *)0x0) {
      LOCK();
      iVar6 = *piVar4;
      *piVar4 = iVar6 + -1;
      UNLOCK();
      if (iVar6 + -1 == 0) {
        FID_conflict__free((void *)(local_40[0x24] + -0xfe));
        FID_conflict__free((void *)(puVar5[0x25] + -0x80));
        FID_conflict__free((void *)(puVar5[0x26] + -0x80));
        FID_conflict__free((void *)puVar5[0x23]);
      }
    }
    *local_2c = 1;
    puVar5[0x23] = local_2c;
    *puVar5 = local_3c;
    puVar5[0x24] = local_20;
    puVar5[0x25] = local_44;
    puVar5[0x26] = local_38;
    puVar5[1] = local_30;
  }
  FID_conflict__free(local_34);
LAB_1015d8a8:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

