// rea decompile_all
// name: FUN_1003ff20
// address: 0x1003ff20
// body: available
// range: 0x1003ff20-0x10040321 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003ff5f to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1003ff8b to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1003ffed to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1003ff20(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  CDialog *in_ECX;
  int iVar9;
  int local_38;
  int local_34;
  int local_28;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a1130;
  local_10 = ExceptionList;
  uVar3 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  CDialog::OnInitDialog(in_ECX);
  piVar4 = (int *)FUN_10048e90(uVar3);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_100351a0(0x80004005);
  }
  puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0xc))();
  local_8 = 0;
  piVar4 = (int *)FUN_10048e90(uVar3);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_100351a0(0x80004005);
  }
  puVar6 = (undefined4 *)(**(code **)(*piVar4 + 0xc))();
  local_8._0_1_ = 1;
  SendMessageW(*(HWND *)(in_ECX + 0xd0),0x14b,0,0);
  iVar1 = *(int *)(in_ECX + 0xa8);
  *(undefined4 *)(in_ECX + 0x130) = 0;
  if (iVar1 == 1) {
    if (*(int *)(in_ECX + 0xac) != 2) {
      FUN_1003d1c0();
      iVar1 = DAT_10206e78;
      local_8._0_1_ = 3;
      iVar9 = 0;
      if (0 < DAT_10206e78) {
        do {
          if ((iVar9 < DAT_10206e78) && (iVar2 = iVar9, puVar7 = DAT_10206e70, -1 < iVar9)) {
            for (; iVar2 != 0; iVar2 = iVar2 + -1) {
              puVar7 = (undefined4 *)*puVar7;
            }
          }
          else {
            puVar7 = (undefined4 *)0x0;
          }
          FUN_1003f820(puVar7 + 2);
          SendMessageW(*(HWND *)(in_ECX + 0xd0),0x143,0,local_28);
          SendMessageW(*(HWND *)(in_ECX + 0xd0),0x14e,*(WPARAM *)(in_ECX + 0x130),0);
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar1);
      }
      local_8._0_1_ = 1;
      puVar7 = (undefined4 *)(local_28 + -0x10);
      LOCK();
      piVar4 = (int *)(local_28 + -4);
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      local_34 = local_38;
      if (iVar1 == 1 || iVar1 + -1 < 0) {
        piVar4 = (int *)*puVar7;
LAB_100402b1:
        (**(code **)(*piVar4 + 4))(puVar7);
        local_34 = local_38;
      }
      goto LAB_100402b9;
    }
    piVar4 = (int *)FUN_10048e90();
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_100351a0(0x80004005);
    }
    puVar7 = (undefined4 *)(**(code **)(*piVar4 + 0xc))();
    iVar1 = DAT_10206ed4;
    local_8._0_1_ = 2;
    iVar9 = 0;
    if (0 < DAT_10206ed4) {
      do {
        if ((iVar9 < DAT_10206ed4) && (iVar2 = iVar9, puVar8 = DAT_10206ecc, -1 < iVar9)) {
          for (; iVar2 != 0; iVar2 = iVar2 + -1) {
            puVar8 = (undefined4 *)*puVar8;
          }
        }
        else {
          puVar8 = (undefined4 *)0x0;
        }
        FUN_100403e0(puVar8 + 2);
        SendMessageW(*(HWND *)(in_ECX + 0xd0),0x143,0,(LPARAM)(puVar7 + 4));
        SendMessageW(*(HWND *)(in_ECX + 0xd0),0x14e,*(WPARAM *)(in_ECX + 0x130),0);
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar1);
    }
    local_8._0_1_ = 1;
    LOCK();
    piVar4 = puVar7 + 3;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (0 < iVar1 + -1) goto LAB_100402d3;
    piVar4 = (int *)*puVar7;
  }
  else {
    if (iVar1 == 3) {
      FUN_10040480();
      iVar1 = DAT_10206f10;
      local_8._0_1_ = 4;
      iVar9 = 0;
      if (0 < DAT_10206f10) {
        do {
          if ((iVar9 < DAT_10206f10) && (iVar2 = iVar9, puVar7 = DAT_10206f08, -1 < iVar9)) {
            for (; iVar2 != 0; iVar2 = iVar2 + -1) {
              puVar7 = (undefined4 *)*puVar7;
            }
          }
          else {
            puVar7 = (undefined4 *)0x0;
          }
          FUN_10040570(puVar7 + 2);
          SendMessageW(*(HWND *)(in_ECX + 0xd0),0x143,0,local_28);
          SendMessageW(*(HWND *)(in_ECX + 0xd0),0x14e,*(WPARAM *)(in_ECX + 0x130),0);
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar1);
      }
      local_8._0_1_ = 1;
      LOCK();
      piVar4 = (int *)(local_28 + -4);
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 1 || iVar1 + -1 < 0) {
        (**(code **)(**(int **)(local_28 + -0x10) + 4))((undefined4 *)(local_28 + -0x10));
      }
    }
    else {
      if (iVar1 != 2) goto LAB_100402d3;
      FUN_10036030();
      iVar1 = DAT_10206ddc;
      local_8._0_1_ = 5;
      iVar9 = 0;
      if (0 < DAT_10206ddc) {
        do {
          if ((iVar9 < DAT_10206ddc) && (iVar2 = iVar9, puVar7 = DAT_10206dd4, -1 < iVar9)) {
            for (; iVar2 != 0; iVar2 = iVar2 + -1) {
              puVar7 = (undefined4 *)*puVar7;
            }
          }
          else {
            puVar7 = (undefined4 *)0x0;
          }
          FUN_10037240(puVar7 + 2);
          SendMessageW(*(HWND *)(in_ECX + 0xd0),0x143,0,local_28);
          SendMessageW(*(HWND *)(in_ECX + 0xd0),0x14e,*(WPARAM *)(in_ECX + 0x130),0);
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar1);
      }
      local_8._0_1_ = 1;
      LOCK();
      piVar4 = (int *)(local_28 + -4);
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 1 || iVar1 + -1 < 0) {
        (**(code **)(**(int **)(local_28 + -0x10) + 4))((undefined4 *)(local_28 + -0x10));
      }
      puVar7 = (undefined4 *)(local_34 + -0x10);
      LOCK();
      piVar4 = (int *)(local_34 + -4);
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      local_34 = local_38;
      if (iVar1 == 1 || iVar1 + -1 < 0) {
        piVar4 = (int *)*puVar7;
        goto LAB_100402b1;
      }
    }
LAB_100402b9:
    puVar7 = (undefined4 *)(local_34 + -0x10);
    LOCK();
    piVar4 = (int *)(local_34 + -4);
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (0 < iVar1 + -1) goto LAB_100402d3;
    piVar4 = (int *)*puVar7;
  }
  (**(code **)(*piVar4 + 4))(puVar7);
LAB_100402d3:
  local_8 = (uint)local_8._1_3_ << 8;
  LOCK();
  piVar4 = puVar6 + 3;
  iVar1 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar1 + -1 < 1) {
    (**(code **)(*(int *)*puVar6 + 4))(puVar6);
  }
  local_8 = 0xffffffff;
  LOCK();
  piVar4 = puVar5 + 3;
  iVar1 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar1 == 1 || iVar1 + -1 < 0) {
    (**(code **)(*(int *)*puVar5 + 4))(puVar5);
  }
  ExceptionList = local_10;
  return 1;
}

