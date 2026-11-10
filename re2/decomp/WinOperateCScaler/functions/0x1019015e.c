// rea decompile_all
// name: ___acrt_locale_initialize_monetary
// address: 0x1019015e
// body: available
// range: 0x1019015e-0x10190519 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___acrt_locale_initialize_monetary
   
   Library: Visual Studio 2015 Release */

undefined4 ___acrt_locale_initialize_monetary(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined4 uVar26;
  char *pcVar27;
  char *pcVar28;
  undefined **ppuVar29;
  int local_1c [2];
  undefined **local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined **local_8;
  
  local_10 = (undefined4 *)0x0;
  local_1c[0] = param_1;
  local_1c[1] = 0;
  if ((*(int *)(param_1 + 0xac) == 0) && (*(int *)(param_1 + 0xb0) == 0)) {
    local_c = (undefined4 *)0x0;
    ppuVar3 = &PTR_DAT_10202148;
LAB_101904cd:
    puVar4 = local_10;
    piVar2 = *(int **)(param_1 + 0x84);
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
    }
    piVar2 = *(int **)(param_1 + 0x7c);
    if (piVar2 != (int *)0x0) {
      LOCK();
      iVar5 = *piVar2;
      *piVar2 = iVar5 + -1;
      UNLOCK();
      if (iVar5 + -1 == 0) {
        FID_conflict__free(*(void **)(param_1 + 0x88));
        FID_conflict__free(*(void **)(param_1 + 0x7c));
      }
    }
    *(undefined4 **)(param_1 + 0x7c) = local_c;
    uVar26 = 0;
    *(undefined4 **)(param_1 + 0x84) = puVar4;
    *(undefined ***)(param_1 + 0x88) = ppuVar3;
  }
  else {
    ppuVar3 = (undefined **)__calloc_base(1,0x50);
    local_8 = ppuVar3;
    FID_conflict__free((void *)0x0);
    if (ppuVar3 != (undefined **)0x0) {
      puVar4 = (undefined4 *)__calloc_base(1,4);
      local_c = puVar4;
      FID_conflict__free((void *)0x0);
      if (puVar4 == (undefined4 *)0x0) {
        FID_conflict__free(ppuVar3);
      }
      else {
        if (*(int *)(param_1 + 0xac) == 0) {
          ppuVar3 = &PTR_DAT_10202148;
          ppuVar29 = local_8;
          for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
            *ppuVar29 = *ppuVar3;
            ppuVar3 = ppuVar3 + 1;
            ppuVar29 = ppuVar29 + 1;
          }
LAB_1019047f:
          *local_8 = (undefined *)**(undefined4 **)(param_1 + 0x88);
          local_8[1] = *(undefined **)(*(int *)(param_1 + 0x88) + 4);
          local_8[2] = *(undefined **)(*(int *)(param_1 + 0x88) + 8);
          local_8[0xc] = *(undefined **)(*(int *)(param_1 + 0x88) + 0x30);
          local_8[0xd] = *(undefined **)(*(int *)(param_1 + 0x88) + 0x34);
          *local_c = 1;
          ppuVar3 = local_8;
          if (local_10 != (undefined4 *)0x0) {
            *local_10 = 1;
          }
          goto LAB_101904cd;
        }
        puVar4 = (undefined4 *)__calloc_base(1,4);
        local_10 = puVar4;
        FID_conflict__free((void *)0x0);
        if (puVar4 == (undefined4 *)0x0) {
          FID_conflict__free(ppuVar3);
          FID_conflict__free(local_c);
        }
        else {
          uVar26 = *(undefined4 *)(param_1 + 0xac);
          iVar5 = FUN_1018d4e7(local_1c,1,uVar26,0x15,ppuVar3 + 3);
          iVar6 = FUN_1018d4e7(local_1c,1,uVar26,0x14,local_8 + 4);
          iVar7 = FUN_1018d4e7(local_1c,1,uVar26,0x16,local_8 + 5);
          iVar8 = FUN_1018d4e7(local_1c,1,uVar26,0x17,local_8 + 6);
          local_14 = local_8 + 7;
          iVar9 = FUN_1018d4e7(local_1c,1,uVar26,0x18,local_14);
          iVar10 = FUN_1018d4e7(local_1c,1,uVar26,0x50,local_8 + 8);
          iVar11 = FUN_1018d4e7(local_1c,1,uVar26,0x51,local_8 + 9);
          iVar12 = FUN_1018d4e7(local_1c,0,uVar26,0x1a,local_8 + 10);
          iVar13 = FUN_1018d4e7(local_1c,0,uVar26,0x19,(int)local_8 + 0x29);
          iVar14 = FUN_1018d4e7(local_1c,0,uVar26,0x54,(int)local_8 + 0x2a);
          iVar15 = FUN_1018d4e7(local_1c,0,uVar26,0x55,(int)local_8 + 0x2b);
          iVar16 = FUN_1018d4e7(local_1c,0,uVar26,0x56,local_8 + 0xb);
          iVar17 = FUN_1018d4e7(local_1c,0,uVar26,0x57,(int)local_8 + 0x2d);
          iVar18 = FUN_1018d4e7(local_1c,0,uVar26,0x52,(int)local_8 + 0x2e);
          iVar19 = FUN_1018d4e7(local_1c,0,uVar26,0x53,(int)local_8 + 0x2f);
          iVar20 = FUN_1018d4e7(local_1c,2,uVar26,0x15,local_8 + 0xe);
          iVar21 = FUN_1018d4e7(local_1c,2,uVar26,0x14,local_8 + 0xf);
          iVar22 = FUN_1018d4e7(local_1c,2,uVar26,0x16,local_8 + 0x10);
          iVar23 = FUN_1018d4e7(local_1c,2,uVar26,0x17,local_8 + 0x11);
          iVar24 = FUN_1018d4e7(local_1c,2,uVar26,0x50,local_8 + 0x12);
          iVar25 = FUN_1018d4e7(local_1c,2,uVar26,0x51,local_8 + 0x13);
          ppuVar3 = local_8;
          if (iVar25 == 0 &&
              (((((((((((((((((((iVar5 == 0 && iVar6 == 0) && iVar7 == 0) && iVar8 == 0) &&
                             iVar9 == 0) && iVar10 == 0) && iVar11 == 0) && iVar12 == 0) &&
                         iVar13 == 0) && iVar14 == 0) && iVar15 == 0) && iVar16 == 0) && iVar17 == 0
                     ) && iVar18 == 0) && iVar19 == 0) && iVar20 == 0) && iVar21 == 0) &&
                iVar22 == 0) && iVar23 == 0) && iVar24 == 0)) {
            pcVar27 = *local_14;
            while (*pcVar27 != '\0') {
              cVar1 = *pcVar27;
              if ((cVar1 < '0') || ('9' < cVar1)) {
                pcVar28 = pcVar27;
                if (cVar1 != ';') goto LAB_10190455;
                do {
                  *pcVar28 = pcVar28[1];
                  pcVar28 = pcVar28 + 1;
                } while (*pcVar28 != '\0');
              }
              else {
                *pcVar27 = cVar1 + -0x30;
LAB_10190455:
                pcVar27 = pcVar27 + 1;
              }
            }
            goto LAB_1019047f;
          }
          ___acrt_locale_free_monetary(local_8);
          FID_conflict__free(ppuVar3);
          FID_conflict__free(local_c);
          FID_conflict__free(local_10);
        }
      }
    }
    uVar26 = 1;
  }
  return uVar26;
}

