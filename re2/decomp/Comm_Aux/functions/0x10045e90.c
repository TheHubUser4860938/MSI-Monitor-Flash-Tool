// rea decompile_all
// name: FUN_10045e90
// address: 0x10045e90
// body: available
// range: 0x10045e90-0x10046320 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10045edf to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10045f03 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10045f33 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10045e90(void)

{
  wchar_t *pwVar1;
  uint uVar2;
  int *piVar3;
  byte bVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  wchar_t *pwVar11;
  int local_38;
  char local_34;
  int local_30;
  wchar_t *local_2c;
  int local_28;
  uint local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a0818;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10034a50();
  local_8 = 0;
  piVar5 = (int *)FUN_10048e90();
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_100351a0();
  }
  iVar6 = (**(code **)(*piVar5 + 0xc))();
  local_8._0_1_ = 1;
  local_14 = iVar6 + 0x10;
  piVar5 = (int *)FUN_10048e90();
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_100351a0();
  }
  iVar7 = (**(code **)(*piVar5 + 0xc))();
  pwVar11 = (wchar_t *)(iVar7 + 0x10);
  local_8._0_1_ = 2;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_2c = pwVar11;
  piVar5 = (int *)FUN_10048e90();
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_100351a0();
  }
  iVar7 = (**(code **)(*piVar5 + 0xc))();
  iVar7 = iVar7 + 0x10;
  local_8._0_1_ = 3;
  iVar6 = iVar6 + 0x10;
  local_30 = iVar7;
  if (*(int *)(local_28 + -0xc) == 0) {
LAB_10046239:
    if (DAT_1021ae54 != 0) {
      FUN_100352e0();
      local_8._0_1_ = 8;
      FUN_10034a50(&DAT_1021ae10);
      local_8._0_1_ = 3;
      FUN_10033a90();
    }
    if (local_18 != (int *)0x0) {
      FID_conflict__free(local_18);
    }
    if (local_1c != (int *)0x0) {
      FID_conflict__free(local_1c);
    }
  }
  else {
    FUN_10034370();
    FUN_100342c0();
    FUN_10037b90();
    FUN_10037b90();
    FUN_10034940();
    iVar6 = local_14;
    if ((*(uint *)(local_14 + -0xc) & 1) != 0) goto LAB_10046239;
    bVar4 = (byte)*(uint *)(local_14 + -0xc) >> 1;
    uVar10 = (uint)bVar4;
    if (0x10 < bVar4) {
      uVar10 = 0x10;
    }
    local_24 = uVar10;
    local_1c = (int *)FUN_10047ef0();
    local_18 = (int *)FUN_10047ef0();
    _memset(local_18,0,local_24);
    _memset(local_1c,0,local_24);
    if ((local_1c == (int *)0x0) || (local_18 == (int *)0x0)) {
LAB_10046121:
      piVar3 = local_18;
      piVar5 = local_1c;
      uVar10 = local_24;
      if (DAT_1021ae54 != 0) {
        FUN_10034a50();
        local_8._0_1_ = 6;
        FUN_10034a50(&DAT_1021ae10);
        local_8._0_1_ = 3;
        FUN_10033a90();
        piVar3 = local_18;
        piVar5 = local_1c;
        uVar10 = local_24;
      }
      while (local_20 = piVar3, uVar2 = uVar10 - 4, 3 < uVar10) {
        if (*piVar5 != *local_20) goto LAB_1004618d;
        iVar6 = local_14;
        piVar3 = local_20 + 1;
        piVar5 = piVar5 + 1;
        uVar10 = uVar2;
      }
      if (uVar2 != 0xfffffffc) {
LAB_1004618d:
        iVar6 = local_14;
        if (((char)*piVar5 != (char)*local_20) ||
           ((uVar2 != 0xfffffffd &&
            ((*(char *)((int)piVar5 + 1) != *(char *)((int)local_20 + 1) ||
             ((uVar2 != 0xfffffffe &&
              ((*(char *)((int)piVar5 + 2) != *(char *)((int)local_20 + 2) ||
               ((uVar2 != 0xffffffff && (*(char *)((int)piVar5 + 3) != *(char *)((int)local_20 + 3))
                ))))))))))) goto LAB_10046239;
      }
      if (DAT_1021ae54 != 0) {
        FUN_100352e0();
        local_8._0_1_ = 7;
        FUN_10034a50(&DAT_1021ae10);
        local_8._0_1_ = 3;
        FUN_10033a90();
      }
      if (local_18 != (int *)0x0) {
        FID_conflict__free(local_18);
      }
      if (local_1c != (int *)0x0) {
        FID_conflict__free(local_1c);
      }
      local_24 = 1;
      goto LAB_10046299;
    }
    iVar8 = FUN_100457e0(DAT_1021ae8c);
    if (iVar8 != 0) {
      FUN_10034ea0();
      local_34 = (char)uVar10;
      local_20 = (int *)0x0;
      if (local_34 != '\0') {
        iVar8 = (int)local_1c - (int)local_18;
        do {
          FUN_10033e10();
          local_8._0_1_ = 4;
          FUN_10034940();
          local_8._0_1_ = 3;
          LOCK();
          piVar5 = (int *)(uVar10 - 4);
          iVar6 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar6 == 1 || iVar6 + -1 < 0) {
            (**(code **)(**(int **)(uVar10 - 0x10) + 4))();
          }
          FUN_10033e80();
          local_8._0_1_ = 5;
          FUN_10034940();
          local_8._0_1_ = 3;
          LOCK();
          piVar5 = (int *)(local_38 + -4);
          iVar6 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar6 == 1 || iVar6 + -1 < 0) {
            (**(code **)(**(int **)(local_38 + -0x10) + 4))();
          }
          pwVar11 = local_2c;
          uVar9 = _wcstoul(local_2c,(wchar_t **)0x0,0x10);
          piVar5 = local_20;
          ((byte *)((int)local_18 + (int)local_20))[iVar8] = (byte)uVar9;
          if (DAT_1021ae54 != 0) {
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                      ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (uint)*(byte *)((int)local_18 + (int)local_20),(wchar_t *)&local_30,
                       &DAT_101e3630,local_20);
            iVar7 = local_30;
            FUN_10034490();
          }
          local_20 = (int *)((int)piVar5 + 1);
          iVar6 = local_14;
        } while ((int)local_20 < (int)local_24);
      }
      goto LAB_10046121;
    }
    FID_conflict__free(local_18);
    FID_conflict__free(local_1c);
  }
  local_24 = 0;
LAB_10046299:
  local_8._0_1_ = 2;
  LOCK();
  piVar5 = (int *)(iVar7 + -4);
  iVar8 = *piVar5;
  *piVar5 = *piVar5 + -1;
  UNLOCK();
  if (iVar8 == 1 || iVar8 + -1 < 0) {
    (**(code **)(**(int **)(iVar7 + -0x10) + 4))();
  }
  local_8._0_1_ = 1;
  LOCK();
  pwVar1 = pwVar11 + -2;
  iVar7 = *(int *)pwVar1;
  *(int *)pwVar1 = *(int *)pwVar1 + -1;
  UNLOCK();
  if (iVar7 == 1 || iVar7 + -1 < 0) {
    (**(code **)(**(int **)(pwVar11 + -8) + 4))();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  LOCK();
  piVar5 = (int *)(iVar6 + -4);
  iVar7 = *piVar5;
  *piVar5 = *piVar5 + -1;
  UNLOCK();
  if (iVar7 == 1 || iVar7 + -1 < 0) {
    (**(code **)(**(int **)(iVar6 + -0x10) + 4))();
  }
  local_8 = 0xffffffff;
  LOCK();
  piVar5 = (int *)(local_28 + -4);
  iVar6 = *piVar5;
  *piVar5 = *piVar5 + -1;
  UNLOCK();
  if (iVar6 == 1 || iVar6 + -1 < 0) {
    (**(code **)(**(int **)(local_28 + -0x10) + 4))();
  }
  ExceptionList = local_10;
  return local_24;
}

