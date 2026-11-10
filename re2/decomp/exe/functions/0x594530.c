// rea decompile_all
// name: ___acrt_locale_initialize_numeric
// address: 0x594530
// body: available
// range: 0x594530-0x59474b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___acrt_locale_initialize_numeric
   
   Library: Visual Studio 2015 Release */

undefined ** ___acrt_locale_initialize_numeric(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined **ppuVar10;
  char *pcVar11;
  undefined4 *puVar12;
  int local_1c [2];
  undefined4 *local_14;
  undefined **local_10;
  undefined4 *local_c;
  undefined **local_8;
  
  local_1c[0] = param_1;
  local_1c[1] = 0;
  if ((*(int *)(param_1 + 0xb0) == 0) && (*(int *)(param_1 + 0xac) == 0)) {
    puVar12 = (undefined4 *)0x0;
    local_c = (undefined4 *)0x0;
    ppuVar10 = &PTR_DAT_0060d0a8;
  }
  else {
    local_10 = (undefined **)0x1;
    local_8 = (undefined **)__calloc_base(1,0x50);
    if (local_8 == (undefined **)0x0) {
      return (undefined **)0x1;
    }
    puVar12 = *(undefined4 **)(param_1 + 0x88);
    ppuVar10 = local_8;
    for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
      *ppuVar10 = (undefined *)*puVar12;
      puVar12 = puVar12 + 1;
      ppuVar10 = ppuVar10 + 1;
    }
    puVar12 = (undefined4 *)__malloc_base(4);
    local_c = puVar12;
    FID_conflict__free((void *)0x0);
    if (puVar12 == (undefined4 *)0x0) {
      FID_conflict__free(local_8);
      return (undefined **)0x1;
    }
    *puVar12 = 0;
    if (*(int *)(param_1 + 0xb0) == 0) {
      *local_8 = PTR_DAT_0060d0a8;
      local_8[1] = PTR_DAT_0060d0ac;
      local_8[2] = PTR_DAT_0060d0b0;
      local_8[0xc] = PTR_DAT_0060d0d8;
      local_8[0xd] = PTR_DAT_0060d0dc;
      puVar12 = (undefined4 *)0x0;
    }
    else {
      puVar12 = (undefined4 *)__malloc_base(4);
      local_14 = puVar12;
      FID_conflict__free((void *)0x0);
      if (puVar12 == (undefined4 *)0x0) {
LAB_00594674:
        FID_conflict__free(local_8);
        FID_conflict__free(local_c);
        return local_10;
      }
      *puVar12 = 0;
      uVar2 = *(undefined4 *)(param_1 + 0xb0);
      iVar8 = FUN_00596d3b(local_1c,1,uVar2,0xe,local_8);
      iVar4 = FUN_00596d3b(local_1c,1,uVar2,0xf,local_8 + 1);
      local_10 = local_8 + 2;
      iVar5 = FUN_00596d3b(local_1c,1,uVar2,0x10,local_10);
      iVar6 = FUN_00596d3b(local_1c,2,uVar2,0xe,local_8 + 0xc);
      iVar7 = FUN_00596d3b(local_1c,2,uVar2,0xf,local_8 + 0xd);
      if (iVar7 != 0 || (((iVar8 != 0 || iVar4 != 0) || iVar5 != 0) || iVar6 != 0)) {
        ___acrt_locale_free_numeric(local_8);
        local_10 = (undefined **)0xffffffff;
        goto LAB_00594674;
      }
      pcVar9 = *local_10;
      while (puVar12 = local_14, *pcVar9 != '\0') {
        cVar1 = *pcVar9;
        if ((cVar1 < '0') || ('9' < cVar1)) {
          pcVar11 = pcVar9;
          if (cVar1 != ';') goto LAB_005946a1;
          do {
            *pcVar11 = pcVar11[1];
            pcVar11 = pcVar11 + 1;
          } while (*pcVar11 != '\0');
        }
        else {
          *pcVar9 = cVar1 + -0x30;
LAB_005946a1:
          pcVar9 = pcVar9 + 1;
        }
      }
    }
    *local_c = 1;
    ppuVar10 = local_8;
    if (puVar12 != (undefined4 *)0x0) {
      *puVar12 = 1;
    }
  }
  piVar3 = *(int **)(param_1 + 0x80);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
  }
  piVar3 = *(int **)(param_1 + 0x7c);
  if (piVar3 != (int *)0x0) {
    LOCK();
    iVar8 = *piVar3;
    *piVar3 = iVar8 + -1;
    UNLOCK();
    if (iVar8 + -1 == 0) {
      FID_conflict__free(*(void **)(param_1 + 0x7c));
      FID_conflict__free(*(void **)(param_1 + 0x88));
    }
  }
  *(undefined4 **)(param_1 + 0x7c) = local_c;
  *(undefined4 **)(param_1 + 0x80) = puVar12;
  *(undefined ***)(param_1 + 0x88) = ppuVar10;
  return (undefined **)0x0;
}

