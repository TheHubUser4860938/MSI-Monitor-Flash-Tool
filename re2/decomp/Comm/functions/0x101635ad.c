// rea decompile_all
// name: FUN_101635ad
// address: 0x101635ad
// body: available
// range: 0x101635ad-0x10163781 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10163781 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_101635ad(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  errno_t eVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  bool bVar13;
  uint local_10;
  undefined4 *local_c;
  int local_8;
  
  puVar4 = (undefined4 *)FUN_10162ff0();
  local_8 = 0;
  local_10 = 0;
  local_c = puVar4;
  iVar5 = FUN_1016304e(&local_8);
  if ((iVar5 == 0) && (iVar5 = FUN_10162ff6(&local_10), iVar5 == 0)) {
    pbVar12 = param_1;
    pbVar11 = DAT_101decc8;
    if (DAT_101decc8 != (byte *)0x0) {
      do {
        bVar1 = *pbVar12;
        bVar13 = bVar1 < *pbVar11;
        if (bVar1 != *pbVar11) {
LAB_1016361e:
          uVar6 = -(uint)bVar13 | 1;
          goto LAB_10163623;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar12[1];
        bVar13 = bVar1 < pbVar11[1];
        if (bVar1 != pbVar11[1]) goto LAB_1016361e;
        pbVar12 = pbVar12 + 2;
        pbVar11 = pbVar11 + 2;
      } while (bVar1 != 0);
      uVar6 = 0;
LAB_10163623:
      puVar4 = local_c;
      if (uVar6 == 0) {
        return;
      }
    }
    FID_conflict__free(DAT_101decc8);
    pbVar12 = param_1;
    do {
      bVar1 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar1 != 0);
    DAT_101decc8 = (byte *)__malloc_base(pbVar12 + (1 - (int)(param_1 + 1)));
    FID_conflict__free((void *)0x0);
    if (DAT_101decc8 == (byte *)0x0) {
      return;
    }
    pbVar12 = param_1;
    do {
      bVar1 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar1 != 0);
    eVar7 = _strcpy_s((char *)DAT_101decc8,(rsize_t)(pbVar12 + (1 - (int)(param_1 + 1))),
                      (char *)param_1);
    if (eVar7 == 0) {
      iVar5 = 3;
      iVar8 = FUN_10162f15(*puVar4,0x40,param_1,3);
      if (iVar8 == 0) {
        do {
          if (*param_1 == 0) break;
          param_1 = param_1 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        bVar1 = *param_1;
        if (bVar1 == 0x2d) {
          param_1 = param_1 + 1;
        }
        local_8 = FID_conflict__atoi((char *)param_1);
        local_8 = local_8 * 0xe10;
        for (; (bVar2 = *param_1, bVar2 == 0x2b || (('/' < (char)bVar2 && ((char)bVar2 < ':'))));
            param_1 = param_1 + 1) {
        }
        if (*param_1 == 0x3a) {
          param_1 = param_1 + 1;
          iVar5 = FID_conflict__atoi((char *)param_1);
          local_8 = local_8 + iVar5 * 0x3c;
          for (; ('/' < (char)*param_1 && ((char)*param_1 < ':')); param_1 = param_1 + 1) {
          }
          if (*param_1 == 0x3a) {
            param_1 = param_1 + 1;
            iVar5 = FID_conflict__atoi((char *)param_1);
            local_8 = local_8 + iVar5;
            for (; ('/' < (char)*param_1 && ((char)*param_1 < ':')); param_1 = param_1 + 1) {
            }
          }
        }
        if (bVar1 == 0x2d) {
          local_8 = -local_8;
        }
        local_10 = (uint)(*param_1 != 0);
        if (local_10 == 0) {
          *(undefined1 *)local_c[1] = 0;
        }
        else {
          iVar5 = FUN_10162f15(local_c[1],0x40,param_1,3);
          if (iVar5 != 0) goto LAB_10163775;
        }
        iVar5 = local_8;
        piVar9 = (int *)FUN_10162fea();
        uVar6 = local_10;
        *piVar9 = iVar5;
        puVar10 = (uint *)FUN_10162fde();
        *puVar10 = uVar6;
        return;
      }
    }
  }
LAB_10163775:
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

