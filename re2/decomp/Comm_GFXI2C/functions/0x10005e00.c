// rea decompile_all
// name: FUN_10005e00
// address: 0x10005e00
// body: available
// range: 0x10005e00-0x10006292 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10005e4b to 0x10002610 FUN_10002610 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10005e79 to 0x10002610 FUN_10002610 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10005ed0 to 0x10002610 FUN_10002610 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000602c to 0x10002610 FUN_10002610 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_10005e00(CDialog *param_1)

{
  CStringData *pCVar1;
  void *pvVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  CStringData *pCVar7;
  int iVar8;
  undefined4 *puVar9;
  int iStack_44;
  int iStack_40;
  CStringData *pCStack_3c;
  CStringData *pCStack_38;
  int iStack_34;
  undefined4 uStack_30;
  CStringData *pCStack_2c;
  CStringData *pCStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_10058678;
  local_14 = ExceptionList;
  uVar3 = DAT_10064168 ^ (uint)&stack0xffffffa8;
  ExceptionList = &local_14;
  CDialog::OnInitDialog(param_1);
  piVar4 = (int *)FUN_10038f10();
  iVar8 = 0;
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10002610((undefined4 *)0x80004005);
  }
  iVar5 = (**(code **)(*piVar4 + 0xc))(uVar3);
  iVar5 = iVar5 + 0x10;
  iStack_c = 0;
  iStack_44 = iVar5;
  piVar4 = (int *)FUN_10038f10();
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10002610((undefined4 *)0x80004005);
  }
  iStack_34 = (**(code **)(*piVar4 + 0xc))();
  iStack_34 = iStack_34 + 0x10;
  iStack_c._0_1_ = 1;
  SendMessageW(*(HWND *)(param_1 + 0x98),0x14b,0,0);
  iVar6 = *(int *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0xcc) = 0;
  if (iVar6 == 1) {
    piVar4 = (int *)FUN_10038f10();
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10002610((undefined4 *)0x80004005);
    }
    iVar6 = (**(code **)(*piVar4 + 0xc))();
    pCStack_2c = (CStringData *)(iVar6 + 0x10);
    iStack_c._0_1_ = 2;
    iStack_40 = DAT_10065638;
    if (0 < DAT_10065638) {
      do {
        if ((iVar8 < DAT_10065638) && (iVar5 = iVar8, puVar9 = DAT_10065630, -1 < iVar8)) {
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar9 = (undefined4 *)*puVar9;
          }
        }
        else {
          puVar9 = (undefined4 *)0x0;
        }
        uStack_30 = puVar9[2];
        pvVar2 = (void *)puVar9[3];
        pCStack_3c = (CStringData *)((int)pvVar2 + -0x10);
        pCStack_38 = pCStack_2c + -0x10;
        if (pCStack_3c != pCStack_38) {
          if ((*(int *)(pCStack_2c + -4) < 0) || (*(int *)pCStack_3c != *(int *)pCStack_38)) {
            FUN_10002660(&pCStack_2c,pvVar2,*(int *)((int)pvVar2 + -0xc));
          }
          else {
            pCStack_3c = ATL::CSimpleStringT<wchar_t,0>::CloneData(pCStack_3c);
            pCVar7 = pCStack_38 + 0xc;
            LOCK();
            iVar5 = *(int *)pCVar7;
            *(int *)pCVar7 = *(int *)pCVar7 + -1;
            UNLOCK();
            if (iVar5 == 1 || iVar5 + -1 < 0) {
              (**(code **)(**(int **)pCStack_38 + 4))(pCStack_38);
            }
            pCStack_2c = pCStack_3c + 0x10;
          }
        }
        pCStack_28 = (CStringData *)puVar9[4];
        iStack_24 = puVar9[5];
        uStack_20 = puVar9[6];
        FUN_100023c0(&iStack_44,
                     L"Device Name:%s, Monitor Index:%d Monitor UID:%u, Device Type:%u, Device Status:0x%X"
                    );
        iVar5 = iStack_44;
        SendMessageW(*(HWND *)(param_1 + 0x98),0x143,0,iStack_44);
        SendMessageW(*(HWND *)(param_1 + 0x98),0x14e,*(WPARAM *)(param_1 + 0xcc),0);
        iVar8 = iVar8 + 1;
      } while (iVar8 < iStack_40);
    }
    iStack_c._0_1_ = 1;
    pCVar7 = pCStack_2c;
LAB_10006215:
    pCVar1 = pCVar7 + -4;
    LOCK();
    iVar8 = *(int *)pCVar1;
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    UNLOCK();
  }
  else {
    if (iVar6 != 3) {
      if (iVar6 != 2) goto LAB_10006231;
      FUN_10001670((int)&uStack_30);
      iStack_c._0_1_ = 4;
      iStack_40 = DAT_1006561c;
      if (0 < DAT_1006561c) {
        do {
          if ((iVar8 < DAT_1006561c) && (iVar5 = iVar8, puVar9 = DAT_10065614, -1 < iVar8)) {
            for (; iVar5 != 0; iVar5 = iVar5 + -1) {
              puVar9 = (undefined4 *)*puVar9;
            }
          }
          else {
            puVar9 = (undefined4 *)0x0;
          }
          uStack_30 = puVar9[2];
          pCStack_2c = (CStringData *)puVar9[3];
          FID_conflict_operator_(&pCStack_28,puVar9 + 4);
          FID_conflict_operator_(&iStack_24,puVar9 + 5);
          uStack_20 = puVar9[6];
          uStack_1c = puVar9[7];
          FUN_100023c0(&iStack_44,L"Monitor Name:%s, Adapter ID:%d, DisplayID:%d");
          iVar5 = iStack_44;
          SendMessageW(*(HWND *)(param_1 + 0x98),0x143,0,iStack_44);
          SendMessageW(*(HWND *)(param_1 + 0x98),0x14e,*(WPARAM *)(param_1 + 0xcc),0);
          iVar8 = iVar8 + 1;
        } while (iVar8 < iStack_40);
      }
      iStack_c._0_1_ = 1;
      piVar4 = (int *)(iStack_24 + -4);
      LOCK();
      iVar8 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      pCVar7 = pCStack_28;
      if (iVar8 + -1 < 1) {
        (**(code **)(**(int **)(iStack_24 + -0x10) + 4))((undefined4 *)(iStack_24 + -0x10));
        pCVar7 = pCStack_28;
      }
      goto LAB_10006215;
    }
    piVar4 = (int *)FUN_10038f10();
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10002610((undefined4 *)0x80004005);
    }
    iVar6 = (**(code **)(*piVar4 + 0xc))();
    pCStack_28 = (CStringData *)(iVar6 + 0x10);
    iStack_c._0_1_ = 3;
    iStack_40 = DAT_10065654;
    if (0 < DAT_10065654) {
      do {
        if ((iVar8 < DAT_10065654) && (iVar5 = iVar8, puVar9 = DAT_1006564c, -1 < iVar8)) {
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar9 = (undefined4 *)*puVar9;
          }
        }
        else {
          puVar9 = (undefined4 *)0x0;
        }
        uStack_30 = puVar9[2];
        pCStack_2c = (CStringData *)puVar9[3];
        FID_conflict_operator_(&pCStack_28,puVar9 + 4);
        iStack_24 = puVar9[5];
        uStack_20 = puVar9[6];
        FUN_100023c0(&iStack_44,L"Device Name:%s, Output ID:%u");
        iVar5 = iStack_44;
        SendMessageW(*(HWND *)(param_1 + 0x98),0x143,0,iStack_44);
        SendMessageW(*(HWND *)(param_1 + 0x98),0x14e,*(WPARAM *)(param_1 + 0xcc),0);
        iVar8 = iVar8 + 1;
      } while (iVar8 < iStack_40);
    }
    iStack_c._0_1_ = 1;
    pCVar7 = pCStack_28 + -4;
    LOCK();
    iVar8 = *(int *)pCVar7;
    *(int *)pCVar7 = *(int *)pCVar7 + -1;
    UNLOCK();
    pCVar7 = pCStack_28;
  }
  if (iVar8 + -1 < 1) {
    (**(code **)(**(int **)(pCVar7 + -0x10) + 4))(pCVar7 + -0x10);
  }
LAB_10006231:
  iStack_c = (uint)iStack_c._1_3_ << 8;
  piVar4 = (int *)(iStack_34 + -4);
  LOCK();
  iVar8 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar8 + -1 < 1) {
    (**(code **)(**(int **)(iStack_34 + -0x10) + 4))((undefined4 *)(iStack_34 + -0x10));
  }
  iStack_c = 0xffffffff;
  piVar4 = (int *)(iVar5 + -4);
  LOCK();
  iVar8 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar8 == 1 || iVar8 + -1 < 0) {
    (**(code **)(**(int **)(iVar5 + -0x10) + 4))((undefined4 *)(iVar5 + -0x10));
  }
  ExceptionList = local_14;
  return 1;
}

