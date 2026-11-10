// rea decompile_all
// name: FUN_1000c560
// address: 0x1000c560
// body: available
// range: 0x1000c560-0x1000c921 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000c8ab to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000c8b7 to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000c8c3 to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000c8cd to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000c560(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined1 uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int in_ECX;
  int iVar10;
  char *pcVar11;
  undefined4 *puVar12;
  void *pvVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  undefined1 local_110 [64];
  void *local_d0 [5];
  uint local_bc;
  undefined1 local_b8 [8];
  int local_b0;
  int local_ac;
  uint local_a8;
  int *local_a4;
  uint local_a0 [14];
  undefined4 local_68;
  uint local_64;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10195301;
  local_10 = ExceptionList;
  local_14 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_a4 = param_1;
  local_ac = in_ECX;
  FUN_10019660(local_14);
  local_8 = 0;
  local_68 = 0;
  local_64 = 0;
  FUN_100195f0(&DAT_101a63a8);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  iVar10 = *(int *)(in_ECX + 0x24);
  local_8._0_1_ = 2;
  local_a0[0] = 0;
  if (((((iVar10 == 4) || (iVar10 == 5)) || (iVar10 == 6)) ||
      (((iVar10 == 7 || (iVar10 == 0x11)) || ((iVar10 == 0x1a || (iVar10 == 0x1b)))))) ||
     ((iVar10 == 8 && ((*(int *)(in_ECX + 0x30) == 4 || (*(int *)(in_ECX + 0x30) == 6)))))) {
    if (*(int *)(in_ECX + 0x1c) == 0) {
      if (*(int *)(in_ECX + 0x5c) == 0) {
        FUN_10003e70("Program fw bin path should not be empty!\n");
      }
    }
    else {
      piVar16 = (int *)**(int **)(in_ECX + 0x18);
      if (piVar16 != *(int **)(in_ECX + 0x18)) {
        while( true ) {
          local_a8 = piVar16[6];
          FUN_100197b0(piVar16 + 7);
          pcVar6 = (char *)thunk_FUN_10019d70();
          if (*pcVar6 == '\0') {
            iVar10 = 0;
          }
          else {
            pcVar11 = pcVar6;
            do {
              cVar1 = *pcVar11;
              pcVar11 = pcVar11 + 1;
            } while (cVar1 != '\0');
            iVar10 = (int)pcVar11 - (int)(pcVar6 + 1);
            param_1 = local_a4;
          }
          FUN_10003c70(pcVar6,iVar10);
          iVar10 = FUN_10008eb0(local_2c,local_a0);
          if (iVar10 == 0) break;
          uVar15 = 0;
          if (local_a0[0] != 0) {
            puVar2 = (undefined4 *)*param_1;
            uVar14 = local_a8;
            do {
              puVar7 = puVar2;
              puVar12 = (undefined4 *)puVar2[1];
              if (*(char *)((int)puVar2[1] + 0xd) == '\0') {
                do {
                  puVar8 = puVar12;
                  if ((uint)puVar8[4] < uVar14) {
                    puVar12 = (undefined4 *)puVar8[2];
                    puVar8 = puVar7;
                  }
                  else {
                    puVar12 = (undefined4 *)*puVar8;
                  }
                  puVar7 = puVar8;
                } while (*(char *)((int)puVar12 + 0xd) == '\0');
                if ((puVar8 == puVar2) || (uVar14 < (uint)puVar8[4])) goto LAB_1000c70d;
              }
              else {
LAB_1000c70d:
                puVar8 = puVar2;
              }
              if (puVar8 != puVar2) {
                FUN_10003e70("Program fw bank duplicate!\n");
                goto LAB_1000c893;
              }
              uVar15 = uVar15 + 1;
              uVar14 = uVar14 + 1;
            } while (uVar15 < local_a0[0]);
          }
          uVar15 = 0;
          if (local_a0[0] != 0) {
            do {
              local_64 = uVar15;
              uVar9 = FUN_1001baf0(local_d0,local_2c);
              local_8._0_1_ = 3;
              FUN_100198a0(uVar9);
              local_8._0_1_ = 2;
              uVar4 = (undefined1)local_8;
              local_8._0_1_ = 2;
              if (7 < local_bc) {
                if ((0x7fffffff < local_bc + 1) ||
                   ((pvVar13 = local_d0[0], 0xfff < (local_bc + 1) * 2 &&
                    ((((uVar4 = (undefined1)local_8, ((uint)local_d0[0] & 0x1f) != 0 ||
                       (pvVar13 = *(void **)((int)local_d0[0] + -4), local_d0[0] <= pvVar13)) ||
                      ((uint)((int)local_d0[0] - (int)pvVar13) < 4)) ||
                     (0x23 < (uint)((int)local_d0[0] - (int)pvVar13))))))) goto LAB_1000c8ab;
                FID_conflict__free(pvVar13);
              }
              local_b0 = local_a8 + uVar15;
              uVar9 = FUN_10005d10(local_110,&local_b0,&local_68);
              local_8._0_1_ = 4;
              iVar10 = FUN_10005680(uVar9);
              FUN_10005a10(local_b8,0,iVar10 + 0x10,iVar10);
              local_8._0_1_ = 2;
              FUN_100196a0();
              uVar15 = uVar15 + 1;
            } while (uVar15 < local_a0[0]);
          }
          if (*(char *)((int)piVar16 + 0xd) == '\0') {
            piVar3 = (int *)piVar16[2];
            if (*(char *)((int)piVar3 + 0xd) == '\0') {
              cVar1 = *(char *)(*piVar3 + 0xd);
              piVar16 = piVar3;
              piVar3 = (int *)*piVar3;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*piVar3 + 0xd);
                piVar16 = piVar3;
                piVar3 = (int *)*piVar3;
              }
            }
            else {
              cVar1 = *(char *)(piVar16[1] + 0xd);
              piVar5 = (int *)piVar16[1];
              piVar3 = piVar16;
              while ((piVar16 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar16[2]))) {
                cVar1 = *(char *)(piVar16[1] + 0xd);
                piVar5 = (int *)piVar16[1];
                piVar3 = piVar16;
              }
            }
          }
          param_1 = local_a4;
          if (piVar16 == *(int **)(local_ac + 0x18)) break;
        }
      }
    }
  }
LAB_1000c893:
  if (0xf < local_18) {
    pvVar13 = local_2c[0];
    if (0xfff < local_18 + 1) {
      uVar4 = (undefined1)local_8;
      if (((uint)local_2c[0] & 0x1f) != 0) {
LAB_1000c8ab:
        local_8._0_1_ = uVar4;
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51();
      }
      pvVar13 = *(void **)((int)local_2c[0] + -4);
      if (local_2c[0] <= pvVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51();
      }
      if ((uint)((int)local_2c[0] - (int)pvVar13) < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51();
      }
      if (0x23 < (uint)((int)local_2c[0] - (int)pvVar13)) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51();
      }
    }
    FID_conflict__free(pvVar13);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_100196a0();
  FUN_100196a0();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

