// rea decompile_all
// name: FUN_10004bc0
// address: 0x10004bc0
// body: available
// range: 0x10004bc0-0x1000518e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10004c16 to 0x10002610 FUN_10002610 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10004c4b to 0x10002610 FUN_10002610 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10004c98 to 0x10002610 FUN_10002610 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10004bc0(LPVOID *param_1)

{
  wchar_t *pwVar1;
  LPVOID pvVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  HRESULT HVar7;
  int iVar8;
  LONG LVar9;
  undefined4 uVar10;
  int iVar11;
  ushort uVar12;
  int iStack_130;
  undefined1 uStack_129;
  int iStack_128;
  wchar_t *pwStack_124;
  LPVOID pvStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  undefined4 *puStack_110;
  int iStack_10c;
  LPVOID pvStack_108;
  uint uStack_104;
  int iStack_100;
  int *piStack_fc;
  uint uStack_f8;
  LPVOID *local_f4;
  CDialog aCStack_f0 [204];
  int iStack_24;
  CLSID CStack_20;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_10058802;
  local_c = ExceptionList;
  local_10 = DAT_10064168 ^ (uint)&iStack_130;
  uVar3 = DAT_10064168 ^ (uint)&stack0xfffffec0;
  ExceptionList = &local_c;
  local_f4 = param_1;
  piVar4 = (int *)FUN_10038f10();
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10002610((undefined4 *)0x80004005);
  }
  iStack_130 = (**(code **)(*piVar4 + 0xc))(uVar3);
  iStack_130 = iStack_130 + 0x10;
  iStack_4 = 0;
  piVar4 = (int *)FUN_10038f10();
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10002610((undefined4 *)0x80004005);
  }
  puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0xc))();
  pwStack_124 = (wchar_t *)(puVar5 + 4);
  iStack_4._0_1_ = 1;
  FUN_100040f0(&iStack_128,L"\\\\.\\Display");
  iStack_4._0_1_ = 2;
  uStack_129 = 0;
  piVar4 = (int *)FUN_10038f10();
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10002610((undefined4 *)0x80004005);
  }
  puVar6 = (undefined4 *)(**(code **)(*piVar4 + 0xc))();
  puStack_110 = puVar6 + 4;
  iStack_4 = CONCAT31(iStack_4._1_3_,3);
  FUN_10005980();
  CoInitialize((LPVOID)0x0);
  HVar7 = CLSIDFromProgID(L"IgfxExt.CUIExternal",&CStack_20);
  if (((HVar7 < 0) ||
      (HVar7 = CoCreateInstance(&CStack_20,(LPUNKNOWN)0x0,0x15,(IID *)&DAT_1005d418,param_1),
      HVar7 < 0)) || (*param_1 == (LPVOID)0x0)) {
    piVar4 = puVar6 + 3;
    iStack_4._0_1_ = 2;
    LOCK();
    iVar11 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar11 + -1 < 1) {
      (**(code **)(*(int *)*puVar6 + 4))(puVar6);
    }
    iStack_4._0_1_ = 1;
    piVar4 = (int *)(iStack_128 + -4);
    LOCK();
    iVar11 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar11 + -1 < 1) {
      (**(code **)(**(int **)(iStack_128 + -0x10) + 4))((undefined4 *)(iStack_128 + -0x10));
    }
    piVar4 = puVar5 + 3;
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    LOCK();
    iVar11 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar11 + -1 < 1) {
      (**(code **)(*(int *)*puVar5 + 4))(puVar5);
    }
    iStack_4 = 0xffffffff;
    piVar4 = (int *)(iStack_130 + -4);
    LOCK();
    iVar11 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar11 == 1 || iVar11 + -1 < 0) {
      (**(code **)(**(int **)(iStack_130 + -0x10) + 4))((undefined4 *)(iStack_130 + -0x10));
    }
    goto LAB_10005167;
  }
  *(undefined1 *)(param_1 + 3) = 0;
  iStack_118 = 1;
  do {
    FID_conflict_operator_(&iStack_130,&iStack_128);
    FUN_100023c0(&pwStack_124,L"%d");
    FUN_10003cb0(&iStack_130,pwStack_124,*(size_t *)(pwStack_124 + -6));
    iStack_11c = 0;
    do {
      iVar11 = iStack_11c;
      piVar4 = FUN_10004ad0(&piStack_fc);
      iStack_4._0_1_ = 4;
      if ((undefined4 *)*piVar4 == (undefined4 *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined4 *)*piVar4;
      }
      iVar8 = (**(code **)(*(int *)*param_1 + 0x30))
                        (*param_1,uVar10,iVar11,&pvStack_120,&iStack_100,&uStack_f8);
      piVar4 = piStack_fc;
      iStack_4 = CONCAT31(iStack_4._1_3_,3);
      if (piStack_fc != (int *)0x0) {
        LVar9 = InterlockedDecrement(piStack_fc + 2);
        if ((LVar9 == 0) && (piVar4 != (int *)0x0)) {
          if (*piVar4 != 0) {
            Ordinal_6(*piVar4);
          }
          if ((void *)piVar4[1] != (void *)0x0) {
            FUN_10038b07((void *)piVar4[1]);
          }
          FUN_10038b07(piVar4);
        }
        piStack_fc = (int *)0x0;
      }
      if ((iVar8 < 0) || ((uStack_f8 == 0 && (iStack_100 == 0)))) break;
      puVar5 = DAT_10065630;
      puVar6 = DAT_10065634;
      if (((uStack_f8 & 1) == 0) &&
         ((((iStack_100 == 3 || (iStack_100 == 7)) || (iStack_100 == 2)) ||
          ((iStack_100 == 1 || (iStack_100 == 5)))))) {
        if (DAT_100655e8 == 1) {
          *(undefined1 *)(param_1 + 3) = 1;
          param_1[1] = pvStack_120;
          goto LAB_10004f1d;
        }
        param_1[1] = pvStack_120;
        uVar12 = 0;
        do {
          iVar8 = FUN_100053b0((uint)(byte)(&DAT_1005d440)[(uint)uVar12 * 3],0x23,
                               (size_t)&uStack_129,1);
          if (iVar8 != 0) {
            FID_conflict_operator_(&puStack_110,&iStack_130);
            uVar3 = uStack_f8;
            iVar8 = iStack_100;
            pvVar2 = pvStack_120;
            pvStack_108 = pvStack_120;
            iStack_10c = iStack_100;
            uStack_104 = uStack_f8;
            iStack_114 = iVar11;
            puVar6 = FUN_10005b90(DAT_10065634);
            puVar6[2] = iStack_11c;
            FID_conflict_operator_(puVar6 + 3,&puStack_110);
            puVar6[4] = iVar8;
            puVar6[5] = pvVar2;
            puVar6[6] = uVar3;
            iVar11 = iStack_11c;
            param_1 = local_f4;
            puVar5 = puVar6;
            if (DAT_10065634 != (undefined4 *)0x0) {
              *DAT_10065634 = puVar6;
              puVar5 = DAT_10065630;
            }
            break;
          }
          uVar12 = uVar12 + 1;
          puVar5 = DAT_10065630;
          puVar6 = DAT_10065634;
        } while (uVar12 < 4);
      }
      DAT_10065634 = puVar6;
      DAT_10065630 = puVar5;
      iStack_11c = iVar11 + 1;
    } while (iStack_11c < 8);
    if (*(char *)(param_1 + 3) != '\0') goto LAB_1000501c;
    iStack_118 = iStack_118 + 1;
  } while ((ushort)iStack_118 < 0xb);
LAB_10004f1d:
  puVar5 = DAT_10065630;
  if (((*(char *)(param_1 + 3) == '\0') && (DAT_10065638 != 0)) && (DAT_100655e8 == 2)) {
    if (DAT_10065638 < 2) {
      iStack_114 = DAT_10065630[2];
    }
    else {
      if (DAT_100655e4 != 1) {
        FUN_10005ce0(aCStack_f0,1);
        iStack_4._0_1_ = 5;
        FUN_10039e07(aCStack_f0);
        if ((iStack_24 < DAT_10065638) && (puVar5 = DAT_10065630, -1 < iStack_24)) {
          for (; iStack_24 != 0; iStack_24 = iStack_24 + -1) {
            puVar5 = (undefined4 *)*puVar5;
          }
        }
        else {
          puVar5 = (undefined4 *)0x0;
        }
        iStack_114 = puVar5[2];
        FID_conflict_operator_(&puStack_110,puVar5 + 3);
        uStack_104 = puVar5[6];
        iStack_10c = puVar5[4];
        pvStack_108 = (LPVOID)puVar5[5];
        param_1[1] = pvStack_108;
        *(undefined1 *)(param_1 + 3) = 1;
        iStack_4 = CONCAT31(iStack_4._1_3_,3);
        FUN_10005d70(aCStack_f0);
        goto LAB_1000501c;
      }
      iStack_114 = DAT_10065630[2];
    }
    FID_conflict_operator_(&puStack_110,DAT_10065630 + 3);
    param_1[1] = (LPVOID)puVar5[5];
    *(undefined1 *)(param_1 + 3) = 1;
  }
LAB_1000501c:
  iStack_4._0_1_ = 2;
  piVar4 = puStack_110 + -1;
  LOCK();
  iVar11 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar11 == 1 || iVar11 + -1 < 0) {
    (**(code **)(*(int *)puStack_110[-4] + 4))(puStack_110 + -4);
  }
  iStack_4._0_1_ = 1;
  piVar4 = (int *)(iStack_128 + -4);
  LOCK();
  iVar11 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar11 + -1 < 1) {
    (**(code **)(**(int **)(iStack_128 + -0x10) + 4))((undefined4 *)(iStack_128 + -0x10));
  }
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  pwVar1 = pwStack_124 + -2;
  LOCK();
  iVar11 = *(int *)pwVar1;
  *(int *)pwVar1 = *(int *)pwVar1 + -1;
  UNLOCK();
  if (iVar11 + -1 < 1) {
    (**(code **)(**(int **)(pwStack_124 + -8) + 4))(pwStack_124 + -8);
  }
  iStack_4 = 0xffffffff;
  piVar4 = (int *)(iStack_130 + -4);
  LOCK();
  iVar11 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar11 == 1 || iVar11 + -1 < 0) {
    (**(code **)(**(int **)(iStack_130 + -0x10) + 4))((undefined4 *)(iStack_130 + -0x10));
  }
LAB_10005167:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&iStack_130);
  return;
}

