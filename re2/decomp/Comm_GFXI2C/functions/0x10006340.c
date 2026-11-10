// rea decompile_all
// name: FUN_10006340
// address: 0x10006340
// body: available
// range: 0x10006340-0x100064c8 inclusive
// range: 0x100064d0-0x100066f1 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100063c1 to 0x10002610 FUN_10002610 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10006340(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined3 extraout_var;
  ushort uVar8;
  undefined1 auStack_350 [3];
  undefined1 uStack_34d;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  uint uStack_340;
  undefined4 uStack_33c;
  undefined4 *puStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 *puStack_32c;
  uint uStack_328;
  undefined4 local_324;
  CDialog aCStack_320 [204];
  int iStack_254;
  undefined4 local_250;
  undefined1 local_24c [508];
  CHAR aCStack_50 [64];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_10058616;
  local_c = ExceptionList;
  local_10 = DAT_10064168 ^ (uint)auStack_350;
  uVar4 = DAT_10064168 ^ (uint)&stack0xfffffca0;
  ExceptionList = &local_c;
  local_324 = 0;
  local_250 = 0;
  _memset(local_24c,0,0x1fc);
  local_344 = 0;
  local_348 = 0;
  local_34c = 0;
  piVar5 = (int *)FUN_10038f10();
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10002610((undefined4 *)0x80004005);
  }
  puVar6 = (undefined4 *)(**(code **)(*piVar5 + 0xc))(uVar4);
  puStack_338 = puVar6 + 4;
  iStack_4 = 0;
  uStack_34d = 0;
  FUN_10006cc0();
  iVar7 = FUN_10006fa0();
  if (iVar7 == 0) {
    puVar6 = &local_250;
    uStack_328 = 0;
    puStack_32c = puVar6;
    do {
      uVar4 = uStack_328;
      iVar7 = FUN_10015510(uStack_328,puVar6);
      if (iVar7 == 0) {
        puStack_32c = puStack_32c + 1;
        iVar7 = FUN_10009940(*puVar6,&local_344,&local_324);
        if (((iVar7 == 0) && (iVar7 = FUN_10016410(*puVar6,&local_348), iVar7 == 0)) &&
           (iVar7 = FUN_10015bf0(*puVar6,aCStack_50), iVar7 == 0)) {
          if (DAT_100655e8 == 1) {
            param_1[1] = local_348;
            uVar1 = *(undefined4 *)(local_24c + uVar4 * 4 + -4);
            *param_1 = local_344;
            param_1[2] = uVar1;
            local_34c = 1;
            goto LAB_1000669b;
          }
          param_1[1] = local_348;
          uVar1 = *puStack_32c;
          *param_1 = local_344;
          param_1[2] = uVar1;
          uVar8 = 0;
          do {
            bVar3 = FUN_10006700(&uStack_34d);
            if (CONCAT31(extraout_var,bVar3) != 0) {
              FUN_10002170(&puStack_338,aCStack_50);
              uStack_330 = *puVar6;
              uStack_33c = local_348;
              uStack_334 = local_344;
              uStack_340 = uVar4;
              FUN_10006c70();
              uVar4 = uStack_328;
              break;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < 4);
        }
      }
      else if (iVar7 == -7) break;
      uStack_328 = uVar4 + 1;
      puVar6 = puVar6 + 1;
    } while (uStack_328 < 0x40);
    puVar6 = DAT_1006564c;
    if ((DAT_10065654 != 0) && (DAT_100655e8 == 2)) {
      if (DAT_10065654 < 2) {
        uStack_340 = DAT_1006564c[2];
        uStack_33c = DAT_1006564c[3];
        FID_conflict_operator_(&puStack_338,DAT_1006564c + 4);
        uVar1 = puVar6[5];
        uVar2 = puVar6[6];
        param_1[1] = uStack_33c;
        *param_1 = uVar1;
        param_1[2] = uVar2;
        local_34c = 1;
      }
      else if (DAT_100655e4 == 1) {
        uStack_33c = DAT_1006564c[3];
        uStack_340 = DAT_1006564c[2];
        FID_conflict_operator_(&puStack_338,DAT_1006564c + 4);
        uVar1 = puVar6[5];
        uVar2 = puVar6[6];
        param_1[1] = uStack_33c;
        *param_1 = uVar1;
        param_1[2] = uVar2;
        local_34c = 1;
      }
      else {
        FUN_10005ce0(aCStack_320,3);
        iStack_4._0_1_ = 1;
        FUN_10039e07(aCStack_320);
        if ((iStack_254 < DAT_10065654) && (puVar6 = DAT_1006564c, -1 < iStack_254)) {
          for (; iStack_254 != 0; iStack_254 = iStack_254 + -1) {
            puVar6 = (undefined4 *)*puVar6;
          }
        }
        else {
          puVar6 = (undefined4 *)0x0;
        }
        uStack_33c = puVar6[3];
        uStack_340 = puVar6[2];
        FID_conflict_operator_(&puStack_338,puVar6 + 4);
        uStack_334 = puVar6[5];
        uStack_330 = puVar6[6];
        param_1[1] = uStack_33c;
        *param_1 = uStack_334;
        param_1[2] = uStack_330;
        local_34c = 1;
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        FUN_10005d70(aCStack_320);
      }
    }
LAB_1000669b:
    iStack_4 = 0xffffffff;
    piVar5 = puStack_338 + -1;
    LOCK();
    iVar7 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar7 == 1 || iVar7 + -1 < 0) {
      (**(code **)(*(int *)puStack_338[-4] + 4))(puStack_338 + -4);
    }
  }
  else {
    iStack_4 = 0xffffffff;
    piVar5 = puVar6 + 3;
    LOCK();
    iVar7 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar7 == 1 || iVar7 + -1 < 0) {
      (**(code **)(*(int *)*puVar6 + 4))(puVar6);
    }
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)auStack_350);
  return;
}

